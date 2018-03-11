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

#line 117 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qvalidator.sip"
#include <qvalidator.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"

#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qvalidator.sip"
#include <qvalidator.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 35 "sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 35 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 56 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 62 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 65 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 74 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 77 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 80 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 83 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQDoubleValidator.cpp"


class sipQDoubleValidator : public QDoubleValidator
{
public:
    sipQDoubleValidator(QObject*);
    sipQDoubleValidator(double,double,int,QObject*);
    virtual ~sipQDoubleValidator();

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
    void fixup(QString&) const;
    void setRange(double,double,int);
    QValidator::State validate(QString&,int&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDoubleValidator(const sipQDoubleValidator &);
    sipQDoubleValidator &operator = (const sipQDoubleValidator &);

    char sipPyMethods[12];
};

sipQDoubleValidator::sipQDoubleValidator(QObject*a0): QDoubleValidator(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDoubleValidator::sipQDoubleValidator(double a0,double a1,int a2,QObject*a3): QDoubleValidator(a0,a1,a2,a3), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDoubleValidator::~sipQDoubleValidator()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQDoubleValidator::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QDoubleValidator);
}

int sipQDoubleValidator::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QDoubleValidator::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QDoubleValidator,_c,_id,_a);

    return _id;
}

void *sipQDoubleValidator::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QDoubleValidator, _clname)) ? this : QDoubleValidator::qt_metacast(_clname);
}

void sipQDoubleValidator::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QDoubleValidator::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDoubleValidator::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QDoubleValidator::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDoubleValidator::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QDoubleValidator::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDoubleValidator::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QDoubleValidator::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDoubleValidator::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QDoubleValidator::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQDoubleValidator::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QDoubleValidator::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQDoubleValidator::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QDoubleValidator::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQDoubleValidator::fixup(QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_fixup);

    if (!sipMeth)
    {
        QDoubleValidator::fixup(a0);
        return;
    }

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        extern void sipVH_QtGui_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QString&);

        sipVH_QtGui_33(sipGILState, 0, sipPySelf, sipMeth, a0);
        return;
    }

    if (sipIsAPIEnabled(sipName_QString, 2, 0))
    {
        extern void sipVH_QtGui_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QString&);

        sipVH_QtGui_34(sipGILState, 0, sipPySelf, sipMeth, a0);
        return;
    }

    QDoubleValidator::fixup(a0);
}

void sipQDoubleValidator::setRange(double a0,double a1,int a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_setRange);

    if (!sipMeth)
    {
        QDoubleValidator::setRange(a0,a1,a2);
        return;
    }

    extern void sipVH_QtGui_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, double,double,int);

    sipVH_QtGui_31(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

QValidator::State sipQDoubleValidator::validate(QString& a0,int& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_validate);

    if (!sipMeth)
        return QDoubleValidator::validate(a0,a1);

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        extern QValidator::State sipVH_QtGui_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QString&,int&);

        return sipVH_QtGui_29(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
    }

    if (sipIsAPIEnabled(sipName_QString, 2, 0))
    {
        extern QValidator::State sipVH_QtGui_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QString&,int&);

        return sipVH_QtGui_30(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
    }

    return QDoubleValidator::validate(a0,a1);
}


PyDoc_STRVAR(doc_QDoubleValidator_validate, "validate(self, QString, int) -> Tuple[QValidator.State, int]");

extern "C" {static PyObject *meth_QDoubleValidator_validate(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_validate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    if (sipIsAPIEnabled(sipName_QString, 2, 0))
    {
        QString* a0;
        int a0State = 0;
        int a1;
        const QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QDoubleValidator, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            QValidator::State sipRes;
            PyObject *sipResObj;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QDoubleValidator::validate(*a0,a1) : sipCpp->validate(*a0,a1));
            Py_END_ALLOW_THREADS

            sipResObj = sipBuildResult(0,"(FDi)",sipRes,sipType_QValidator_State,a0,sipType_QString,NULL,a1);
            sipReleaseType(a0,sipType_QString,a0State);

            return sipResObj;
        }
    }

    if (sipIsAPIEnabled(sipName_QString, 0, 2))
    {
        QString* a0;
        int a1;
        const QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9i", &sipSelf, sipType_QDoubleValidator, &sipCpp, sipType_QString,&a0, &a1))
        {
            QValidator::State sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QDoubleValidator::validate(*a0,a1) : sipCpp->validate(*a0,a1));
            Py_END_ALLOW_THREADS

            return sipBuildResult(0,"(Fi)",sipRes,sipType_QValidator_State,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_validate, doc_QDoubleValidator_validate);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_setRange, "setRange(self, float, float, decimals: int = 0)");

extern "C" {static PyObject *meth_QDoubleValidator_setRange(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_setRange(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        double a0;
        double a1;
        int a2 = 0;
        QDoubleValidator *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_decimals,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bdd|i", &sipSelf, sipType_QDoubleValidator, &sipCpp, &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QDoubleValidator::setRange(a0,a1,a2) : sipCpp->setRange(a0,a1,a2));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_setRange, doc_QDoubleValidator_setRange);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_setBottom, "setBottom(self, float)");

extern "C" {static PyObject *meth_QDoubleValidator_setBottom(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_setBottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QDoubleValidator, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBottom(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_setBottom, doc_QDoubleValidator_setBottom);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_setTop, "setTop(self, float)");

extern "C" {static PyObject *meth_QDoubleValidator_setTop(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_setTop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QDoubleValidator, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTop(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_setTop, doc_QDoubleValidator_setTop);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_setDecimals, "setDecimals(self, int)");

extern "C" {static PyObject *meth_QDoubleValidator_setDecimals(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_setDecimals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDoubleValidator, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDecimals(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_setDecimals, doc_QDoubleValidator_setDecimals);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_bottom, "bottom(self) -> float");

extern "C" {static PyObject *meth_QDoubleValidator_bottom(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_bottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDoubleValidator, &sipCpp))
        {
            double sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bottom();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_bottom, doc_QDoubleValidator_bottom);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_top, "top(self) -> float");

extern "C" {static PyObject *meth_QDoubleValidator_top(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_top(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDoubleValidator, &sipCpp))
        {
            double sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->top();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_top, doc_QDoubleValidator_top);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_decimals, "decimals(self) -> int");

extern "C" {static PyObject *meth_QDoubleValidator_decimals(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_decimals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDoubleValidator, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->decimals();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_decimals, doc_QDoubleValidator_decimals);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_setNotation, "setNotation(self, QDoubleValidator.Notation)");

extern "C" {static PyObject *meth_QDoubleValidator_setNotation(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_setNotation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDoubleValidator::Notation a0;
        QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QDoubleValidator, &sipCpp, sipType_QDoubleValidator_Notation, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNotation(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_setNotation, doc_QDoubleValidator_setNotation);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_notation, "notation(self) -> QDoubleValidator.Notation");

extern "C" {static PyObject *meth_QDoubleValidator_notation(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_notation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDoubleValidator, &sipCpp))
        {
            QDoubleValidator::Notation sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->notation();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QDoubleValidator_Notation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_notation, doc_QDoubleValidator_notation);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_bottomChanged, "bottomChanged(self, float)");

extern "C" {static PyObject *meth_QDoubleValidator_bottomChanged(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_bottomChanged(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QDoubleValidator, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->bottomChanged(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_bottomChanged, doc_QDoubleValidator_bottomChanged);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_topChanged, "topChanged(self, float)");

extern "C" {static PyObject *meth_QDoubleValidator_topChanged(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_topChanged(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QDoubleValidator, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->topChanged(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_topChanged, doc_QDoubleValidator_topChanged);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_decimalsChanged, "decimalsChanged(self, int)");

extern "C" {static PyObject *meth_QDoubleValidator_decimalsChanged(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_decimalsChanged(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDoubleValidator, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->decimalsChanged(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_decimalsChanged, doc_QDoubleValidator_decimalsChanged);

    return NULL;
}


PyDoc_STRVAR(doc_QDoubleValidator_notationChanged, "notationChanged(self, QDoubleValidator.Notation)");

extern "C" {static PyObject *meth_QDoubleValidator_notationChanged(PyObject *, PyObject *);}
static PyObject *meth_QDoubleValidator_notationChanged(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDoubleValidator::Notation a0;
        QDoubleValidator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QDoubleValidator, &sipCpp, sipType_QDoubleValidator_Notation, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->notationChanged(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDoubleValidator, sipName_notationChanged, doc_QDoubleValidator_notationChanged);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDoubleValidator(void *, int);}
static void release_QDoubleValidator(void *sipCppV,int)
{
    QDoubleValidator *sipCpp = reinterpret_cast<QDoubleValidator *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDoubleValidator(sipSimpleWrapper *);}
static void dealloc_QDoubleValidator(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDoubleValidator *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDoubleValidator(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDoubleValidator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDoubleValidator(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQDoubleValidator *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDoubleValidator(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        double a0;
        double a1;
        int a2;
        QObject* a3 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "ddi|JH", &a0, &a1, &a2, sipType_QObject, &a3, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDoubleValidator(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDoubleValidator[] = {{720, 255, 1}};


static PyMethodDef methods_QDoubleValidator[] = {
    {SIP_MLNAME_CAST(sipName_bottom), meth_QDoubleValidator_bottom, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_bottom)},
    {SIP_MLNAME_CAST(sipName_bottomChanged), meth_QDoubleValidator_bottomChanged, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_bottomChanged)},
    {SIP_MLNAME_CAST(sipName_decimals), meth_QDoubleValidator_decimals, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_decimals)},
    {SIP_MLNAME_CAST(sipName_decimalsChanged), meth_QDoubleValidator_decimalsChanged, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_decimalsChanged)},
    {SIP_MLNAME_CAST(sipName_notation), meth_QDoubleValidator_notation, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_notation)},
    {SIP_MLNAME_CAST(sipName_notationChanged), meth_QDoubleValidator_notationChanged, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_notationChanged)},
    {SIP_MLNAME_CAST(sipName_setBottom), meth_QDoubleValidator_setBottom, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_setBottom)},
    {SIP_MLNAME_CAST(sipName_setDecimals), meth_QDoubleValidator_setDecimals, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_setDecimals)},
    {SIP_MLNAME_CAST(sipName_setNotation), meth_QDoubleValidator_setNotation, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_setNotation)},
    {SIP_MLNAME_CAST(sipName_setRange), (PyCFunction)meth_QDoubleValidator_setRange, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDoubleValidator_setRange)},
    {SIP_MLNAME_CAST(sipName_setTop), meth_QDoubleValidator_setTop, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_setTop)},
    {SIP_MLNAME_CAST(sipName_top), meth_QDoubleValidator_top, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_top)},
    {SIP_MLNAME_CAST(sipName_topChanged), meth_QDoubleValidator_topChanged, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_topChanged)},
    {SIP_MLNAME_CAST(sipName_validate), meth_QDoubleValidator_validate, METH_VARARGS, SIP_MLDOC_CAST(doc_QDoubleValidator_validate)}
};

static sipEnumMemberDef enummembers_QDoubleValidator[] = {
    {sipName_ScientificNotation, static_cast<int>(QDoubleValidator::ScientificNotation), 95},
    {sipName_StandardNotation, static_cast<int>(QDoubleValidator::StandardNotation), 95},
};

PyDoc_STRVAR(doc_QDoubleValidator, "\1QDoubleValidator(parent: QObject = None)\n"
    "QDoubleValidator(float, float, int, parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QDoubleValidator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDoubleValidator,
        {0}
    },
    {
        sipNameNr_QDoubleValidator,
        {0, 0, 1},
        14, methods_QDoubleValidator,
        2, enummembers_QDoubleValidator,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDoubleValidator,
    -1,
    -1,
    supers_QDoubleValidator,
    0,
    init_type_QDoubleValidator,
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
    dealloc_QDoubleValidator,
    0,
    0,
    0,
    release_QDoubleValidator,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QDoubleValidator::staticMetaObject,
    0,
    0
};
