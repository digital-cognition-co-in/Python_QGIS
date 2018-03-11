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

#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirSortFlags.cpp"

#line 35 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirSortFlags.cpp"


extern "C" {static int slot_QDir_SortFlags___bool__(PyObject *);}
static int slot_QDir_SortFlags___bool__(PyObject *sipSelf)
{
    QDir::SortFlags *sipCpp = reinterpret_cast<QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDir::SortFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirSortFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDir_SortFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QDir::SortFlags *sipCpp = reinterpret_cast<QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDir::SortFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDir_SortFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDir::SortFlags::Int() != a0->operator QDir::SortFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirSortFlags.cpp"
            sipReleaseType(const_cast<QDir::SortFlags *>(a0),sipType_QDir_SortFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QDir_SortFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDir_SortFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QDir::SortFlags *sipCpp = reinterpret_cast<QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QDir::SortFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDir_SortFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QDir::SortFlags::Int() == a0->operator QDir::SortFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirSortFlags.cpp"
            sipReleaseType(const_cast<QDir::SortFlags *>(a0),sipType_QDir_SortFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QDir_SortFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QDir_SortFlags___invert__(PyObject *);}
static PyObject *slot_QDir_SortFlags___invert__(PyObject *sipSelf)
{
    QDir::SortFlags *sipCpp = reinterpret_cast<QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QDir::SortFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDir::SortFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDir_SortFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDir::SortFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDir_SortFlags, &a0, &a0State, &a1))
        {
            QDir::SortFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDir::SortFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDir_SortFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDir::SortFlags* a0;
        int a0State = 0;
        QDir::SortFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDir_SortFlags, &a0, &a0State, sipType_QDir_SortFlags, &a1, &a1State))
        {
            QDir::SortFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDir::SortFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);
            sipReleaseType(a1,sipType_QDir_SortFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    {
        QDir::SortFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDir_SortFlags, &a0, &a0State, &a1))
        {
            QDir::SortFlags*sipRes = 0;

#line 346 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qglobal.sip"
        sipRes = new QDir::SortFlags(*a0 ^ a1);
#line 243 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirSortFlags.cpp"
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDir_SortFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QDir::SortFlags* a0;
        int a0State = 0;
        QDir::SortFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QDir_SortFlags, &a0, &a0State, sipType_QDir_SortFlags, &a1, &a1State))
        {
            QDir::SortFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDir::SortFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);
            sipReleaseType(a1,sipType_QDir_SortFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    {
        QDir::SortFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QDir_SortFlags, &a0, &a0State, &a1))
        {
            QDir::SortFlags*sipRes = 0;

#line 341 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qglobal.sip"
        sipRes = new QDir::SortFlags(*a0 | a1);
#line 295 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirSortFlags.cpp"
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDir_SortFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QDir_SortFlags___int__(PyObject *);}
static PyObject *slot_QDir_SortFlags___int__(PyObject *sipSelf)
{
    QDir::SortFlags *sipCpp = reinterpret_cast<QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QDir_SortFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDir_SortFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDir::SortFlags *sipCpp = reinterpret_cast<QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDir::SortFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDir_SortFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QDir::SortFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QDir_SortFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDir_SortFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDir::SortFlags *sipCpp = reinterpret_cast<QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QDir::SortFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QDir_SortFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QDir::SortFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QDir_SortFlags,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QDir_SortFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QDir_SortFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QDir_SortFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QDir::SortFlags *sipCpp = reinterpret_cast<QDir::SortFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QDir_SortFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QDir::SortFlags::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDir_SortFlags(void *, int);}
static void release_QDir_SortFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QDir::SortFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QDir_SortFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QDir_SortFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDir::SortFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDir::SortFlags *>(sipSrc);
}


extern "C" {static void *array_QDir_SortFlags(SIP_SSIZE_T);}
static void *array_QDir_SortFlags(SIP_SSIZE_T sipNrElem)
{
    return new QDir::SortFlags[sipNrElem];
}


extern "C" {static void *copy_QDir_SortFlags(const void *, SIP_SSIZE_T);}
static void *copy_QDir_SortFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDir::SortFlags(reinterpret_cast<const QDir::SortFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDir_SortFlags(sipSimpleWrapper *);}
static void dealloc_QDir_SortFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QDir_SortFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QDir_SortFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDir_SortFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QDir::SortFlags *sipCpp = 0;

    {
        const QDir::SortFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QDir_SortFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDir::SortFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QDir::SortFlags *>(a0),sipType_QDir_SortFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDir::SortFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QDir::SortFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QDir_SortFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QDir_SortFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QDir::SortFlags **sipCppPtr = reinterpret_cast<QDir::SortFlags **>(sipCppPtrV);

#line 379 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QDir::SortFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDir_SortFlag)) ||
            sipCanConvertToType(sipPy, sipType_QDir_SortFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QDir_SortFlag)))
{
    *sipCppPtr = new QDir::SortFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QDir::SortFlags *>(sipConvertToType(sipPy, sipType_QDir_SortFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 579 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtCore/sipQtCoreQDirSortFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QDir_SortFlags[] = {
    {(void *)slot_QDir_SortFlags___bool__, bool_slot},
    {(void *)slot_QDir_SortFlags___ne__, ne_slot},
    {(void *)slot_QDir_SortFlags___eq__, eq_slot},
    {(void *)slot_QDir_SortFlags___invert__, invert_slot},
    {(void *)slot_QDir_SortFlags___and__, and_slot},
    {(void *)slot_QDir_SortFlags___xor__, xor_slot},
    {(void *)slot_QDir_SortFlags___or__, or_slot},
    {(void *)slot_QDir_SortFlags___int__, int_slot},
    {(void *)slot_QDir_SortFlags___ixor__, ixor_slot},
    {(void *)slot_QDir_SortFlags___ior__, ior_slot},
    {(void *)slot_QDir_SortFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QDir_SortFlags, "\1QDir.SortFlags(QDir.SortFlags)\n"
    "QDir.SortFlags(int)\n"
    "QDir.SortFlags()");


pyqt4ClassTypeDef sipTypeDef_QtCore_QDir_SortFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QDir__SortFlags,
        {0}
    },
    {
        sipNameNr_SortFlags,
        {39, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDir_SortFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QDir_SortFlags,
    init_type_QDir_SortFlags,
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
    dealloc_QDir_SortFlags,
    assign_QDir_SortFlags,
    array_QDir_SortFlags,
    copy_QDir_SortFlags,
    release_QDir_SortFlags,
    0,
    convertTo_QDir_SortFlags,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0
};
