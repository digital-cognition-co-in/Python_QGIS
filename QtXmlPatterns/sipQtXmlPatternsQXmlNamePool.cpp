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

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtXmlPatterns/qxmlnamepool.sip"
#include <qxmlnamepool.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtXmlPatterns/sipQtXmlPatternsQXmlNamePool.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QXmlNamePool(void *, int);}
static void release_QXmlNamePool(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QXmlNamePool *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QXmlNamePool(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlNamePool(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlNamePool *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlNamePool *>(sipSrc);
}


extern "C" {static void *array_QXmlNamePool(SIP_SSIZE_T);}
static void *array_QXmlNamePool(SIP_SSIZE_T sipNrElem)
{
    return new QXmlNamePool[sipNrElem];
}


extern "C" {static void *copy_QXmlNamePool(const void *, SIP_SSIZE_T);}
static void *copy_QXmlNamePool(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlNamePool(reinterpret_cast<const QXmlNamePool *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlNamePool(sipSimpleWrapper *);}
static void dealloc_QXmlNamePool(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlNamePool(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QXmlNamePool(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlNamePool(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlNamePool *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlNamePool();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QXmlNamePool* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlNamePool, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlNamePool(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QXmlNamePool, "\1QXmlNamePool()\n"
    "QXmlNamePool(QXmlNamePool)");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlNamePool = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlNamePool,
        {0}
    },
    {
        sipNameNr_QXmlNamePool,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlNamePool,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlNamePool,
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
    dealloc_QXmlNamePool,
    assign_QXmlNamePool,
    array_QXmlNamePool,
    copy_QXmlNamePool,
    release_QXmlNamePool,
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
