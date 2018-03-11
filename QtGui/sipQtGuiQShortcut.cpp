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

#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qshortcut.sip"
#include <qshortcut.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"

#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 35 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 56 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 62 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 65 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 74 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 77 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 80 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 83 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"


class sipQShortcut : public QShortcut
{
public:
    sipQShortcut(QWidget*);
    sipQShortcut(const QKeySequence&,QWidget*,const char*,const char*,Qt::ShortcutContext);
    virtual ~sipQShortcut();

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
    sipQShortcut(const sipQShortcut &);
    sipQShortcut &operator = (const sipQShortcut &);

    char sipPyMethods[7];
};

sipQShortcut::sipQShortcut(QWidget*a0): QShortcut(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQShortcut::sipQShortcut(const QKeySequence& a0,QWidget*a1,const char*a2,const char*a3,Qt::ShortcutContext a4): QShortcut(a0,a1,a2,a3,a4), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQShortcut::~sipQShortcut()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQShortcut::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QShortcut);
}

int sipQShortcut::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QShortcut::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QShortcut,_c,_id,_a);

    return _id;
}

void *sipQShortcut::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QShortcut, _clname)) ? this : QShortcut::qt_metacast(_clname);
}

void sipQShortcut::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QShortcut::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQShortcut::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QShortcut::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQShortcut::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QShortcut::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQShortcut::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QShortcut::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQShortcut::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QShortcut::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQShortcut::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QShortcut::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQShortcut::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QShortcut::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QShortcut_setKey, "setKey(self, QKeySequence)");

extern "C" {static PyObject *meth_QShortcut_setKey(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QKeySequence* a0;
        int a0State = 0;
        QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QShortcut, &sipCpp, sipType_QKeySequence, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setKey(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setKey, doc_QShortcut_setKey);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_key, "key(self) -> QKeySequence");

extern "C" {static PyObject *meth_QShortcut_key(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            QKeySequence*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QKeySequence(sipCpp->key());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QKeySequence,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_key, doc_QShortcut_key);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_setEnabled, "setEnabled(self, bool)");

extern "C" {static PyObject *meth_QShortcut_setEnabled(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QShortcut, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setEnabled(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setEnabled, doc_QShortcut_setEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_isEnabled, "isEnabled(self) -> bool");

extern "C" {static PyObject *meth_QShortcut_isEnabled(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_isEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEnabled();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_isEnabled, doc_QShortcut_isEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_setContext, "setContext(self, Qt.ShortcutContext)");

extern "C" {static PyObject *meth_QShortcut_setContext(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setContext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ShortcutContext a0;
        QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QShortcut, &sipCpp, sipType_Qt_ShortcutContext, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setContext(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setContext, doc_QShortcut_setContext);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_context, "context(self) -> Qt.ShortcutContext");

extern "C" {static PyObject *meth_QShortcut_context(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_context(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            Qt::ShortcutContext sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->context();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_ShortcutContext);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_context, doc_QShortcut_context);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_setWhatsThis, "setWhatsThis(self, QString)");

extern "C" {static PyObject *meth_QShortcut_setWhatsThis(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setWhatsThis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QShortcut, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWhatsThis(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setWhatsThis, doc_QShortcut_setWhatsThis);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_whatsThis, "whatsThis(self) -> QString");

extern "C" {static PyObject *meth_QShortcut_whatsThis(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_whatsThis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->whatsThis());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_whatsThis, doc_QShortcut_whatsThis);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_id, "id(self) -> int");

extern "C" {static PyObject *meth_QShortcut_id(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_id(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->id();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_id, doc_QShortcut_id);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_parentWidget, "parentWidget(self) -> QWidget");

extern "C" {static PyObject *meth_QShortcut_parentWidget(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_parentWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            QWidget*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->parentWidget();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_parentWidget, doc_QShortcut_parentWidget);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_setAutoRepeat, "setAutoRepeat(self, bool)");

extern "C" {static PyObject *meth_QShortcut_setAutoRepeat(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_setAutoRepeat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QShortcut, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAutoRepeat(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_setAutoRepeat, doc_QShortcut_setAutoRepeat);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_autoRepeat, "autoRepeat(self) -> bool");

extern "C" {static PyObject *meth_QShortcut_autoRepeat(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_autoRepeat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QShortcut, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->autoRepeat();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_autoRepeat, doc_QShortcut_autoRepeat);

    return NULL;
}


PyDoc_STRVAR(doc_QShortcut_event, "event(self, QEvent) -> bool");

extern "C" {static PyObject *meth_QShortcut_event(PyObject *, PyObject *);}
static PyObject *meth_QShortcut_event(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        QShortcut *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pJ8", &sipSelf, sipType_QShortcut, &sipCpp, sipType_QEvent, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QShortcut::event(a0) : sipCpp->event(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QShortcut, sipName_event, doc_QShortcut_event);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QShortcut(void *, int);}
static void release_QShortcut(void *sipCppV,int)
{
    QShortcut *sipCpp = reinterpret_cast<QShortcut *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QShortcut(sipSimpleWrapper *);}
static void dealloc_QShortcut(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQShortcut *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QShortcut(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QShortcut(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QShortcut(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQShortcut *sipCpp = 0;

    {
        QWidget* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QWidget, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQShortcut(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QKeySequence* a0;
        int a0State = 0;
        QWidget* a1;
        char* a2Name = 0;
        PyObject *a2Callable = 0;
        char* a3Name = 0;
        PyObject *a3Callable = 0;
        Qt::ShortcutContext a4 = Qt::WindowShortcut;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_member,
            sipName_ambiguousMember,
            sipName_context,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1JH|UUE", sipType_QKeySequence, &a0, &a0State, sipType_QWidget, &a1, sipOwner, &a2Name, &a2Callable, &a3Name, &a3Callable, sipType_Qt_ShortcutContext, &a4))
        {
            int sipIsErr = 0;

#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qshortcut.sip"
        // Construct the shortcut without any connections.
        Py_BEGIN_ALLOW_THREADS
        sipCpp = new sipQShortcut(*a0, a1, 0, 0, a4);
        Py_END_ALLOW_THREADS
        
        if (a2Name || a2Callable)
        {
            void *rx2;
            const char *member2;
        
            // For convenience we use sipOwner from /TransferThis/ rather than
            // a1Wrapper from /GetWrapper/.
            rx2 = sipConvertRx(0, "()", (a2Callable ? a2Callable : (PyObject *)*sipOwner), a2Name, &member2, 0);
        
            if (rx2)
            {
                Py_BEGIN_ALLOW_THREADS
                QObject::connect(sipCpp, SIGNAL(activated()),
                                 reinterpret_cast<QObject *>(rx2), member2);
                Py_END_ALLOW_THREADS
            }
            else
                sipIsErr = 1;
        }
        
        if (a3Name || a3Callable)
        {
            void *rx3;
            const char *member3;
        
            // For convenience we use sipOwner from /TransferThis/ rather than
            // a1Wrapper from /GetWrapper/.
            rx3 = sipConvertRx(0, "()", (a3Callable ? a3Callable : (PyObject *)*sipOwner), a3Name, &member3, 0);
        
            if (rx3)
            {
                Py_BEGIN_ALLOW_THREADS
                QObject::connect(sipCpp, SIGNAL(activatedAmbiguously()),
                                 reinterpret_cast<QObject *>(rx3), member3);
                Py_END_ALLOW_THREADS
            }
            else
                sipIsErr = 1;
        }
        
        if (sipIsErr)
            delete sipCpp;
#line 792 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQShortcut.cpp"
            sipReleaseType(const_cast<QKeySequence *>(a0),sipType_QKeySequence,a0State);

            if (sipIsErr)
            {
                if (sipUnused)
                {
                    Py_XDECREF(*sipUnused);
                }

                sipAddException(sipErrorFail, sipParseErr);
                return NULL;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QShortcut[] = {{138, 0, 1}};


static PyMethodDef methods_QShortcut[] = {
    {SIP_MLNAME_CAST(sipName_autoRepeat), meth_QShortcut_autoRepeat, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_autoRepeat)},
    {SIP_MLNAME_CAST(sipName_context), meth_QShortcut_context, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_context)},
    {SIP_MLNAME_CAST(sipName_event), meth_QShortcut_event, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_event)},
    {SIP_MLNAME_CAST(sipName_id), meth_QShortcut_id, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_id)},
    {SIP_MLNAME_CAST(sipName_isEnabled), meth_QShortcut_isEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_isEnabled)},
    {SIP_MLNAME_CAST(sipName_key), meth_QShortcut_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_key)},
    {SIP_MLNAME_CAST(sipName_parentWidget), meth_QShortcut_parentWidget, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_parentWidget)},
    {SIP_MLNAME_CAST(sipName_setAutoRepeat), meth_QShortcut_setAutoRepeat, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setAutoRepeat)},
    {SIP_MLNAME_CAST(sipName_setContext), meth_QShortcut_setContext, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setContext)},
    {SIP_MLNAME_CAST(sipName_setEnabled), meth_QShortcut_setEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setEnabled)},
    {SIP_MLNAME_CAST(sipName_setKey), meth_QShortcut_setKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setKey)},
    {SIP_MLNAME_CAST(sipName_setWhatsThis), meth_QShortcut_setWhatsThis, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_setWhatsThis)},
    {SIP_MLNAME_CAST(sipName_whatsThis), meth_QShortcut_whatsThis, METH_VARARGS, SIP_MLDOC_CAST(doc_QShortcut_whatsThis)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QShortcut[] = {
    {"activatedAmbiguously()", "\1activatedAmbiguously(self)", 0, 0},
    {"activated()", "\1activated(self)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QShortcut, "\1QShortcut(QWidget)\n"
    "QShortcut(QKeySequence, QWidget, member: QT_SLOT = 0, ambiguousMember: QT_SLOT = 0, context: Qt.ShortcutContext = Qt.WindowShortcut)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QShortcut = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QShortcut,
        {0}
    },
    {
        sipNameNr_QShortcut,
        {0, 0, 1},
        13, methods_QShortcut,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QShortcut,
    -1,
    -1,
    supers_QShortcut,
    0,
    init_type_QShortcut,
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
    dealloc_QShortcut,
    0,
    0,
    0,
    release_QShortcut,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QShortcut::staticMetaObject,
    0,
    signals_QShortcut,
};
