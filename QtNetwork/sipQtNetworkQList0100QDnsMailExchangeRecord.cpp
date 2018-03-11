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

#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQList0100QDnsMailExchangeRecord.cpp"

#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qdnslookup.sip"
#include <qdnslookup.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQList0100QDnsMailExchangeRecord.cpp"


extern "C" {static void assign_QList_0100QDnsMailExchangeRecord(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QDnsMailExchangeRecord(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QDnsMailExchangeRecord> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QDnsMailExchangeRecord> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QDnsMailExchangeRecord(SIP_SSIZE_T);}
static void *array_QList_0100QDnsMailExchangeRecord(SIP_SSIZE_T sipNrElem)
{
    return new QList<QDnsMailExchangeRecord>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QDnsMailExchangeRecord(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QDnsMailExchangeRecord(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QDnsMailExchangeRecord>(reinterpret_cast<const QList<QDnsMailExchangeRecord> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QDnsMailExchangeRecord(void *, int);}
static void release_QList_0100QDnsMailExchangeRecord(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QDnsMailExchangeRecord> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QDnsMailExchangeRecord(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QDnsMailExchangeRecord(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QDnsMailExchangeRecord> **sipCppPtr = reinterpret_cast<QList<QDnsMailExchangeRecord> **>(sipCppPtrV);

#line 64 "sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QDnsMailExchangeRecord, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QDnsMailExchangeRecord> *ql = new QList<QDnsMailExchangeRecord>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QDnsMailExchangeRecord *t = reinterpret_cast<QDnsMailExchangeRecord *>(sipConvertToType(itm, sipType_QDnsMailExchangeRecord, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QDnsMailExchangeRecord, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QDnsMailExchangeRecord, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 128 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQList0100QDnsMailExchangeRecord.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QDnsMailExchangeRecord(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QDnsMailExchangeRecord(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QDnsMailExchangeRecord> *sipCpp = reinterpret_cast<QList<QDnsMailExchangeRecord> *>(sipCppV);

#line 37 "sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QDnsMailExchangeRecord *t = new QDnsMailExchangeRecord(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QDnsMailExchangeRecord, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 162 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQList0100QDnsMailExchangeRecord.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QList_0100QDnsMailExchangeRecord = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_1353,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QDnsMailExchangeRecord,
    array_QList_0100QDnsMailExchangeRecord,
    copy_QList_0100QDnsMailExchangeRecord,
    release_QList_0100QDnsMailExchangeRecord,
    convertTo_QList_0100QDnsMailExchangeRecord,
    convertFrom_QList_0100QDnsMailExchangeRecord
};
