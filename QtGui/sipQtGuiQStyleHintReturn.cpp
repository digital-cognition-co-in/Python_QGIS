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

#line 1686 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleHintReturn.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QStyleHintReturn(void *, int);}
static void release_QStyleHintReturn(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleHintReturn *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleHintReturn(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleHintReturn(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleHintReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleHintReturn *>(sipSrc);
}


extern "C" {static void *array_QStyleHintReturn(SIP_SSIZE_T);}
static void *array_QStyleHintReturn(SIP_SSIZE_T sipNrElem)
{
    return new QStyleHintReturn[sipNrElem];
}


extern "C" {static void *copy_QStyleHintReturn(const void *, SIP_SSIZE_T);}
static void *copy_QStyleHintReturn(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleHintReturn(reinterpret_cast<const QStyleHintReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleHintReturn(sipSimpleWrapper *);}
static void dealloc_QStyleHintReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleHintReturn(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleHintReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleHintReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleHintReturn *sipCpp = 0;

    {
        int a0 = QStyleOption::Version;
        int a1 = QStyleHintReturn::SH_Default;

        static const char *sipKwdList[] = {
            sipName_version,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleHintReturn(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleHintReturn* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleHintReturn, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleHintReturn(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

static sipEnumMemberDef enummembers_QStyleHintReturn[] = {
    {sipName_SH_Default, static_cast<int>(QStyleHintReturn::SH_Default), 490},
    {sipName_SH_Mask, static_cast<int>(QStyleHintReturn::SH_Mask), 490},
    {sipName_SH_Variant, static_cast<int>(QStyleHintReturn::SH_Variant), 490},
    {sipName_Type, static_cast<int>(QStyleHintReturn::Type), 491},
    {sipName_Version, static_cast<int>(QStyleHintReturn::Version), 492},
};


extern "C" {static PyObject *varget_QStyleHintReturn_type(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturn_type(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleHintReturn *sipCpp = reinterpret_cast<QStyleHintReturn *>(sipSelf);

    sipVal = sipCpp->type;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleHintReturn_type(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturn_type(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleHintReturn *sipCpp = reinterpret_cast<QStyleHintReturn *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->type = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleHintReturn_version(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturn_version(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QStyleHintReturn *sipCpp = reinterpret_cast<QStyleHintReturn *>(sipSelf);

    sipVal = sipCpp->version;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QStyleHintReturn_version(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturn_version(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QStyleHintReturn *sipCpp = reinterpret_cast<QStyleHintReturn *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->version = sipVal;

    return 0;
}

sipVariableDef variables_QStyleHintReturn[] = {
    {InstanceVariable, sipName_type, (PyMethodDef *)varget_QStyleHintReturn_type, (PyMethodDef *)varset_QStyleHintReturn_type, NULL, NULL},
    {InstanceVariable, sipName_version, (PyMethodDef *)varget_QStyleHintReturn_version, (PyMethodDef *)varset_QStyleHintReturn_version, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleHintReturn, "\1QStyleHintReturn(version: int = QStyleOption.Version, type: int = QStyleHintReturn.SH_Default)\n"
    "QStyleHintReturn(QStyleHintReturn)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleHintReturn = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleHintReturn,
        {0}
    },
    {
        sipNameNr_QStyleHintReturn,
        {0, 0, 1},
        0, 0,
        5, enummembers_QStyleHintReturn,
        2, variables_QStyleHintReturn,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleHintReturn,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QStyleHintReturn,
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
    dealloc_QStyleHintReturn,
    assign_QStyleHintReturn,
    array_QStyleHintReturn,
    copy_QStyleHintReturn,
    release_QStyleHintReturn,
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
