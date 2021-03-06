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

#line 130 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQ_IPV6ADDR.cpp"



extern "C" {static void assign_Q_IPV6ADDR(void *, SIP_SSIZE_T, const void *);}
static void assign_Q_IPV6ADDR(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Q_IPV6ADDR *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Q_IPV6ADDR *>(sipSrc);
}


extern "C" {static void *array_Q_IPV6ADDR(SIP_SSIZE_T);}
static void *array_Q_IPV6ADDR(SIP_SSIZE_T sipNrElem)
{
    return new Q_IPV6ADDR[sipNrElem];
}


extern "C" {static void *copy_Q_IPV6ADDR(const void *, SIP_SSIZE_T);}
static void *copy_Q_IPV6ADDR(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Q_IPV6ADDR(reinterpret_cast<const Q_IPV6ADDR *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_Q_IPV6ADDR(void *, int);}
static void release_Q_IPV6ADDR(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<Q_IPV6ADDR *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_Q_IPV6ADDR(PyObject *, void **, int *, PyObject *);}
static int convertTo_Q_IPV6ADDR(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Q_IPV6ADDR **sipCppPtr = reinterpret_cast<Q_IPV6ADDR **>(sipCppPtrV);

#line 159 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qhostaddress.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return (PySequence_Check(sipPy) && PySequence_Size(sipPy) == 16);

    Q_IPV6ADDR *qa = new Q_IPV6ADDR;
 
    for (SIP_SSIZE_T i = 0; i < 16; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);

        if (!itm)
        {
            delete qa;
            *sipIsErr = 1;

            return 0;
        }

        (*qa)[i] = SIPLong_AsLong(itm);

        Py_DECREF(itm);
    }
 
    *sipCppPtr = qa;
 
    return sipGetState(sipTransferObj);
#line 102 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQ_IPV6ADDR.cpp"
}


extern "C" {static PyObject *convertFrom_Q_IPV6ADDR(void *, PyObject *);}
static PyObject *convertFrom_Q_IPV6ADDR(void *sipCppV, PyObject *)
{
   Q_IPV6ADDR *sipCpp = reinterpret_cast<Q_IPV6ADDR *>(sipCppV);

#line 134 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qhostaddress.sip"
    // Create the tuple.
    PyObject *t;

    if ((t = PyTuple_New(16)) == NULL)
        return NULL;

    // Set the tuple elements.
    for (int i = 0; i < 16; ++i)
    {
        PyObject *pobj;

        if ((pobj = SIPLong_FromLong((*sipCpp)[i])) == NULL)
        {
            Py_DECREF(t);

            return NULL;
        }

        PyTuple_SET_ITEM(t, i, pobj);
    }

    return t;
#line 134 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQ_IPV6ADDR.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_Q_IPV6ADDR = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_Q_IPV6ADDR,
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
    assign_Q_IPV6ADDR,
    array_Q_IPV6ADDR,
    copy_Q_IPV6ADDR,
    release_Q_IPV6ADDR,
    convertTo_Q_IPV6ADDR,
    convertFrom_Q_IPV6ADDR
};
