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

#line 1370 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionComplex.cpp"

#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qstyle.sip"
#include <qstyle.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionComplex.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionComplex.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionComplex(void *, int);}
static void release_QStyleOptionComplex(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionComplex *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionComplex(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionComplex(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionComplex *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionComplex *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionComplex(SIP_SSIZE_T);}
static void *array_QStyleOptionComplex(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionComplex[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionComplex(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionComplex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionComplex(reinterpret_cast<const QStyleOptionComplex *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionComplex(sipSimpleWrapper *);}
static void dealloc_QStyleOptionComplex(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionComplex(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionComplex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionComplex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionComplex *sipCpp = 0;

    {
        int a0 = QStyleOptionComplex::Version;
        int a1 = QStyleOption::SO_Complex;

        static const char *sipKwdList[] = {
            sipName_version,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|ii", &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionComplex(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionComplex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionComplex, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionComplex(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionComplex[] = {{499, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionComplex[] = {
    {sipName_Type, static_cast<int>(QStyleOptionComplex::Type), 512},
    {sipName_Version, static_cast<int>(QStyleOptionComplex::Version), 513},
};


extern "C" {static PyObject *varget_QStyleOptionComplex_activeSubControls(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComplex_activeSubControls(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyle::SubControls*sipVal;
    QStyleOptionComplex *sipCpp = reinterpret_cast<QStyleOptionComplex *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -103);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->activeSubControls;

    sipPy = sipConvertFromType(sipVal, sipType_QStyle_SubControls, NULL);
    sipKeepReference(sipPySelf, -103, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionComplex_activeSubControls(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComplex_activeSubControls(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyle::SubControls*sipVal;
    QStyleOptionComplex *sipCpp = reinterpret_cast<QStyleOptionComplex *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyle::SubControls *>(sipForceConvertToType(sipPy,sipType_QStyle_SubControls,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->activeSubControls = *sipVal;

    sipReleaseType(sipVal, sipType_QStyle_SubControls, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComplex_subControls(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComplex_subControls(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStyle::SubControls*sipVal;
    QStyleOptionComplex *sipCpp = reinterpret_cast<QStyleOptionComplex *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -104);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->subControls;

    sipPy = sipConvertFromType(sipVal, sipType_QStyle_SubControls, NULL);
    sipKeepReference(sipPySelf, -104, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionComplex_subControls(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComplex_subControls(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStyle::SubControls*sipVal;
    QStyleOptionComplex *sipCpp = reinterpret_cast<QStyleOptionComplex *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStyle::SubControls *>(sipForceConvertToType(sipPy,sipType_QStyle_SubControls,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->subControls = *sipVal;

    sipReleaseType(sipVal, sipType_QStyle_SubControls, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionComplex[] = {
    {InstanceVariable, sipName_activeSubControls, (PyMethodDef *)varget_QStyleOptionComplex_activeSubControls, (PyMethodDef *)varset_QStyleOptionComplex_activeSubControls, NULL, NULL},
    {InstanceVariable, sipName_subControls, (PyMethodDef *)varget_QStyleOptionComplex_subControls, (PyMethodDef *)varset_QStyleOptionComplex_subControls, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionComplex, "\1QStyleOptionComplex(version: int = QStyleOptionComplex.Version, type: int = QStyleOption.SO_Complex)\n"
    "QStyleOptionComplex(QStyleOptionComplex)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionComplex = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionComplex,
        {0}
    },
    {
        sipNameNr_QStyleOptionComplex,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionComplex,
        2, variables_QStyleOptionComplex,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionComplex,
    -1,
    -1,
    supers_QStyleOptionComplex,
    0,
    init_type_QStyleOptionComplex,
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
    dealloc_QStyleOptionComplex,
    assign_QStyleOptionComplex,
    array_QStyleOptionComplex,
    copy_QStyleOptionComplex,
    release_QStyleOptionComplex,
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
