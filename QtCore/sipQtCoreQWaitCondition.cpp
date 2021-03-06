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

#include "sipAPIQtCore.h"

#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qwaitcondition.sip"
#include <qwaitcondition.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQWaitCondition.cpp"

#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qmutex.sip"
#include <qmutex.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQWaitCondition.cpp"
#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qreadwritelock.sip"
#include <qreadwritelock.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQWaitCondition.cpp"


PyDoc_STRVAR(doc_QWaitCondition_wait, "wait(self, QMutex, msecs: int = ULONG_MAX) -> bool\n"
    "wait(self, QReadWriteLock, msecs: int = ULONG_MAX) -> bool");

extern "C" {static PyObject *meth_QWaitCondition_wait(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWaitCondition_wait(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QMutex* a0;
        unsigned long a1 = ULONG_MAX;
        QWaitCondition *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|m", &sipSelf, sipType_QWaitCondition, &sipCpp, sipType_QMutex, &a0, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->wait(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QReadWriteLock* a0;
        unsigned long a1 = ULONG_MAX;
        QWaitCondition *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_msecs,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|m", &sipSelf, sipType_QWaitCondition, &sipCpp, sipType_QReadWriteLock, &a0, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->wait(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWaitCondition, sipName_wait, doc_QWaitCondition_wait);

    return NULL;
}


PyDoc_STRVAR(doc_QWaitCondition_wakeOne, "wakeOne(self)");

extern "C" {static PyObject *meth_QWaitCondition_wakeOne(PyObject *, PyObject *);}
static PyObject *meth_QWaitCondition_wakeOne(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWaitCondition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWaitCondition, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->wakeOne();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWaitCondition, sipName_wakeOne, doc_QWaitCondition_wakeOne);

    return NULL;
}


PyDoc_STRVAR(doc_QWaitCondition_wakeAll, "wakeAll(self)");

extern "C" {static PyObject *meth_QWaitCondition_wakeAll(PyObject *, PyObject *);}
static PyObject *meth_QWaitCondition_wakeAll(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWaitCondition *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWaitCondition, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->wakeAll();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWaitCondition, sipName_wakeAll, doc_QWaitCondition_wakeAll);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWaitCondition(void *, int);}
static void release_QWaitCondition(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWaitCondition *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWaitCondition(sipSimpleWrapper *);}
static void dealloc_QWaitCondition(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWaitCondition(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWaitCondition(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWaitCondition(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWaitCondition *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWaitCondition();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWaitCondition[] = {
    {SIP_MLNAME_CAST(sipName_wait), (PyCFunction)meth_QWaitCondition_wait, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QWaitCondition_wait)},
    {SIP_MLNAME_CAST(sipName_wakeAll), meth_QWaitCondition_wakeAll, METH_VARARGS, SIP_MLDOC_CAST(doc_QWaitCondition_wakeAll)},
    {SIP_MLNAME_CAST(sipName_wakeOne), meth_QWaitCondition_wakeOne, METH_VARARGS, SIP_MLDOC_CAST(doc_QWaitCondition_wakeOne)}
};

PyDoc_STRVAR(doc_QWaitCondition, "\1QWaitCondition()");


pyqt4ClassTypeDef sipTypeDef_QtCore_QWaitCondition = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWaitCondition,
        {0}
    },
    {
        sipNameNr_QWaitCondition,
        {0, 0, 1},
        3, methods_QWaitCondition,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWaitCondition,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWaitCondition,
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
    dealloc_QWaitCondition,
    0,
    0,
    0,
    release_QWaitCondition,
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
