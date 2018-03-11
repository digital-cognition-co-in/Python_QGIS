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

#include "sipAPIQtXmlPatterns.h"

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtXmlPatterns/qsourcelocation.sip"
#include <qsourcelocation.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtXmlPatterns/sipQtXmlPatternsQSourceLocation.cpp"

#line 107 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtXmlPatterns/sipQtXmlPatternsQSourceLocation.cpp"


PyDoc_STRVAR(doc_QSourceLocation_column, "column(self) -> int");

extern "C" {static PyObject *meth_QSourceLocation_column(PyObject *, PyObject *);}
static PyObject *meth_QSourceLocation_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSourceLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSourceLocation, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->column();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSourceLocation, sipName_column, doc_QSourceLocation_column);

    return NULL;
}


PyDoc_STRVAR(doc_QSourceLocation_setColumn, "setColumn(self, int)");

extern "C" {static PyObject *meth_QSourceLocation_setColumn(PyObject *, PyObject *);}
static PyObject *meth_QSourceLocation_setColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        QSourceLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QSourceLocation, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setColumn(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSourceLocation, sipName_setColumn, doc_QSourceLocation_setColumn);

    return NULL;
}


PyDoc_STRVAR(doc_QSourceLocation_line, "line(self) -> int");

extern "C" {static PyObject *meth_QSourceLocation_line(PyObject *, PyObject *);}
static PyObject *meth_QSourceLocation_line(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSourceLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSourceLocation, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->line();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSourceLocation, sipName_line, doc_QSourceLocation_line);

    return NULL;
}


PyDoc_STRVAR(doc_QSourceLocation_setLine, "setLine(self, int)");

extern "C" {static PyObject *meth_QSourceLocation_setLine(PyObject *, PyObject *);}
static PyObject *meth_QSourceLocation_setLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        QSourceLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QSourceLocation, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLine(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSourceLocation, sipName_setLine, doc_QSourceLocation_setLine);

    return NULL;
}


PyDoc_STRVAR(doc_QSourceLocation_uri, "uri(self) -> QUrl");

extern "C" {static PyObject *meth_QSourceLocation_uri(PyObject *, PyObject *);}
static PyObject *meth_QSourceLocation_uri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSourceLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSourceLocation, &sipCpp))
        {
            QUrl*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->uri());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSourceLocation, sipName_uri, doc_QSourceLocation_uri);

    return NULL;
}


PyDoc_STRVAR(doc_QSourceLocation_setUri, "setUri(self, QUrl)");

extern "C" {static PyObject *meth_QSourceLocation_setUri(PyObject *, PyObject *);}
static PyObject *meth_QSourceLocation_setUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QSourceLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSourceLocation, &sipCpp, sipType_QUrl, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUri(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSourceLocation, sipName_setUri, doc_QSourceLocation_setUri);

    return NULL;
}


PyDoc_STRVAR(doc_QSourceLocation_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QSourceLocation_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSourceLocation_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSourceLocation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSourceLocation, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSourceLocation, sipName_isNull, doc_QSourceLocation_isNull);

    return NULL;
}


extern "C" {static long slot_QSourceLocation___hash__(PyObject *);}
static long slot_QSourceLocation___hash__(PyObject *sipSelf)
{
    QSourceLocation *sipCpp = reinterpret_cast<QSourceLocation *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSourceLocation));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 52 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtXmlPatterns/qsourcelocation.sip"
        sipRes = qHash(*sipCpp);
#line 266 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtXmlPatterns/sipQtXmlPatternsQSourceLocation.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSourceLocation___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSourceLocation___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSourceLocation *sipCpp = reinterpret_cast<QSourceLocation *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSourceLocation));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSourceLocation* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSourceLocation, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSourceLocation::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXmlPatterns,ne_slot,sipType_QSourceLocation,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSourceLocation___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSourceLocation___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSourceLocation *sipCpp = reinterpret_cast<QSourceLocation *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSourceLocation));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSourceLocation* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSourceLocation, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QSourceLocation::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtXmlPatterns,eq_slot,sipType_QSourceLocation,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QSourceLocation(void *, int);}
static void release_QSourceLocation(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QSourceLocation *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QSourceLocation(void *, SIP_SSIZE_T, const void *);}
static void assign_QSourceLocation(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSourceLocation *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSourceLocation *>(sipSrc);
}


extern "C" {static void *array_QSourceLocation(SIP_SSIZE_T);}
static void *array_QSourceLocation(SIP_SSIZE_T sipNrElem)
{
    return new QSourceLocation[sipNrElem];
}


extern "C" {static void *copy_QSourceLocation(const void *, SIP_SSIZE_T);}
static void *copy_QSourceLocation(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSourceLocation(reinterpret_cast<const QSourceLocation *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSourceLocation(sipSimpleWrapper *);}
static void dealloc_QSourceLocation(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSourceLocation(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSourceLocation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSourceLocation(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSourceLocation *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSourceLocation();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QSourceLocation* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSourceLocation, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSourceLocation(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QUrl* a0;
        int a1 = -1;
        int a2 = -1;

        static const char *sipKwdList[] = {
            NULL,
            sipName_line,
            sipName_column,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|ii", sipType_QUrl, &a0, &a1, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QSourceLocation(*a0,a1,a2);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSourceLocation[] = {
    {(void *)slot_QSourceLocation___hash__, hash_slot},
    {(void *)slot_QSourceLocation___ne__, ne_slot},
    {(void *)slot_QSourceLocation___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSourceLocation[] = {
    {SIP_MLNAME_CAST(sipName_column), meth_QSourceLocation_column, METH_VARARGS, SIP_MLDOC_CAST(doc_QSourceLocation_column)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSourceLocation_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QSourceLocation_isNull)},
    {SIP_MLNAME_CAST(sipName_line), meth_QSourceLocation_line, METH_VARARGS, SIP_MLDOC_CAST(doc_QSourceLocation_line)},
    {SIP_MLNAME_CAST(sipName_setColumn), meth_QSourceLocation_setColumn, METH_VARARGS, SIP_MLDOC_CAST(doc_QSourceLocation_setColumn)},
    {SIP_MLNAME_CAST(sipName_setLine), meth_QSourceLocation_setLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QSourceLocation_setLine)},
    {SIP_MLNAME_CAST(sipName_setUri), meth_QSourceLocation_setUri, METH_VARARGS, SIP_MLDOC_CAST(doc_QSourceLocation_setUri)},
    {SIP_MLNAME_CAST(sipName_uri), meth_QSourceLocation_uri, METH_VARARGS, SIP_MLDOC_CAST(doc_QSourceLocation_uri)}
};

PyDoc_STRVAR(doc_QSourceLocation, "\1QSourceLocation()\n"
    "QSourceLocation(QSourceLocation)\n"
    "QSourceLocation(QUrl, line: int = -1, column: int = -1)");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QSourceLocation = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QSourceLocation,
        {0}
    },
    {
        sipNameNr_QSourceLocation,
        {0, 0, 1},
        7, methods_QSourceLocation,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSourceLocation,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSourceLocation,
    init_type_QSourceLocation,
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
    dealloc_QSourceLocation,
    assign_QSourceLocation,
    array_QSourceLocation,
    copy_QSourceLocation,
    release_QSourceLocation,
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
