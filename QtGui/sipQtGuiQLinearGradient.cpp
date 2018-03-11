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

#line 206 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQLinearGradient.cpp"

#line 119 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQLinearGradient.cpp"
#line 154 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQLinearGradient.cpp"
#line 252 "sip/QtCore/qvector.sip"
#include <qvector.h>
#include <qpair.h>
#line 45 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQLinearGradient.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 48 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQLinearGradient.cpp"


PyDoc_STRVAR(doc_QLinearGradient_start, "start(self) -> QPointF");

extern "C" {static PyObject *meth_QLinearGradient_start(PyObject *, PyObject *);}
static PyObject *meth_QLinearGradient_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLinearGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLinearGradient, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->start());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLinearGradient, sipName_start, doc_QLinearGradient_start);

    return NULL;
}


PyDoc_STRVAR(doc_QLinearGradient_finalStop, "finalStop(self) -> QPointF");

extern "C" {static PyObject *meth_QLinearGradient_finalStop(PyObject *, PyObject *);}
static PyObject *meth_QLinearGradient_finalStop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLinearGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLinearGradient, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->finalStop());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLinearGradient, sipName_finalStop, doc_QLinearGradient_finalStop);

    return NULL;
}


PyDoc_STRVAR(doc_QLinearGradient_setStart, "setStart(self, QPointF)\n"
    "setStart(self, float, float)");

extern "C" {static PyObject *meth_QLinearGradient_setStart(PyObject *, PyObject *);}
static PyObject *meth_QLinearGradient_setStart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QLinearGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLinearGradient, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStart(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        qreal a0;
        qreal a1;
        QLinearGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QLinearGradient, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStart(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLinearGradient, sipName_setStart, doc_QLinearGradient_setStart);

    return NULL;
}


PyDoc_STRVAR(doc_QLinearGradient_setFinalStop, "setFinalStop(self, QPointF)\n"
    "setFinalStop(self, float, float)");

extern "C" {static PyObject *meth_QLinearGradient_setFinalStop(PyObject *, PyObject *);}
static PyObject *meth_QLinearGradient_setFinalStop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPointF* a0;
        int a0State = 0;
        QLinearGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLinearGradient, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFinalStop(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        qreal a0;
        qreal a1;
        QLinearGradient *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_QLinearGradient, &sipCpp, &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFinalStop(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLinearGradient, sipName_setFinalStop, doc_QLinearGradient_setFinalStop);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLinearGradient(void *, int);}
static void release_QLinearGradient(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QLinearGradient *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QLinearGradient(void *, SIP_SSIZE_T, const void *);}
static void assign_QLinearGradient(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QLinearGradient *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QLinearGradient *>(sipSrc);
}


extern "C" {static void *array_QLinearGradient(SIP_SSIZE_T);}
static void *array_QLinearGradient(SIP_SSIZE_T sipNrElem)
{
    return new QLinearGradient[sipNrElem];
}


extern "C" {static void *copy_QLinearGradient(const void *, SIP_SSIZE_T);}
static void *copy_QLinearGradient(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QLinearGradient(reinterpret_cast<const QLinearGradient *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLinearGradient(sipSimpleWrapper *);}
static void dealloc_QLinearGradient(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLinearGradient(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QLinearGradient(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLinearGradient(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLinearGradient *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLinearGradient();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPointF* a0;
        int a0State = 0;
        const QPointF* a1;
        int a1State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J1", sipType_QPointF, &a0, &a0State, sipType_QPointF, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLinearGradient(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast<QPointF *>(a1),sipType_QPointF,a1State);

            return sipCpp;
        }
    }

    {
        qreal a0;
        qreal a1;
        qreal a2;
        qreal a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dddd", &a0, &a1, &a2, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLinearGradient(a0,a1,a2,a3);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QLinearGradient* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLinearGradient, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLinearGradient(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QLinearGradient[] = {{155, 255, 1}};


static PyMethodDef methods_QLinearGradient[] = {
    {SIP_MLNAME_CAST(sipName_finalStop), meth_QLinearGradient_finalStop, METH_VARARGS, SIP_MLDOC_CAST(doc_QLinearGradient_finalStop)},
    {SIP_MLNAME_CAST(sipName_setFinalStop), meth_QLinearGradient_setFinalStop, METH_VARARGS, SIP_MLDOC_CAST(doc_QLinearGradient_setFinalStop)},
    {SIP_MLNAME_CAST(sipName_setStart), meth_QLinearGradient_setStart, METH_VARARGS, SIP_MLDOC_CAST(doc_QLinearGradient_setStart)},
    {SIP_MLNAME_CAST(sipName_start), meth_QLinearGradient_start, METH_VARARGS, SIP_MLDOC_CAST(doc_QLinearGradient_start)}
};

PyDoc_STRVAR(doc_QLinearGradient, "\1QLinearGradient()\n"
    "QLinearGradient(QPointF, QPointF)\n"
    "QLinearGradient(float, float, float, float)\n"
    "QLinearGradient(QLinearGradient)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QLinearGradient = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QLinearGradient,
        {0}
    },
    {
        sipNameNr_QLinearGradient,
        {0, 0, 1},
        4, methods_QLinearGradient,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLinearGradient,
    -1,
    -1,
    supers_QLinearGradient,
    0,
    init_type_QLinearGradient,
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
    dealloc_QLinearGradient,
    assign_QLinearGradient,
    array_QLinearGradient,
    copy_QLinearGradient,
    release_QLinearGradient,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
