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

#line 208 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"

#line 39 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpainterpath.sip"
#include <qpainterpath.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qregion.sip"
#include <qregion.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qmatrix.sip"
#include <qmatrix.h>
#line 56 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qfont.sip"
#include <qfont.h>
#line 59 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 62 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 119 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 65 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpen.sip"
#include <qpen.h>
#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"
#line 61 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPaintEngineState.cpp"


PyDoc_STRVAR(doc_QPaintEngineState_state, "state(self) -> QPaintEngine.DirtyFlags");

extern "C" {static PyObject *meth_QPaintEngineState_state(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QPaintEngine::DirtyFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPaintEngine::DirtyFlags(sipCpp->state());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_DirtyFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_state, doc_QPaintEngineState_state);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_pen, "pen(self) -> QPen");

extern "C" {static PyObject *meth_QPaintEngineState_pen(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_pen(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QPen*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPen(sipCpp->pen());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPen,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_pen, doc_QPaintEngineState_pen);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_brush, "brush(self) -> QBrush");

extern "C" {static PyObject *meth_QPaintEngineState_brush(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_brush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QBrush*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBrush(sipCpp->brush());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBrush,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_brush, doc_QPaintEngineState_brush);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_brushOrigin, "brushOrigin(self) -> QPointF");

extern "C" {static PyObject *meth_QPaintEngineState_brushOrigin(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_brushOrigin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QPointF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->brushOrigin());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_brushOrigin, doc_QPaintEngineState_brushOrigin);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_backgroundBrush, "backgroundBrush(self) -> QBrush");

extern "C" {static PyObject *meth_QPaintEngineState_backgroundBrush(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_backgroundBrush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QBrush*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBrush(sipCpp->backgroundBrush());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBrush,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_backgroundBrush, doc_QPaintEngineState_backgroundBrush);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_backgroundMode, "backgroundMode(self) -> Qt.BGMode");

extern "C" {static PyObject *meth_QPaintEngineState_backgroundMode(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_backgroundMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            Qt::BGMode sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->backgroundMode();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_BGMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_backgroundMode, doc_QPaintEngineState_backgroundMode);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_font, "font(self) -> QFont");

extern "C" {static PyObject *meth_QPaintEngineState_font(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_font(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QFont*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFont(sipCpp->font());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_font, doc_QPaintEngineState_font);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_matrix, "matrix(self) -> QMatrix");

extern "C" {static PyObject *meth_QPaintEngineState_matrix(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_matrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QMatrix*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMatrix(sipCpp->matrix());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_matrix, doc_QPaintEngineState_matrix);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_opacity, "opacity(self) -> float");

extern "C" {static PyObject *meth_QPaintEngineState_opacity(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_opacity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->opacity();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_opacity, doc_QPaintEngineState_opacity);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_clipOperation, "clipOperation(self) -> Qt.ClipOperation");

extern "C" {static PyObject *meth_QPaintEngineState_clipOperation(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_clipOperation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            Qt::ClipOperation sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->clipOperation();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_ClipOperation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_clipOperation, doc_QPaintEngineState_clipOperation);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_clipRegion, "clipRegion(self) -> QRegion");

extern "C" {static PyObject *meth_QPaintEngineState_clipRegion(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_clipRegion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QRegion*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRegion(sipCpp->clipRegion());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_clipRegion, doc_QPaintEngineState_clipRegion);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_clipPath, "clipPath(self) -> QPainterPath");

extern "C" {static PyObject *meth_QPaintEngineState_clipPath(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_clipPath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QPainterPath*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainterPath(sipCpp->clipPath());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPainterPath,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_clipPath, doc_QPaintEngineState_clipPath);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_isClipEnabled, "isClipEnabled(self) -> bool");

extern "C" {static PyObject *meth_QPaintEngineState_isClipEnabled(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_isClipEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isClipEnabled();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_isClipEnabled, doc_QPaintEngineState_isClipEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_renderHints, "renderHints(self) -> QPainter.RenderHints");

extern "C" {static PyObject *meth_QPaintEngineState_renderHints(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_renderHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QPainter::RenderHints*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPainter::RenderHints(sipCpp->renderHints());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPainter_RenderHints,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_renderHints, doc_QPaintEngineState_renderHints);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_compositionMode, "compositionMode(self) -> QPainter.CompositionMode");

extern "C" {static PyObject *meth_QPaintEngineState_compositionMode(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_compositionMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QPainter::CompositionMode sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->compositionMode();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QPainter_CompositionMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_compositionMode, doc_QPaintEngineState_compositionMode);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_painter, "painter(self) -> QPainter");

extern "C" {static PyObject *meth_QPaintEngineState_painter(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_painter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QPainter*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->painter();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QPainter,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_painter, doc_QPaintEngineState_painter);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_transform, "transform(self) -> QTransform");

extern "C" {static PyObject *meth_QPaintEngineState_transform(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_transform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            QTransform*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTransform(sipCpp->transform());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTransform,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_transform, doc_QPaintEngineState_transform);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_brushNeedsResolving, "brushNeedsResolving(self) -> bool");

extern "C" {static PyObject *meth_QPaintEngineState_brushNeedsResolving(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_brushNeedsResolving(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->brushNeedsResolving();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_brushNeedsResolving, doc_QPaintEngineState_brushNeedsResolving);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_penNeedsResolving, "penNeedsResolving(self) -> bool");

extern "C" {static PyObject *meth_QPaintEngineState_penNeedsResolving(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_penNeedsResolving(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->penNeedsResolving();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_penNeedsResolving, doc_QPaintEngineState_penNeedsResolving);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPaintEngineState(void *, int);}
static void release_QPaintEngineState(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPaintEngineState *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPaintEngineState(void *, SIP_SSIZE_T, const void *);}
static void assign_QPaintEngineState(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPaintEngineState *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPaintEngineState *>(sipSrc);
}


extern "C" {static void *array_QPaintEngineState(SIP_SSIZE_T);}
static void *array_QPaintEngineState(SIP_SSIZE_T sipNrElem)
{
    return new QPaintEngineState[sipNrElem];
}


extern "C" {static void *copy_QPaintEngineState(const void *, SIP_SSIZE_T);}
static void *copy_QPaintEngineState(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPaintEngineState(reinterpret_cast<const QPaintEngineState *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPaintEngineState(sipSimpleWrapper *);}
static void dealloc_QPaintEngineState(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPaintEngineState(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPaintEngineState(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPaintEngineState(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPaintEngineState *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPaintEngineState();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPaintEngineState* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPaintEngineState, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPaintEngineState(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPaintEngineState[] = {
    {SIP_MLNAME_CAST(sipName_backgroundBrush), meth_QPaintEngineState_backgroundBrush, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_backgroundBrush)},
    {SIP_MLNAME_CAST(sipName_backgroundMode), meth_QPaintEngineState_backgroundMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_backgroundMode)},
    {SIP_MLNAME_CAST(sipName_brush), meth_QPaintEngineState_brush, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_brush)},
    {SIP_MLNAME_CAST(sipName_brushNeedsResolving), meth_QPaintEngineState_brushNeedsResolving, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_brushNeedsResolving)},
    {SIP_MLNAME_CAST(sipName_brushOrigin), meth_QPaintEngineState_brushOrigin, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_brushOrigin)},
    {SIP_MLNAME_CAST(sipName_clipOperation), meth_QPaintEngineState_clipOperation, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_clipOperation)},
    {SIP_MLNAME_CAST(sipName_clipPath), meth_QPaintEngineState_clipPath, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_clipPath)},
    {SIP_MLNAME_CAST(sipName_clipRegion), meth_QPaintEngineState_clipRegion, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_clipRegion)},
    {SIP_MLNAME_CAST(sipName_compositionMode), meth_QPaintEngineState_compositionMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_compositionMode)},
    {SIP_MLNAME_CAST(sipName_font), meth_QPaintEngineState_font, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_font)},
    {SIP_MLNAME_CAST(sipName_isClipEnabled), meth_QPaintEngineState_isClipEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_isClipEnabled)},
    {SIP_MLNAME_CAST(sipName_matrix), meth_QPaintEngineState_matrix, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_matrix)},
    {SIP_MLNAME_CAST(sipName_opacity), meth_QPaintEngineState_opacity, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_opacity)},
    {SIP_MLNAME_CAST(sipName_painter), meth_QPaintEngineState_painter, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_painter)},
    {SIP_MLNAME_CAST(sipName_pen), meth_QPaintEngineState_pen, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_pen)},
    {SIP_MLNAME_CAST(sipName_penNeedsResolving), meth_QPaintEngineState_penNeedsResolving, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_penNeedsResolving)},
    {SIP_MLNAME_CAST(sipName_renderHints), meth_QPaintEngineState_renderHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_renderHints)},
    {SIP_MLNAME_CAST(sipName_state), meth_QPaintEngineState_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_state)},
    {SIP_MLNAME_CAST(sipName_transform), meth_QPaintEngineState_transform, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_transform)}
};

PyDoc_STRVAR(doc_QPaintEngineState, "\1QPaintEngineState()\n"
    "QPaintEngineState(QPaintEngineState)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QPaintEngineState = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPaintEngineState,
        {0}
    },
    {
        sipNameNr_QPaintEngineState,
        {0, 0, 1},
        19, methods_QPaintEngineState,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPaintEngineState,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QPaintEngineState,
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
    dealloc_QPaintEngineState,
    assign_QPaintEngineState,
    array_QPaintEngineState,
    copy_QPaintEngineState,
    release_QPaintEngineState,
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
