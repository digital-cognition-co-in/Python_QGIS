/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * If you are unsure which license is appropriate for your use, please
 * contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qdrag.sip"
#include <qdrag.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"

#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 35 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 31 "sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 35 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 56 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 62 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 65 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 74 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 77 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 80 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 83 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 86 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 89 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDrag.cpp"


class sipQDrag : public QDrag
{
public:
    sipQDrag(QObject*);
    virtual ~sipQDrag();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDrag(const sipQDrag &);
    sipQDrag &operator = (const sipQDrag &);

    char sipPyMethods[7];
};

sipQDrag::sipQDrag(QObject*a0): QDrag(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDrag::~sipQDrag()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQDrag::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QDrag);
}

int sipQDrag::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QDrag::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QDrag,_c,_id,_a);

    return _id;
}

void *sipQDrag::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QDrag, _clname)) ? this : QDrag::qt_metacast(_clname);
}

void sipQDrag::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QDrag::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QDrag::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QDrag::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QDrag::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDrag::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QDrag::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDrag::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QDrag::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQDrag::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QDrag::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QDrag_exec_, "exec_(self, supportedActions: Qt.DropActions = Qt.MoveAction) -> Qt.DropAction\n"
    "exec_(self, Qt.DropActions, Qt.DropAction) -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_exec_(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_exec_(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions a0def = Qt::MoveAction;
        Qt::DropActions* a0 = &a0def;
        int a0State = 0;
        QDrag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_supportedActions,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    {
        Qt::DropActions* a0;
        int a0State = 0;
        Qt::DropAction a1;
        QDrag *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1E", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State, sipType_Qt_DropAction, &a1))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_exec_, doc_QDrag_exec_);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_exec, "exec(self, Qt.DropActions, Qt.DropAction) -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_exec(PyObject *, PyObject *);}
static PyObject *meth_QDrag_exec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions* a0;
        int a0State = 0;
        Qt::DropAction a1;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1E", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State, sipType_Qt_DropAction, &a1))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->exec(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_exec, doc_QDrag_exec);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setMimeData, "setMimeData(self, QMimeData)");

extern "C" {static PyObject *meth_QDrag_setMimeData(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setMimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMimeData* a0;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QDrag, &sipCpp, sipType_QMimeData, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMimeData(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setMimeData, doc_QDrag_setMimeData);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_mimeData, "mimeData(self) -> QMimeData");

extern "C" {static PyObject *meth_QDrag_mimeData(PyObject *, PyObject *);}
static PyObject *meth_QDrag_mimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QMimeData*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mimeData();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QMimeData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_mimeData, doc_QDrag_mimeData);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setPixmap, "setPixmap(self, QPixmap)");

extern "C" {static PyObject *meth_QDrag_setPixmap(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDrag, &sipCpp, sipType_QPixmap, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPixmap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setPixmap, doc_QDrag_setPixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_pixmap, "pixmap(self) -> QPixmap");

extern "C" {static PyObject *meth_QDrag_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QDrag_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap(sipCpp->pixmap());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_pixmap, doc_QDrag_pixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setHotSpot, "setHotSpot(self, QPoint)");

extern "C" {static PyObject *meth_QDrag_setHotSpot(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setHotSpot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint* a0;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDrag, &sipCpp, sipType_QPoint, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHotSpot(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setHotSpot, doc_QDrag_setHotSpot);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_hotSpot, "hotSpot(self) -> QPoint");

extern "C" {static PyObject *meth_QDrag_hotSpot(PyObject *, PyObject *);}
static PyObject *meth_QDrag_hotSpot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QPoint*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->hotSpot());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_hotSpot, doc_QDrag_hotSpot);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_source, "source(self) -> QObject");

extern "C" {static PyObject *meth_QDrag_source(PyObject *, PyObject *);}
static PyObject *meth_QDrag_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->source();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_source, doc_QDrag_source);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_target, "target(self) -> QObject");

extern "C" {static PyObject *meth_QDrag_target(PyObject *, PyObject *);}
static PyObject *meth_QDrag_target(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            QObject*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->target();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_target, doc_QDrag_target);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_start, "start(self, supportedActions: Qt.DropActions = Qt.CopyAction) -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_start(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDrag_start(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropActions a0def = Qt::CopyAction;
        Qt::DropActions* a0 = &a0def;
        int a0State = 0;
        QDrag *sipCpp;

        static const char *sipKwdList[] = {
            sipName_supportedActions,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropActions, &a0, &a0State))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->start(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_DropActions,a0State);

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_start, doc_QDrag_start);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_setDragCursor, "setDragCursor(self, QPixmap, Qt.DropAction)");

extern "C" {static PyObject *meth_QDrag_setDragCursor(PyObject *, PyObject *);}
static PyObject *meth_QDrag_setDragCursor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap* a0;
        Qt::DropAction a1;
        QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9E", &sipSelf, sipType_QDrag, &sipCpp, sipType_QPixmap, &a0, sipType_Qt_DropAction, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDragCursor(*a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_setDragCursor, doc_QDrag_setDragCursor);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_dragCursor, "dragCursor(self, Qt.DropAction) -> QPixmap");

extern "C" {static PyObject *meth_QDrag_dragCursor(PyObject *, PyObject *);}
static PyObject *meth_QDrag_dragCursor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropAction a0;
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QDrag, &sipCpp, sipType_Qt_DropAction, &a0))
        {
            QPixmap*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap(sipCpp->dragCursor(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_dragCursor, doc_QDrag_dragCursor);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_supportedActions, "supportedActions(self) -> Qt.DropActions");

extern "C" {static PyObject *meth_QDrag_supportedActions(PyObject *, PyObject *);}
static PyObject *meth_QDrag_supportedActions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            Qt::DropActions*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::DropActions(sipCpp->supportedActions());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_supportedActions, doc_QDrag_supportedActions);

    return NULL;
}


PyDoc_STRVAR(doc_QDrag_defaultAction, "defaultAction(self) -> Qt.DropAction");

extern "C" {static PyObject *meth_QDrag_defaultAction(PyObject *, PyObject *);}
static PyObject *meth_QDrag_defaultAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDrag *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDrag, &sipCpp))
        {
            Qt::DropAction sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->defaultAction();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDrag, sipName_defaultAction, doc_QDrag_defaultAction);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDrag(void *, int);}
static void release_QDrag(void *sipCppV,int)
{
    QDrag *sipCpp = reinterpret_cast<QDrag *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDrag(sipSimpleWrapper *);}
static void dealloc_QDrag(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDrag *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDrag(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDrag(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDrag(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQDrag *sipCpp = 0;

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDrag(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDrag[] = {{138, 0, 1}};


static PyMethodDef methods_QDrag[] = {
    {SIP_MLNAME_CAST(sipName_defaultAction), meth_QDrag_defaultAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_defaultAction)},
    {SIP_MLNAME_CAST(sipName_dragCursor), meth_QDrag_dragCursor, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_dragCursor)},
    {SIP_MLNAME_CAST(sipName_exec), meth_QDrag_exec, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_exec)},
    {SIP_MLNAME_CAST(sipName_exec_), (PyCFunction)meth_QDrag_exec_, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDrag_exec_)},
    {SIP_MLNAME_CAST(sipName_hotSpot), meth_QDrag_hotSpot, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_hotSpot)},
    {SIP_MLNAME_CAST(sipName_mimeData), meth_QDrag_mimeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_mimeData)},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QDrag_pixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_pixmap)},
    {SIP_MLNAME_CAST(sipName_setDragCursor), meth_QDrag_setDragCursor, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setDragCursor)},
    {SIP_MLNAME_CAST(sipName_setHotSpot), meth_QDrag_setHotSpot, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setHotSpot)},
    {SIP_MLNAME_CAST(sipName_setMimeData), meth_QDrag_setMimeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setMimeData)},
    {SIP_MLNAME_CAST(sipName_setPixmap), meth_QDrag_setPixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_setPixmap)},
    {SIP_MLNAME_CAST(sipName_source), meth_QDrag_source, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_source)},
    {SIP_MLNAME_CAST(sipName_start), (PyCFunction)meth_QDrag_start, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDrag_start)},
    {SIP_MLNAME_CAST(sipName_supportedActions), meth_QDrag_supportedActions, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_supportedActions)},
    {SIP_MLNAME_CAST(sipName_target), meth_QDrag_target, METH_VARARGS, SIP_MLDOC_CAST(doc_QDrag_target)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QDrag[] = {
    {"targetChanged(QObject*)", "\1targetChanged(self, QObject)", 0, 0},
    {"actionChanged(Qt::DropAction)", "\1actionChanged(self, Qt.DropAction)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QDrag, "\1QDrag(QObject)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QDrag = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDrag,
        {0}
    },
    {
        sipNameNr_QDrag,
        {0, 0, 1},
        15, methods_QDrag,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDrag,
    -1,
    -1,
    supers_QDrag,
    0,
    init_type_QDrag,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QDrag,
    0,
    0,
    0,
    release_QDrag,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QDrag::staticMetaObject,
    0,
    signals_QDrag,
};
