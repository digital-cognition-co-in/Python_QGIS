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

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qundogroup.sip"
#include <qundogroup.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"

#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 66 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qundostack.sip"
#include <qundostack.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qaction.sip"
#include <qaction.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 35 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 56 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 62 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 65 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 74 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 77 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 80 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 83 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 86 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQUndoGroup.cpp"


class sipQUndoGroup : public QUndoGroup
{
public:
    sipQUndoGroup(QObject*);
    virtual ~sipQUndoGroup();

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
    sipQUndoGroup(const sipQUndoGroup &);
    sipQUndoGroup &operator = (const sipQUndoGroup &);

    char sipPyMethods[7];
};

sipQUndoGroup::sipQUndoGroup(QObject*a0): QUndoGroup(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQUndoGroup::~sipQUndoGroup()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQUndoGroup::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QUndoGroup);
}

int sipQUndoGroup::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QUndoGroup::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QUndoGroup,_c,_id,_a);

    return _id;
}

void *sipQUndoGroup::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QUndoGroup, _clname)) ? this : QUndoGroup::qt_metacast(_clname);
}

void sipQUndoGroup::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QUndoGroup::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQUndoGroup::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QUndoGroup::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQUndoGroup::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QUndoGroup::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQUndoGroup::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QUndoGroup::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQUndoGroup::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QUndoGroup::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQUndoGroup::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QUndoGroup::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQUndoGroup::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QUndoGroup::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QUndoGroup_addStack, "addStack(self, QUndoStack)");

extern "C" {static PyObject *meth_QUndoGroup_addStack(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_addStack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoStack* a0;
        QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QUndoGroup, &sipCpp, sipType_QUndoStack, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->addStack(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_addStack, doc_QUndoGroup_addStack);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_removeStack, "removeStack(self, QUndoStack)");

extern "C" {static PyObject *meth_QUndoGroup_removeStack(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_removeStack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoStack* a0;
        QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QUndoGroup, &sipCpp, sipType_QUndoStack, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeStack(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_removeStack, doc_QUndoGroup_removeStack);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_stacks, "stacks(self) -> object");

extern "C" {static PyObject *meth_QUndoGroup_stacks(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_stacks(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoGroup, &sipCpp))
        {
            QList<QUndoStack*>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QUndoStack*>(sipCpp->stacks());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QUndoStack,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_stacks, doc_QUndoGroup_stacks);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_activeStack, "activeStack(self) -> QUndoStack");

extern "C" {static PyObject *meth_QUndoGroup_activeStack(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_activeStack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoGroup, &sipCpp))
        {
            QUndoStack*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->activeStack();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QUndoStack,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_activeStack, doc_QUndoGroup_activeStack);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_createRedoAction, "createRedoAction(self, QObject, prefix: QString = QString()) -> QAction");

extern "C" {static PyObject *meth_QUndoGroup_createRedoAction(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_createRedoAction(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        sipWrapper *sipOwner = 0;
        const QUndoGroup *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_prefix,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJH|J1", &sipSelf, sipType_QUndoGroup, &sipCpp, sipType_QObject, &a0, &sipOwner, sipType_QString,&a1, &a1State))
        {
            QAction*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->createRedoAction(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAction,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_createRedoAction, doc_QUndoGroup_createRedoAction);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_createUndoAction, "createUndoAction(self, QObject, prefix: QString = QString()) -> QAction");

extern "C" {static PyObject *meth_QUndoGroup_createUndoAction(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_createUndoAction(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        sipWrapper *sipOwner = 0;
        const QUndoGroup *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_prefix,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJH|J1", &sipSelf, sipType_QUndoGroup, &sipCpp, sipType_QObject, &a0, &sipOwner, sipType_QString,&a1, &a1State))
        {
            QAction*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->createUndoAction(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QAction,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_createUndoAction, doc_QUndoGroup_createUndoAction);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_canUndo, "canUndo(self) -> bool");

extern "C" {static PyObject *meth_QUndoGroup_canUndo(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_canUndo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoGroup, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canUndo();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_canUndo, doc_QUndoGroup_canUndo);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_canRedo, "canRedo(self) -> bool");

extern "C" {static PyObject *meth_QUndoGroup_canRedo(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_canRedo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoGroup, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canRedo();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_canRedo, doc_QUndoGroup_canRedo);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_undoText, "undoText(self) -> QString");

extern "C" {static PyObject *meth_QUndoGroup_undoText(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_undoText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoGroup, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->undoText());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_undoText, doc_QUndoGroup_undoText);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_redoText, "redoText(self) -> QString");

extern "C" {static PyObject *meth_QUndoGroup_redoText(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_redoText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoGroup, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->redoText());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_redoText, doc_QUndoGroup_redoText);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_isClean, "isClean(self) -> bool");

extern "C" {static PyObject *meth_QUndoGroup_isClean(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_isClean(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoGroup, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isClean();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_isClean, doc_QUndoGroup_isClean);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_redo, "redo(self)");

extern "C" {static PyObject *meth_QUndoGroup_redo(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_redo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoGroup, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->redo();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_redo, doc_QUndoGroup_redo);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_setActiveStack, "setActiveStack(self, QUndoStack)");

extern "C" {static PyObject *meth_QUndoGroup_setActiveStack(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_setActiveStack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoStack* a0;
        QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QUndoGroup, &sipCpp, sipType_QUndoStack, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setActiveStack(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_setActiveStack, doc_QUndoGroup_setActiveStack);

    return NULL;
}


PyDoc_STRVAR(doc_QUndoGroup_undo, "undo(self)");

extern "C" {static PyObject *meth_QUndoGroup_undo(PyObject *, PyObject *);}
static PyObject *meth_QUndoGroup_undo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUndoGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUndoGroup, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->undo();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUndoGroup, sipName_undo, doc_QUndoGroup_undo);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUndoGroup(void *, int);}
static void release_QUndoGroup(void *sipCppV,int)
{
    QUndoGroup *sipCpp = reinterpret_cast<QUndoGroup *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QUndoGroup(sipSimpleWrapper *);}
static void dealloc_QUndoGroup(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQUndoGroup *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QUndoGroup(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QUndoGroup(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QUndoGroup(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQUndoGroup *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQUndoGroup(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QUndoGroup[] = {{138, 0, 1}};


static PyMethodDef methods_QUndoGroup[] = {
    {SIP_MLNAME_CAST(sipName_activeStack), meth_QUndoGroup_activeStack, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_activeStack)},
    {SIP_MLNAME_CAST(sipName_addStack), meth_QUndoGroup_addStack, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_addStack)},
    {SIP_MLNAME_CAST(sipName_canRedo), meth_QUndoGroup_canRedo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_canRedo)},
    {SIP_MLNAME_CAST(sipName_canUndo), meth_QUndoGroup_canUndo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_canUndo)},
    {SIP_MLNAME_CAST(sipName_createRedoAction), (PyCFunction)meth_QUndoGroup_createRedoAction, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUndoGroup_createRedoAction)},
    {SIP_MLNAME_CAST(sipName_createUndoAction), (PyCFunction)meth_QUndoGroup_createUndoAction, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QUndoGroup_createUndoAction)},
    {SIP_MLNAME_CAST(sipName_isClean), meth_QUndoGroup_isClean, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_isClean)},
    {SIP_MLNAME_CAST(sipName_redo), meth_QUndoGroup_redo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_redo)},
    {SIP_MLNAME_CAST(sipName_redoText), meth_QUndoGroup_redoText, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_redoText)},
    {SIP_MLNAME_CAST(sipName_removeStack), meth_QUndoGroup_removeStack, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_removeStack)},
    {SIP_MLNAME_CAST(sipName_setActiveStack), meth_QUndoGroup_setActiveStack, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_setActiveStack)},
    {SIP_MLNAME_CAST(sipName_stacks), meth_QUndoGroup_stacks, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_stacks)},
    {SIP_MLNAME_CAST(sipName_undo), meth_QUndoGroup_undo, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_undo)},
    {SIP_MLNAME_CAST(sipName_undoText), meth_QUndoGroup_undoText, METH_VARARGS, SIP_MLDOC_CAST(doc_QUndoGroup_undoText)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QUndoGroup[] = {
    {"undoTextChanged(QString)", "\1undoTextChanged(self, QString)", 0, 0},
    {"redoTextChanged(QString)", "\1redoTextChanged(self, QString)", 0, 0},
    {"indexChanged(int)", "\1indexChanged(self, int)", 0, 0},
    {"cleanChanged(bool)", "\1cleanChanged(self, bool)", 0, 0},
    {"canUndoChanged(bool)", "\1canUndoChanged(self, bool)", 0, 0},
    {"canRedoChanged(bool)", "\1canRedoChanged(self, bool)", 0, 0},
    {"activeStackChanged(QUndoStack*)", "\1activeStackChanged(self, QUndoStack)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QUndoGroup, "\1QUndoGroup(parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QUndoGroup = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QUndoGroup,
        {0}
    },
    {
        sipNameNr_QUndoGroup,
        {0, 0, 1},
        14, methods_QUndoGroup,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QUndoGroup,
    -1,
    -1,
    supers_QUndoGroup,
    0,
    init_type_QUndoGroup,
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
    dealloc_QUndoGroup,
    0,
    0,
    0,
    release_QUndoGroup,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QUndoGroup::staticMetaObject,
    0,
    signals_QUndoGroup,
};
