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

#include "sipAPIQtWebKit.h"

#line 39 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 351 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 36 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtWebKit/sipQtWebKitQWebPageChooseMultipleFilesExtensionReturn.cpp"

#line 36 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 40 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtWebKit/sipQtWebKitQWebPageChooseMultipleFilesExtensionReturn.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QWebPage_ChooseMultipleFilesExtensionReturn(void *, int);}
static void release_QWebPage_ChooseMultipleFilesExtensionReturn(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionReturn *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPage_ChooseMultipleFilesExtensionReturn(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_ChooseMultipleFilesExtensionReturn(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPage::ChooseMultipleFilesExtensionReturn *>(sipSrc);
}


extern "C" {static void *array_QWebPage_ChooseMultipleFilesExtensionReturn(SIP_SSIZE_T);}
static void *array_QWebPage_ChooseMultipleFilesExtensionReturn(SIP_SSIZE_T sipNrElem)
{
    return new QWebPage::ChooseMultipleFilesExtensionReturn[sipNrElem];
}


extern "C" {static void *copy_QWebPage_ChooseMultipleFilesExtensionReturn(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_ChooseMultipleFilesExtensionReturn(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPage::ChooseMultipleFilesExtensionReturn(reinterpret_cast<const QWebPage::ChooseMultipleFilesExtensionReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_ChooseMultipleFilesExtensionReturn(sipSimpleWrapper *);}
static void dealloc_QWebPage_ChooseMultipleFilesExtensionReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPage_ChooseMultipleFilesExtensionReturn(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPage_ChooseMultipleFilesExtensionReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPage_ChooseMultipleFilesExtensionReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPage::ChooseMultipleFilesExtensionReturn *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ChooseMultipleFilesExtensionReturn();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPage::ChooseMultipleFilesExtensionReturn* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPage_ChooseMultipleFilesExtensionReturn, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ChooseMultipleFilesExtensionReturn(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWebPage_ChooseMultipleFilesExtensionReturn[] = {{30, 255, 1}};


extern "C" {static PyObject *varget_QWebPage_ChooseMultipleFilesExtensionReturn_fileNames(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPage_ChooseMultipleFilesExtensionReturn_fileNames(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QStringList*sipVal;
    QWebPage::ChooseMultipleFilesExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionReturn *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -20);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->fileNames;

    sipPy = sipConvertFromType(sipVal, sipType_QStringList, NULL);
    sipKeepReference(sipPySelf, -20, sipPy);

    return sipPy;
}


extern "C" {static int varset_QWebPage_ChooseMultipleFilesExtensionReturn_fileNames(void *, PyObject *, PyObject *);}
static int varset_QWebPage_ChooseMultipleFilesExtensionReturn_fileNames(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStringList*sipVal;
    QWebPage::ChooseMultipleFilesExtensionReturn *sipCpp = reinterpret_cast<QWebPage::ChooseMultipleFilesExtensionReturn *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStringList *>(sipForceConvertToType(sipPy,sipType_QStringList,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->fileNames = *sipVal;

    sipReleaseType(sipVal, sipType_QStringList, sipValState);

    return 0;
}

sipVariableDef variables_QWebPage_ChooseMultipleFilesExtensionReturn[] = {
    {InstanceVariable, sipName_fileNames, (PyMethodDef *)varget_QWebPage_ChooseMultipleFilesExtensionReturn_fileNames, (PyMethodDef *)varset_QWebPage_ChooseMultipleFilesExtensionReturn_fileNames, NULL, NULL},
};

PyDoc_STRVAR(doc_QWebPage_ChooseMultipleFilesExtensionReturn, "\1QWebPage.ChooseMultipleFilesExtensionReturn()\n"
    "QWebPage.ChooseMultipleFilesExtensionReturn(QWebPage.ChooseMultipleFilesExtensionReturn)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPage_ChooseMultipleFilesExtensionReturn = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPage__ChooseMultipleFilesExtensionReturn,
        {0}
    },
    {
        sipNameNr_ChooseMultipleFilesExtensionReturn,
        {22, 255, 0},
        0, 0,
        0, 0,
        1, variables_QWebPage_ChooseMultipleFilesExtensionReturn,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPage_ChooseMultipleFilesExtensionReturn,
    -1,
    -1,
    supers_QWebPage_ChooseMultipleFilesExtensionReturn,
    0,
    init_type_QWebPage_ChooseMultipleFilesExtensionReturn,
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
    dealloc_QWebPage_ChooseMultipleFilesExtensionReturn,
    assign_QWebPage_ChooseMultipleFilesExtensionReturn,
    array_QWebPage_ChooseMultipleFilesExtensionReturn,
    copy_QWebPage_ChooseMultipleFilesExtensionReturn,
    release_QWebPage_ChooseMultipleFilesExtensionReturn,
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
