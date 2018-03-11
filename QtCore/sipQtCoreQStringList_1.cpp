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

#line 36 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQStringList_1.cpp"



extern "C" {static void assign_QStringList_1(void *, SIP_SSIZE_T, const void *);}
static void assign_QStringList_1(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStringList *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStringList *>(sipSrc);
}


extern "C" {static void *array_QStringList_1(SIP_SSIZE_T);}
static void *array_QStringList_1(SIP_SSIZE_T sipNrElem)
{
    return new QStringList[sipNrElem];
}


extern "C" {static void *copy_QStringList_1(const void *, SIP_SSIZE_T);}
static void *copy_QStringList_1(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStringList(reinterpret_cast<const QStringList *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QStringList_1(void *, int);}
static void release_QStringList_1(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QStringList *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QStringList_1(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStringList_1(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStringList **sipCppPtr = reinterpret_cast<QStringList **>(sipCppPtrV);

#line 40 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qstringlist.sip"
if (sipIsErr == NULL)
    return qpycore_PySequence_Check_QStringList(sipPy);

*sipCppPtr = new QStringList(qpycore_PySequence_AsQStringList(sipPy));

return sipGetState(sipTransferObj);
#line 82 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQStringList_1.cpp"
}


extern "C" {static PyObject *convertFrom_QStringList_1(void *, PyObject *);}
static PyObject *convertFrom_QStringList_1(void *sipCppV, PyObject *)
{
   QStringList *sipCpp = reinterpret_cast<QStringList *>(sipCppV);

#line 49 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qstringlist.sip"
    return qpycore_PyObject_FromQStringList(*sipCpp);
#line 93 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQStringList_1.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QStringList_1 = {
    {
        1,
        &sipTypeDef_QtCore_QStringList_0.super.ctd_base,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QStringList,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QStringList_1,
    array_QStringList_1,
    copy_QStringList_1,
    release_QStringList_1,
    convertTo_QStringList_1,
    convertFrom_QStringList_1
};