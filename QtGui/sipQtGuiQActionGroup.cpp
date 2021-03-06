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

#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qactiongroup.sip"
#include <qactiongroup.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"

#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qaction.sip"
#include <qaction.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 35 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 56 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 62 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 65 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 74 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 77 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 80 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 83 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 86 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionGroup.cpp"


class sipQActionGroup : public QActionGroup
{
public:
    sipQActionGroup(QObject*);
    virtual ~sipQActionGroup();

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
    sipQActionGroup(const sipQActionGroup &);
    sipQActionGroup &operator = (const sipQActionGroup &);

    char sipPyMethods[7];
};

sipQActionGroup::sipQActionGroup(QObject*a0): QActionGroup(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQActionGroup::~sipQActionGroup()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQActionGroup::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QActionGroup);
}

int sipQActionGroup::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QActionGroup::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QActionGroup,_c,_id,_a);

    return _id;
}

void *sipQActionGroup::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QActionGroup, _clname)) ? this : QActionGroup::qt_metacast(_clname);
}

void sipQActionGroup::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QActionGroup::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQActionGroup::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QActionGroup::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQActionGroup::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QActionGroup::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQActionGroup::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QActionGroup::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQActionGroup::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QActionGroup::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQActionGroup::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QActionGroup::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQActionGroup::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QActionGroup::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QActionGroup_addAction, "addAction(self, QAction) -> QAction\n"
    "addAction(self, QString) -> QAction\n"
    "addAction(self, QIcon, QString) -> QAction");

extern "C" {static PyObject *meth_QActionGroup_addAction(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_addAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAction* a0;
        QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QActionGroup, &sipCpp, sipType_QAction, &a0))
        {
            QAction*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->addAction(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAction,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QActionGroup, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QAction*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->addAction(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_QAction,sipSelf);
        }
    }

    {
        const QIcon* a0;
        const QString* a1;
        int a1State = 0;
        QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QActionGroup, &sipCpp, sipType_QIcon, &a0, sipType_QString,&a1, &a1State))
        {
            QAction*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->addAction(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromType(sipRes,sipType_QAction,sipSelf);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_addAction, doc_QActionGroup_addAction);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_removeAction, "removeAction(self, QAction)");

extern "C" {static PyObject *meth_QActionGroup_removeAction(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_removeAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAction* a0;
        QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ<", &sipSelf, sipType_QActionGroup, &sipCpp, sipType_QAction, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeAction(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_removeAction, doc_QActionGroup_removeAction);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_actions, "actions(self) -> object");

extern "C" {static PyObject *meth_QActionGroup_actions(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_actions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionGroup, &sipCpp))
        {
            QList<QAction*>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QAction*>(sipCpp->actions());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_actions, doc_QActionGroup_actions);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_checkedAction, "checkedAction(self) -> QAction");

extern "C" {static PyObject *meth_QActionGroup_checkedAction(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_checkedAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionGroup, &sipCpp))
        {
            QAction*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->checkedAction();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_checkedAction, doc_QActionGroup_checkedAction);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_isExclusive, "isExclusive(self) -> bool");

extern "C" {static PyObject *meth_QActionGroup_isExclusive(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_isExclusive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionGroup, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isExclusive();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_isExclusive, doc_QActionGroup_isExclusive);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_isEnabled, "isEnabled(self) -> bool");

extern "C" {static PyObject *meth_QActionGroup_isEnabled(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_isEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionGroup, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEnabled();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_isEnabled, doc_QActionGroup_isEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_isVisible, "isVisible(self) -> bool");

extern "C" {static PyObject *meth_QActionGroup_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionGroup, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isVisible();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_isVisible, doc_QActionGroup_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_setEnabled, "setEnabled(self, bool)");

extern "C" {static PyObject *meth_QActionGroup_setEnabled(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_setEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QActionGroup, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setEnabled(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_setEnabled, doc_QActionGroup_setEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_setDisabled, "setDisabled(self, bool)");

extern "C" {static PyObject *meth_QActionGroup_setDisabled(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_setDisabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QActionGroup, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDisabled(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_setDisabled, doc_QActionGroup_setDisabled);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_setVisible, "setVisible(self, bool)");

extern "C" {static PyObject *meth_QActionGroup_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QActionGroup, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setVisible(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_setVisible, doc_QActionGroup_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QActionGroup_setExclusive, "setExclusive(self, bool)");

extern "C" {static PyObject *meth_QActionGroup_setExclusive(PyObject *, PyObject *);}
static PyObject *meth_QActionGroup_setExclusive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QActionGroup *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QActionGroup, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setExclusive(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionGroup, sipName_setExclusive, doc_QActionGroup_setExclusive);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QActionGroup(void *, int);}
static void release_QActionGroup(void *sipCppV,int)
{
    QActionGroup *sipCpp = reinterpret_cast<QActionGroup *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QActionGroup(sipSimpleWrapper *);}
static void dealloc_QActionGroup(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQActionGroup *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QActionGroup(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QActionGroup(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QActionGroup(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQActionGroup *sipCpp = 0;

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQActionGroup(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QActionGroup[] = {{138, 0, 1}};


static PyMethodDef methods_QActionGroup[] = {
    {SIP_MLNAME_CAST(sipName_actions), meth_QActionGroup_actions, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_actions)},
    {SIP_MLNAME_CAST(sipName_addAction), meth_QActionGroup_addAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_addAction)},
    {SIP_MLNAME_CAST(sipName_checkedAction), meth_QActionGroup_checkedAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_checkedAction)},
    {SIP_MLNAME_CAST(sipName_isEnabled), meth_QActionGroup_isEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_isEnabled)},
    {SIP_MLNAME_CAST(sipName_isExclusive), meth_QActionGroup_isExclusive, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_isExclusive)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QActionGroup_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_isVisible)},
    {SIP_MLNAME_CAST(sipName_removeAction), meth_QActionGroup_removeAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_removeAction)},
    {SIP_MLNAME_CAST(sipName_setDisabled), meth_QActionGroup_setDisabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_setDisabled)},
    {SIP_MLNAME_CAST(sipName_setEnabled), meth_QActionGroup_setEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_setEnabled)},
    {SIP_MLNAME_CAST(sipName_setExclusive), meth_QActionGroup_setExclusive, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_setExclusive)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QActionGroup_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionGroup_setVisible)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QActionGroup[] = {
    {"hovered(QAction*)", "\1hovered(self, QAction)", 0, 0},
    {"triggered(QAction*)", "\1triggered(self, QAction)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QActionGroup, "\1QActionGroup(QObject)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QActionGroup = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QActionGroup,
        {0}
    },
    {
        sipNameNr_QActionGroup,
        {0, 0, 1},
        11, methods_QActionGroup,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QActionGroup,
    -1,
    -1,
    supers_QActionGroup,
    0,
    init_type_QActionGroup,
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
    dealloc_QActionGroup,
    0,
    0,
    0,
    release_QActionGroup,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QActionGroup::staticMetaObject,
    0,
    signals_QActionGroup,
};
