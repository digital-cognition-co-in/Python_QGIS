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

#include "sipAPIQtNetwork.h"

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQDnsDomainNameRecord.cpp"

#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQDnsDomainNameRecord.cpp"


PyDoc_STRVAR(doc_QDnsDomainNameRecord_swap, "swap(self, QDnsDomainNameRecord)");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDnsDomainNameRecord* a0;
        QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp, sipType_QDnsDomainNameRecord, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->swap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_swap, doc_QDnsDomainNameRecord_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsDomainNameRecord_name, "name(self) -> QString");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_name, doc_QDnsDomainNameRecord_name);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsDomainNameRecord_timeToLive, "timeToLive(self) -> int");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp))
        {
            quint32 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->timeToLive();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_timeToLive, doc_QDnsDomainNameRecord_timeToLive);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsDomainNameRecord_value, "value(self) -> QString");

extern "C" {static PyObject *meth_QDnsDomainNameRecord_value(PyObject *, PyObject *);}
static PyObject *meth_QDnsDomainNameRecord_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsDomainNameRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsDomainNameRecord, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->value());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsDomainNameRecord, sipName_value, doc_QDnsDomainNameRecord_value);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsDomainNameRecord(void *, int);}
static void release_QDnsDomainNameRecord(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDnsDomainNameRecord *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDnsDomainNameRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QDnsDomainNameRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDnsDomainNameRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDnsDomainNameRecord *>(sipSrc);
}


extern "C" {static void *array_QDnsDomainNameRecord(SIP_SSIZE_T);}
static void *array_QDnsDomainNameRecord(SIP_SSIZE_T sipNrElem)
{
    return new QDnsDomainNameRecord[sipNrElem];
}


extern "C" {static void *copy_QDnsDomainNameRecord(const void *, SIP_SSIZE_T);}
static void *copy_QDnsDomainNameRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDnsDomainNameRecord(reinterpret_cast<const QDnsDomainNameRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsDomainNameRecord(sipSimpleWrapper *);}
static void dealloc_QDnsDomainNameRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDnsDomainNameRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDnsDomainNameRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsDomainNameRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDnsDomainNameRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDnsDomainNameRecord();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QDnsDomainNameRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDnsDomainNameRecord, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDnsDomainNameRecord(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDnsDomainNameRecord[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QDnsDomainNameRecord_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsDomainNameRecord_name)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDnsDomainNameRecord_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsDomainNameRecord_swap)},
    {SIP_MLNAME_CAST(sipName_timeToLive), meth_QDnsDomainNameRecord_timeToLive, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsDomainNameRecord_timeToLive)},
    {SIP_MLNAME_CAST(sipName_value), meth_QDnsDomainNameRecord_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsDomainNameRecord_value)}
};

PyDoc_STRVAR(doc_QDnsDomainNameRecord, "\1QDnsDomainNameRecord()\n"
    "QDnsDomainNameRecord(QDnsDomainNameRecord)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QDnsDomainNameRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDnsDomainNameRecord,
        {0}
    },
    {
        sipNameNr_QDnsDomainNameRecord,
        {0, 0, 1},
        4, methods_QDnsDomainNameRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDnsDomainNameRecord,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDnsDomainNameRecord,
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
    dealloc_QDnsDomainNameRecord,
    assign_QDnsDomainNameRecord,
    array_QDnsDomainNameRecord,
    copy_QDnsDomainNameRecord,
    release_QDnsDomainNameRecord,
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