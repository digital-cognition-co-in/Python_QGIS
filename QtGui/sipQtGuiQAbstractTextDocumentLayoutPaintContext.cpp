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

#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 51 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 36 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"

#line 168 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 40 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpalette.sip"
#include <qpalette.h>
#line 43 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"
#line 33 "sip/QtCore/qvector.sip"
#include <qvector.h>
#line 46 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"
#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 51 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQAbstractTextDocumentLayoutPaintContext.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractTextDocumentLayout_PaintContext(void *, int);}
static void release_QAbstractTextDocumentLayout_PaintContext(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QAbstractTextDocumentLayout_PaintContext(void *, SIP_SSIZE_T, const void *);}
static void assign_QAbstractTextDocumentLayout_PaintContext(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QAbstractTextDocumentLayout::PaintContext *>(sipSrc);
}


extern "C" {static void *array_QAbstractTextDocumentLayout_PaintContext(SIP_SSIZE_T);}
static void *array_QAbstractTextDocumentLayout_PaintContext(SIP_SSIZE_T sipNrElem)
{
    return new QAbstractTextDocumentLayout::PaintContext[sipNrElem];
}


extern "C" {static void *copy_QAbstractTextDocumentLayout_PaintContext(const void *, SIP_SSIZE_T);}
static void *copy_QAbstractTextDocumentLayout_PaintContext(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QAbstractTextDocumentLayout::PaintContext(reinterpret_cast<const QAbstractTextDocumentLayout::PaintContext *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QAbstractTextDocumentLayout_PaintContext(sipSimpleWrapper *);}
static void dealloc_QAbstractTextDocumentLayout_PaintContext(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractTextDocumentLayout_PaintContext(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QAbstractTextDocumentLayout_PaintContext(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractTextDocumentLayout_PaintContext(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QAbstractTextDocumentLayout::PaintContext *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractTextDocumentLayout::PaintContext();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QAbstractTextDocumentLayout::PaintContext* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAbstractTextDocumentLayout_PaintContext, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QAbstractTextDocumentLayout::PaintContext(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_clip(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_clip(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QRectF*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -154);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->clip;

    sipPy = sipConvertFromType(sipVal, sipType_QRectF, NULL);
    sipKeepReference(sipPySelf, -154, sipPy);

    return sipPy;
}


extern "C" {static int varset_QAbstractTextDocumentLayout_PaintContext_clip(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_PaintContext_clip(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRectF*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRectF *>(sipForceConvertToType(sipPy,sipType_QRectF,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->clip = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_cursorPosition(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_cursorPosition(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipVal = sipCpp->cursorPosition;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_QAbstractTextDocumentLayout_PaintContext_cursorPosition(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_PaintContext_cursorPosition(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->cursorPosition = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_palette(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_palette(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QPalette*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -155);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->palette;

    sipPy = sipConvertFromType(sipVal, sipType_QPalette, NULL);
    sipKeepReference(sipPySelf, -155, sipPy);

    return sipPy;
}


extern "C" {static int varset_QAbstractTextDocumentLayout_PaintContext_palette(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_PaintContext_palette(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QPalette*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QPalette *>(sipForceConvertToType(sipPy,sipType_QPalette,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->palette = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_selections(void *, PyObject *, PyObject *);}
static PyObject *varget_QAbstractTextDocumentLayout_PaintContext_selections(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QVector<QAbstractTextDocumentLayout::Selection>*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -156);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->selections;

    sipPy = sipConvertFromType(sipVal, sipType_QVector_0100QAbstractTextDocumentLayout_Selection, NULL);
    sipKeepReference(sipPySelf, -156, sipPy);

    return sipPy;
}


extern "C" {static int varset_QAbstractTextDocumentLayout_PaintContext_selections(void *, PyObject *, PyObject *);}
static int varset_QAbstractTextDocumentLayout_PaintContext_selections(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QVector<QAbstractTextDocumentLayout::Selection>*sipVal;
    QAbstractTextDocumentLayout::PaintContext *sipCpp = reinterpret_cast<QAbstractTextDocumentLayout::PaintContext *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QVector<QAbstractTextDocumentLayout::Selection> *>(sipForceConvertToType(sipPy,sipType_QVector_0100QAbstractTextDocumentLayout_Selection,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->selections = *sipVal;

    sipReleaseType(sipVal, sipType_QVector_0100QAbstractTextDocumentLayout_Selection, sipValState);

    return 0;
}

sipVariableDef variables_QAbstractTextDocumentLayout_PaintContext[] = {
    {InstanceVariable, sipName_clip, (PyMethodDef *)varget_QAbstractTextDocumentLayout_PaintContext_clip, (PyMethodDef *)varset_QAbstractTextDocumentLayout_PaintContext_clip, NULL, NULL},
    {InstanceVariable, sipName_cursorPosition, (PyMethodDef *)varget_QAbstractTextDocumentLayout_PaintContext_cursorPosition, (PyMethodDef *)varset_QAbstractTextDocumentLayout_PaintContext_cursorPosition, NULL, NULL},
    {InstanceVariable, sipName_palette, (PyMethodDef *)varget_QAbstractTextDocumentLayout_PaintContext_palette, (PyMethodDef *)varset_QAbstractTextDocumentLayout_PaintContext_palette, NULL, NULL},
    {InstanceVariable, sipName_selections, (PyMethodDef *)varget_QAbstractTextDocumentLayout_PaintContext_selections, (PyMethodDef *)varset_QAbstractTextDocumentLayout_PaintContext_selections, NULL, NULL},
};

PyDoc_STRVAR(doc_QAbstractTextDocumentLayout_PaintContext, "\1QAbstractTextDocumentLayout.PaintContext()\n"
    "QAbstractTextDocumentLayout.PaintContext(QAbstractTextDocumentLayout.PaintContext)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QAbstractTextDocumentLayout_PaintContext = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QAbstractTextDocumentLayout__PaintContext,
        {0}
    },
    {
        sipNameNr_PaintContext,
        {29, 255, 0},
        0, 0,
        0, 0,
        4, variables_QAbstractTextDocumentLayout_PaintContext,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractTextDocumentLayout_PaintContext,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractTextDocumentLayout_PaintContext,
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
    dealloc_QAbstractTextDocumentLayout_PaintContext,
    assign_QAbstractTextDocumentLayout_PaintContext,
    array_QAbstractTextDocumentLayout_PaintContext,
    copy_QAbstractTextDocumentLayout_PaintContext,
    release_QAbstractTextDocumentLayout_PaintContext,
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
