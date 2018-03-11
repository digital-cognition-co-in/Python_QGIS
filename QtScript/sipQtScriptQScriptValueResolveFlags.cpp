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

#include "sipAPIQtScript.h"

#line 45 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtScript/sipQtScriptQScriptValueResolveFlags.cpp"

#line 45 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtScript/sipQtScriptQScriptValueResolveFlags.cpp"


extern "C" {static int slot_QScriptValue_ResolveFlags___bool__(PyObject *);}
static int slot_QScriptValue_ResolveFlags___bool__(PyObject *sipSelf)
{
    QScriptValue::ResolveFlags *sipCpp = reinterpret_cast<QScriptValue::ResolveFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_ResolveFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QScriptValue::ResolveFlags::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtScript/sipQtScriptQScriptValueResolveFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptValue::ResolveFlags *sipCpp = reinterpret_cast<QScriptValue::ResolveFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_ResolveFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptValue::ResolveFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptValue_ResolveFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QScriptValue::ResolveFlags::Int() != a0->operator QScriptValue::ResolveFlags::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtScript/sipQtScriptQScriptValueResolveFlags.cpp"
            sipReleaseType(const_cast<QScriptValue::ResolveFlags *>(a0),sipType_QScriptValue_ResolveFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,ne_slot,sipType_QScriptValue_ResolveFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QScriptValue::ResolveFlags *sipCpp = reinterpret_cast<QScriptValue::ResolveFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_ResolveFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QScriptValue::ResolveFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptValue_ResolveFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QScriptValue::ResolveFlags::Int() == a0->operator QScriptValue::ResolveFlags::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtScript/sipQtScriptQScriptValueResolveFlags.cpp"
            sipReleaseType(const_cast<QScriptValue::ResolveFlags *>(a0),sipType_QScriptValue_ResolveFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,eq_slot,sipType_QScriptValue_ResolveFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___invert__(PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___invert__(PyObject *sipSelf)
{
    QScriptValue::ResolveFlags *sipCpp = reinterpret_cast<QScriptValue::ResolveFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_ResolveFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QScriptValue::ResolveFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::ResolveFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_ResolveFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValue::ResolveFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QScriptValue_ResolveFlags, &a0, &a0State, &a1))
        {
            QScriptValue::ResolveFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::ResolveFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_ResolveFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_ResolveFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValue::ResolveFlags* a0;
        int a0State = 0;
        QScriptValue::ResolveFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QScriptValue_ResolveFlags, &a0, &a0State, sipType_QScriptValue_ResolveFlags, &a1, &a1State))
        {
            QScriptValue::ResolveFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::ResolveFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_ResolveFlags,a0State);
            sipReleaseType(a1,sipType_QScriptValue_ResolveFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_ResolveFlags,NULL);
        }
    }

    {
        QScriptValue::ResolveFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QScriptValue_ResolveFlags, &a0, &a0State, &a1))
        {
            QScriptValue::ResolveFlags*sipRes = 0;

#line 346 "sip/QtCore/qglobal.sip"
        sipRes = new QScriptValue::ResolveFlags(*a0 ^ a1);
#line 243 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtScript/sipQtScriptQScriptValueResolveFlags.cpp"
            sipReleaseType(a0,sipType_QScriptValue_ResolveFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_ResolveFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValue::ResolveFlags* a0;
        int a0State = 0;
        QScriptValue::ResolveFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QScriptValue_ResolveFlags, &a0, &a0State, sipType_QScriptValue_ResolveFlags, &a1, &a1State))
        {
            QScriptValue::ResolveFlags*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::ResolveFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_ResolveFlags,a0State);
            sipReleaseType(a1,sipType_QScriptValue_ResolveFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_ResolveFlags,NULL);
        }
    }

    {
        QScriptValue::ResolveFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QScriptValue_ResolveFlags, &a0, &a0State, &a1))
        {
            QScriptValue::ResolveFlags*sipRes = 0;

#line 341 "sip/QtCore/qglobal.sip"
        sipRes = new QScriptValue::ResolveFlags(*a0 | a1);
#line 295 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtScript/sipQtScriptQScriptValueResolveFlags.cpp"
            sipReleaseType(a0,sipType_QScriptValue_ResolveFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_ResolveFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtScript,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___int__(PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___int__(PyObject *sipSelf)
{
    QScriptValue::ResolveFlags *sipCpp = reinterpret_cast<QScriptValue::ResolveFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_ResolveFlags));

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


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QScriptValue_ResolveFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QScriptValue::ResolveFlags *sipCpp = reinterpret_cast<QScriptValue::ResolveFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_ResolveFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QScriptValue::ResolveFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptValue_ResolveFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QScriptValue::ResolveFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_ResolveFlags,a0State);

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


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QScriptValue_ResolveFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QScriptValue::ResolveFlags *sipCpp = reinterpret_cast<QScriptValue::ResolveFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_ResolveFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QScriptValue::ResolveFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QScriptValue_ResolveFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QScriptValue::ResolveFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QScriptValue_ResolveFlags,a0State);

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


extern "C" {static PyObject *slot_QScriptValue_ResolveFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QScriptValue_ResolveFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QScriptValue_ResolveFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QScriptValue::ResolveFlags *sipCpp = reinterpret_cast<QScriptValue::ResolveFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QScriptValue_ResolveFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QScriptValue::ResolveFlags::operator&=(a0);
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
extern "C" {static void release_QScriptValue_ResolveFlags(void *, int);}
static void release_QScriptValue_ResolveFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QScriptValue::ResolveFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QScriptValue_ResolveFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QScriptValue_ResolveFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QScriptValue::ResolveFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QScriptValue::ResolveFlags *>(sipSrc);
}


extern "C" {static void *array_QScriptValue_ResolveFlags(SIP_SSIZE_T);}
static void *array_QScriptValue_ResolveFlags(SIP_SSIZE_T sipNrElem)
{
    return new QScriptValue::ResolveFlags[sipNrElem];
}


extern "C" {static void *copy_QScriptValue_ResolveFlags(const void *, SIP_SSIZE_T);}
static void *copy_QScriptValue_ResolveFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QScriptValue::ResolveFlags(reinterpret_cast<const QScriptValue::ResolveFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QScriptValue_ResolveFlags(sipSimpleWrapper *);}
static void dealloc_QScriptValue_ResolveFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptValue_ResolveFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QScriptValue_ResolveFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScriptValue_ResolveFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QScriptValue::ResolveFlags *sipCpp = 0;

    {
        const QScriptValue::ResolveFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QScriptValue_ResolveFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptValue::ResolveFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QScriptValue::ResolveFlags *>(a0),sipType_QScriptValue_ResolveFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptValue::ResolveFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptValue::ResolveFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QScriptValue_ResolveFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QScriptValue_ResolveFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QScriptValue::ResolveFlags **sipCppPtr = reinterpret_cast<QScriptValue::ResolveFlags **>(sipCppPtrV);

#line 379 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QScriptValue::ResolveFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QScriptValue_ResolveFlag)) ||
            sipCanConvertToType(sipPy, sipType_QScriptValue_ResolveFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QScriptValue_ResolveFlag)))
{
    *sipCppPtr = new QScriptValue::ResolveFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QScriptValue::ResolveFlags *>(sipConvertToType(sipPy, sipType_QScriptValue_ResolveFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 579 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtScript/sipQtScriptQScriptValueResolveFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QScriptValue_ResolveFlags[] = {
    {(void *)slot_QScriptValue_ResolveFlags___bool__, bool_slot},
    {(void *)slot_QScriptValue_ResolveFlags___ne__, ne_slot},
    {(void *)slot_QScriptValue_ResolveFlags___eq__, eq_slot},
    {(void *)slot_QScriptValue_ResolveFlags___invert__, invert_slot},
    {(void *)slot_QScriptValue_ResolveFlags___and__, and_slot},
    {(void *)slot_QScriptValue_ResolveFlags___xor__, xor_slot},
    {(void *)slot_QScriptValue_ResolveFlags___or__, or_slot},
    {(void *)slot_QScriptValue_ResolveFlags___int__, int_slot},
    {(void *)slot_QScriptValue_ResolveFlags___ixor__, ixor_slot},
    {(void *)slot_QScriptValue_ResolveFlags___ior__, ior_slot},
    {(void *)slot_QScriptValue_ResolveFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QScriptValue_ResolveFlags, "\1QScriptValue.ResolveFlags(QScriptValue.ResolveFlags)\n"
    "QScriptValue.ResolveFlags(int)\n"
    "QScriptValue.ResolveFlags()");


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptValue_ResolveFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptValue__ResolveFlags,
        {0}
    },
    {
        sipNameNr_ResolveFlags,
        {21, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScriptValue_ResolveFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QScriptValue_ResolveFlags,
    init_type_QScriptValue_ResolveFlags,
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
    dealloc_QScriptValue_ResolveFlags,
    assign_QScriptValue_ResolveFlags,
    array_QScriptValue_ResolveFlags,
    copy_QScriptValue_ResolveFlags,
    release_QScriptValue_ResolveFlags,
    0,
    convertTo_QScriptValue_ResolveFlags,
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
