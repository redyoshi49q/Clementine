/* This file is part of Clementine.

   Clementine is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   Clementine is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with Clementine.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef LIBRARY_H
#define LIBRARY_H

#include <QAbstractItemModel>
#include <QIcon>

#include "backgroundthread.h"
#include "librarybackend.h"
#include "librarywatcher.h"
#include "libraryquery.h"
#include "engine_fwd.h"
#include "song.h"
#include "libraryitem.h"
#include "simpletreemodel.h"

#include <boost/scoped_ptr.hpp>

class LibraryDirectoryModel;

class Library : public SimpleTreeModel<LibraryItem> {
  Q_OBJECT
  Q_ENUMS(GroupBy);

 public:
  Library(EngineBase* engine, QObject* parent = 0);
  ~Library();

  enum {
    Role_Type = Qt::UserRole + 1,
    Role_ContainerType,
    Role_SortText,
    Role_Key,
    Role_Artist,
  };

  // These values get saved in QSettings - don't change them
  enum GroupBy {
    GroupBy_None = 0,
    GroupBy_Artist = 1,
    GroupBy_Album = 2,
    GroupBy_YearAlbum = 3,
    GroupBy_Year = 4,
    GroupBy_Composer = 5,
    GroupBy_Genre = 6,
  };
  QMetaEnum GroupByEnum() const;

  struct Grouping {
    Grouping() : first(GroupBy_None), second(GroupBy_None), third(GroupBy_None) {}
    Grouping(GroupBy f, GroupBy s, GroupBy t) : first(f), second(s), third(t) {}

    GroupBy first;
    GroupBy second;
    GroupBy third;

    const GroupBy& operator [](int i) const;
    GroupBy& operator [](int i);
  };

  // Useful for tests.  The library takes ownership.
  void set_backend_factory(BackgroundThreadFactory<LibraryBackendInterface>* factory);
  void set_watcher_factory(BackgroundThreadFactory<LibraryWatcher>* factory);

  void Init();
  void StartThreads();

  LibraryDirectoryModel* GetDirectoryModel() const { return dir_model_; }
  boost::shared_ptr<LibraryBackendInterface> GetBackend() const { return backend_->Worker(); }

  // Get information about the library
  void GetChildSongs(LibraryItem* item, QList<QUrl>* urls, SongList* songs) const;
  SongList GetChildSongs(const QModelIndex& index) const;

  // QAbstractItemModel
  QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
  Qt::ItemFlags flags(const QModelIndex& index) const;
  QStringList mimeTypes() const;
  QMimeData* mimeData(const QModelIndexList& indexes) const;
  bool canFetchMore(const QModelIndex &parent) const;

 signals:
  void Error(const QString& message);
  void TotalSongCountUpdated(int count);
  void GroupingChanged(const Library::Grouping& g);

  void ScanStarted();
  void ScanFinished();

  void BackendReady(boost::shared_ptr<LibraryBackendInterface> backend);

 public slots:
  void SetFilterAge(int age);
  void SetFilterText(const QString& text);
  void SetGroupBy(const Library::Grouping& g);

 protected:
  void LazyPopulate(LibraryItem* item) { LazyPopulate(item, false); }
  void LazyPopulate(LibraryItem* item, bool signal);

 private slots:
  // From LibraryBackend
  void BackendInitialised();
  void SongsDiscovered(const SongList& songs);
  void SongsDeleted(const SongList& songs);
  void Reset();

  // From LibraryWatcher
  void WatcherInitialised();

 private:
  void Initialise();

  // Functions for working with queries and creating items.
  // When the model is reset or when a node is lazy-loaded the Library
  // constructs a database query to populate the items.  Filters are added
  // for each parent item, restricting the songs returned to a particular
  // album or artist for example.
  void InitQuery(GroupBy type, LibraryQuery* q);
  void FilterQuery(GroupBy type, LibraryItem* item,LibraryQuery* q);

  // Items can be created either from a query that's been run to populate a
  // node, or by a spontaneous SongsDiscovered emission from the backend.
  LibraryItem* ItemFromQuery(GroupBy type, bool signal, bool create_divider,
                             LibraryItem* parent, const LibraryQuery& q);
  LibraryItem* ItemFromSong(GroupBy type, bool signal, bool create_divider,
                            LibraryItem* parent, const Song& s);

  // The "Various Artists" node is an annoying special case.
  LibraryItem* CreateCompilationArtistNode(bool signal, LibraryItem* parent);

  // Helpers for ItemFromQuery and ItemFromSong
  LibraryItem* InitItem(GroupBy type, bool signal, LibraryItem* parent);
  void FinishItem(GroupBy type, bool signal, bool create_divider,
                  LibraryItem* parent, LibraryItem* item);

  // Functions for manipulating text
  QString TextOrUnknown(const QString& text) const;
  QString PrettyYearAlbum(int year, const QString& album) const;

  QString SortText(QString text) const;
  QString SortTextForArtist(QString artist) const;
  QString SortTextForYear(int year) const;

  QString DividerKey(GroupBy type, LibraryItem* item) const;
  QString DividerDisplayText(GroupBy type, const QString& key) const;

  // Helpers
  QVariant data(const LibraryItem* item, int role) const;
  bool CompareItems(const LibraryItem* a, const LibraryItem* b) const;

 private:
  EngineBase* engine_;
  boost::scoped_ptr<BackgroundThreadFactory<LibraryBackendInterface> > backend_factory_;
  boost::scoped_ptr<BackgroundThreadFactory<LibraryWatcher> > watcher_factory_;
  BackgroundThread<LibraryBackendInterface>* backend_;
  BackgroundThread<LibraryWatcher>* watcher_;
  LibraryDirectoryModel* dir_model_;

  int waiting_for_threads_;

  QueryOptions query_options_;
  Grouping group_by_;

  // Keyed on database ID
  QMap<int, LibraryItem*> song_nodes_;

  // Keyed on whatever the key is for that level - artist, album, year, etc.
  QMap<QString, LibraryItem*> container_nodes_[3];

  // Keyed on a letter, a year, a century, etc.
  QMap<QString, LibraryItem*> divider_nodes_;

  // Only applies if the first level is "artist"
  LibraryItem* compilation_artist_node_;

  QIcon artist_icon_;
  QIcon album_icon_;
  QIcon no_cover_icon_;
};

#endif // LIBRARY_H
