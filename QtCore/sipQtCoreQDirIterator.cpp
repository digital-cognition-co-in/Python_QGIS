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

#line 39 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qdiriterator.sip"
#include <qdiriterator.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirIterator.cpp"

#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirIterator.cpp"
#line 39 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qdiriterator.sip"
#include <qdiriterator.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirIterator.cpp"
#line 36 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirIterator.cpp"
#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirIterator.cpp"
#line 36 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirIterator.cpp"
#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qfileinfo.sip"
#include <qfileinfo.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirIterator.cpp"


PyDoc_STRVAR(doc_QDirIterator_next, "next(self) -> QString");

extern "C" {static PyObject *meth_QDirIterator_next(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->next());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_next, doc_QDirIterator_next);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_hasNext, "hasNext(self) -> bool");

extern "C" {static PyObject *meth_QDirIterator_hasNext(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_hasNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasNext();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_hasNext, doc_QDirIterator_hasNext);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_fileName, "fileName(self) -> QString");

extern "C" {static PyObject *meth_QDirIterator_fileName(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_fileName, doc_QDirIterator_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_filePath, "filePath(self) -> QString");

extern "C" {static PyObject *meth_QDirIterator_filePath(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_filePath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->filePath());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_filePath, doc_QDirIterator_filePath);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_fileInfo, "fileInfo(self) -> QFileInfo");

extern "C" {static PyObject *meth_QDirIterator_fileInfo(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_fileInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QFileInfo*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QFileInfo(sipCpp->fileInfo());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QFileInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_fileInfo, doc_QDirIterator_fileInfo);

    return NULL;
}


PyDoc_STRVAR(doc_QDirIterator_path, "path(self) -> QString");

extern "C" {static PyObject *meth_QDirIterator_path(PyObject *, PyObject *);}
static PyObject *meth_QDirIterator_path(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDirIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDirIterator, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->path());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDirIterator, sipName_path, doc_QDirIterator_path);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDirIterator(void *, int);}
static void release_QDirIterator(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDirIterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDirIterator(sipSimpleWrapper *);}
static void dealloc_QDirIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDirIterator(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDirIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDirIterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDirIterator *sipCpp = 0;

    {
        const QDir* a0;
        QDirIterator::IteratorFlags a1def = QDirIterator::NoIteratorFlags;
        QDirIterator::IteratorFlags* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|J1", sipType_QDir, &a0, sipType_QDirIterator_IteratorFlags, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDirIterator(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QDirIterator_IteratorFlags,a1State);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QDirIterator::IteratorFlags a1def = QDirIterator::NoIteratorFlags;
        QDirIterator::IteratorFlags* a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1", sipType_QString,&a0, &a0State, sipType_QDirIterator_IteratorFlags, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDirIterator(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QDirIterator_IteratorFlags,a1State);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QDir::Filters* a1;
        int a1State = 0;
        QDirIterator::IteratorFlags a2def = QDirIterator::NoIteratorFlags;
        QDirIterator::IteratorFlags* a2 = &a2def;
        int a2State = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1|J1", sipType_QString,&a0, &a0State, sipType_QDir_Filters, &a1, &a1State, sipType_QDirIterator_IteratorFlags, &a2, &a2State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDirIterator(*a0,*a1,*a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(a1,sipType_QDir_Filters,a1State);
            sipReleaseType(a2,sipType_QDirIterator_IteratorFlags,a2State);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QStringList* a1;
        int a1State = 0;
        QDir::Filters a2def = QDir::NoFilter;
        QDir::Filters* a2 = &a2def;
        int a2State = 0;
        QDirIterator::IteratorFlags a3def = QDirIterator::NoIteratorFlags;
        QDirIterator::IteratorFlags* a3 = &a3def;
        int a3State = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_filters,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1|J1J1", sipType_QString,&a0, &a0State, sipType_QStringList,&a1, &a1State, sipType_QDir_Filters, &a2, &a2State, sipType_QDirIterator_IteratorFlags, &a3, &a3State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDirIterator(*a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QStringList *>(a1),sipType_QStringList,a1State);
            sipReleaseType(a2,sipType_QDir_Filters,a2State);
            sipReleaseType(a3,sipType_QDirIterator_IteratorFlags,a3State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDirIterator[] = {
    {SIP_MLNAME_CAST(sipName_fileInfo), meth_QDirIterator_fileInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_fileInfo)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QDirIterator_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_fileName)},
    {SIP_MLNAME_CAST(sipName_filePath), meth_QDirIterator_filePath, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_filePath)},
    {SIP_MLNAME_CAST(sipName_hasNext), meth_QDirIterator_hasNext, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_hasNext)},
    {SIP_MLNAME_CAST(sipName_next), meth_QDirIterator_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_next)},
    {SIP_MLNAME_CAST(sipName_path), meth_QDirIterator_path, METH_VARARGS, SIP_MLDOC_CAST(doc_QDirIterator_path)}
};

static sipEnumMemberDef enummembers_QDirIterator[] = {
    {sipName_FollowSymlinks, static_cast<int>(QDirIterator::FollowSymlinks), 45},
    {sipName_NoIteratorFlags, static_cast<int>(QDirIterator::NoIteratorFlags), 45},
    {sipName_Subdirectories, static_cast<int>(QDirIterator::Subdirectories), 45},
};

PyDoc_STRVAR(doc_QDirIterator, "\1QDirIterator(QDir, flags: QDirIterator.IteratorFlags = QDirIterator.NoIteratorFlags)\n"
    "QDirIterator(QString, flags: QDirIterator.IteratorFlags = QDirIterator.NoIteratorFlags)\n"
    "QDirIterator(QString, QDir.Filters, flags: QDirIterator.IteratorFlags = QDirIterator.NoIteratorFlags)\n"
    "QDirIterator(QString, QStringList, filters: QDir.Filters = QDir.NoFilter, flags: QDirIterator.IteratorFlags = QDirIterator.NoIteratorFlags)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QDirIterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDirIterator,
        {0}
    },
    {
        sipNameNr_QDirIterator,
        {0, 0, 1},
        6, methods_QDirIterator,
        3, enummembers_QDirIterator,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDirIterator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDirIterator,
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
    dealloc_QDirIterator,
    0,
    0,
    0,
    release_QDirIterator,
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
