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
#line 247 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtWebKit/qwebpage.sip"
#include <qwebpage.h>
#line 36 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtWebKit/sipQtWebKitQWebPageExtensionReturn.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QWebPage_ExtensionReturn(void *, int);}
static void release_QWebPage_ExtensionReturn(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPage::ExtensionReturn *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPage_ExtensionReturn(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_ExtensionReturn(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPage::ExtensionReturn *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPage::ExtensionReturn *>(sipSrc);
}


extern "C" {static void *array_QWebPage_ExtensionReturn(SIP_SSIZE_T);}
static void *array_QWebPage_ExtensionReturn(SIP_SSIZE_T sipNrElem)
{
    return new QWebPage::ExtensionReturn[sipNrElem];
}


extern "C" {static void *copy_QWebPage_ExtensionReturn(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_ExtensionReturn(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPage::ExtensionReturn(reinterpret_cast<const QWebPage::ExtensionReturn *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_ExtensionReturn(sipSimpleWrapper *);}
static void dealloc_QWebPage_ExtensionReturn(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPage_ExtensionReturn(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPage_ExtensionReturn(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPage_ExtensionReturn(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPage::ExtensionReturn *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ExtensionReturn();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPage::ExtensionReturn* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPage_ExtensionReturn, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPage::ExtensionReturn(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QWebPage_ExtensionReturn, "\1QWebPage.ExtensionReturn()\n"
    "QWebPage.ExtensionReturn(QWebPage.ExtensionReturn)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPage_ExtensionReturn = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPage__ExtensionReturn,
        {0}
    },
    {
        sipNameNr_ExtensionReturn,
        {22, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPage_ExtensionReturn,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPage_ExtensionReturn,
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
    dealloc_QWebPage_ExtensionReturn,
    assign_QWebPage_ExtensionReturn,
    array_QWebPage_ExtensionReturn,
    copy_QWebPage_ExtensionReturn,
    release_QWebPage_ExtensionReturn,
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
