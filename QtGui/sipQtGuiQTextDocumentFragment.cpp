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

#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qtextdocumentfragment.sip"
#include <qtextdocumentfragment.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQTextDocumentFragment.cpp"

#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQTextDocumentFragment.cpp"
#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qtextcursor.sip"
#include <qtextcursor.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQTextDocumentFragment.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQTextDocumentFragment.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQTextDocumentFragment.cpp"


PyDoc_STRVAR(doc_QTextDocumentFragment_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QTextDocumentFragment_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentFragment_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextDocumentFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextDocumentFragment, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentFragment, sipName_isEmpty, doc_QTextDocumentFragment_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentFragment_toPlainText, "toPlainText(self) -> QString");

extern "C" {static PyObject *meth_QTextDocumentFragment_toPlainText(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentFragment_toPlainText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextDocumentFragment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextDocumentFragment, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toPlainText());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentFragment, sipName_toPlainText, doc_QTextDocumentFragment_toPlainText);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentFragment_toHtml, "toHtml(self, encoding: QByteArray = QByteArray()) -> QString");

extern "C" {static PyObject *meth_QTextDocumentFragment_toHtml(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentFragment_toHtml(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray& a0def = QByteArray();
        const QByteArray* a0 = &a0def;
        int a0State = 0;
        const QTextDocumentFragment *sipCpp;

        static const char *sipKwdList[] = {
            sipName_encoding,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J1", &sipSelf, sipType_QTextDocumentFragment, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toHtml(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentFragment, sipName_toHtml, doc_QTextDocumentFragment_toHtml);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentFragment_fromPlainText, "fromPlainText(QString) -> QTextDocumentFragment");

extern "C" {static PyObject *meth_QTextDocumentFragment_fromPlainText(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentFragment_fromPlainText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QTextDocumentFragment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextDocumentFragment(QTextDocumentFragment::fromPlainText(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextDocumentFragment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentFragment, sipName_fromPlainText, doc_QTextDocumentFragment_fromPlainText);

    return NULL;
}


PyDoc_STRVAR(doc_QTextDocumentFragment_fromHtml, "fromHtml(QString) -> QTextDocumentFragment\n"
    "fromHtml(QString, QTextDocument) -> QTextDocumentFragment");

extern "C" {static PyObject *meth_QTextDocumentFragment_fromHtml(PyObject *, PyObject *);}
static PyObject *meth_QTextDocumentFragment_fromHtml(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QTextDocumentFragment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextDocumentFragment(QTextDocumentFragment::fromHtml(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextDocumentFragment,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QTextDocument* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J8", sipType_QString,&a0, &a0State, sipType_QTextDocument, &a1))
        {
            QTextDocumentFragment*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextDocumentFragment(QTextDocumentFragment::fromHtml(*a0,a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextDocumentFragment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextDocumentFragment, sipName_fromHtml, doc_QTextDocumentFragment_fromHtml);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextDocumentFragment(void *, int);}
static void release_QTextDocumentFragment(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextDocumentFragment *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextDocumentFragment(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextDocumentFragment(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextDocumentFragment *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextDocumentFragment *>(sipSrc);
}


extern "C" {static void *array_QTextDocumentFragment(SIP_SSIZE_T);}
static void *array_QTextDocumentFragment(SIP_SSIZE_T sipNrElem)
{
    return new QTextDocumentFragment[sipNrElem];
}


extern "C" {static void *copy_QTextDocumentFragment(const void *, SIP_SSIZE_T);}
static void *copy_QTextDocumentFragment(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextDocumentFragment(reinterpret_cast<const QTextDocumentFragment *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextDocumentFragment(sipSimpleWrapper *);}
static void dealloc_QTextDocumentFragment(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextDocumentFragment(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextDocumentFragment(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextDocumentFragment(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextDocumentFragment *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocumentFragment();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextDocument* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QTextDocument, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocumentFragment(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextCursor* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextCursor, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocumentFragment(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextDocumentFragment* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextDocumentFragment, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextDocumentFragment(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextDocumentFragment[] = {
    {SIP_MLNAME_CAST(sipName_fromHtml), meth_QTextDocumentFragment_fromHtml, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentFragment_fromHtml)},
    {SIP_MLNAME_CAST(sipName_fromPlainText), meth_QTextDocumentFragment_fromPlainText, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentFragment_fromPlainText)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QTextDocumentFragment_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentFragment_isEmpty)},
    {SIP_MLNAME_CAST(sipName_toHtml), (PyCFunction)meth_QTextDocumentFragment_toHtml, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QTextDocumentFragment_toHtml)},
    {SIP_MLNAME_CAST(sipName_toPlainText), meth_QTextDocumentFragment_toPlainText, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextDocumentFragment_toPlainText)}
};

PyDoc_STRVAR(doc_QTextDocumentFragment, "\1QTextDocumentFragment()\n"
    "QTextDocumentFragment(QTextDocument)\n"
    "QTextDocumentFragment(QTextCursor)\n"
    "QTextDocumentFragment(QTextDocumentFragment)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextDocumentFragment = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextDocumentFragment,
        {0}
    },
    {
        sipNameNr_QTextDocumentFragment,
        {0, 0, 1},
        5, methods_QTextDocumentFragment,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextDocumentFragment,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextDocumentFragment,
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
    dealloc_QTextDocumentFragment,
    assign_QTextDocumentFragment,
    array_QTextDocumentFragment,
    copy_QTextDocumentFragment,
    release_QTextDocumentFragment,
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
