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

#line 72 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qchar.sip"
#include <qchar.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQChar_1.cpp"



extern "C" {static void assign_QChar_1(void *, SIP_SSIZE_T, const void *);}
static void assign_QChar_1(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QChar *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QChar *>(sipSrc);
}


extern "C" {static void *array_QChar_1(SIP_SSIZE_T);}
static void *array_QChar_1(SIP_SSIZE_T sipNrElem)
{
    return new QChar[sipNrElem];
}


extern "C" {static void *copy_QChar_1(const void *, SIP_SSIZE_T);}
static void *copy_QChar_1(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QChar(reinterpret_cast<const QChar *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QChar_1(void *, int);}
static void release_QChar_1(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QChar *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QChar_1(PyObject *, void **, int *, PyObject *);}
static int convertTo_QChar_1(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QChar **sipCppPtr = reinterpret_cast<QChar **>(sipCppPtrV);

#line 76 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qchar.sip"
if (sipIsErr == NULL)
#if PY_MAJOR_VERSION < 3
    return (PyString_Check(sipPy) || PyUnicode_Check(sipPy));
#else
    return PyUnicode_Check(sipPy);
#endif

#if PY_MAJOR_VERSION < 3
if (PyString_Check(sipPy))
{
    if (PyString_GET_SIZE(sipPy) != 1)
    {
        PyErr_SetString(PyExc_ValueError, "string of length 1 expected");
        *sipIsErr = 1;
        return 0;
    }

    *sipCppPtr = new QChar(*PyString_AS_STRING(sipPy));

    return sipGetState(sipTransferObj);
}
#endif

QString qs = qpycore_PyObject_AsQString(sipPy);

if (qs.size() != 1)
{
    PyErr_SetString(PyExc_ValueError, "string of length 1 expected");
    *sipIsErr = 1;
    return 0;
}

*sipCppPtr = new QChar(qs.at(0));

return sipGetState(sipTransferObj);
#line 111 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQChar_1.cpp"
}


extern "C" {static PyObject *convertFrom_QChar_1(void *, PyObject *);}
static PyObject *convertFrom_QChar_1(void *sipCppV, PyObject *)
{
   QChar *sipCpp = reinterpret_cast<QChar *>(sipCppV);

#line 114 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qchar.sip"
    return qpycore_PyObject_FromQString(QString(*sipCpp));
#line 122 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQChar_1.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QChar_1 = {
    {
        1,
        &sipTypeDef_QtCore_QChar_0.super.ctd_base,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QChar,
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
    assign_QChar_1,
    array_QChar_1,
    copy_QChar_1,
    release_QChar_1,
    convertTo_QChar_1,
    convertFrom_QChar_1
};
