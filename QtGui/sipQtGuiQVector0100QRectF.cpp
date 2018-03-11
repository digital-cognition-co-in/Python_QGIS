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

#line 33 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQVector0100QRectF.cpp"

#line 168 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQVector0100QRectF.cpp"


extern "C" {static void assign_QVector_0100QRectF(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QRectF(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QRectF> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QRectF> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QRectF(SIP_SSIZE_T);}
static void *array_QVector_0100QRectF(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QRectF>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QRectF(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QRectF(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QRectF>(reinterpret_cast<const QVector<QRectF> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QRectF(void *, int);}
static void release_QVector_0100QRectF(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector<QRectF> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_0100QRectF(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QRectF(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QRectF> **sipCppPtr = reinterpret_cast<QVector<QRectF> **>(sipCppPtrV);

#line 64 "sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QRectF, SIP_NOT_NONE))
                return 0;

        return 1;
    }

    QVector<QRectF> *qv = new QVector<QRectF>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        int state;
        QRectF *t = reinterpret_cast<QRectF *>(sipConvertToType(PyList_GET_ITEM(sipPy, i), sipType_QRectF, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QRectF, state);

            delete qv;
            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QRectF, state);
    }
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 115 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQVector0100QRectF.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QRectF(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QRectF(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QRectF> *sipCpp = reinterpret_cast<QVector<QRectF> *>(sipCppV);

#line 37 "sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QRectF *t = new QRectF(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QRectF, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 149 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQVector0100QRectF.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_0100QRectF = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_48813,
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
    assign_QVector_0100QRectF,
    array_QVector_0100QRectF,
    copy_QVector_0100QRectF,
    release_QVector_0100QRectF,
    convertTo_QVector_0100QRectF,
    convertFrom_QVector_0100QRectF
};
