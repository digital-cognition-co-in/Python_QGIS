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

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qgraphicsanchorlayout.sip"
#include <qgraphicsanchorlayout.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"

#line 54 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qgraphicsanchorlayout.sip"
#include <qgraphicsanchorlayout.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 35 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 56 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 59 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 62 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 65 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 74 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 77 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 80 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 83 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQGraphicsAnchor.cpp"


PyDoc_STRVAR(doc_QGraphicsAnchor_setSpacing, "setSpacing(self, float)");

extern "C" {static PyObject *meth_QGraphicsAnchor_setSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_setSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsAnchor, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSpacing(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_setSpacing, doc_QGraphicsAnchor_setSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchor_unsetSpacing, "unsetSpacing(self)");

extern "C" {static PyObject *meth_QGraphicsAnchor_unsetSpacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_unsetSpacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchor, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unsetSpacing();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_unsetSpacing, doc_QGraphicsAnchor_unsetSpacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchor_spacing, "spacing(self) -> float");

extern "C" {static PyObject *meth_QGraphicsAnchor_spacing(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_spacing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchor, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->spacing();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_spacing, doc_QGraphicsAnchor_spacing);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchor_setSizePolicy, "setSizePolicy(self, QSizePolicy.Policy)");

extern "C" {static PyObject *meth_QGraphicsAnchor_setSizePolicy(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_setSizePolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::Policy a0;
        QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsAnchor, &sipCpp, sipType_QSizePolicy_Policy, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSizePolicy(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_setSizePolicy, doc_QGraphicsAnchor_setSizePolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsAnchor_sizePolicy, "sizePolicy(self) -> QSizePolicy.Policy");

extern "C" {static PyObject *meth_QGraphicsAnchor_sizePolicy(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsAnchor_sizePolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsAnchor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsAnchor, &sipCpp))
        {
            QSizePolicy::Policy sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->sizePolicy();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSizePolicy_Policy);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsAnchor, sipName_sizePolicy, doc_QGraphicsAnchor_sizePolicy);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsAnchor(void *, int);}
static void release_QGraphicsAnchor(void *sipCppV,int)
{
    QGraphicsAnchor *sipCpp = reinterpret_cast<QGraphicsAnchor *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsAnchor(sipSimpleWrapper *);}
static void dealloc_QGraphicsAnchor(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsAnchor(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsAnchor[] = {{138, 0, 1}};


static PyMethodDef methods_QGraphicsAnchor[] = {
    {SIP_MLNAME_CAST(sipName_setSizePolicy), meth_QGraphicsAnchor_setSizePolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_setSizePolicy)},
    {SIP_MLNAME_CAST(sipName_setSpacing), meth_QGraphicsAnchor_setSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_setSpacing)},
    {SIP_MLNAME_CAST(sipName_sizePolicy), meth_QGraphicsAnchor_sizePolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_sizePolicy)},
    {SIP_MLNAME_CAST(sipName_spacing), meth_QGraphicsAnchor_spacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_spacing)},
    {SIP_MLNAME_CAST(sipName_unsetSpacing), meth_QGraphicsAnchor_unsetSpacing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsAnchor_unsetSpacing)}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsAnchor = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsAnchor,
        {0}
    },
    {
        sipNameNr_QGraphicsAnchor,
        {0, 0, 1},
        5, methods_QGraphicsAnchor,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsAnchor,
    0,
    0,
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
    dealloc_QGraphicsAnchor,
    0,
    0,
    0,
    release_QGraphicsAnchor,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QGraphicsAnchor::staticMetaObject,
    0,
    0
};
