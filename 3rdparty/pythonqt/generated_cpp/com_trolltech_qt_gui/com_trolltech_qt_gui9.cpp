#include "com_trolltech_qt_gui9.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QTextBlock>
#include <QTextCursor>
#include <QTextDocumentFragment>
#include <QTextEdit>
#include <QTextFormat>
#include <QTextFrame>
#include <QTextLayout>
#include <QVariant>
#include <qaction.h>
#include <qbitmap.h>
#include <qbrush.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcalendarwidget.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdatetime.h>
#include <qdatetimeedit.h>
#include <qevent.h>
#include <qfont.h>
#include <qgraphicseffect.h>
#include <qgraphicsproxywidget.h>
#include <qicon.h>
#include <qimage.h>
#include <qinputcontext.h>
#include <qiodevice.h>
#include <qkeysequence.h>
#include <qlayout.h>
#include <qlineedit.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmargins.h>
#include <qmenu.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpainter.h>
#include <qpalette.h>
#include <qpen.h>
#include <qpoint.h>
#include <qprinter.h>
#include <qrect.h>
#include <qregexp.h>
#include <qregion.h>
#include <qscrollbar.h>
#include <qsize.h>
#include <qsizepolicy.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qstyleoption.h>
#include <qtextbrowser.h>
#include <qtextcodec.h>
#include <qtextcursor.h>
#include <qtextdocument.h>
#include <qtextdocumentfragment.h>
#include <qtextdocumentwriter.h>
#include <qtextedit.h>
#include <qtextformat.h>
#include <qtextlist.h>
#include <qtextobject.h>
#include <qtexttable.h>
#include <qtoolbar.h>
#include <qtoolbox.h>
#include <qtoolbutton.h>
#include <qurl.h>
#include <qvector.h>
#include <qwidget.h>

void PythonQtShell_QTextBlockGroup::blockFormatChanged(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockFormatChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBlockGroup::blockFormatChanged(block);
}
void PythonQtShell_QTextBlockGroup::blockInserted(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBlockGroup::blockInserted(block);
}
void PythonQtShell_QTextBlockGroup::blockRemoved(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBlockGroup::blockRemoved(block);
}
void PythonQtShell_QTextBlockGroup::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBlockGroup::childEvent(arg__1);
}
void PythonQtShell_QTextBlockGroup::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBlockGroup::customEvent(arg__1);
}
bool  PythonQtShell_QTextBlockGroup::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBlockGroup::event(arg__1);
}
bool  PythonQtShell_QTextBlockGroup::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBlockGroup::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextBlockGroup::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBlockGroup::timerEvent(arg__1);
}
void PythonQtWrapper_QTextBlockGroup::blockFormatChanged(QTextBlockGroup* theWrappedObject, const QTextBlock&  block)
{
  ( ((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->promoted_blockFormatChanged(block));
}

void PythonQtWrapper_QTextBlockGroup::blockInserted(QTextBlockGroup* theWrappedObject, const QTextBlock&  block)
{
  ( ((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->promoted_blockInserted(block));
}

void PythonQtWrapper_QTextBlockGroup::blockRemoved(QTextBlockGroup* theWrappedObject, const QTextBlock&  block)
{
  ( ((PythonQtPublicPromoter_QTextBlockGroup*)theWrappedObject)->promoted_blockRemoved(block));
}



QTextBlockUserData* PythonQtWrapper_QTextBlockUserData::new_QTextBlockUserData()
{ 
return new PythonQtShell_QTextBlockUserData(); }



void PythonQtShell_QTextBrowser::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::actionEvent(arg__1);
}
void PythonQtShell_QTextBrowser::backward()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "backward");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::backward();
}
bool  PythonQtShell_QTextBrowser::canInsertFromMimeData(const QMimeData*  source) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canInsertFromMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QMimeData*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&source};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canInsertFromMimeData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::canInsertFromMimeData(source);
}
void PythonQtShell_QTextBrowser::changeEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::changeEvent(e);
}
void PythonQtShell_QTextBrowser::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::childEvent(arg__1);
}
void PythonQtShell_QTextBrowser::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::closeEvent(arg__1);
}
void PythonQtShell_QTextBrowser::contextMenuEvent(QContextMenuEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::contextMenuEvent(e);
}
QMimeData*  PythonQtShell_QTextBrowser::createMimeDataFromSelection() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createMimeDataFromSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMimeData*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMimeData* returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createMimeDataFromSelection", methodInfo, result);
        } else {
          returnValue = *((QMimeData**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::createMimeDataFromSelection();
}
void PythonQtShell_QTextBrowser::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::customEvent(arg__1);
}
int  PythonQtShell_QTextBrowser::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::devType();
}
void PythonQtShell_QTextBrowser::dragEnterEvent(QDragEnterEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::dragEnterEvent(e);
}
void PythonQtShell_QTextBrowser::dragLeaveEvent(QDragLeaveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::dragLeaveEvent(e);
}
void PythonQtShell_QTextBrowser::dragMoveEvent(QDragMoveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::dragMoveEvent(e);
}
void PythonQtShell_QTextBrowser::dropEvent(QDropEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::dropEvent(e);
}
void PythonQtShell_QTextBrowser::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::enterEvent(arg__1);
}
bool  PythonQtShell_QTextBrowser::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::event(e);
}
bool  PythonQtShell_QTextBrowser::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextBrowser::focusInEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::focusInEvent(e);
}
bool  PythonQtShell_QTextBrowser::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::focusNextPrevChild(next);
}
void PythonQtShell_QTextBrowser::focusOutEvent(QFocusEvent*  ev)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::focusOutEvent(ev);
}
void PythonQtShell_QTextBrowser::forward()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "forward");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::forward();
}
int  PythonQtShell_QTextBrowser::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::heightForWidth(arg__1);
}
void PythonQtShell_QTextBrowser::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::hideEvent(arg__1);
}
void PythonQtShell_QTextBrowser::home()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "home");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::home();
}
void PythonQtShell_QTextBrowser::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTextBrowser::inputMethodQuery(Qt::InputMethodQuery  property) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&property};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::inputMethodQuery(property);
}
void PythonQtShell_QTextBrowser::insertFromMimeData(const QMimeData*  source)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertFromMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QMimeData*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&source};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::insertFromMimeData(source);
}
void PythonQtShell_QTextBrowser::keyPressEvent(QKeyEvent*  ev)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::keyPressEvent(ev);
}
void PythonQtShell_QTextBrowser::keyReleaseEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::keyReleaseEvent(e);
}
void PythonQtShell_QTextBrowser::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::languageChange();
}
void PythonQtShell_QTextBrowser::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::leaveEvent(arg__1);
}
QVariant  PythonQtShell_QTextBrowser::loadResource(int  type, const QUrl&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "loadResource");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&type, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("loadResource", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::loadResource(type, name);
}
int  PythonQtShell_QTextBrowser::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::metric(arg__1);
}
void PythonQtShell_QTextBrowser::mouseDoubleClickEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::mouseDoubleClickEvent(e);
}
void PythonQtShell_QTextBrowser::mouseMoveEvent(QMouseEvent*  ev)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::mouseMoveEvent(ev);
}
void PythonQtShell_QTextBrowser::mousePressEvent(QMouseEvent*  ev)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::mousePressEvent(ev);
}
void PythonQtShell_QTextBrowser::mouseReleaseEvent(QMouseEvent*  ev)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&ev};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::mouseReleaseEvent(ev);
}
void PythonQtShell_QTextBrowser::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTextBrowser::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::paintEngine();
}
void PythonQtShell_QTextBrowser::paintEvent(QPaintEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::paintEvent(e);
}
void PythonQtShell_QTextBrowser::reload()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "reload");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::reload();
}
void PythonQtShell_QTextBrowser::resizeEvent(QResizeEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::resizeEvent(e);
}
void PythonQtShell_QTextBrowser::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::scrollContentsBy(dx, dy);
}
void PythonQtShell_QTextBrowser::setSource(const QUrl&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "setSource");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::setSource(name);
}
void PythonQtShell_QTextBrowser::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::showEvent(arg__1);
}
void PythonQtShell_QTextBrowser::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::tabletEvent(arg__1);
}
void PythonQtShell_QTextBrowser::timerEvent(QTimerEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::timerEvent(e);
}
bool  PythonQtShell_QTextBrowser::viewportEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewportEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextBrowser::viewportEvent(arg__1);
}
void PythonQtShell_QTextBrowser::wheelEvent(QWheelEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextBrowser::wheelEvent(e);
}
QTextBrowser* PythonQtWrapper_QTextBrowser::new_QTextBrowser(QWidget*  parent)
{ 
return new PythonQtShell_QTextBrowser(parent); }

int  PythonQtWrapper_QTextBrowser::backwardHistoryCount(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->backwardHistoryCount());
}

void PythonQtWrapper_QTextBrowser::clearHistory(QTextBrowser* theWrappedObject)
{
  ( theWrappedObject->clearHistory());
}

bool  PythonQtWrapper_QTextBrowser::event(QTextBrowser* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_event(e));
}

bool  PythonQtWrapper_QTextBrowser::focusNextPrevChild(QTextBrowser* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QTextBrowser::focusOutEvent(QTextBrowser* theWrappedObject, QFocusEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_focusOutEvent(ev));
}

int  PythonQtWrapper_QTextBrowser::forwardHistoryCount(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->forwardHistoryCount());
}

QString  PythonQtWrapper_QTextBrowser::historyTitle(QTextBrowser* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->historyTitle(arg__1));
}

QUrl  PythonQtWrapper_QTextBrowser::historyUrl(QTextBrowser* theWrappedObject, int  arg__1) const
{
  return ( theWrappedObject->historyUrl(arg__1));
}

bool  PythonQtWrapper_QTextBrowser::isBackwardAvailable(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->isBackwardAvailable());
}

bool  PythonQtWrapper_QTextBrowser::isForwardAvailable(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->isForwardAvailable());
}

void PythonQtWrapper_QTextBrowser::keyPressEvent(QTextBrowser* theWrappedObject, QKeyEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_keyPressEvent(ev));
}

QVariant  PythonQtWrapper_QTextBrowser::loadResource(QTextBrowser* theWrappedObject, int  type, const QUrl&  name)
{
  return ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_loadResource(type, name));
}

void PythonQtWrapper_QTextBrowser::mouseMoveEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_mouseMoveEvent(ev));
}

void PythonQtWrapper_QTextBrowser::mousePressEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_mousePressEvent(ev));
}

void PythonQtWrapper_QTextBrowser::mouseReleaseEvent(QTextBrowser* theWrappedObject, QMouseEvent*  ev)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_mouseReleaseEvent(ev));
}

bool  PythonQtWrapper_QTextBrowser::openExternalLinks(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->openExternalLinks());
}

bool  PythonQtWrapper_QTextBrowser::openLinks(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->openLinks());
}

void PythonQtWrapper_QTextBrowser::paintEvent(QTextBrowser* theWrappedObject, QPaintEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextBrowser*)theWrappedObject)->promoted_paintEvent(e));
}

QStringList  PythonQtWrapper_QTextBrowser::searchPaths(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->searchPaths());
}

void PythonQtWrapper_QTextBrowser::setOpenExternalLinks(QTextBrowser* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenExternalLinks(open));
}

void PythonQtWrapper_QTextBrowser::setOpenLinks(QTextBrowser* theWrappedObject, bool  open)
{
  ( theWrappedObject->setOpenLinks(open));
}

void PythonQtWrapper_QTextBrowser::setSearchPaths(QTextBrowser* theWrappedObject, const QStringList&  paths)
{
  ( theWrappedObject->setSearchPaths(paths));
}

QUrl  PythonQtWrapper_QTextBrowser::source(QTextBrowser* theWrappedObject) const
{
  return ( theWrappedObject->source());
}



QTextCharFormat* PythonQtWrapper_QTextCharFormat::new_QTextCharFormat()
{ 
return new PythonQtShell_QTextCharFormat(); }

QString  PythonQtWrapper_QTextCharFormat::anchorHref(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->anchorHref());
}

QStringList  PythonQtWrapper_QTextCharFormat::anchorNames(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->anchorNames());
}

QFont  PythonQtWrapper_QTextCharFormat::font(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QFont::Capitalization  PythonQtWrapper_QTextCharFormat::fontCapitalization(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontCapitalization());
}

QString  PythonQtWrapper_QTextCharFormat::fontFamily(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontFamily());
}

bool  PythonQtWrapper_QTextCharFormat::fontFixedPitch(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontFixedPitch());
}

bool  PythonQtWrapper_QTextCharFormat::fontItalic(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontItalic());
}

bool  PythonQtWrapper_QTextCharFormat::fontKerning(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontKerning());
}

qreal  PythonQtWrapper_QTextCharFormat::fontLetterSpacing(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontLetterSpacing());
}

bool  PythonQtWrapper_QTextCharFormat::fontOverline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontOverline());
}

qreal  PythonQtWrapper_QTextCharFormat::fontPointSize(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontPointSize());
}

bool  PythonQtWrapper_QTextCharFormat::fontStrikeOut(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStrikeOut());
}

QFont::StyleHint  PythonQtWrapper_QTextCharFormat::fontStyleHint(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStyleHint());
}

QFont::StyleStrategy  PythonQtWrapper_QTextCharFormat::fontStyleStrategy(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontStyleStrategy());
}

bool  PythonQtWrapper_QTextCharFormat::fontUnderline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontUnderline());
}

int  PythonQtWrapper_QTextCharFormat::fontWeight(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontWeight());
}

qreal  PythonQtWrapper_QTextCharFormat::fontWordSpacing(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->fontWordSpacing());
}

bool  PythonQtWrapper_QTextCharFormat::isAnchor(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->isAnchor());
}

bool  PythonQtWrapper_QTextCharFormat::isValid(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTextCharFormat::setAnchor(QTextCharFormat* theWrappedObject, bool  anchor)
{
  ( theWrappedObject->setAnchor(anchor));
}

void PythonQtWrapper_QTextCharFormat::setAnchorHref(QTextCharFormat* theWrappedObject, const QString&  value)
{
  ( theWrappedObject->setAnchorHref(value));
}

void PythonQtWrapper_QTextCharFormat::setAnchorNames(QTextCharFormat* theWrappedObject, const QStringList&  names)
{
  ( theWrappedObject->setAnchorNames(names));
}

void PythonQtWrapper_QTextCharFormat::setFont(QTextCharFormat* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setFont(font));
}

void PythonQtWrapper_QTextCharFormat::setFontCapitalization(QTextCharFormat* theWrappedObject, QFont::Capitalization  capitalization)
{
  ( theWrappedObject->setFontCapitalization(capitalization));
}

void PythonQtWrapper_QTextCharFormat::setFontFamily(QTextCharFormat* theWrappedObject, const QString&  family)
{
  ( theWrappedObject->setFontFamily(family));
}

void PythonQtWrapper_QTextCharFormat::setFontFixedPitch(QTextCharFormat* theWrappedObject, bool  fixedPitch)
{
  ( theWrappedObject->setFontFixedPitch(fixedPitch));
}

void PythonQtWrapper_QTextCharFormat::setFontItalic(QTextCharFormat* theWrappedObject, bool  italic)
{
  ( theWrappedObject->setFontItalic(italic));
}

void PythonQtWrapper_QTextCharFormat::setFontKerning(QTextCharFormat* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setFontKerning(enable));
}

void PythonQtWrapper_QTextCharFormat::setFontLetterSpacing(QTextCharFormat* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setFontLetterSpacing(spacing));
}

void PythonQtWrapper_QTextCharFormat::setFontOverline(QTextCharFormat* theWrappedObject, bool  overline)
{
  ( theWrappedObject->setFontOverline(overline));
}

void PythonQtWrapper_QTextCharFormat::setFontPointSize(QTextCharFormat* theWrappedObject, qreal  size)
{
  ( theWrappedObject->setFontPointSize(size));
}

void PythonQtWrapper_QTextCharFormat::setFontStrikeOut(QTextCharFormat* theWrappedObject, bool  strikeOut)
{
  ( theWrappedObject->setFontStrikeOut(strikeOut));
}

void PythonQtWrapper_QTextCharFormat::setFontStyleHint(QTextCharFormat* theWrappedObject, QFont::StyleHint  hint, QFont::StyleStrategy  strategy)
{
  ( theWrappedObject->setFontStyleHint(hint, strategy));
}

void PythonQtWrapper_QTextCharFormat::setFontStyleStrategy(QTextCharFormat* theWrappedObject, QFont::StyleStrategy  strategy)
{
  ( theWrappedObject->setFontStyleStrategy(strategy));
}

void PythonQtWrapper_QTextCharFormat::setFontUnderline(QTextCharFormat* theWrappedObject, bool  underline)
{
  ( theWrappedObject->setFontUnderline(underline));
}

void PythonQtWrapper_QTextCharFormat::setFontWeight(QTextCharFormat* theWrappedObject, int  weight)
{
  ( theWrappedObject->setFontWeight(weight));
}

void PythonQtWrapper_QTextCharFormat::setFontWordSpacing(QTextCharFormat* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setFontWordSpacing(spacing));
}

void PythonQtWrapper_QTextCharFormat::setTableCellColumnSpan(QTextCharFormat* theWrappedObject, int  tableCellColumnSpan)
{
  ( theWrappedObject->setTableCellColumnSpan(tableCellColumnSpan));
}

void PythonQtWrapper_QTextCharFormat::setTableCellRowSpan(QTextCharFormat* theWrappedObject, int  tableCellRowSpan)
{
  ( theWrappedObject->setTableCellRowSpan(tableCellRowSpan));
}

void PythonQtWrapper_QTextCharFormat::setTextOutline(QTextCharFormat* theWrappedObject, const QPen&  pen)
{
  ( theWrappedObject->setTextOutline(pen));
}

void PythonQtWrapper_QTextCharFormat::setToolTip(QTextCharFormat* theWrappedObject, const QString&  tip)
{
  ( theWrappedObject->setToolTip(tip));
}

void PythonQtWrapper_QTextCharFormat::setUnderlineColor(QTextCharFormat* theWrappedObject, const QColor&  color)
{
  ( theWrappedObject->setUnderlineColor(color));
}

void PythonQtWrapper_QTextCharFormat::setUnderlineStyle(QTextCharFormat* theWrappedObject, QTextCharFormat::UnderlineStyle  style)
{
  ( theWrappedObject->setUnderlineStyle(style));
}

void PythonQtWrapper_QTextCharFormat::setVerticalAlignment(QTextCharFormat* theWrappedObject, QTextCharFormat::VerticalAlignment  alignment)
{
  ( theWrappedObject->setVerticalAlignment(alignment));
}

int  PythonQtWrapper_QTextCharFormat::tableCellColumnSpan(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->tableCellColumnSpan());
}

int  PythonQtWrapper_QTextCharFormat::tableCellRowSpan(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->tableCellRowSpan());
}

QPen  PythonQtWrapper_QTextCharFormat::textOutline(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->textOutline());
}

QString  PythonQtWrapper_QTextCharFormat::toolTip(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->toolTip());
}

QColor  PythonQtWrapper_QTextCharFormat::underlineColor(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->underlineColor());
}

QTextCharFormat::UnderlineStyle  PythonQtWrapper_QTextCharFormat::underlineStyle(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->underlineStyle());
}

QTextCharFormat::VerticalAlignment  PythonQtWrapper_QTextCharFormat::verticalAlignment(QTextCharFormat* theWrappedObject) const
{
  return ( theWrappedObject->verticalAlignment());
}



QList<QByteArray >  PythonQtShell_QTextCodecPlugin::aliases() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "aliases");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QByteArray >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QByteArray > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("aliases", methodInfo, result);
        } else {
          returnValue = *((QList<QByteArray >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QList<QByteArray >();
}
void PythonQtShell_QTextCodecPlugin::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextCodecPlugin::childEvent(arg__1);
}
QTextCodec*  PythonQtShell_QTextCodecPlugin::createForMib(int  mib)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createForMib");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QTextCodec*" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QTextCodec* returnValue = 0;
    void* args[2] = {NULL, (void*)&mib};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createForMib", methodInfo, result);
        } else {
          returnValue = *((QTextCodec**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return 0;
}
QTextCodec*  PythonQtShell_QTextCodecPlugin::createForName(const QByteArray&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createForName");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QTextCodec*" , "const QByteArray&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QTextCodec* returnValue = 0;
    void* args[2] = {NULL, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createForName", methodInfo, result);
        } else {
          returnValue = *((QTextCodec**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return 0;
}
void PythonQtShell_QTextCodecPlugin::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextCodecPlugin::customEvent(arg__1);
}
bool  PythonQtShell_QTextCodecPlugin::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextCodecPlugin::event(arg__1);
}
bool  PythonQtShell_QTextCodecPlugin::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextCodecPlugin::eventFilter(arg__1, arg__2);
}
QList<int >  PythonQtShell_QTextCodecPlugin::mibEnums() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mibEnums");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<int >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<int > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("mibEnums", methodInfo, result);
        } else {
          returnValue = *((QList<int >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QList<int >();
}
QList<QByteArray >  PythonQtShell_QTextCodecPlugin::names() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "names");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QList<QByteArray >"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QList<QByteArray > returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("names", methodInfo, result);
        } else {
          returnValue = *((QList<QByteArray >*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QList<QByteArray >();
}
void PythonQtShell_QTextCodecPlugin::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextCodecPlugin::timerEvent(arg__1);
}
QTextCodecPlugin* PythonQtWrapper_QTextCodecPlugin::new_QTextCodecPlugin(QObject*  parent)
{ 
return new PythonQtShell_QTextCodecPlugin(parent); }



QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor()
{ 
return new QTextCursor(); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(QTextDocument*  document)
{ 
return new QTextCursor(document); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(QTextFrame*  frame)
{ 
return new QTextCursor(frame); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(const QTextBlock&  block)
{ 
return new QTextCursor(block); }

QTextCursor* PythonQtWrapper_QTextCursor::new_QTextCursor(const QTextCursor&  cursor)
{ 
return new QTextCursor(cursor); }

int  PythonQtWrapper_QTextCursor::anchor(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->anchor());
}

bool  PythonQtWrapper_QTextCursor::atBlockEnd(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atBlockEnd());
}

bool  PythonQtWrapper_QTextCursor::atBlockStart(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atBlockStart());
}

bool  PythonQtWrapper_QTextCursor::atEnd(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atEnd());
}

bool  PythonQtWrapper_QTextCursor::atStart(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->atStart());
}

void PythonQtWrapper_QTextCursor::beginEditBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->beginEditBlock());
}

QTextBlock  PythonQtWrapper_QTextCursor::block(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->block());
}

QTextCharFormat  PythonQtWrapper_QTextCursor::blockCharFormat(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->blockCharFormat());
}

QTextBlockFormat  PythonQtWrapper_QTextCursor::blockFormat(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->blockFormat());
}

int  PythonQtWrapper_QTextCursor::blockNumber(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->blockNumber());
}

QTextCharFormat  PythonQtWrapper_QTextCursor::charFormat(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->charFormat());
}

void PythonQtWrapper_QTextCursor::clearSelection(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->clearSelection());
}

int  PythonQtWrapper_QTextCursor::columnNumber(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->columnNumber());
}

QTextList*  PythonQtWrapper_QTextCursor::createList(QTextCursor* theWrappedObject, QTextListFormat::Style  style)
{
  return ( theWrappedObject->createList(style));
}

QTextList*  PythonQtWrapper_QTextCursor::createList(QTextCursor* theWrappedObject, const QTextListFormat&  format)
{
  return ( theWrappedObject->createList(format));
}

QTextFrame*  PythonQtWrapper_QTextCursor::currentFrame(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->currentFrame());
}

QTextList*  PythonQtWrapper_QTextCursor::currentList(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->currentList());
}

QTextTable*  PythonQtWrapper_QTextCursor::currentTable(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->currentTable());
}

void PythonQtWrapper_QTextCursor::deleteChar(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->deleteChar());
}

void PythonQtWrapper_QTextCursor::deletePreviousChar(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->deletePreviousChar());
}

QTextDocument*  PythonQtWrapper_QTextCursor::document(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

void PythonQtWrapper_QTextCursor::endEditBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->endEditBlock());
}

bool  PythonQtWrapper_QTextCursor::hasComplexSelection(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->hasComplexSelection());
}

bool  PythonQtWrapper_QTextCursor::hasSelection(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->hasSelection());
}

void PythonQtWrapper_QTextCursor::insertBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->insertBlock());
}

void PythonQtWrapper_QTextCursor::insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format)
{
  ( theWrappedObject->insertBlock(format));
}

void PythonQtWrapper_QTextCursor::insertBlock(QTextCursor* theWrappedObject, const QTextBlockFormat&  format, const QTextCharFormat&  charFormat)
{
  ( theWrappedObject->insertBlock(format, charFormat));
}

void PythonQtWrapper_QTextCursor::insertFragment(QTextCursor* theWrappedObject, const QTextDocumentFragment&  fragment)
{
  ( theWrappedObject->insertFragment(fragment));
}

QTextFrame*  PythonQtWrapper_QTextCursor::insertFrame(QTextCursor* theWrappedObject, const QTextFrameFormat&  format)
{
  return ( theWrappedObject->insertFrame(format));
}

void PythonQtWrapper_QTextCursor::insertHtml(QTextCursor* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->insertHtml(html));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QImage&  image, const QString&  name)
{
  ( theWrappedObject->insertImage(image, name));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->insertImage(name));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format)
{
  ( theWrappedObject->insertImage(format));
}

void PythonQtWrapper_QTextCursor::insertImage(QTextCursor* theWrappedObject, const QTextImageFormat&  format, QTextFrameFormat::Position  alignment)
{
  ( theWrappedObject->insertImage(format, alignment));
}

QTextList*  PythonQtWrapper_QTextCursor::insertList(QTextCursor* theWrappedObject, QTextListFormat::Style  style)
{
  return ( theWrappedObject->insertList(style));
}

QTextList*  PythonQtWrapper_QTextCursor::insertList(QTextCursor* theWrappedObject, const QTextListFormat&  format)
{
  return ( theWrappedObject->insertList(format));
}

QTextTable*  PythonQtWrapper_QTextCursor::insertTable(QTextCursor* theWrappedObject, int  rows, int  cols)
{
  return ( theWrappedObject->insertTable(rows, cols));
}

QTextTable*  PythonQtWrapper_QTextCursor::insertTable(QTextCursor* theWrappedObject, int  rows, int  cols, const QTextTableFormat&  format)
{
  return ( theWrappedObject->insertTable(rows, cols, format));
}

void PythonQtWrapper_QTextCursor::insertText(QTextCursor* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->insertText(text));
}

void PythonQtWrapper_QTextCursor::insertText(QTextCursor* theWrappedObject, const QString&  text, const QTextCharFormat&  format)
{
  ( theWrappedObject->insertText(text, format));
}

bool  PythonQtWrapper_QTextCursor::isCopyOf(QTextCursor* theWrappedObject, const QTextCursor&  other) const
{
  return ( theWrappedObject->isCopyOf(other));
}

bool  PythonQtWrapper_QTextCursor::isNull(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QTextCursor::joinPreviousEditBlock(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->joinPreviousEditBlock());
}

void PythonQtWrapper_QTextCursor::mergeBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeBlockCharFormat(modifier));
}

void PythonQtWrapper_QTextCursor::mergeBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  modifier)
{
  ( theWrappedObject->mergeBlockFormat(modifier));
}

void PythonQtWrapper_QTextCursor::mergeCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeCharFormat(modifier));
}

bool  PythonQtWrapper_QTextCursor::movePosition(QTextCursor* theWrappedObject, QTextCursor::MoveOperation  op, QTextCursor::MoveMode  arg__2, int  n)
{
  return ( theWrappedObject->movePosition(op, arg__2, n));
}

bool  PythonQtWrapper_QTextCursor::__ne__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)!= rhs);
}

bool  PythonQtWrapper_QTextCursor::__lt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)< rhs);
}

bool  PythonQtWrapper_QTextCursor::__le__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)<= rhs);
}

bool  PythonQtWrapper_QTextCursor::__eq__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)== rhs);
}

bool  PythonQtWrapper_QTextCursor::__gt__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)> rhs);
}

bool  PythonQtWrapper_QTextCursor::__ge__(QTextCursor* theWrappedObject, const QTextCursor&  rhs) const
{
  return ( (*theWrappedObject)>= rhs);
}

int  PythonQtWrapper_QTextCursor::position(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

void PythonQtWrapper_QTextCursor::removeSelectedText(QTextCursor* theWrappedObject)
{
  ( theWrappedObject->removeSelectedText());
}

void PythonQtWrapper_QTextCursor::select(QTextCursor* theWrappedObject, QTextCursor::SelectionType  selection)
{
  ( theWrappedObject->select(selection));
}

void PythonQtWrapper_QTextCursor::selectedTableCells(QTextCursor* theWrappedObject, int*  firstRow, int*  numRows, int*  firstColumn, int*  numColumns) const
{
  ( theWrappedObject->selectedTableCells(firstRow, numRows, firstColumn, numColumns));
}

QString  PythonQtWrapper_QTextCursor::selectedText(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selectedText());
}

QTextDocumentFragment  PythonQtWrapper_QTextCursor::selection(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selection());
}

int  PythonQtWrapper_QTextCursor::selectionEnd(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selectionEnd());
}

int  PythonQtWrapper_QTextCursor::selectionStart(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->selectionStart());
}

void PythonQtWrapper_QTextCursor::setBlockCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setBlockCharFormat(format));
}

void PythonQtWrapper_QTextCursor::setBlockFormat(QTextCursor* theWrappedObject, const QTextBlockFormat&  format)
{
  ( theWrappedObject->setBlockFormat(format));
}

void PythonQtWrapper_QTextCursor::setCharFormat(QTextCursor* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setCharFormat(format));
}

void PythonQtWrapper_QTextCursor::setPosition(QTextCursor* theWrappedObject, int  pos, QTextCursor::MoveMode  mode)
{
  ( theWrappedObject->setPosition(pos, mode));
}

void PythonQtWrapper_QTextCursor::setVisualNavigation(QTextCursor* theWrappedObject, bool  b)
{
  ( theWrappedObject->setVisualNavigation(b));
}

bool  PythonQtWrapper_QTextCursor::visualNavigation(QTextCursor* theWrappedObject) const
{
  return ( theWrappedObject->visualNavigation());
}



void PythonQtShell_QTextDocument::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextDocument::childEvent(arg__1);
}
void PythonQtShell_QTextDocument::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextDocument::clear();
}
QTextObject*  PythonQtShell_QTextDocument::createObject(const QTextFormat&  f)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createObject");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QTextObject*" , "const QTextFormat&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QTextObject* returnValue = 0;
    void* args[2] = {NULL, (void*)&f};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createObject", methodInfo, result);
        } else {
          returnValue = *((QTextObject**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextDocument::createObject(f);
}
void PythonQtShell_QTextDocument::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextDocument::customEvent(arg__1);
}
bool  PythonQtShell_QTextDocument::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextDocument::event(arg__1);
}
bool  PythonQtShell_QTextDocument::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextDocument::eventFilter(arg__1, arg__2);
}
QVariant  PythonQtShell_QTextDocument::loadResource(int  type, const QUrl&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "loadResource");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&type, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("loadResource", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextDocument::loadResource(type, name);
}
void PythonQtShell_QTextDocument::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextDocument::timerEvent(arg__1);
}
QTextDocument* PythonQtWrapper_QTextDocument::new_QTextDocument(QObject*  parent)
{ 
return new PythonQtShell_QTextDocument(parent); }

QTextDocument* PythonQtWrapper_QTextDocument::new_QTextDocument(const QString&  text, QObject*  parent)
{ 
return new PythonQtShell_QTextDocument(text, parent); }

void PythonQtWrapper_QTextDocument::addResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name, const QVariant&  resource)
{
  ( theWrappedObject->addResource(type, name, resource));
}

void PythonQtWrapper_QTextDocument::adjustSize(QTextDocument* theWrappedObject)
{
  ( theWrappedObject->adjustSize());
}

QVector<QTextFormat >  PythonQtWrapper_QTextDocument::allFormats(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->allFormats());
}

int  PythonQtWrapper_QTextDocument::availableRedoSteps(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->availableRedoSteps());
}

int  PythonQtWrapper_QTextDocument::availableUndoSteps(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->availableUndoSteps());
}

QTextBlock  PythonQtWrapper_QTextDocument::begin(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

int  PythonQtWrapper_QTextDocument::blockCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->blockCount());
}

QChar  PythonQtWrapper_QTextDocument::characterAt(QTextDocument* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->characterAt(pos));
}

int  PythonQtWrapper_QTextDocument::characterCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->characterCount());
}

void PythonQtWrapper_QTextDocument::clear(QTextDocument* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->promoted_clear());
}

QTextDocument*  PythonQtWrapper_QTextDocument::clone(QTextDocument* theWrappedObject, QObject*  parent) const
{
  return ( theWrappedObject->clone(parent));
}

QTextObject*  PythonQtWrapper_QTextDocument::createObject(QTextDocument* theWrappedObject, const QTextFormat&  f)
{
  return ( ((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->promoted_createObject(f));
}

QFont  PythonQtWrapper_QTextDocument::defaultFont(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->defaultFont());
}

QString  PythonQtWrapper_QTextDocument::defaultStyleSheet(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->defaultStyleSheet());
}

QTextOption  PythonQtWrapper_QTextDocument::defaultTextOption(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->defaultTextOption());
}

QAbstractTextDocumentLayout*  PythonQtWrapper_QTextDocument::documentLayout(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->documentLayout());
}

qreal  PythonQtWrapper_QTextDocument::documentMargin(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->documentMargin());
}

void PythonQtWrapper_QTextDocument::drawContents(QTextDocument* theWrappedObject, QPainter*  painter, const QRectF&  rect)
{
  ( theWrappedObject->drawContents(painter, rect));
}

QTextBlock  PythonQtWrapper_QTextDocument::end(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QRegExp&  expr, const QTextCursor&  from, QTextDocument::FindFlags  options) const
{
  return ( theWrappedObject->find(expr, from, options));
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QRegExp&  expr, int  from, QTextDocument::FindFlags  options) const
{
  return ( theWrappedObject->find(expr, from, options));
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QString&  subString, const QTextCursor&  from, QTextDocument::FindFlags  options) const
{
  return ( theWrappedObject->find(subString, from, options));
}

QTextCursor  PythonQtWrapper_QTextDocument::find(QTextDocument* theWrappedObject, const QString&  subString, int  from, QTextDocument::FindFlags  options) const
{
  return ( theWrappedObject->find(subString, from, options));
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlock(QTextDocument* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->findBlock(pos));
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlockByLineNumber(QTextDocument* theWrappedObject, int  blockNumber) const
{
  return ( theWrappedObject->findBlockByLineNumber(blockNumber));
}

QTextBlock  PythonQtWrapper_QTextDocument::findBlockByNumber(QTextDocument* theWrappedObject, int  blockNumber) const
{
  return ( theWrappedObject->findBlockByNumber(blockNumber));
}

QTextBlock  PythonQtWrapper_QTextDocument::firstBlock(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->firstBlock());
}

QTextFrame*  PythonQtWrapper_QTextDocument::frameAt(QTextDocument* theWrappedObject, int  pos) const
{
  return ( theWrappedObject->frameAt(pos));
}

qreal  PythonQtWrapper_QTextDocument::idealWidth(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->idealWidth());
}

qreal  PythonQtWrapper_QTextDocument::indentWidth(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->indentWidth());
}

bool  PythonQtWrapper_QTextDocument::isEmpty(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

bool  PythonQtWrapper_QTextDocument::isModified(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isModified());
}

bool  PythonQtWrapper_QTextDocument::isRedoAvailable(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isRedoAvailable());
}

bool  PythonQtWrapper_QTextDocument::isUndoAvailable(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isUndoAvailable());
}

bool  PythonQtWrapper_QTextDocument::isUndoRedoEnabled(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->isUndoRedoEnabled());
}

QTextBlock  PythonQtWrapper_QTextDocument::lastBlock(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->lastBlock());
}

int  PythonQtWrapper_QTextDocument::lineCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->lineCount());
}

QVariant  PythonQtWrapper_QTextDocument::loadResource(QTextDocument* theWrappedObject, int  type, const QUrl&  name)
{
  return ( ((PythonQtPublicPromoter_QTextDocument*)theWrappedObject)->promoted_loadResource(type, name));
}

void PythonQtWrapper_QTextDocument::markContentsDirty(QTextDocument* theWrappedObject, int  from, int  length)
{
  ( theWrappedObject->markContentsDirty(from, length));
}

int  PythonQtWrapper_QTextDocument::maximumBlockCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->maximumBlockCount());
}

QString  PythonQtWrapper_QTextDocument::metaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info) const
{
  return ( theWrappedObject->metaInformation(info));
}

QTextObject*  PythonQtWrapper_QTextDocument::object(QTextDocument* theWrappedObject, int  objectIndex) const
{
  return ( theWrappedObject->object(objectIndex));
}

QTextObject*  PythonQtWrapper_QTextDocument::objectForFormat(QTextDocument* theWrappedObject, const QTextFormat&  arg__1) const
{
  return ( theWrappedObject->objectForFormat(arg__1));
}

int  PythonQtWrapper_QTextDocument::pageCount(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->pageCount());
}

QSizeF  PythonQtWrapper_QTextDocument::pageSize(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->pageSize());
}

void PythonQtWrapper_QTextDocument::print(QTextDocument* theWrappedObject, QPrinter*  printer) const
{
  ( theWrappedObject->print(printer));
}

void PythonQtWrapper_QTextDocument::redo(QTextDocument* theWrappedObject, QTextCursor*  cursor)
{
  ( theWrappedObject->redo(cursor));
}

QVariant  PythonQtWrapper_QTextDocument::resource(QTextDocument* theWrappedObject, int  type, const QUrl&  name) const
{
  return ( theWrappedObject->resource(type, name));
}

int  PythonQtWrapper_QTextDocument::revision(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->revision());
}

QTextFrame*  PythonQtWrapper_QTextDocument::rootFrame(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->rootFrame());
}

void PythonQtWrapper_QTextDocument::setDefaultFont(QTextDocument* theWrappedObject, const QFont&  font)
{
  ( theWrappedObject->setDefaultFont(font));
}

void PythonQtWrapper_QTextDocument::setDefaultStyleSheet(QTextDocument* theWrappedObject, const QString&  sheet)
{
  ( theWrappedObject->setDefaultStyleSheet(sheet));
}

void PythonQtWrapper_QTextDocument::setDefaultTextOption(QTextDocument* theWrappedObject, const QTextOption&  option)
{
  ( theWrappedObject->setDefaultTextOption(option));
}

void PythonQtWrapper_QTextDocument::setDocumentLayout(QTextDocument* theWrappedObject, QAbstractTextDocumentLayout*  layout)
{
  ( theWrappedObject->setDocumentLayout(layout));
}

void PythonQtWrapper_QTextDocument::setDocumentMargin(QTextDocument* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setDocumentMargin(margin));
}

void PythonQtWrapper_QTextDocument::setHtml(QTextDocument* theWrappedObject, const QString&  html)
{
  ( theWrappedObject->setHtml(html));
}

void PythonQtWrapper_QTextDocument::setIndentWidth(QTextDocument* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setIndentWidth(width));
}

void PythonQtWrapper_QTextDocument::setMaximumBlockCount(QTextDocument* theWrappedObject, int  maximum)
{
  ( theWrappedObject->setMaximumBlockCount(maximum));
}

void PythonQtWrapper_QTextDocument::setMetaInformation(QTextDocument* theWrappedObject, QTextDocument::MetaInformation  info, const QString&  arg__2)
{
  ( theWrappedObject->setMetaInformation(info, arg__2));
}

void PythonQtWrapper_QTextDocument::setPageSize(QTextDocument* theWrappedObject, const QSizeF&  size)
{
  ( theWrappedObject->setPageSize(size));
}

void PythonQtWrapper_QTextDocument::setPlainText(QTextDocument* theWrappedObject, const QString&  text)
{
  ( theWrappedObject->setPlainText(text));
}

void PythonQtWrapper_QTextDocument::setTextWidth(QTextDocument* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setTextWidth(width));
}

void PythonQtWrapper_QTextDocument::setUndoRedoEnabled(QTextDocument* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setUndoRedoEnabled(enable));
}

void PythonQtWrapper_QTextDocument::setUseDesignMetrics(QTextDocument* theWrappedObject, bool  b)
{
  ( theWrappedObject->setUseDesignMetrics(b));
}

QSizeF  PythonQtWrapper_QTextDocument::size(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

qreal  PythonQtWrapper_QTextDocument::textWidth(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->textWidth());
}

QString  PythonQtWrapper_QTextDocument::toHtml(QTextDocument* theWrappedObject, const QByteArray&  encoding) const
{
  return ( theWrappedObject->toHtml(encoding));
}

QString  PythonQtWrapper_QTextDocument::toPlainText(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

void PythonQtWrapper_QTextDocument::undo(QTextDocument* theWrappedObject, QTextCursor*  cursor)
{
  ( theWrappedObject->undo(cursor));
}

bool  PythonQtWrapper_QTextDocument::useDesignMetrics(QTextDocument* theWrappedObject) const
{
  return ( theWrappedObject->useDesignMetrics());
}



QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment()
{ 
return new QTextDocumentFragment(); }

QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment(const QTextCursor&  range)
{ 
return new QTextDocumentFragment(range); }

QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment(const QTextDocument*  document)
{ 
return new QTextDocumentFragment(document); }

QTextDocumentFragment* PythonQtWrapper_QTextDocumentFragment::new_QTextDocumentFragment(const QTextDocumentFragment&  rhs)
{ 
return new QTextDocumentFragment(rhs); }

QTextDocumentFragment  PythonQtWrapper_QTextDocumentFragment::static_QTextDocumentFragment_fromHtml(const QString&  html)
{
  return (QTextDocumentFragment::fromHtml(html));
}

QTextDocumentFragment  PythonQtWrapper_QTextDocumentFragment::static_QTextDocumentFragment_fromHtml(const QString&  html, const QTextDocument*  resourceProvider)
{
  return (QTextDocumentFragment::fromHtml(html, resourceProvider));
}

QTextDocumentFragment  PythonQtWrapper_QTextDocumentFragment::static_QTextDocumentFragment_fromPlainText(const QString&  plainText)
{
  return (QTextDocumentFragment::fromPlainText(plainText));
}

bool  PythonQtWrapper_QTextDocumentFragment::isEmpty(QTextDocumentFragment* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QString  PythonQtWrapper_QTextDocumentFragment::toHtml(QTextDocumentFragment* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QTextDocumentFragment::toHtml(QTextDocumentFragment* theWrappedObject, const QByteArray&  encoding) const
{
  return ( theWrappedObject->toHtml(encoding));
}

QString  PythonQtWrapper_QTextDocumentFragment::toPlainText(QTextDocumentFragment* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}



QTextDocumentWriter* PythonQtWrapper_QTextDocumentWriter::new_QTextDocumentWriter()
{ 
return new QTextDocumentWriter(); }

QTextDocumentWriter* PythonQtWrapper_QTextDocumentWriter::new_QTextDocumentWriter(QIODevice*  device, const QByteArray&  format)
{ 
return new QTextDocumentWriter(device, format); }

QTextDocumentWriter* PythonQtWrapper_QTextDocumentWriter::new_QTextDocumentWriter(const QString&  fileName, const QByteArray&  format)
{ 
return new QTextDocumentWriter(fileName, format); }

QTextCodec*  PythonQtWrapper_QTextDocumentWriter::codec(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->codec());
}

QIODevice*  PythonQtWrapper_QTextDocumentWriter::device(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->device());
}

QString  PythonQtWrapper_QTextDocumentWriter::fileName(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->fileName());
}

QByteArray  PythonQtWrapper_QTextDocumentWriter::format(QTextDocumentWriter* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

void PythonQtWrapper_QTextDocumentWriter::setCodec(QTextDocumentWriter* theWrappedObject, QTextCodec*  codec)
{
  ( theWrappedObject->setCodec(codec));
}

void PythonQtWrapper_QTextDocumentWriter::setDevice(QTextDocumentWriter* theWrappedObject, QIODevice*  device)
{
  ( theWrappedObject->setDevice(device));
}

void PythonQtWrapper_QTextDocumentWriter::setFileName(QTextDocumentWriter* theWrappedObject, const QString&  fileName)
{
  ( theWrappedObject->setFileName(fileName));
}

void PythonQtWrapper_QTextDocumentWriter::setFormat(QTextDocumentWriter* theWrappedObject, const QByteArray&  format)
{
  ( theWrappedObject->setFormat(format));
}

QList<QByteArray >  PythonQtWrapper_QTextDocumentWriter::static_QTextDocumentWriter_supportedDocumentFormats()
{
  return (QTextDocumentWriter::supportedDocumentFormats());
}

bool  PythonQtWrapper_QTextDocumentWriter::write(QTextDocumentWriter* theWrappedObject, const QTextDocument*  document)
{
  return ( theWrappedObject->write(document));
}

bool  PythonQtWrapper_QTextDocumentWriter::write(QTextDocumentWriter* theWrappedObject, const QTextDocumentFragment&  fragment)
{
  return ( theWrappedObject->write(fragment));
}



void PythonQtShell_QTextEdit::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::actionEvent(arg__1);
}
bool  PythonQtShell_QTextEdit::canInsertFromMimeData(const QMimeData*  source) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "canInsertFromMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QMimeData*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&source};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("canInsertFromMimeData", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::canInsertFromMimeData(source);
}
void PythonQtShell_QTextEdit::changeEvent(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::changeEvent(e);
}
void PythonQtShell_QTextEdit::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::childEvent(arg__1);
}
void PythonQtShell_QTextEdit::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::closeEvent(arg__1);
}
void PythonQtShell_QTextEdit::contextMenuEvent(QContextMenuEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::contextMenuEvent(e);
}
QMimeData*  PythonQtShell_QTextEdit::createMimeDataFromSelection() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "createMimeDataFromSelection");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QMimeData*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QMimeData* returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("createMimeDataFromSelection", methodInfo, result);
        } else {
          returnValue = *((QMimeData**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::createMimeDataFromSelection();
}
void PythonQtShell_QTextEdit::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::customEvent(arg__1);
}
int  PythonQtShell_QTextEdit::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::devType();
}
void PythonQtShell_QTextEdit::dragEnterEvent(QDragEnterEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::dragEnterEvent(e);
}
void PythonQtShell_QTextEdit::dragLeaveEvent(QDragLeaveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::dragLeaveEvent(e);
}
void PythonQtShell_QTextEdit::dragMoveEvent(QDragMoveEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::dragMoveEvent(e);
}
void PythonQtShell_QTextEdit::dropEvent(QDropEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::dropEvent(e);
}
void PythonQtShell_QTextEdit::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QTextEdit::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::event(e);
}
bool  PythonQtShell_QTextEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextEdit::focusInEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::focusInEvent(e);
}
bool  PythonQtShell_QTextEdit::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::focusNextPrevChild(next);
}
void PythonQtShell_QTextEdit::focusOutEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::focusOutEvent(e);
}
int  PythonQtShell_QTextEdit::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::heightForWidth(arg__1);
}
void PythonQtShell_QTextEdit::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::hideEvent(arg__1);
}
void PythonQtShell_QTextEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTextEdit::inputMethodQuery(Qt::InputMethodQuery  property) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&property};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::inputMethodQuery(property);
}
void PythonQtShell_QTextEdit::insertFromMimeData(const QMimeData*  source)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "insertFromMimeData");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QMimeData*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&source};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::insertFromMimeData(source);
}
void PythonQtShell_QTextEdit::keyPressEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::keyPressEvent(e);
}
void PythonQtShell_QTextEdit::keyReleaseEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::keyReleaseEvent(e);
}
void PythonQtShell_QTextEdit::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::languageChange();
}
void PythonQtShell_QTextEdit::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::leaveEvent(arg__1);
}
QVariant  PythonQtShell_QTextEdit::loadResource(int  type, const QUrl&  name)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "loadResource");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "int" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QVariant returnValue;
    void* args[3] = {NULL, (void*)&type, (void*)&name};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("loadResource", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::loadResource(type, name);
}
int  PythonQtShell_QTextEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::metric(arg__1);
}
void PythonQtShell_QTextEdit::mouseDoubleClickEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::mouseDoubleClickEvent(e);
}
void PythonQtShell_QTextEdit::mouseMoveEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::mouseMoveEvent(e);
}
void PythonQtShell_QTextEdit::mousePressEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::mousePressEvent(e);
}
void PythonQtShell_QTextEdit::mouseReleaseEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::mouseReleaseEvent(e);
}
void PythonQtShell_QTextEdit::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTextEdit::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::paintEngine();
}
void PythonQtShell_QTextEdit::paintEvent(QPaintEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::paintEvent(e);
}
void PythonQtShell_QTextEdit::resizeEvent(QResizeEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::resizeEvent(e);
}
void PythonQtShell_QTextEdit::scrollContentsBy(int  dx, int  dy)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scrollContentsBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&dx, (void*)&dy};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::scrollContentsBy(dx, dy);
}
void PythonQtShell_QTextEdit::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::showEvent(arg__1);
}
void PythonQtShell_QTextEdit::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::tabletEvent(arg__1);
}
void PythonQtShell_QTextEdit::timerEvent(QTimerEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::timerEvent(e);
}
bool  PythonQtShell_QTextEdit::viewportEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "viewportEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("viewportEvent", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextEdit::viewportEvent(arg__1);
}
void PythonQtShell_QTextEdit::wheelEvent(QWheelEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextEdit::wheelEvent(e);
}
QTextEdit* PythonQtWrapper_QTextEdit::new_QTextEdit(QWidget*  parent)
{ 
return new PythonQtShell_QTextEdit(parent); }

QTextEdit* PythonQtWrapper_QTextEdit::new_QTextEdit(const QString&  text, QWidget*  parent)
{ 
return new PythonQtShell_QTextEdit(text, parent); }

bool  PythonQtWrapper_QTextEdit::acceptRichText(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->acceptRichText());
}

Qt::Alignment  PythonQtWrapper_QTextEdit::alignment(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

QString  PythonQtWrapper_QTextEdit::anchorAt(QTextEdit* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->anchorAt(pos));
}

QTextEdit::AutoFormatting  PythonQtWrapper_QTextEdit::autoFormatting(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->autoFormatting());
}

bool  PythonQtWrapper_QTextEdit::canInsertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source) const
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_canInsertFromMimeData(source));
}

bool  PythonQtWrapper_QTextEdit::canPaste(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->canPaste());
}

void PythonQtWrapper_QTextEdit::changeEvent(QTextEdit* theWrappedObject, QEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_changeEvent(e));
}

void PythonQtWrapper_QTextEdit::contextMenuEvent(QTextEdit* theWrappedObject, QContextMenuEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_contextMenuEvent(e));
}

QMimeData*  PythonQtWrapper_QTextEdit::createMimeDataFromSelection(QTextEdit* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_createMimeDataFromSelection());
}

QMenu*  PythonQtWrapper_QTextEdit::createStandardContextMenu(QTextEdit* theWrappedObject)
{
  return ( theWrappedObject->createStandardContextMenu());
}

QMenu*  PythonQtWrapper_QTextEdit::createStandardContextMenu(QTextEdit* theWrappedObject, const QPoint&  position)
{
  return ( theWrappedObject->createStandardContextMenu(position));
}

QTextCharFormat  PythonQtWrapper_QTextEdit::currentCharFormat(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->currentCharFormat());
}

QFont  PythonQtWrapper_QTextEdit::currentFont(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->currentFont());
}

QTextCursor  PythonQtWrapper_QTextEdit::cursorForPosition(QTextEdit* theWrappedObject, const QPoint&  pos) const
{
  return ( theWrappedObject->cursorForPosition(pos));
}

QRect  PythonQtWrapper_QTextEdit::cursorRect(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorRect());
}

QRect  PythonQtWrapper_QTextEdit::cursorRect(QTextEdit* theWrappedObject, const QTextCursor&  cursor) const
{
  return ( theWrappedObject->cursorRect(cursor));
}

int  PythonQtWrapper_QTextEdit::cursorWidth(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->cursorWidth());
}

QTextDocument*  PythonQtWrapper_QTextEdit::document(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QString  PythonQtWrapper_QTextEdit::documentTitle(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->documentTitle());
}

void PythonQtWrapper_QTextEdit::dragEnterEvent(QTextEdit* theWrappedObject, QDragEnterEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dragEnterEvent(e));
}

void PythonQtWrapper_QTextEdit::dragLeaveEvent(QTextEdit* theWrappedObject, QDragLeaveEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dragLeaveEvent(e));
}

void PythonQtWrapper_QTextEdit::dragMoveEvent(QTextEdit* theWrappedObject, QDragMoveEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dragMoveEvent(e));
}

void PythonQtWrapper_QTextEdit::dropEvent(QTextEdit* theWrappedObject, QDropEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_dropEvent(e));
}

void PythonQtWrapper_QTextEdit::ensureCursorVisible(QTextEdit* theWrappedObject)
{
  ( theWrappedObject->ensureCursorVisible());
}

bool  PythonQtWrapper_QTextEdit::event(QTextEdit* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_event(e));
}

QList<QTextEdit::ExtraSelection >  PythonQtWrapper_QTextEdit::extraSelections(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->extraSelections());
}

bool  PythonQtWrapper_QTextEdit::find(QTextEdit* theWrappedObject, const QString&  exp, QTextDocument::FindFlags  options)
{
  return ( theWrappedObject->find(exp, options));
}

void PythonQtWrapper_QTextEdit::focusInEvent(QTextEdit* theWrappedObject, QFocusEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_focusInEvent(e));
}

bool  PythonQtWrapper_QTextEdit::focusNextPrevChild(QTextEdit* theWrappedObject, bool  next)
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_focusNextPrevChild(next));
}

void PythonQtWrapper_QTextEdit::focusOutEvent(QTextEdit* theWrappedObject, QFocusEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_focusOutEvent(e));
}

QString  PythonQtWrapper_QTextEdit::fontFamily(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontFamily());
}

bool  PythonQtWrapper_QTextEdit::fontItalic(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontItalic());
}

qreal  PythonQtWrapper_QTextEdit::fontPointSize(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontPointSize());
}

bool  PythonQtWrapper_QTextEdit::fontUnderline(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontUnderline());
}

int  PythonQtWrapper_QTextEdit::fontWeight(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->fontWeight());
}

void PythonQtWrapper_QTextEdit::inputMethodEvent(QTextEdit* theWrappedObject, QInputMethodEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_inputMethodEvent(arg__1));
}

QVariant  PythonQtWrapper_QTextEdit::inputMethodQuery(QTextEdit* theWrappedObject, Qt::InputMethodQuery  property) const
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_inputMethodQuery(property));
}

void PythonQtWrapper_QTextEdit::insertFromMimeData(QTextEdit* theWrappedObject, const QMimeData*  source)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_insertFromMimeData(source));
}

bool  PythonQtWrapper_QTextEdit::isReadOnly(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->isReadOnly());
}

bool  PythonQtWrapper_QTextEdit::isUndoRedoEnabled(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->isUndoRedoEnabled());
}

void PythonQtWrapper_QTextEdit::keyPressEvent(QTextEdit* theWrappedObject, QKeyEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_keyPressEvent(e));
}

void PythonQtWrapper_QTextEdit::keyReleaseEvent(QTextEdit* theWrappedObject, QKeyEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_keyReleaseEvent(e));
}

int  PythonQtWrapper_QTextEdit::lineWrapColumnOrWidth(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->lineWrapColumnOrWidth());
}

QTextEdit::LineWrapMode  PythonQtWrapper_QTextEdit::lineWrapMode(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->lineWrapMode());
}

QVariant  PythonQtWrapper_QTextEdit::loadResource(QTextEdit* theWrappedObject, int  type, const QUrl&  name)
{
  return ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_loadResource(type, name));
}

void PythonQtWrapper_QTextEdit::mergeCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  modifier)
{
  ( theWrappedObject->mergeCurrentCharFormat(modifier));
}

void PythonQtWrapper_QTextEdit::mouseDoubleClickEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mouseDoubleClickEvent(e));
}

void PythonQtWrapper_QTextEdit::mouseMoveEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mouseMoveEvent(e));
}

void PythonQtWrapper_QTextEdit::mousePressEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mousePressEvent(e));
}

void PythonQtWrapper_QTextEdit::mouseReleaseEvent(QTextEdit* theWrappedObject, QMouseEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_mouseReleaseEvent(e));
}

void PythonQtWrapper_QTextEdit::moveCursor(QTextEdit* theWrappedObject, QTextCursor::MoveOperation  operation, QTextCursor::MoveMode  mode)
{
  ( theWrappedObject->moveCursor(operation, mode));
}

bool  PythonQtWrapper_QTextEdit::overwriteMode(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->overwriteMode());
}

void PythonQtWrapper_QTextEdit::paintEvent(QTextEdit* theWrappedObject, QPaintEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_paintEvent(e));
}

void PythonQtWrapper_QTextEdit::print(QTextEdit* theWrappedObject, QPrinter*  printer) const
{
  ( theWrappedObject->print(printer));
}

void PythonQtWrapper_QTextEdit::resizeEvent(QTextEdit* theWrappedObject, QResizeEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_resizeEvent(e));
}

void PythonQtWrapper_QTextEdit::scrollContentsBy(QTextEdit* theWrappedObject, int  dx, int  dy)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_scrollContentsBy(dx, dy));
}

void PythonQtWrapper_QTextEdit::setAcceptRichText(QTextEdit* theWrappedObject, bool  accept)
{
  ( theWrappedObject->setAcceptRichText(accept));
}

void PythonQtWrapper_QTextEdit::setAutoFormatting(QTextEdit* theWrappedObject, QTextEdit::AutoFormatting  features)
{
  ( theWrappedObject->setAutoFormatting(features));
}

void PythonQtWrapper_QTextEdit::setCurrentCharFormat(QTextEdit* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setCurrentCharFormat(format));
}

void PythonQtWrapper_QTextEdit::setCursorWidth(QTextEdit* theWrappedObject, int  width)
{
  ( theWrappedObject->setCursorWidth(width));
}

void PythonQtWrapper_QTextEdit::setDocument(QTextEdit* theWrappedObject, QTextDocument*  document)
{
  ( theWrappedObject->setDocument(document));
}

void PythonQtWrapper_QTextEdit::setDocumentTitle(QTextEdit* theWrappedObject, const QString&  title)
{
  ( theWrappedObject->setDocumentTitle(title));
}

void PythonQtWrapper_QTextEdit::setExtraSelections(QTextEdit* theWrappedObject, const QList<QTextEdit::ExtraSelection >&  selections)
{
  ( theWrappedObject->setExtraSelections(selections));
}

void PythonQtWrapper_QTextEdit::setLineWrapColumnOrWidth(QTextEdit* theWrappedObject, int  w)
{
  ( theWrappedObject->setLineWrapColumnOrWidth(w));
}

void PythonQtWrapper_QTextEdit::setLineWrapMode(QTextEdit* theWrappedObject, QTextEdit::LineWrapMode  mode)
{
  ( theWrappedObject->setLineWrapMode(mode));
}

void PythonQtWrapper_QTextEdit::setOverwriteMode(QTextEdit* theWrappedObject, bool  overwrite)
{
  ( theWrappedObject->setOverwriteMode(overwrite));
}

void PythonQtWrapper_QTextEdit::setReadOnly(QTextEdit* theWrappedObject, bool  ro)
{
  ( theWrappedObject->setReadOnly(ro));
}

void PythonQtWrapper_QTextEdit::setTabChangesFocus(QTextEdit* theWrappedObject, bool  b)
{
  ( theWrappedObject->setTabChangesFocus(b));
}

void PythonQtWrapper_QTextEdit::setTabStopWidth(QTextEdit* theWrappedObject, int  width)
{
  ( theWrappedObject->setTabStopWidth(width));
}

void PythonQtWrapper_QTextEdit::setTextCursor(QTextEdit* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->setTextCursor(cursor));
}

void PythonQtWrapper_QTextEdit::setTextInteractionFlags(QTextEdit* theWrappedObject, Qt::TextInteractionFlags  flags)
{
  ( theWrappedObject->setTextInteractionFlags(flags));
}

void PythonQtWrapper_QTextEdit::setUndoRedoEnabled(QTextEdit* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setUndoRedoEnabled(enable));
}

void PythonQtWrapper_QTextEdit::setWordWrapMode(QTextEdit* theWrappedObject, QTextOption::WrapMode  policy)
{
  ( theWrappedObject->setWordWrapMode(policy));
}

void PythonQtWrapper_QTextEdit::showEvent(QTextEdit* theWrappedObject, QShowEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_showEvent(arg__1));
}

bool  PythonQtWrapper_QTextEdit::tabChangesFocus(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->tabChangesFocus());
}

int  PythonQtWrapper_QTextEdit::tabStopWidth(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->tabStopWidth());
}

QColor  PythonQtWrapper_QTextEdit::textBackgroundColor(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textBackgroundColor());
}

QColor  PythonQtWrapper_QTextEdit::textColor(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textColor());
}

QTextCursor  PythonQtWrapper_QTextEdit::textCursor(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textCursor());
}

Qt::TextInteractionFlags  PythonQtWrapper_QTextEdit::textInteractionFlags(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->textInteractionFlags());
}

void PythonQtWrapper_QTextEdit::timerEvent(QTextEdit* theWrappedObject, QTimerEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_timerEvent(e));
}

QString  PythonQtWrapper_QTextEdit::toHtml(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->toHtml());
}

QString  PythonQtWrapper_QTextEdit::toPlainText(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->toPlainText());
}

void PythonQtWrapper_QTextEdit::wheelEvent(QTextEdit* theWrappedObject, QWheelEvent*  e)
{
  ( ((PythonQtPublicPromoter_QTextEdit*)theWrappedObject)->promoted_wheelEvent(e));
}

QTextOption::WrapMode  PythonQtWrapper_QTextEdit::wordWrapMode(QTextEdit* theWrappedObject) const
{
  return ( theWrappedObject->wordWrapMode());
}



QTextFragment* PythonQtWrapper_QTextFragment::new_QTextFragment()
{ 
return new QTextFragment(); }

QTextFragment* PythonQtWrapper_QTextFragment::new_QTextFragment(const QTextFragment&  o)
{ 
return new QTextFragment(o); }

QTextCharFormat  PythonQtWrapper_QTextFragment::charFormat(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->charFormat());
}

int  PythonQtWrapper_QTextFragment::charFormatIndex(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->charFormatIndex());
}

bool  PythonQtWrapper_QTextFragment::contains(QTextFragment* theWrappedObject, int  position) const
{
  return ( theWrappedObject->contains(position));
}

bool  PythonQtWrapper_QTextFragment::isValid(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QTextFragment::length(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

bool  PythonQtWrapper_QTextFragment::__ne__(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
  return ( (*theWrappedObject)!= o);
}

bool  PythonQtWrapper_QTextFragment::__lt__(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
  return ( (*theWrappedObject)< o);
}

bool  PythonQtWrapper_QTextFragment::__eq__(QTextFragment* theWrappedObject, const QTextFragment&  o) const
{
  return ( (*theWrappedObject)== o);
}

int  PythonQtWrapper_QTextFragment::position(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QString  PythonQtWrapper_QTextFragment::text(QTextFragment* theWrappedObject) const
{
  return ( theWrappedObject->text());
}



void PythonQtShell_QTextFrame::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextFrame::childEvent(arg__1);
}
void PythonQtShell_QTextFrame::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextFrame::customEvent(arg__1);
}
bool  PythonQtShell_QTextFrame::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextFrame::event(arg__1);
}
bool  PythonQtShell_QTextFrame::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextFrame::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextFrame::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextFrame::timerEvent(arg__1);
}
QTextFrame* PythonQtWrapper_QTextFrame::new_QTextFrame(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextFrame(doc); }

QTextFrame::iterator  PythonQtWrapper_QTextFrame::begin(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

QList<QTextFrame* >  PythonQtWrapper_QTextFrame::childFrames(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->childFrames());
}

QTextFrame::iterator  PythonQtWrapper_QTextFrame::end(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QTextCursor  PythonQtWrapper_QTextFrame::firstCursorPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->firstCursorPosition());
}

int  PythonQtWrapper_QTextFrame::firstPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->firstPosition());
}

QTextFrameFormat  PythonQtWrapper_QTextFrame::frameFormat(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->frameFormat());
}

QTextCursor  PythonQtWrapper_QTextFrame::lastCursorPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->lastCursorPosition());
}

int  PythonQtWrapper_QTextFrame::lastPosition(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->lastPosition());
}

QTextFrame*  PythonQtWrapper_QTextFrame::parentFrame(QTextFrame* theWrappedObject) const
{
  return ( theWrappedObject->parentFrame());
}

void PythonQtWrapper_QTextFrame::setFrameFormat(QTextFrame* theWrappedObject, const QTextFrameFormat&  format)
{
  ( theWrappedObject->setFrameFormat(format));
}



QTextFrameFormat* PythonQtWrapper_QTextFrameFormat::new_QTextFrameFormat()
{ 
return new PythonQtShell_QTextFrameFormat(); }

qreal  PythonQtWrapper_QTextFrameFormat::border(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->border());
}

QBrush  PythonQtWrapper_QTextFrameFormat::borderBrush(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderBrush());
}

QTextFrameFormat::BorderStyle  PythonQtWrapper_QTextFrameFormat::borderStyle(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->borderStyle());
}

qreal  PythonQtWrapper_QTextFrameFormat::bottomMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomMargin());
}

QTextLength  PythonQtWrapper_QTextFrameFormat::height(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextFrameFormat::isValid(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextFrameFormat::leftMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftMargin());
}

qreal  PythonQtWrapper_QTextFrameFormat::margin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->margin());
}

qreal  PythonQtWrapper_QTextFrameFormat::padding(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->padding());
}

QTextFormat::PageBreakFlags  PythonQtWrapper_QTextFrameFormat::pageBreakPolicy(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->pageBreakPolicy());
}

QTextFrameFormat::Position  PythonQtWrapper_QTextFrameFormat::position(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

qreal  PythonQtWrapper_QTextFrameFormat::rightMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightMargin());
}

void PythonQtWrapper_QTextFrameFormat::setBorder(QTextFrameFormat* theWrappedObject, qreal  border)
{
  ( theWrappedObject->setBorder(border));
}

void PythonQtWrapper_QTextFrameFormat::setBorderBrush(QTextFrameFormat* theWrappedObject, const QBrush&  brush)
{
  ( theWrappedObject->setBorderBrush(brush));
}

void PythonQtWrapper_QTextFrameFormat::setBorderStyle(QTextFrameFormat* theWrappedObject, QTextFrameFormat::BorderStyle  style)
{
  ( theWrappedObject->setBorderStyle(style));
}

void PythonQtWrapper_QTextFrameFormat::setBottomMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setBottomMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setHeight(QTextFrameFormat* theWrappedObject, const QTextLength&  height)
{
  ( theWrappedObject->setHeight(height));
}

void PythonQtWrapper_QTextFrameFormat::setHeight(QTextFrameFormat* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setHeight(height));
}

void PythonQtWrapper_QTextFrameFormat::setLeftMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setLeftMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setPadding(QTextFrameFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setPadding(padding));
}

void PythonQtWrapper_QTextFrameFormat::setPageBreakPolicy(QTextFrameFormat* theWrappedObject, QTextFormat::PageBreakFlags  flags)
{
  ( theWrappedObject->setPageBreakPolicy(flags));
}

void PythonQtWrapper_QTextFrameFormat::setPosition(QTextFrameFormat* theWrappedObject, QTextFrameFormat::Position  f)
{
  ( theWrappedObject->setPosition(f));
}

void PythonQtWrapper_QTextFrameFormat::setRightMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setRightMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setTopMargin(QTextFrameFormat* theWrappedObject, qreal  margin)
{
  ( theWrappedObject->setTopMargin(margin));
}

void PythonQtWrapper_QTextFrameFormat::setWidth(QTextFrameFormat* theWrappedObject, const QTextLength&  length)
{
  ( theWrappedObject->setWidth(length));
}

void PythonQtWrapper_QTextFrameFormat::setWidth(QTextFrameFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setWidth(width));
}

qreal  PythonQtWrapper_QTextFrameFormat::topMargin(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->topMargin());
}

QTextLength  PythonQtWrapper_QTextFrameFormat::width(QTextFrameFormat* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QTextImageFormat* PythonQtWrapper_QTextImageFormat::new_QTextImageFormat()
{ 
return new PythonQtShell_QTextImageFormat(); }

qreal  PythonQtWrapper_QTextImageFormat::height(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextImageFormat::isValid(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QTextImageFormat::name(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QTextImageFormat::setHeight(QTextImageFormat* theWrappedObject, qreal  height)
{
  ( theWrappedObject->setHeight(height));
}

void PythonQtWrapper_QTextImageFormat::setName(QTextImageFormat* theWrappedObject, const QString&  name)
{
  ( theWrappedObject->setName(name));
}

void PythonQtWrapper_QTextImageFormat::setWidth(QTextImageFormat* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setWidth(width));
}

qreal  PythonQtWrapper_QTextImageFormat::width(QTextImageFormat* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QTextInlineObject* PythonQtWrapper_QTextInlineObject::new_QTextInlineObject()
{ 
return new QTextInlineObject(); }

qreal  PythonQtWrapper_QTextInlineObject::ascent(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextInlineObject::descent(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QTextFormat  PythonQtWrapper_QTextInlineObject::format(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QTextInlineObject::formatIndex(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->formatIndex());
}

qreal  PythonQtWrapper_QTextInlineObject::height(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextInlineObject::isValid(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QRectF  PythonQtWrapper_QTextInlineObject::rect(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QTextInlineObject::setAscent(QTextInlineObject* theWrappedObject, qreal  a)
{
  ( theWrappedObject->setAscent(a));
}

void PythonQtWrapper_QTextInlineObject::setDescent(QTextInlineObject* theWrappedObject, qreal  d)
{
  ( theWrappedObject->setDescent(d));
}

void PythonQtWrapper_QTextInlineObject::setWidth(QTextInlineObject* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setWidth(w));
}

Qt::LayoutDirection  PythonQtWrapper_QTextInlineObject::textDirection(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->textDirection());
}

int  PythonQtWrapper_QTextInlineObject::textPosition(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->textPosition());
}

qreal  PythonQtWrapper_QTextInlineObject::width(QTextInlineObject* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QTextItem* PythonQtWrapper_QTextItem::new_QTextItem()
{ 
return new PythonQtShell_QTextItem(); }

qreal  PythonQtWrapper_QTextItem::ascent(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextItem::descent(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

QFont  PythonQtWrapper_QTextItem::font(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->font());
}

QTextItem::RenderFlags  PythonQtWrapper_QTextItem::renderFlags(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->renderFlags());
}

QString  PythonQtWrapper_QTextItem::text(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->text());
}

qreal  PythonQtWrapper_QTextItem::width(QTextItem* theWrappedObject) const
{
  return ( theWrappedObject->width());
}



QTextLine* PythonQtWrapper_QTextLine::new_QTextLine()
{ 
return new QTextLine(); }

qreal  PythonQtWrapper_QTextLine::ascent(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->ascent());
}

qreal  PythonQtWrapper_QTextLine::cursorToX(QTextLine* theWrappedObject, int  cursorPos, QTextLine::Edge  edge) const
{
  return ( theWrappedObject->cursorToX(cursorPos, edge));
}

qreal  PythonQtWrapper_QTextLine::descent(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->descent());
}

void PythonQtWrapper_QTextLine::draw(QTextLine* theWrappedObject, QPainter*  p, const QPointF&  point, const QTextLayout::FormatRange*  selection) const
{
  ( theWrappedObject->draw(p, point, selection));
}

qreal  PythonQtWrapper_QTextLine::height(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

bool  PythonQtWrapper_QTextLine::isValid(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextLine::leading(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->leading());
}

bool  PythonQtWrapper_QTextLine::leadingIncluded(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->leadingIncluded());
}

int  PythonQtWrapper_QTextLine::lineNumber(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->lineNumber());
}

QRectF  PythonQtWrapper_QTextLine::naturalTextRect(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->naturalTextRect());
}

qreal  PythonQtWrapper_QTextLine::naturalTextWidth(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->naturalTextWidth());
}

QPointF  PythonQtWrapper_QTextLine::position(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->position());
}

QRectF  PythonQtWrapper_QTextLine::rect(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->rect());
}

void PythonQtWrapper_QTextLine::setLeadingIncluded(QTextLine* theWrappedObject, bool  included)
{
  ( theWrappedObject->setLeadingIncluded(included));
}

void PythonQtWrapper_QTextLine::setLineWidth(QTextLine* theWrappedObject, qreal  width)
{
  ( theWrappedObject->setLineWidth(width));
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns)
{
  ( theWrappedObject->setNumColumns(columns));
}

void PythonQtWrapper_QTextLine::setNumColumns(QTextLine* theWrappedObject, int  columns, qreal  alignmentWidth)
{
  ( theWrappedObject->setNumColumns(columns, alignmentWidth));
}

void PythonQtWrapper_QTextLine::setPosition(QTextLine* theWrappedObject, const QPointF&  pos)
{
  ( theWrappedObject->setPosition(pos));
}

int  PythonQtWrapper_QTextLine::textLength(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->textLength());
}

int  PythonQtWrapper_QTextLine::textStart(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->textStart());
}

qreal  PythonQtWrapper_QTextLine::width(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

qreal  PythonQtWrapper_QTextLine::x(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QTextLine::xToCursor(QTextLine* theWrappedObject, qreal  x, QTextLine::CursorPosition  arg__2) const
{
  return ( theWrappedObject->xToCursor(x, arg__2));
}

qreal  PythonQtWrapper_QTextLine::y(QTextLine* theWrappedObject) const
{
  return ( theWrappedObject->y());
}



void PythonQtShell_QTextList::blockFormatChanged(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockFormatChanged");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextList::blockFormatChanged(block);
}
void PythonQtShell_QTextList::blockInserted(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextList::blockInserted(block);
}
void PythonQtShell_QTextList::blockRemoved(const QTextBlock&  block)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "blockRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QTextBlock&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&block};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextList::blockRemoved(block);
}
void PythonQtShell_QTextList::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextList::childEvent(arg__1);
}
void PythonQtShell_QTextList::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextList::customEvent(arg__1);
}
bool  PythonQtShell_QTextList::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextList::event(arg__1);
}
bool  PythonQtShell_QTextList::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextList::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextList::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextList::timerEvent(arg__1);
}
QTextList* PythonQtWrapper_QTextList::new_QTextList(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextList(doc); }

void PythonQtWrapper_QTextList::add(QTextList* theWrappedObject, const QTextBlock&  block)
{
  ( theWrappedObject->add(block));
}

int  PythonQtWrapper_QTextList::count(QTextList* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

QTextListFormat  PythonQtWrapper_QTextList::format(QTextList* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

QTextBlock  PythonQtWrapper_QTextList::item(QTextList* theWrappedObject, int  i) const
{
  return ( theWrappedObject->item(i));
}

int  PythonQtWrapper_QTextList::itemNumber(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
  return ( theWrappedObject->itemNumber(arg__1));
}

QString  PythonQtWrapper_QTextList::itemText(QTextList* theWrappedObject, const QTextBlock&  arg__1) const
{
  return ( theWrappedObject->itemText(arg__1));
}

void PythonQtWrapper_QTextList::remove(QTextList* theWrappedObject, const QTextBlock&  arg__1)
{
  ( theWrappedObject->remove(arg__1));
}

void PythonQtWrapper_QTextList::removeItem(QTextList* theWrappedObject, int  i)
{
  ( theWrappedObject->removeItem(i));
}

void PythonQtWrapper_QTextList::setFormat(QTextList* theWrappedObject, const QTextListFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}



QTextListFormat* PythonQtWrapper_QTextListFormat::new_QTextListFormat()
{ 
return new PythonQtShell_QTextListFormat(); }

int  PythonQtWrapper_QTextListFormat::indent(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->indent());
}

bool  PythonQtWrapper_QTextListFormat::isValid(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTextListFormat::setIndent(QTextListFormat* theWrappedObject, int  indent)
{
  ( theWrappedObject->setIndent(indent));
}

void PythonQtWrapper_QTextListFormat::setStyle(QTextListFormat* theWrappedObject, QTextListFormat::Style  style)
{
  ( theWrappedObject->setStyle(style));
}

QTextListFormat::Style  PythonQtWrapper_QTextListFormat::style(QTextListFormat* theWrappedObject) const
{
  return ( theWrappedObject->style());
}



void PythonQtShell_QTextObject::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextObject::childEvent(arg__1);
}
void PythonQtShell_QTextObject::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextObject::customEvent(arg__1);
}
bool  PythonQtShell_QTextObject::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextObject::event(arg__1);
}
bool  PythonQtShell_QTextObject::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextObject::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextObject::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextObject::timerEvent(arg__1);
}
QTextDocument*  PythonQtWrapper_QTextObject::document(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->document());
}

QTextFormat  PythonQtWrapper_QTextObject::format(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

int  PythonQtWrapper_QTextObject::formatIndex(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->formatIndex());
}

int  PythonQtWrapper_QTextObject::objectIndex(QTextObject* theWrappedObject) const
{
  return ( theWrappedObject->objectIndex());
}



void PythonQtShell_QTextTable::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextTable::childEvent(arg__1);
}
void PythonQtShell_QTextTable::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextTable::customEvent(arg__1);
}
bool  PythonQtShell_QTextTable::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextTable::event(arg__1);
}
bool  PythonQtShell_QTextTable::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTextTable::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTextTable::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTextTable::timerEvent(arg__1);
}
QTextTable* PythonQtWrapper_QTextTable::new_QTextTable(QTextDocument*  doc)
{ 
return new PythonQtShell_QTextTable(doc); }

void PythonQtWrapper_QTextTable::appendColumns(QTextTable* theWrappedObject, int  count)
{
  ( theWrappedObject->appendColumns(count));
}

void PythonQtWrapper_QTextTable::appendRows(QTextTable* theWrappedObject, int  count)
{
  ( theWrappedObject->appendRows(count));
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
  return ( theWrappedObject->cellAt(c));
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  position) const
{
  return ( theWrappedObject->cellAt(position));
}

QTextTableCell  PythonQtWrapper_QTextTable::cellAt(QTextTable* theWrappedObject, int  row, int  col) const
{
  return ( theWrappedObject->cellAt(row, col));
}

int  PythonQtWrapper_QTextTable::columns(QTextTable* theWrappedObject) const
{
  return ( theWrappedObject->columns());
}

QTextTableFormat  PythonQtWrapper_QTextTable::format(QTextTable* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

void PythonQtWrapper_QTextTable::insertColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->insertColumns(pos, num));
}

void PythonQtWrapper_QTextTable::insertRows(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->insertRows(pos, num));
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, const QTextCursor&  cursor)
{
  ( theWrappedObject->mergeCells(cursor));
}

void PythonQtWrapper_QTextTable::mergeCells(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
  ( theWrappedObject->mergeCells(row, col, numRows, numCols));
}

void PythonQtWrapper_QTextTable::removeColumns(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->removeColumns(pos, num));
}

void PythonQtWrapper_QTextTable::removeRows(QTextTable* theWrappedObject, int  pos, int  num)
{
  ( theWrappedObject->removeRows(pos, num));
}

void PythonQtWrapper_QTextTable::resize(QTextTable* theWrappedObject, int  rows, int  cols)
{
  ( theWrappedObject->resize(rows, cols));
}

QTextCursor  PythonQtWrapper_QTextTable::rowEnd(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
  return ( theWrappedObject->rowEnd(c));
}

QTextCursor  PythonQtWrapper_QTextTable::rowStart(QTextTable* theWrappedObject, const QTextCursor&  c) const
{
  return ( theWrappedObject->rowStart(c));
}

int  PythonQtWrapper_QTextTable::rows(QTextTable* theWrappedObject) const
{
  return ( theWrappedObject->rows());
}

void PythonQtWrapper_QTextTable::setFormat(QTextTable* theWrappedObject, const QTextTableFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

void PythonQtWrapper_QTextTable::splitCell(QTextTable* theWrappedObject, int  row, int  col, int  numRows, int  numCols)
{
  ( theWrappedObject->splitCell(row, col, numRows, numCols));
}



QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell()
{ 
return new QTextTableCell(); }

QTextTableCell* PythonQtWrapper_QTextTableCell::new_QTextTableCell(const QTextTableCell&  o)
{ 
return new QTextTableCell(o); }

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::begin(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->begin());
}

int  PythonQtWrapper_QTextTableCell::column(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->column());
}

int  PythonQtWrapper_QTextTableCell::columnSpan(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->columnSpan());
}

QTextFrame::iterator  PythonQtWrapper_QTextTableCell::end(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->end());
}

QTextCursor  PythonQtWrapper_QTextTableCell::firstCursorPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->firstCursorPosition());
}

int  PythonQtWrapper_QTextTableCell::firstPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->firstPosition());
}

QTextCharFormat  PythonQtWrapper_QTextTableCell::format(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->format());
}

bool  PythonQtWrapper_QTextTableCell::isValid(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QTextCursor  PythonQtWrapper_QTextTableCell::lastCursorPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->lastCursorPosition());
}

int  PythonQtWrapper_QTextTableCell::lastPosition(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->lastPosition());
}

bool  PythonQtWrapper_QTextTableCell::__ne__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const
{
  return ( (*theWrappedObject)!= other);
}

bool  PythonQtWrapper_QTextTableCell::__eq__(QTextTableCell* theWrappedObject, const QTextTableCell&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QTextTableCell::row(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->row());
}

int  PythonQtWrapper_QTextTableCell::rowSpan(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->rowSpan());
}

void PythonQtWrapper_QTextTableCell::setFormat(QTextTableCell* theWrappedObject, const QTextCharFormat&  format)
{
  ( theWrappedObject->setFormat(format));
}

int  PythonQtWrapper_QTextTableCell::tableCellFormatIndex(QTextTableCell* theWrappedObject) const
{
  return ( theWrappedObject->tableCellFormatIndex());
}



QTextTableCellFormat* PythonQtWrapper_QTextTableCellFormat::new_QTextTableCellFormat()
{ 
return new PythonQtShell_QTextTableCellFormat(); }

qreal  PythonQtWrapper_QTextTableCellFormat::bottomPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->bottomPadding());
}

bool  PythonQtWrapper_QTextTableCellFormat::isValid(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

qreal  PythonQtWrapper_QTextTableCellFormat::leftPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->leftPadding());
}

qreal  PythonQtWrapper_QTextTableCellFormat::rightPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->rightPadding());
}

void PythonQtWrapper_QTextTableCellFormat::setBottomPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setBottomPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setLeftPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setLeftPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setRightPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setRightPadding(padding));
}

void PythonQtWrapper_QTextTableCellFormat::setTopPadding(QTextTableCellFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setTopPadding(padding));
}

qreal  PythonQtWrapper_QTextTableCellFormat::topPadding(QTextTableCellFormat* theWrappedObject) const
{
  return ( theWrappedObject->topPadding());
}



QTextTableFormat* PythonQtWrapper_QTextTableFormat::new_QTextTableFormat()
{ 
return new PythonQtShell_QTextTableFormat(); }

Qt::Alignment  PythonQtWrapper_QTextTableFormat::alignment(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->alignment());
}

qreal  PythonQtWrapper_QTextTableFormat::cellPadding(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellPadding());
}

qreal  PythonQtWrapper_QTextTableFormat::cellSpacing(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->cellSpacing());
}

void PythonQtWrapper_QTextTableFormat::clearColumnWidthConstraints(QTextTableFormat* theWrappedObject)
{
  ( theWrappedObject->clearColumnWidthConstraints());
}

QVector<QTextLength >  PythonQtWrapper_QTextTableFormat::columnWidthConstraints(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columnWidthConstraints());
}

int  PythonQtWrapper_QTextTableFormat::columns(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->columns());
}

int  PythonQtWrapper_QTextTableFormat::headerRowCount(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->headerRowCount());
}

bool  PythonQtWrapper_QTextTableFormat::isValid(QTextTableFormat* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QTextTableFormat::setAlignment(QTextTableFormat* theWrappedObject, Qt::Alignment  alignment)
{
  ( theWrappedObject->setAlignment(alignment));
}

void PythonQtWrapper_QTextTableFormat::setCellPadding(QTextTableFormat* theWrappedObject, qreal  padding)
{
  ( theWrappedObject->setCellPadding(padding));
}

void PythonQtWrapper_QTextTableFormat::setCellSpacing(QTextTableFormat* theWrappedObject, qreal  spacing)
{
  ( theWrappedObject->setCellSpacing(spacing));
}

void PythonQtWrapper_QTextTableFormat::setColumnWidthConstraints(QTextTableFormat* theWrappedObject, const QVector<QTextLength >&  constraints)
{
  ( theWrappedObject->setColumnWidthConstraints(constraints));
}

void PythonQtWrapper_QTextTableFormat::setColumns(QTextTableFormat* theWrappedObject, int  columns)
{
  ( theWrappedObject->setColumns(columns));
}

void PythonQtWrapper_QTextTableFormat::setHeaderRowCount(QTextTableFormat* theWrappedObject, int  count)
{
  ( theWrappedObject->setHeaderRowCount(count));
}



QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  horizontalRule, Qt::TileRule  verticalRule)
{ 
return new PythonQtShell_QTileRules(horizontalRule, verticalRule); }

QTileRules* PythonQtWrapper_QTileRules::new_QTileRules(Qt::TileRule  rule)
{ 
return new PythonQtShell_QTileRules(rule); }



void PythonQtShell_QTimeEdit::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::actionEvent(arg__1);
}
void PythonQtShell_QTimeEdit::changeEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::changeEvent(event);
}
void PythonQtShell_QTimeEdit::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::childEvent(arg__1);
}
void PythonQtShell_QTimeEdit::clear()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "clear");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::clear();
}
void PythonQtShell_QTimeEdit::closeEvent(QCloseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::closeEvent(event);
}
void PythonQtShell_QTimeEdit::contextMenuEvent(QContextMenuEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::contextMenuEvent(event);
}
void PythonQtShell_QTimeEdit::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::customEvent(arg__1);
}
QDateTime  PythonQtShell_QTimeEdit::dateTimeFromText(const QString&  text) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dateTimeFromText");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QDateTime" , "const QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QDateTime returnValue;
    void* args[2] = {NULL, (void*)&text};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("dateTimeFromText", methodInfo, result);
        } else {
          returnValue = *((QDateTime*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::dateTimeFromText(text);
}
int  PythonQtShell_QTimeEdit::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::devType();
}
void PythonQtShell_QTimeEdit::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::dragEnterEvent(arg__1);
}
void PythonQtShell_QTimeEdit::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::dragLeaveEvent(arg__1);
}
void PythonQtShell_QTimeEdit::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::dragMoveEvent(arg__1);
}
void PythonQtShell_QTimeEdit::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::dropEvent(arg__1);
}
void PythonQtShell_QTimeEdit::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::enterEvent(arg__1);
}
bool  PythonQtShell_QTimeEdit::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::event(event);
}
bool  PythonQtShell_QTimeEdit::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QTimeEdit::fixup(QString&  input) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "fixup");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QString&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&input};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::fixup(input);
}
void PythonQtShell_QTimeEdit::focusInEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::focusInEvent(event);
}
bool  PythonQtShell_QTimeEdit::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::focusNextPrevChild(next);
}
void PythonQtShell_QTimeEdit::focusOutEvent(QFocusEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::focusOutEvent(event);
}
int  PythonQtShell_QTimeEdit::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::heightForWidth(arg__1);
}
void PythonQtShell_QTimeEdit::hideEvent(QHideEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::hideEvent(event);
}
void PythonQtShell_QTimeEdit::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QTimeEdit::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::inputMethodQuery(arg__1);
}
void PythonQtShell_QTimeEdit::keyPressEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::keyPressEvent(event);
}
void PythonQtShell_QTimeEdit::keyReleaseEvent(QKeyEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::keyReleaseEvent(event);
}
void PythonQtShell_QTimeEdit::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::languageChange();
}
void PythonQtShell_QTimeEdit::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::leaveEvent(arg__1);
}
int  PythonQtShell_QTimeEdit::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::metric(arg__1);
}
void PythonQtShell_QTimeEdit::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QTimeEdit::mouseMoveEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::mouseMoveEvent(event);
}
void PythonQtShell_QTimeEdit::mousePressEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::mousePressEvent(event);
}
void PythonQtShell_QTimeEdit::mouseReleaseEvent(QMouseEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::mouseReleaseEvent(event);
}
void PythonQtShell_QTimeEdit::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QTimeEdit::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::paintEngine();
}
void PythonQtShell_QTimeEdit::paintEvent(QPaintEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::paintEvent(event);
}
void PythonQtShell_QTimeEdit::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::resizeEvent(event);
}
void PythonQtShell_QTimeEdit::showEvent(QShowEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::showEvent(event);
}
void PythonQtShell_QTimeEdit::stepBy(int  steps)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stepBy");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&steps};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::stepBy(steps);
}
QAbstractSpinBox::StepEnabled  PythonQtShell_QTimeEdit::stepEnabled() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "stepEnabled");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QAbstractSpinBox::StepEnabled"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QAbstractSpinBox::StepEnabled returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("stepEnabled", methodInfo, result);
        } else {
          returnValue = *((QAbstractSpinBox::StepEnabled*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::stepEnabled();
}
void PythonQtShell_QTimeEdit::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::tabletEvent(arg__1);
}
QString  PythonQtShell_QTimeEdit::textFromDateTime(const QDateTime&  dt) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "textFromDateTime");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString" , "const QDateTime&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QString returnValue;
    void* args[2] = {NULL, (void*)&dt};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("textFromDateTime", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::textFromDateTime(dt);
}
void PythonQtShell_QTimeEdit::timerEvent(QTimerEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::timerEvent(event);
}
QValidator::State  PythonQtShell_QTimeEdit::validate(QString&  input, int&  pos) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "validate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QValidator::State" , "QString&" , "int&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      QValidator::State returnValue;
    void* args[3] = {NULL, (void*)&input, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("validate", methodInfo, result);
        } else {
          returnValue = *((QValidator::State*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QTimeEdit::validate(input, pos);
}
void PythonQtShell_QTimeEdit::wheelEvent(QWheelEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QTimeEdit::wheelEvent(event);
}
QTimeEdit* PythonQtWrapper_QTimeEdit::new_QTimeEdit(QWidget*  parent)
{ 
return new PythonQtShell_QTimeEdit(parent); }

QTimeEdit* PythonQtWrapper_QTimeEdit::new_QTimeEdit(const QTime&  time, QWidget*  parent)
{ 
return new PythonQtShell_QTimeEdit(time, parent); }



void PythonQtShell_QToolBar::actionEvent(QActionEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::actionEvent(event);
}
void PythonQtShell_QToolBar::changeEvent(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::changeEvent(event);
}
void PythonQtShell_QToolBar::childEvent(QChildEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::childEvent(event);
}
void PythonQtShell_QToolBar::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::closeEvent(arg__1);
}
void PythonQtShell_QToolBar::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::contextMenuEvent(arg__1);
}
void PythonQtShell_QToolBar::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::customEvent(arg__1);
}
int  PythonQtShell_QToolBar::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::devType();
}
void PythonQtShell_QToolBar::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::dragEnterEvent(arg__1);
}
void PythonQtShell_QToolBar::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::dragLeaveEvent(arg__1);
}
void PythonQtShell_QToolBar::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::dragMoveEvent(arg__1);
}
void PythonQtShell_QToolBar::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::dropEvent(arg__1);
}
void PythonQtShell_QToolBar::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::enterEvent(arg__1);
}
bool  PythonQtShell_QToolBar::event(QEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::event(event);
}
bool  PythonQtShell_QToolBar::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QToolBar::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::focusInEvent(arg__1);
}
bool  PythonQtShell_QToolBar::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::focusNextPrevChild(next);
}
void PythonQtShell_QToolBar::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::focusOutEvent(arg__1);
}
int  PythonQtShell_QToolBar::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::heightForWidth(arg__1);
}
void PythonQtShell_QToolBar::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::hideEvent(arg__1);
}
void PythonQtShell_QToolBar::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QToolBar::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::inputMethodQuery(arg__1);
}
void PythonQtShell_QToolBar::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::keyPressEvent(arg__1);
}
void PythonQtShell_QToolBar::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::keyReleaseEvent(arg__1);
}
void PythonQtShell_QToolBar::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::languageChange();
}
void PythonQtShell_QToolBar::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::leaveEvent(arg__1);
}
int  PythonQtShell_QToolBar::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::metric(arg__1);
}
QSize  PythonQtShell_QToolBar::minimumSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getMinimumSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("getMinimumSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::minimumSizeHint();
}
void PythonQtShell_QToolBar::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QToolBar::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::mouseMoveEvent(arg__1);
}
void PythonQtShell_QToolBar::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::mousePressEvent(arg__1);
}
void PythonQtShell_QToolBar::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QToolBar::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QToolBar::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::paintEngine();
}
void PythonQtShell_QToolBar::paintEvent(QPaintEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::paintEvent(event);
}
void PythonQtShell_QToolBar::resizeEvent(QResizeEvent*  event)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&event};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::resizeEvent(event);
}
void PythonQtShell_QToolBar::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::showEvent(arg__1);
}
QSize  PythonQtShell_QToolBar::sizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("getSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBar::sizeHint();
}
void PythonQtShell_QToolBar::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::tabletEvent(arg__1);
}
void PythonQtShell_QToolBar::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::timerEvent(arg__1);
}
void PythonQtShell_QToolBar::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBar::wheelEvent(arg__1);
}
QToolBar* PythonQtWrapper_QToolBar::new_QToolBar(QWidget*  parent)
{ 
return new PythonQtShell_QToolBar(parent); }

QToolBar* PythonQtWrapper_QToolBar::new_QToolBar(const QString&  title, QWidget*  parent)
{ 
return new PythonQtShell_QToolBar(title, parent); }

QAction*  PythonQtWrapper_QToolBar::actionAt(QToolBar* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->actionAt(p));
}

QAction*  PythonQtWrapper_QToolBar::actionAt(QToolBar* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->actionAt(x, y));
}

void PythonQtWrapper_QToolBar::actionEvent(QToolBar* theWrappedObject, QActionEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_actionEvent(event));
}

QRect  PythonQtWrapper_QToolBar::actionGeometry(QToolBar* theWrappedObject, QAction*  action) const
{
  return ( theWrappedObject->actionGeometry(action));
}

void PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, QAction*  action)
{
  ( theWrappedObject->addAction(action));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->addAction(icon, text));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QIcon&  icon, const QString&  text, const QObject*  receiver, const char*  member)
{
  return ( theWrappedObject->addAction(icon, text, receiver, member));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QString&  text)
{
  return ( theWrappedObject->addAction(text));
}

QAction*  PythonQtWrapper_QToolBar::addAction(QToolBar* theWrappedObject, const QString&  text, const QObject*  receiver, const char*  member)
{
  return ( theWrappedObject->addAction(text, receiver, member));
}

QAction*  PythonQtWrapper_QToolBar::addSeparator(QToolBar* theWrappedObject)
{
  return ( theWrappedObject->addSeparator());
}

QAction*  PythonQtWrapper_QToolBar::addWidget(QToolBar* theWrappedObject, QWidget*  widget)
{
  return ( theWrappedObject->addWidget(widget));
}

Qt::ToolBarAreas  PythonQtWrapper_QToolBar::allowedAreas(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->allowedAreas());
}

void PythonQtWrapper_QToolBar::changeEvent(QToolBar* theWrappedObject, QEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_changeEvent(event));
}

void PythonQtWrapper_QToolBar::childEvent(QToolBar* theWrappedObject, QChildEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_childEvent(event));
}

void PythonQtWrapper_QToolBar::clear(QToolBar* theWrappedObject)
{
  ( theWrappedObject->clear());
}

bool  PythonQtWrapper_QToolBar::event(QToolBar* theWrappedObject, QEvent*  event)
{
  return ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_event(event));
}

QSize  PythonQtWrapper_QToolBar::iconSize(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->iconSize());
}

QAction*  PythonQtWrapper_QToolBar::insertSeparator(QToolBar* theWrappedObject, QAction*  before)
{
  return ( theWrappedObject->insertSeparator(before));
}

QAction*  PythonQtWrapper_QToolBar::insertWidget(QToolBar* theWrappedObject, QAction*  before, QWidget*  widget)
{
  return ( theWrappedObject->insertWidget(before, widget));
}

bool  PythonQtWrapper_QToolBar::isAreaAllowed(QToolBar* theWrappedObject, Qt::ToolBarArea  area) const
{
  return ( theWrappedObject->isAreaAllowed(area));
}

bool  PythonQtWrapper_QToolBar::isFloatable(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->isFloatable());
}

bool  PythonQtWrapper_QToolBar::isFloating(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->isFloating());
}

bool  PythonQtWrapper_QToolBar::isMovable(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->isMovable());
}

Qt::Orientation  PythonQtWrapper_QToolBar::orientation(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->orientation());
}

void PythonQtWrapper_QToolBar::paintEvent(QToolBar* theWrappedObject, QPaintEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_paintEvent(event));
}

void PythonQtWrapper_QToolBar::resizeEvent(QToolBar* theWrappedObject, QResizeEvent*  event)
{
  ( ((PythonQtPublicPromoter_QToolBar*)theWrappedObject)->promoted_resizeEvent(event));
}

void PythonQtWrapper_QToolBar::setAllowedAreas(QToolBar* theWrappedObject, Qt::ToolBarAreas  areas)
{
  ( theWrappedObject->setAllowedAreas(areas));
}

void PythonQtWrapper_QToolBar::setFloatable(QToolBar* theWrappedObject, bool  floatable)
{
  ( theWrappedObject->setFloatable(floatable));
}

void PythonQtWrapper_QToolBar::setMovable(QToolBar* theWrappedObject, bool  movable)
{
  ( theWrappedObject->setMovable(movable));
}

void PythonQtWrapper_QToolBar::setOrientation(QToolBar* theWrappedObject, Qt::Orientation  orientation)
{
  ( theWrappedObject->setOrientation(orientation));
}

QAction*  PythonQtWrapper_QToolBar::toggleViewAction(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->toggleViewAction());
}

Qt::ToolButtonStyle  PythonQtWrapper_QToolBar::toolButtonStyle(QToolBar* theWrappedObject) const
{
  return ( theWrappedObject->toolButtonStyle());
}

QWidget*  PythonQtWrapper_QToolBar::widgetForAction(QToolBar* theWrappedObject, QAction*  action) const
{
  return ( theWrappedObject->widgetForAction(action));
}



QToolBarChangeEvent* PythonQtWrapper_QToolBarChangeEvent::new_QToolBarChangeEvent(bool  t)
{ 
return new QToolBarChangeEvent(t); }

bool  PythonQtWrapper_QToolBarChangeEvent::toggle(QToolBarChangeEvent* theWrappedObject) const
{
  return ( theWrappedObject->toggle());
}



void PythonQtShell_QToolBox::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::actionEvent(arg__1);
}
void PythonQtShell_QToolBox::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::changeEvent(arg__1);
}
void PythonQtShell_QToolBox::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::childEvent(arg__1);
}
void PythonQtShell_QToolBox::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::closeEvent(arg__1);
}
void PythonQtShell_QToolBox::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::contextMenuEvent(arg__1);
}
void PythonQtShell_QToolBox::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::customEvent(arg__1);
}
int  PythonQtShell_QToolBox::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBox::devType();
}
void PythonQtShell_QToolBox::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::dragEnterEvent(arg__1);
}
void PythonQtShell_QToolBox::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::dragLeaveEvent(arg__1);
}
void PythonQtShell_QToolBox::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::dragMoveEvent(arg__1);
}
void PythonQtShell_QToolBox::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::dropEvent(arg__1);
}
void PythonQtShell_QToolBox::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::enterEvent(arg__1);
}
bool  PythonQtShell_QToolBox::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBox::event(e);
}
bool  PythonQtShell_QToolBox::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBox::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QToolBox::focusInEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::focusInEvent(arg__1);
}
bool  PythonQtShell_QToolBox::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBox::focusNextPrevChild(next);
}
void PythonQtShell_QToolBox::focusOutEvent(QFocusEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::focusOutEvent(arg__1);
}
int  PythonQtShell_QToolBox::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBox::heightForWidth(arg__1);
}
void PythonQtShell_QToolBox::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::hideEvent(arg__1);
}
void PythonQtShell_QToolBox::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QToolBox::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBox::inputMethodQuery(arg__1);
}
void PythonQtShell_QToolBox::itemInserted(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemInserted");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::itemInserted(index);
}
void PythonQtShell_QToolBox::itemRemoved(int  index)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "itemRemoved");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&index};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::itemRemoved(index);
}
void PythonQtShell_QToolBox::keyPressEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::keyPressEvent(arg__1);
}
void PythonQtShell_QToolBox::keyReleaseEvent(QKeyEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::keyReleaseEvent(arg__1);
}
void PythonQtShell_QToolBox::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::languageChange();
}
void PythonQtShell_QToolBox::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::leaveEvent(arg__1);
}
int  PythonQtShell_QToolBox::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBox::metric(arg__1);
}
QSize  PythonQtShell_QToolBox::minimumSizeHint() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "getMinimumSizeHint");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QSize"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QSize returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("getMinimumSizeHint", methodInfo, result);
        } else {
          returnValue = *((QSize*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBox::minimumSizeHint();
}
void PythonQtShell_QToolBox::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QToolBox::mouseMoveEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::mouseMoveEvent(arg__1);
}
void PythonQtShell_QToolBox::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::mousePressEvent(arg__1);
}
void PythonQtShell_QToolBox::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QToolBox::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::moveEvent(arg__1);
}
QPaintEngine*  PythonQtShell_QToolBox::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolBox::paintEngine();
}
void PythonQtShell_QToolBox::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::paintEvent(arg__1);
}
void PythonQtShell_QToolBox::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::resizeEvent(arg__1);
}
void PythonQtShell_QToolBox::showEvent(QShowEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::showEvent(e);
}
void PythonQtShell_QToolBox::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::tabletEvent(arg__1);
}
void PythonQtShell_QToolBox::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::timerEvent(arg__1);
}
void PythonQtShell_QToolBox::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolBox::wheelEvent(arg__1);
}
QToolBox* PythonQtWrapper_QToolBox::new_QToolBox(QWidget*  parent, Qt::WindowFlags  f)
{ 
return new PythonQtShell_QToolBox(parent, f); }

int  PythonQtWrapper_QToolBox::addItem(QToolBox* theWrappedObject, QWidget*  widget, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->addItem(widget, icon, text));
}

int  PythonQtWrapper_QToolBox::addItem(QToolBox* theWrappedObject, QWidget*  widget, const QString&  text)
{
  return ( theWrappedObject->addItem(widget, text));
}

void PythonQtWrapper_QToolBox::changeEvent(QToolBox* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_changeEvent(arg__1));
}

int  PythonQtWrapper_QToolBox::count(QToolBox* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QToolBox::currentIndex(QToolBox* theWrappedObject) const
{
  return ( theWrappedObject->currentIndex());
}

QWidget*  PythonQtWrapper_QToolBox::currentWidget(QToolBox* theWrappedObject) const
{
  return ( theWrappedObject->currentWidget());
}

bool  PythonQtWrapper_QToolBox::event(QToolBox* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_event(e));
}

int  PythonQtWrapper_QToolBox::indexOf(QToolBox* theWrappedObject, QWidget*  widget) const
{
  return ( theWrappedObject->indexOf(widget));
}

int  PythonQtWrapper_QToolBox::insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QIcon&  icon, const QString&  text)
{
  return ( theWrappedObject->insertItem(index, widget, icon, text));
}

int  PythonQtWrapper_QToolBox::insertItem(QToolBox* theWrappedObject, int  index, QWidget*  widget, const QString&  text)
{
  return ( theWrappedObject->insertItem(index, widget, text));
}

bool  PythonQtWrapper_QToolBox::isItemEnabled(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->isItemEnabled(index));
}

QIcon  PythonQtWrapper_QToolBox::itemIcon(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemIcon(index));
}

void PythonQtWrapper_QToolBox::itemInserted(QToolBox* theWrappedObject, int  index)
{
  ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_itemInserted(index));
}

void PythonQtWrapper_QToolBox::itemRemoved(QToolBox* theWrappedObject, int  index)
{
  ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_itemRemoved(index));
}

QString  PythonQtWrapper_QToolBox::itemText(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemText(index));
}

QString  PythonQtWrapper_QToolBox::itemToolTip(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->itemToolTip(index));
}

void PythonQtWrapper_QToolBox::removeItem(QToolBox* theWrappedObject, int  index)
{
  ( theWrappedObject->removeItem(index));
}

void PythonQtWrapper_QToolBox::setItemEnabled(QToolBox* theWrappedObject, int  index, bool  enabled)
{
  ( theWrappedObject->setItemEnabled(index, enabled));
}

void PythonQtWrapper_QToolBox::setItemIcon(QToolBox* theWrappedObject, int  index, const QIcon&  icon)
{
  ( theWrappedObject->setItemIcon(index, icon));
}

void PythonQtWrapper_QToolBox::setItemText(QToolBox* theWrappedObject, int  index, const QString&  text)
{
  ( theWrappedObject->setItemText(index, text));
}

void PythonQtWrapper_QToolBox::setItemToolTip(QToolBox* theWrappedObject, int  index, const QString&  toolTip)
{
  ( theWrappedObject->setItemToolTip(index, toolTip));
}

void PythonQtWrapper_QToolBox::showEvent(QToolBox* theWrappedObject, QShowEvent*  e)
{
  ( ((PythonQtPublicPromoter_QToolBox*)theWrappedObject)->promoted_showEvent(e));
}

QWidget*  PythonQtWrapper_QToolBox::widget(QToolBox* theWrappedObject, int  index) const
{
  return ( theWrappedObject->widget(index));
}



void PythonQtShell_QToolButton::actionEvent(QActionEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "actionEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QActionEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::actionEvent(arg__1);
}
void PythonQtShell_QToolButton::changeEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "changeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::changeEvent(arg__1);
}
void PythonQtShell_QToolButton::checkStateSet()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "checkStateSet");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::checkStateSet();
}
void PythonQtShell_QToolButton::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::childEvent(arg__1);
}
void PythonQtShell_QToolButton::closeEvent(QCloseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "closeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QCloseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::closeEvent(arg__1);
}
void PythonQtShell_QToolButton::contextMenuEvent(QContextMenuEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "contextMenuEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QContextMenuEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::contextMenuEvent(arg__1);
}
void PythonQtShell_QToolButton::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::customEvent(arg__1);
}
int  PythonQtShell_QToolButton::devType() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "devType");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      int returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("devType", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolButton::devType();
}
void PythonQtShell_QToolButton::dragEnterEvent(QDragEnterEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragEnterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragEnterEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::dragEnterEvent(arg__1);
}
void PythonQtShell_QToolButton::dragLeaveEvent(QDragLeaveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragLeaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragLeaveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::dragLeaveEvent(arg__1);
}
void PythonQtShell_QToolButton::dragMoveEvent(QDragMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dragMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDragMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::dragMoveEvent(arg__1);
}
void PythonQtShell_QToolButton::dropEvent(QDropEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "dropEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QDropEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::dropEvent(arg__1);
}
void PythonQtShell_QToolButton::enterEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "enterEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::enterEvent(arg__1);
}
bool  PythonQtShell_QToolButton::event(QEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolButton::event(e);
}
bool  PythonQtShell_QToolButton::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue = 0;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolButton::eventFilter(arg__1, arg__2);
}
void PythonQtShell_QToolButton::focusInEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusInEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::focusInEvent(e);
}
bool  PythonQtShell_QToolButton::focusNextPrevChild(bool  next)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusNextPrevChild");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "bool"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&next};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("focusNextPrevChild", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolButton::focusNextPrevChild(next);
}
void PythonQtShell_QToolButton::focusOutEvent(QFocusEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "focusOutEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QFocusEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::focusOutEvent(e);
}
int  PythonQtShell_QToolButton::heightForWidth(int  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "heightForWidth");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "int"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("heightForWidth", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolButton::heightForWidth(arg__1);
}
void PythonQtShell_QToolButton::hideEvent(QHideEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hideEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QHideEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::hideEvent(arg__1);
}
bool  PythonQtShell_QToolButton::hitButton(const QPoint&  pos) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "hitButton");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue = 0;
    void* args[2] = {NULL, (void*)&pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("hitButton", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolButton::hitButton(pos);
}
void PythonQtShell_QToolButton::inputMethodEvent(QInputMethodEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QInputMethodEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::inputMethodEvent(arg__1);
}
QVariant  PythonQtShell_QToolButton::inputMethodQuery(Qt::InputMethodQuery  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "inputMethodQuery");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QVariant" , "Qt::InputMethodQuery"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      QVariant returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("inputMethodQuery", methodInfo, result);
        } else {
          returnValue = *((QVariant*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolButton::inputMethodQuery(arg__1);
}
void PythonQtShell_QToolButton::keyPressEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyPressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::keyPressEvent(e);
}
void PythonQtShell_QToolButton::keyReleaseEvent(QKeyEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "keyReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QKeyEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::keyReleaseEvent(e);
}
void PythonQtShell_QToolButton::languageChange()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "languageChange");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::languageChange();
}
void PythonQtShell_QToolButton::leaveEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "leaveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::leaveEvent(arg__1);
}
int  PythonQtShell_QToolButton::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "metric");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"int" , "QPaintDevice::PaintDeviceMetric"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      int returnValue = 0;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("metric", methodInfo, result);
        } else {
          returnValue = *((int*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolButton::metric(arg__1);
}
void PythonQtShell_QToolButton::mouseDoubleClickEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseDoubleClickEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::mouseDoubleClickEvent(arg__1);
}
void PythonQtShell_QToolButton::mouseMoveEvent(QMouseEvent*  e)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseMoveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&e};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::mouseMoveEvent(e);
}
void PythonQtShell_QToolButton::mousePressEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mousePressEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::mousePressEvent(arg__1);
}
void PythonQtShell_QToolButton::mouseReleaseEvent(QMouseEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "mouseReleaseEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMouseEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::mouseReleaseEvent(arg__1);
}
void PythonQtShell_QToolButton::moveEvent(QMoveEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "moveEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QMoveEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::moveEvent(arg__1);
}
void PythonQtShell_QToolButton::nextCheckState()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "nextCheckState");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::nextCheckState();
}
QPaintEngine*  PythonQtShell_QToolButton::paintEngine() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEngine");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QPaintEngine*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QPaintEngine* returnValue = 0;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("paintEngine", methodInfo, result);
        } else {
          returnValue = *((QPaintEngine**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
  Py_XDECREF(obj);
}
  return QToolButton::paintEngine();
}
void PythonQtShell_QToolButton::paintEvent(QPaintEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "paintEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QPaintEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::paintEvent(arg__1);
}
void PythonQtShell_QToolButton::resizeEvent(QResizeEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "resizeEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QResizeEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::resizeEvent(arg__1);
}
void PythonQtShell_QToolButton::showEvent(QShowEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "showEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QShowEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::showEvent(arg__1);
}
void PythonQtShell_QToolButton::tabletEvent(QTabletEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "tabletEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTabletEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::tabletEvent(arg__1);
}
void PythonQtShell_QToolButton::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::timerEvent(arg__1);
}
void PythonQtShell_QToolButton::wheelEvent(QWheelEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "wheelEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QWheelEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
  Py_XDECREF(obj);
}
  QToolButton::wheelEvent(arg__1);
}
QToolButton* PythonQtWrapper_QToolButton::new_QToolButton(QWidget*  parent)
{ 
return new PythonQtShell_QToolButton(parent); }

void PythonQtWrapper_QToolButton::actionEvent(QToolButton* theWrappedObject, QActionEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_actionEvent(arg__1));
}

Qt::ArrowType  PythonQtWrapper_QToolButton::arrowType(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->arrowType());
}

bool  PythonQtWrapper_QToolButton::autoRaise(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->autoRaise());
}

void PythonQtWrapper_QToolButton::changeEvent(QToolButton* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_changeEvent(arg__1));
}

QAction*  PythonQtWrapper_QToolButton::defaultAction(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->defaultAction());
}

void PythonQtWrapper_QToolButton::enterEvent(QToolButton* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_enterEvent(arg__1));
}

bool  PythonQtWrapper_QToolButton::event(QToolButton* theWrappedObject, QEvent*  e)
{
  return ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_event(e));
}

bool  PythonQtWrapper_QToolButton::hitButton(QToolButton* theWrappedObject, const QPoint&  pos) const
{
  return ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_hitButton(pos));
}

void PythonQtWrapper_QToolButton::leaveEvent(QToolButton* theWrappedObject, QEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_leaveEvent(arg__1));
}

QMenu*  PythonQtWrapper_QToolButton::menu(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->menu());
}

QSize  PythonQtWrapper_QToolButton::minimumSizeHint(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->minimumSizeHint());
}

void PythonQtWrapper_QToolButton::mousePressEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_mousePressEvent(arg__1));
}

void PythonQtWrapper_QToolButton::mouseReleaseEvent(QToolButton* theWrappedObject, QMouseEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_mouseReleaseEvent(arg__1));
}

void PythonQtWrapper_QToolButton::nextCheckState(QToolButton* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_nextCheckState());
}

void PythonQtWrapper_QToolButton::paintEvent(QToolButton* theWrappedObject, QPaintEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_paintEvent(arg__1));
}

QToolButton::ToolButtonPopupMode  PythonQtWrapper_QToolButton::popupMode(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->popupMode());
}

void PythonQtWrapper_QToolButton::setArrowType(QToolButton* theWrappedObject, Qt::ArrowType  type)
{
  ( theWrappedObject->setArrowType(type));
}

void PythonQtWrapper_QToolButton::setAutoRaise(QToolButton* theWrappedObject, bool  enable)
{
  ( theWrappedObject->setAutoRaise(enable));
}

void PythonQtWrapper_QToolButton::setMenu(QToolButton* theWrappedObject, QMenu*  menu)
{
  ( theWrappedObject->setMenu(menu));
}

void PythonQtWrapper_QToolButton::setPopupMode(QToolButton* theWrappedObject, QToolButton::ToolButtonPopupMode  mode)
{
  ( theWrappedObject->setPopupMode(mode));
}

QSize  PythonQtWrapper_QToolButton::sizeHint(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->sizeHint());
}

void PythonQtWrapper_QToolButton::timerEvent(QToolButton* theWrappedObject, QTimerEvent*  arg__1)
{
  ( ((PythonQtPublicPromoter_QToolButton*)theWrappedObject)->promoted_timerEvent(arg__1));
}

Qt::ToolButtonStyle  PythonQtWrapper_QToolButton::toolButtonStyle(QToolButton* theWrappedObject) const
{
  return ( theWrappedObject->toolButtonStyle());
}


