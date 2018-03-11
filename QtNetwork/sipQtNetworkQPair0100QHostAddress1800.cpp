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

#line 88 "sip/QtCore/qpair.sip"
#include <qpair.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"

#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"


extern "C" {static void assign_QPair_0100QHostAddress_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_QPair_0100QHostAddress_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPair<QHostAddress,int> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPair<QHostAddress,int> *>(sipSrc);
}


extern "C" {static void *array_QPair_0100QHostAddress_1800(SIP_SSIZE_T);}
static void *array_QPair_0100QHostAddress_1800(SIP_SSIZE_T sipNrElem)
{
    return new QPair<QHostAddress,int>[sipNrElem];
}


extern "C" {static void *copy_QPair_0100QHostAddress_1800(const void *, SIP_SSIZE_T);}
static void *copy_QPair_0100QHostAddress_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPair<QHostAddress,int>(reinterpret_cast<const QPair<QHostAddress,int> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QPair_0100QHostAddress_1800(void *, int);}
static void release_QPair_0100QHostAddress_1800(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QPair<QHostAddress,int> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QPair_0100QHostAddress_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPair_0100QHostAddress_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPair<QHostAddress,int> **sipCppPtr = reinterpret_cast<QPair<QHostAddress,int> **>(sipCppPtrV);

#line 130 "sip/QtCore/qpair.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return (PyTuple_Size(sipPy) == 2 && sipCanConvertToType(PyTuple_GET_ITEM(sipPy, 0), sipType_QHostAddress, SIP_NOT_NONE));

    QPair<QHostAddress, int> *qp = new QPair<QHostAddress, int>;

    int state;
    QHostAddress *t = reinterpret_cast<QHostAddress *>(sipConvertToType(PyTuple_GET_ITEM(sipPy, 0), sipType_QHostAddress, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

    if (*sipIsErr)
    {
        sipReleaseType(t, sipType_QHostAddress, state);

        delete qp;
        return 0;
    }

    qp->first = *t;
    sipReleaseType(t, sipType_QHostAddress, state);

    qp->second = SIPLong_AsLong(PyTuple_GET_ITEM(sipPy, 1));

    *sipCppPtr = qp;

    return sipGetState(sipTransferObj);
#line 104 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"
}


extern "C" {static PyObject *convertFrom_QPair_0100QHostAddress_1800(void *, PyObject *);}
static PyObject *convertFrom_QPair_0100QHostAddress_1800(void *sipCppV, PyObject *sipTransferObj)
{
   QPair<QHostAddress,int> *sipCpp = reinterpret_cast<QPair<QHostAddress,int> *>(sipCppV);

#line 92 "sip/QtCore/qpair.sip"
    // Create the tuple.
    PyObject *tup = PyTuple_New(2);

    if (!tup)
        return 0;

    PyObject *obj;

    // Convert the first part.
    QHostAddress *t = new QHostAddress(sipCpp->first);

    obj = sipConvertFromNewType(t, sipType_QHostAddress, sipTransferObj);

    if (!obj)
    {
        delete t;

        Py_DECREF(tup);
        return 0;
    }

    PyTuple_SET_ITEM(tup, 0, obj);

    // Convert the second part.
    obj = SIPLong_FromLong(sipCpp->second);

    if (!obj)
    {
        Py_DECREF(tup);
        return 0;
    }

    PyTuple_SET_ITEM(tup, 1, obj);

    return tup;
#line 149 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QPair_0100QHostAddress_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_3469,
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
    assign_QPair_0100QHostAddress_1800,
    array_QPair_0100QHostAddress_1800,
    copy_QPair_0100QHostAddress_1800,
    release_QPair_0100QHostAddress_1800,
    convertTo_QPair_0100QHostAddress_1800,
    convertFrom_QPair_0100QHostAddress_1800
};
