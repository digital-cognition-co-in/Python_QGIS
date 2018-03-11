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

#include "sipAPIQtNetwork.h"

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qnetworksession.sip"
#include <qnetworksession.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkSessionUsagePolicies.cpp"

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qnetworksession.sip"
#include <qnetworksession.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkSessionUsagePolicies.cpp"


extern "C" {static int slot_QNetworkSession_UsagePolicies___bool__(PyObject *);}
static int slot_QNetworkSession_UsagePolicies___bool__(PyObject *sipSelf)
{
    QNetworkSession::UsagePolicies *sipCpp = reinterpret_cast<QNetworkSession::UsagePolicies *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkSession_UsagePolicies));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 370 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QNetworkSession::UsagePolicies::Int() != 0);
#else
        sipRes = (sipCpp->operator int() != 0);
#endif
#line 60 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkSessionUsagePolicies.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkSession::UsagePolicies *sipCpp = reinterpret_cast<QNetworkSession::UsagePolicies *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkSession_UsagePolicies));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkSession::UsagePolicies* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkSession_UsagePolicies, &a0, &a0State))
        {
            bool sipRes = 0;

#line 361 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QNetworkSession::UsagePolicies::Int() != a0->operator QNetworkSession::UsagePolicies::Int());
#else
        sipRes = (sipCpp->operator int() != a0->operator int());
#endif
#line 94 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkSessionUsagePolicies.cpp"
            sipReleaseType(const_cast<QNetworkSession::UsagePolicies *>(a0),sipType_QNetworkSession_UsagePolicies,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkSession_UsagePolicies,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkSession::UsagePolicies *sipCpp = reinterpret_cast<QNetworkSession::UsagePolicies *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkSession_UsagePolicies));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkSession::UsagePolicies* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkSession_UsagePolicies, &a0, &a0State))
        {
            bool sipRes = 0;

#line 352 "sip/QtCore/qglobal.sip"
#if QT_VERSION >= 0x050000
        sipRes = (sipCpp->operator QNetworkSession::UsagePolicies::Int() == a0->operator QNetworkSession::UsagePolicies::Int());
#else
        sipRes = (sipCpp->operator int() == a0->operator int());
#endif
#line 134 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkSessionUsagePolicies.cpp"
            sipReleaseType(const_cast<QNetworkSession::UsagePolicies *>(a0),sipType_QNetworkSession_UsagePolicies,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkSession_UsagePolicies,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___invert__(PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___invert__(PyObject *sipSelf)
{
    QNetworkSession::UsagePolicies *sipCpp = reinterpret_cast<QNetworkSession::UsagePolicies *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkSession_UsagePolicies));

    if (!sipCpp)
        return 0;


    {
        {
            QNetworkSession::UsagePolicies*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkSession::UsagePolicies(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkSession_UsagePolicies,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___and__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkSession::UsagePolicies* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkSession_UsagePolicies, &a0, &a0State, &a1))
        {
            QNetworkSession::UsagePolicies*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkSession::UsagePolicies((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkSession_UsagePolicies,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkSession_UsagePolicies,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___xor__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkSession::UsagePolicies* a0;
        int a0State = 0;
        QNetworkSession::UsagePolicies* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QNetworkSession_UsagePolicies, &a0, &a0State, sipType_QNetworkSession_UsagePolicies, &a1, &a1State))
        {
            QNetworkSession::UsagePolicies*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkSession::UsagePolicies((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkSession_UsagePolicies,a0State);
            sipReleaseType(a1,sipType_QNetworkSession_UsagePolicies,a1State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkSession_UsagePolicies,NULL);
        }
    }

    {
        QNetworkSession::UsagePolicies* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkSession_UsagePolicies, &a0, &a0State, &a1))
        {
            QNetworkSession::UsagePolicies*sipRes = 0;

#line 346 "sip/QtCore/qglobal.sip"
        sipRes = new QNetworkSession::UsagePolicies(*a0 ^ a1);
#line 243 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkSessionUsagePolicies.cpp"
            sipReleaseType(a0,sipType_QNetworkSession_UsagePolicies,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkSession_UsagePolicies,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___or__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkSession::UsagePolicies* a0;
        int a0State = 0;
        QNetworkSession::UsagePolicies* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QNetworkSession_UsagePolicies, &a0, &a0State, sipType_QNetworkSession_UsagePolicies, &a1, &a1State))
        {
            QNetworkSession::UsagePolicies*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkSession::UsagePolicies((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkSession_UsagePolicies,a0State);
            sipReleaseType(a1,sipType_QNetworkSession_UsagePolicies,a1State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkSession_UsagePolicies,NULL);
        }
    }

    {
        QNetworkSession::UsagePolicies* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkSession_UsagePolicies, &a0, &a0State, &a1))
        {
            QNetworkSession::UsagePolicies*sipRes = 0;

#line 341 "sip/QtCore/qglobal.sip"
        sipRes = new QNetworkSession::UsagePolicies(*a0 | a1);
#line 295 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkSessionUsagePolicies.cpp"
            sipReleaseType(a0,sipType_QNetworkSession_UsagePolicies,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkSession_UsagePolicies,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___int__(PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___int__(PyObject *sipSelf)
{
    QNetworkSession::UsagePolicies *sipCpp = reinterpret_cast<QNetworkSession::UsagePolicies *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkSession_UsagePolicies));

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


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkSession_UsagePolicies)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkSession::UsagePolicies *sipCpp = reinterpret_cast<QNetworkSession::UsagePolicies *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkSession_UsagePolicies));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QNetworkSession::UsagePolicies* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkSession_UsagePolicies, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QNetworkSession::UsagePolicies::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkSession_UsagePolicies,a0State);

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


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___ior__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkSession_UsagePolicies)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkSession::UsagePolicies *sipCpp = reinterpret_cast<QNetworkSession::UsagePolicies *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkSession_UsagePolicies));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QNetworkSession::UsagePolicies* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkSession_UsagePolicies, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QNetworkSession::UsagePolicies::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkSession_UsagePolicies,a0State);

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


extern "C" {static PyObject *slot_QNetworkSession_UsagePolicies___iand__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkSession_UsagePolicies___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkSession_UsagePolicies)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkSession::UsagePolicies *sipCpp = reinterpret_cast<QNetworkSession::UsagePolicies *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkSession_UsagePolicies));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QNetworkSession::UsagePolicies::operator&=(a0);
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
extern "C" {static void release_QNetworkSession_UsagePolicies(void *, int);}
static void release_QNetworkSession_UsagePolicies(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkSession::UsagePolicies *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkSession_UsagePolicies(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkSession_UsagePolicies(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkSession::UsagePolicies *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkSession::UsagePolicies *>(sipSrc);
}


extern "C" {static void *array_QNetworkSession_UsagePolicies(SIP_SSIZE_T);}
static void *array_QNetworkSession_UsagePolicies(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkSession::UsagePolicies[sipNrElem];
}


extern "C" {static void *copy_QNetworkSession_UsagePolicies(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkSession_UsagePolicies(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkSession::UsagePolicies(reinterpret_cast<const QNetworkSession::UsagePolicies *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkSession_UsagePolicies(sipSimpleWrapper *);}
static void dealloc_QNetworkSession_UsagePolicies(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkSession_UsagePolicies(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNetworkSession_UsagePolicies(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkSession_UsagePolicies(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkSession::UsagePolicies *sipCpp = 0;

    {
        const QNetworkSession::UsagePolicies* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QNetworkSession_UsagePolicies, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkSession::UsagePolicies(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QNetworkSession::UsagePolicies *>(a0),sipType_QNetworkSession_UsagePolicies,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkSession::UsagePolicies(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkSession::UsagePolicies();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QNetworkSession_UsagePolicies(PyObject *, void **, int *, PyObject *);}
static int convertTo_QNetworkSession_UsagePolicies(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QNetworkSession::UsagePolicies **sipCppPtr = reinterpret_cast<QNetworkSession::UsagePolicies **>(sipCppPtrV);

#line 379 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QNetworkSession::UsagePolicies is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkSession_UsagePolicy)) ||
            sipCanConvertToType(sipPy, sipType_QNetworkSession_UsagePolicies, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkSession_UsagePolicy)))
{
    *sipCppPtr = new QNetworkSession::UsagePolicies(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QNetworkSession::UsagePolicies *>(sipConvertToType(sipPy, sipType_QNetworkSession_UsagePolicies, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 579 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkSessionUsagePolicies.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkSession_UsagePolicies[] = {
    {(void *)slot_QNetworkSession_UsagePolicies___bool__, bool_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___ne__, ne_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___eq__, eq_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___invert__, invert_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___and__, and_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___xor__, xor_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___or__, or_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___int__, int_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___ixor__, ixor_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___ior__, ior_slot},
    {(void *)slot_QNetworkSession_UsagePolicies___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QNetworkSession_UsagePolicies, "\1QNetworkSession.UsagePolicies(QNetworkSession.UsagePolicies)\n"
    "QNetworkSession.UsagePolicies(int)\n"
    "QNetworkSession.UsagePolicies()");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkSession_UsagePolicies = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkSession__UsagePolicies,
        {0}
    },
    {
        sipNameNr_UsagePolicies,
        {87, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkSession_UsagePolicies,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkSession_UsagePolicies,
    init_type_QNetworkSession_UsagePolicies,
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
    dealloc_QNetworkSession_UsagePolicies,
    assign_QNetworkSession_UsagePolicies,
    array_QNetworkSession_UsagePolicies,
    copy_QNetworkSession_UsagePolicies,
    release_QNetworkSession_UsagePolicies,
    0,
    convertTo_QNetworkSession_UsagePolicies,
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
