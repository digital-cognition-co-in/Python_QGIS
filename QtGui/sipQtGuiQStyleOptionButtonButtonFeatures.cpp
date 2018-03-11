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

#line 705 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionButtonButtonFeatures.cpp"

#line 705 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionButtonButtonFeatures.cpp"


extern "C" {static int slot_QStyleOptionButton_ButtonFeatures___bool__(PyObject *);}
static int slot_QStyleOptionButton_ButtonFeatures___bool__(PyObject *sipSelf)
{
    QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QStyleOptionButton::ButtonFeatures::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionButtonButtonFeatures.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QStyleOptionButton::ButtonFeatures::Int() != a0->operator QStyleOptionButton::ButtonFeatures::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionButtonButtonFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionButton::ButtonFeatures *>(a0),sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QStyleOptionButton_ButtonFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QStyleOptionButton::ButtonFeatures::Int() == a0->operator QStyleOptionButton::ButtonFeatures::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionButtonButtonFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionButton::ButtonFeatures *>(a0),sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QStyleOptionButton_ButtonFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___invert__(PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___invert__(PyObject *sipSelf)
{
    QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QStyleOptionButton::ButtonFeatures*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionButton::ButtonFeatures(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___and__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionButton::ButtonFeatures*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionButton::ButtonFeatures((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___xor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;
        QStyleOptionButton::ButtonFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State, sipType_QStyleOptionButton_ButtonFeatures, &a1, &a1State))
        {
            QStyleOptionButton::ButtonFeatures*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionButton::ButtonFeatures((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionButton_ButtonFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,NULL);
        }
    }

    {
        QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionButton::ButtonFeatures*sipRes = 0;

#line 346 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionButton::ButtonFeatures(*a0 ^ a1);
#line 243 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionButtonButtonFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___or__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;
        QStyleOptionButton::ButtonFeatures* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State, sipType_QStyleOptionButton_ButtonFeatures, &a1, &a1State))
        {
            QStyleOptionButton::ButtonFeatures*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionButton::ButtonFeatures((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionButton_ButtonFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,NULL);
        }
    }

    {
        QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionButton::ButtonFeatures*sipRes = 0;

#line 341 "sip/QtCore/qglobal.sip"
        sipRes = new QStyleOptionButton::ButtonFeatures(*a0 | a1);
#line 295 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionButtonButtonFeatures.cpp"
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionButton_ButtonFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___int__(PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___int__(PyObject *sipSelf)
{
    QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

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


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionButton::ButtonFeatures::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___ior__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionButton::ButtonFeatures::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionButton_ButtonFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionButton_ButtonFeatures___iand__(PyObject *,PyObject *);}
static PyObject *slot_QStyleOptionButton_ButtonFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionButton::ButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionButton_ButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionButton::ButtonFeatures::operator&=(a0);
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
extern "C" {static void release_QStyleOptionButton_ButtonFeatures(void *, int);}
static void release_QStyleOptionButton_ButtonFeatures(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionButton_ButtonFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionButton_ButtonFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionButton::ButtonFeatures *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionButton_ButtonFeatures(SIP_SSIZE_T);}
static void *array_QStyleOptionButton_ButtonFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionButton::ButtonFeatures[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionButton_ButtonFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionButton_ButtonFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionButton::ButtonFeatures(reinterpret_cast<const QStyleOptionButton::ButtonFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionButton_ButtonFeatures(sipSimpleWrapper *);}
static void dealloc_QStyleOptionButton_ButtonFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionButton_ButtonFeatures(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionButton_ButtonFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionButton_ButtonFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionButton::ButtonFeatures *sipCpp = 0;

    {
        const QStyleOptionButton::ButtonFeatures* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionButton_ButtonFeatures, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionButton::ButtonFeatures(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStyleOptionButton::ButtonFeatures *>(a0),sipType_QStyleOptionButton_ButtonFeatures,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionButton::ButtonFeatures(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionButton::ButtonFeatures();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionButton_ButtonFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionButton_ButtonFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyleOptionButton::ButtonFeatures **sipCppPtr = reinterpret_cast<QStyleOptionButton::ButtonFeatures **>(sipCppPtrV);

#line 379 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionButton::ButtonFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeature)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionButton_ButtonFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionButton_ButtonFeature)))
{
    *sipCppPtr = new QStyleOptionButton::ButtonFeatures(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionButton::ButtonFeatures *>(sipConvertToType(sipPy, sipType_QStyleOptionButton_ButtonFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 579 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQStyleOptionButtonButtonFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionButton_ButtonFeatures[] = {
    {(void *)slot_QStyleOptionButton_ButtonFeatures___bool__, bool_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___ne__, ne_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___eq__, eq_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___invert__, invert_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___and__, and_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___xor__, xor_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___or__, or_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___int__, int_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___ior__, ior_slot},
    {(void *)slot_QStyleOptionButton_ButtonFeatures___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionButton_ButtonFeatures, "\1QStyleOptionButton.ButtonFeatures(QStyleOptionButton.ButtonFeatures)\n"
    "QStyleOptionButton.ButtonFeatures(int)\n"
    "QStyleOptionButton.ButtonFeatures()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionButton_ButtonFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionButton__ButtonFeatures,
        {0}
    },
    {
        sipNameNr_ButtonFeatures,
        {503, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionButton_ButtonFeatures,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionButton_ButtonFeatures,
    init_type_QStyleOptionButton_ButtonFeatures,
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
    dealloc_QStyleOptionButton_ButtonFeatures,
    assign_QStyleOptionButton_ButtonFeatures,
    array_QStyleOptionButton_ButtonFeatures,
    copy_QStyleOptionButton_ButtonFeatures,
    release_QStyleOptionButton_ButtonFeatures,
    0,
    convertTo_QStyleOptionButton_ButtonFeatures,
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
