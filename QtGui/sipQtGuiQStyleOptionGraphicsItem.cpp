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

#line 1975 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionGraphicsItem.cpp"

#line 168 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionGraphicsItem.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qmatrix.sip"
#include <qmatrix.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionGraphicsItem.cpp"
#line 39 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionGraphicsItem.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionGraphicsItem.cpp"


PyDoc_STRVAR(doc_QStyleOptionGraphicsItem_levelOfDetailFromTransform, "levelOfDetailFromTransform(QTransform) -> float");

extern "C" {static PyObject *meth_QStyleOptionGraphicsItem_levelOfDetailFromTransform(PyObject *, PyObject *);}
static PyObject *meth_QStyleOptionGraphicsItem_levelOfDetailFromTransform(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTransform* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QTransform, &a0))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QStyleOptionGraphicsItem::levelOfDetailFromTransform(*a0);
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStyleOptionGraphicsItem, sipName_levelOfDetailFromTransform, doc_QStyleOptionGraphicsItem_levelOfDetailFromTransform);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionGraphicsItem(void *, int);}
static void release_QStyleOptionGraphicsItem(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionGraphicsItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionGraphicsItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionGraphicsItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionGraphicsItem *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionGraphicsItem *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionGraphicsItem(SIP_SSIZE_T);}
static void *array_QStyleOptionGraphicsItem(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionGraphicsItem[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionGraphicsItem(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionGraphicsItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionGraphicsItem(reinterpret_cast<const QStyleOptionGraphicsItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionGraphicsItem(sipSimpleWrapper *);}
static void dealloc_QStyleOptionGraphicsItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionGraphicsItem(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionGraphicsItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionGraphicsItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionGraphicsItem *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionGraphicsItem();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionGraphicsItem* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionGraphicsItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionGraphicsItem(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionGraphicsItem[] = {{499, 255, 1}};


static PyMethodDef methods_QStyleOptionGraphicsItem[] = {
    {SIP_MLNAME_CAST(sipName_levelOfDetailFromTransform), meth_QStyleOptionGraphicsItem_levelOfDetailFromTransform, METH_VARARGS, SIP_MLDOC_CAST(doc_QStyleOptionGraphicsItem_levelOfDetailFromTransform)}
};

static sipEnumMemberDef enummembers_QStyleOptionGraphicsItem[] = {
    {sipName_Type, static_cast<int>(QStyleOptionGraphicsItem::Type), 526},
    {sipName_Version, static_cast<int>(QStyleOptionGraphicsItem::Version), 527},
};


extern "C" {static PyObject *varget_QStyleOptionGraphicsItem_exposedRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGraphicsItem_exposedRect(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QRectF*sipVal;
    QStyleOptionGraphicsItem *sipCpp = reinterpret_cast<QStyleOptionGraphicsItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -81);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->exposedRect;

    sipPy = sipConvertFromType(sipVal, sipType_QRectF, NULL);
    sipKeepReference(sipPySelf, -81, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionGraphicsItem_exposedRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGraphicsItem_exposedRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRectF*sipVal;
    QStyleOptionGraphicsItem *sipCpp = reinterpret_cast<QStyleOptionGraphicsItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRectF *>(sipForceConvertToType(sipPy,sipType_QRectF,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->exposedRect = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGraphicsItem_levelOfDetail(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGraphicsItem_levelOfDetail(void *sipSelf, PyObject *, PyObject *)
{
    qreal sipVal;
    QStyleOptionGraphicsItem *sipCpp = reinterpret_cast<QStyleOptionGraphicsItem *>(sipSelf);

    sipVal = sipCpp->levelOfDetail;

    return PyFloat_FromDouble(sipVal);
}


extern "C" {static int varset_QStyleOptionGraphicsItem_levelOfDetail(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGraphicsItem_levelOfDetail(void *sipSelf, PyObject *sipPy, PyObject *)
{
    qreal sipVal;
    QStyleOptionGraphicsItem *sipCpp = reinterpret_cast<QStyleOptionGraphicsItem *>(sipSelf);

    sipVal = PyFloat_AsDouble(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->levelOfDetail = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionGraphicsItem_matrix(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionGraphicsItem_matrix(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QMatrix*sipVal;
    QStyleOptionGraphicsItem *sipCpp = reinterpret_cast<QStyleOptionGraphicsItem *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -82);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->matrix;

    sipPy = sipConvertFromType(sipVal, sipType_QMatrix, NULL);
    sipKeepReference(sipPySelf, -82, sipPy);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionGraphicsItem_matrix(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionGraphicsItem_matrix(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QMatrix*sipVal;
    QStyleOptionGraphicsItem *sipCpp = reinterpret_cast<QStyleOptionGraphicsItem *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QMatrix *>(sipForceConvertToType(sipPy,sipType_QMatrix,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->matrix = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionGraphicsItem[] = {
    {InstanceVariable, sipName_exposedRect, (PyMethodDef *)varget_QStyleOptionGraphicsItem_exposedRect, (PyMethodDef *)varset_QStyleOptionGraphicsItem_exposedRect, NULL, NULL},
    {InstanceVariable, sipName_levelOfDetail, (PyMethodDef *)varget_QStyleOptionGraphicsItem_levelOfDetail, (PyMethodDef *)varset_QStyleOptionGraphicsItem_levelOfDetail, NULL, NULL},
    {InstanceVariable, sipName_matrix, (PyMethodDef *)varget_QStyleOptionGraphicsItem_matrix, (PyMethodDef *)varset_QStyleOptionGraphicsItem_matrix, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionGraphicsItem, "\1QStyleOptionGraphicsItem()\n"
    "QStyleOptionGraphicsItem(QStyleOptionGraphicsItem)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionGraphicsItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionGraphicsItem,
        {0}
    },
    {
        sipNameNr_QStyleOptionGraphicsItem,
        {0, 0, 1},
        1, methods_QStyleOptionGraphicsItem,
        2, enummembers_QStyleOptionGraphicsItem,
        3, variables_QStyleOptionGraphicsItem,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionGraphicsItem,
    -1,
    -1,
    supers_QStyleOptionGraphicsItem,
    0,
    init_type_QStyleOptionGraphicsItem,
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
    dealloc_QStyleOptionGraphicsItem,
    assign_QStyleOptionGraphicsItem,
    array_QStyleOptionGraphicsItem,
    copy_QStyleOptionGraphicsItem,
    release_QStyleOptionGraphicsItem,
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
