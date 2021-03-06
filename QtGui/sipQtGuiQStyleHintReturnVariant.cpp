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

#line 2085 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleHintReturnVariant.cpp"

#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleHintReturnVariant.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleHintReturnVariant(void *, int);}
static void release_QStyleHintReturnVariant(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleHintReturnVariant *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleHintReturnVariant(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleHintReturnVariant(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleHintReturnVariant *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleHintReturnVariant *>(sipSrc);
}


extern "C" {static void *array_QStyleHintReturnVariant(SIP_SSIZE_T);}
static void *array_QStyleHintReturnVariant(SIP_SSIZE_T sipNrElem)
{
    return new QStyleHintReturnVariant[sipNrElem];
}


extern "C" {static void *copy_QStyleHintReturnVariant(const void *, SIP_SSIZE_T);}
static void *copy_QStyleHintReturnVariant(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleHintReturnVariant(reinterpret_cast<const QStyleHintReturnVariant *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleHintReturnVariant(sipSimpleWrapper *);}
static void dealloc_QStyleHintReturnVariant(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleHintReturnVariant(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleHintReturnVariant(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleHintReturnVariant(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleHintReturnVariant *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleHintReturnVariant();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleHintReturnVariant* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleHintReturnVariant, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleHintReturnVariant(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleHintReturnVariant[] = {{489, 255, 1}};

static sipEnumMemberDef enummembers_QStyleHintReturnVariant[] = {
    {sipName_Type, static_cast<int>(QStyleHintReturnVariant::Type), 497},
    {sipName_Version, static_cast<int>(QStyleHintReturnVariant::Version), 498},
};


extern "C" {static PyObject *varget_QStyleHintReturnVariant_variant(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleHintReturnVariant_variant(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QVariant*sipVal;
    QStyleHintReturnVariant *sipCpp = reinterpret_cast<QStyleHintReturnVariant *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -80);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->variant;

    sipPy = sipConvertFromType(sipVal, sipType_QVariant, NULL);
    sipKeepReference(sipPySelf, -80, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleHintReturnVariant_variant(void *, PyObject *, PyObject *);}
static int varset_QStyleHintReturnVariant_variant(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QVariant*sipVal;
    QStyleHintReturnVariant *sipCpp = reinterpret_cast<QStyleHintReturnVariant *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QVariant *>(sipForceConvertToType(sipPy,sipType_QVariant,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->variant = *sipVal;

    sipReleaseType(sipVal, sipType_QVariant, sipValState);

    return 0;
}

sipVariableDef variables_QStyleHintReturnVariant[] = {
    {InstanceVariable, sipName_variant, (PyMethodDef *)varget_QStyleHintReturnVariant_variant, (PyMethodDef *)varset_QStyleHintReturnVariant_variant, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleHintReturnVariant, "\1QStyleHintReturnVariant()\n"
    "QStyleHintReturnVariant(QStyleHintReturnVariant)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleHintReturnVariant = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleHintReturnVariant,
        {0}
    },
    {
        sipNameNr_QStyleHintReturnVariant,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleHintReturnVariant,
        1, variables_QStyleHintReturnVariant,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleHintReturnVariant,
    -1,
    -1,
    supers_QStyleHintReturnVariant,
    0,
    init_type_QStyleHintReturnVariant,
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
    dealloc_QStyleHintReturnVariant,
    assign_QStyleHintReturnVariant,
    array_QStyleHintReturnVariant,
    copy_QStyleHintReturnVariant,
    release_QStyleHintReturnVariant,
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
