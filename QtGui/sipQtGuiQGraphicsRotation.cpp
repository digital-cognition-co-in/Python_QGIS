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

#line 87 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qgraphicstransform.sip"
#include <qgraphicstransform.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"

#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 39 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qmatrix4x4.sip"
#include <qmatrix4x4.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 39 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qvector3d.sip"
#include <qvector3d.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 35 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 56 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 59 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 62 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 65 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 74 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 77 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 80 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 83 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsRotation.cpp"


class sipQGraphicsRotation : public QGraphicsRotation
{
public:
    sipQGraphicsRotation(QObject*);
    virtual ~sipQGraphicsRotation();

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
    void applyTo(QMatrix4x4*) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsRotation(const sipQGraphicsRotation &);
    sipQGraphicsRotation &operator = (const sipQGraphicsRotation &);

    char sipPyMethods[8];
};

sipQGraphicsRotation::sipQGraphicsRotation(QObject*a0): QGraphicsRotation(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsRotation::~sipQGraphicsRotation()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQGraphicsRotation::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QGraphicsRotation);
}

int sipQGraphicsRotation::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QGraphicsRotation::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QGraphicsRotation,_c,_id,_a);

    return _id;
}

void *sipQGraphicsRotation::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QGraphicsRotation, _clname)) ? this : QGraphicsRotation::qt_metacast(_clname);
}

void sipQGraphicsRotation::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QGraphicsRotation::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsRotation::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QGraphicsRotation::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsRotation::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QGraphicsRotation::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsRotation::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QGraphicsRotation::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsRotation::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QGraphicsRotation::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQGraphicsRotation::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QGraphicsRotation::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQGraphicsRotation::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QGraphicsRotation::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGraphicsRotation::applyTo(QMatrix4x4*a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_applyTo);

    if (!sipMeth)
    {
        QGraphicsRotation::applyTo(a0);
        return;
    }

    extern void sipVH_QtGui_187(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QMatrix4x4*);

    sipVH_QtGui_187(sipGILState, 0, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QGraphicsRotation_origin, "origin(self) -> QVector3D");

extern "C" {static PyObject *meth_QGraphicsRotation_origin(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_origin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsRotation, &sipCpp))
        {
            QVector3D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector3D(sipCpp->origin());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_origin, doc_QGraphicsRotation_origin);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_setOrigin, "setOrigin(self, QVector3D)");

extern "C" {static PyObject *meth_QGraphicsRotation_setOrigin(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_setOrigin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGraphicsRotation, &sipCpp, sipType_QVector3D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setOrigin(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_setOrigin, doc_QGraphicsRotation_setOrigin);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_angle, "angle(self) -> float");

extern "C" {static PyObject *meth_QGraphicsRotation_angle(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_angle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsRotation, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->angle();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_angle, doc_QGraphicsRotation_angle);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_setAngle, "setAngle(self, float)");

extern "C" {static PyObject *meth_QGraphicsRotation_setAngle(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_setAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsRotation, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAngle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_setAngle, doc_QGraphicsRotation_setAngle);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_axis, "axis(self) -> QVector3D");

extern "C" {static PyObject *meth_QGraphicsRotation_axis(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_axis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsRotation, &sipCpp))
        {
            QVector3D*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector3D(sipCpp->axis());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_axis, doc_QGraphicsRotation_axis);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_setAxis, "setAxis(self, QVector3D)\n"
    "setAxis(self, Qt.Axis)");

extern "C" {static PyObject *meth_QGraphicsRotation_setAxis(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_setAxis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D* a0;
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGraphicsRotation, &sipCpp, sipType_QVector3D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAxis(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        Qt::Axis a0;
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsRotation, &sipCpp, sipType_Qt_Axis, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAxis(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_setAxis, doc_QGraphicsRotation_setAxis);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_applyTo, "applyTo(self, QMatrix4x4)");

extern "C" {static PyObject *meth_QGraphicsRotation_applyTo(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_applyTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QMatrix4x4* a0;
        const QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsRotation, &sipCpp, sipType_QMatrix4x4, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsRotation::applyTo(a0) : sipCpp->applyTo(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_applyTo, doc_QGraphicsRotation_applyTo);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsRotation(void *, int);}
static void release_QGraphicsRotation(void *sipCppV,int)
{
    QGraphicsRotation *sipCpp = reinterpret_cast<QGraphicsRotation *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsRotation(sipSimpleWrapper *);}
static void dealloc_QGraphicsRotation(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsRotation *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsRotation(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGraphicsRotation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsRotation(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsRotation *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsRotation(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsRotation[] = {{210, 255, 1}};


static PyMethodDef methods_QGraphicsRotation[] = {
    {SIP_MLNAME_CAST(sipName_angle), meth_QGraphicsRotation_angle, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_angle)},
    {SIP_MLNAME_CAST(sipName_applyTo), meth_QGraphicsRotation_applyTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_applyTo)},
    {SIP_MLNAME_CAST(sipName_axis), meth_QGraphicsRotation_axis, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_axis)},
    {SIP_MLNAME_CAST(sipName_origin), meth_QGraphicsRotation_origin, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_origin)},
    {SIP_MLNAME_CAST(sipName_setAngle), meth_QGraphicsRotation_setAngle, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_setAngle)},
    {SIP_MLNAME_CAST(sipName_setAxis), meth_QGraphicsRotation_setAxis, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_setAxis)},
    {SIP_MLNAME_CAST(sipName_setOrigin), meth_QGraphicsRotation_setOrigin, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_setOrigin)}
};


/* Define this type's signals. */
static const pyqt4QtSignal signals_QGraphicsRotation[] = {
    {"axisChanged()", "\1axisChanged(self)", 0, 0},
    {"angleChanged()", "\1angleChanged(self)", 0, 0},
    {"originChanged()", "\1originChanged(self)", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QGraphicsRotation, "\1QGraphicsRotation(parent: QObject = None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsRotation = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsRotation,
        {0}
    },
    {
        sipNameNr_QGraphicsRotation,
        {0, 0, 1},
        7, methods_QGraphicsRotation,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsRotation,
    -1,
    -1,
    supers_QGraphicsRotation,
    0,
    init_type_QGraphicsRotation,
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
    dealloc_QGraphicsRotation,
    0,
    0,
    0,
    release_QGraphicsRotation,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QGraphicsRotation::staticMetaObject,
    0,
    signals_QGraphicsRotation,
};
