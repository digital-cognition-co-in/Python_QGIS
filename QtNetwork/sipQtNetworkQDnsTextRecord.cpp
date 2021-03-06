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

#line 113 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQDnsTextRecord.cpp"

#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQDnsTextRecord.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQDnsTextRecord.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQDnsTextRecord.cpp"


PyDoc_STRVAR(doc_QDnsTextRecord_swap, "swap(self, QDnsTextRecord)");

extern "C" {static PyObject *meth_QDnsTextRecord_swap(PyObject *, PyObject *);}
static PyObject *meth_QDnsTextRecord_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDnsTextRecord* a0;
        QDnsTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDnsTextRecord, &sipCpp, sipType_QDnsTextRecord, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->swap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsTextRecord, sipName_swap, doc_QDnsTextRecord_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsTextRecord_name, "name(self) -> QString");

extern "C" {static PyObject *meth_QDnsTextRecord_name(PyObject *, PyObject *);}
static PyObject *meth_QDnsTextRecord_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsTextRecord, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsTextRecord, sipName_name, doc_QDnsTextRecord_name);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsTextRecord_timeToLive, "timeToLive(self) -> int");

extern "C" {static PyObject *meth_QDnsTextRecord_timeToLive(PyObject *, PyObject *);}
static PyObject *meth_QDnsTextRecord_timeToLive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsTextRecord, &sipCpp))
        {
            quint32 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->timeToLive();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsTextRecord, sipName_timeToLive, doc_QDnsTextRecord_timeToLive);

    return NULL;
}


PyDoc_STRVAR(doc_QDnsTextRecord_values, "values(self) -> object");

extern "C" {static PyObject *meth_QDnsTextRecord_values(PyObject *, PyObject *);}
static PyObject *meth_QDnsTextRecord_values(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDnsTextRecord *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDnsTextRecord, &sipCpp))
        {
            QList<QByteArray>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->values());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDnsTextRecord, sipName_values, doc_QDnsTextRecord_values);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDnsTextRecord(void *, int);}
static void release_QDnsTextRecord(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDnsTextRecord *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDnsTextRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QDnsTextRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDnsTextRecord *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDnsTextRecord *>(sipSrc);
}


extern "C" {static void *array_QDnsTextRecord(SIP_SSIZE_T);}
static void *array_QDnsTextRecord(SIP_SSIZE_T sipNrElem)
{
    return new QDnsTextRecord[sipNrElem];
}


extern "C" {static void *copy_QDnsTextRecord(const void *, SIP_SSIZE_T);}
static void *copy_QDnsTextRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDnsTextRecord(reinterpret_cast<const QDnsTextRecord *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDnsTextRecord(sipSimpleWrapper *);}
static void dealloc_QDnsTextRecord(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDnsTextRecord(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDnsTextRecord(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDnsTextRecord(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDnsTextRecord *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDnsTextRecord();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QDnsTextRecord* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDnsTextRecord, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDnsTextRecord(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDnsTextRecord[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QDnsTextRecord_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsTextRecord_name)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QDnsTextRecord_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsTextRecord_swap)},
    {SIP_MLNAME_CAST(sipName_timeToLive), meth_QDnsTextRecord_timeToLive, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsTextRecord_timeToLive)},
    {SIP_MLNAME_CAST(sipName_values), meth_QDnsTextRecord_values, METH_VARARGS, SIP_MLDOC_CAST(doc_QDnsTextRecord_values)}
};

PyDoc_STRVAR(doc_QDnsTextRecord, "\1QDnsTextRecord()\n"
    "QDnsTextRecord(QDnsTextRecord)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QDnsTextRecord = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDnsTextRecord,
        {0}
    },
    {
        sipNameNr_QDnsTextRecord,
        {0, 0, 1},
        4, methods_QDnsTextRecord,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDnsTextRecord,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDnsTextRecord,
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
    dealloc_QDnsTextRecord,
    assign_QDnsTextRecord,
    array_QDnsTextRecord,
    copy_QDnsTextRecord,
    release_QDnsTextRecord,
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
