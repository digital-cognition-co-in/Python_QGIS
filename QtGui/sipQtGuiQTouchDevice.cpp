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

#line 39 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qtouchdevice.sip"
#include <qtouchdevice.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQTouchDevice.cpp"

#line 39 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qtouchdevice.sip"
#include <qtouchdevice.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQTouchDevice.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQTouchDevice.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQTouchDevice.cpp"


PyDoc_STRVAR(doc_QTouchDevice_devices, "devices() -> object");

extern "C" {static PyObject *meth_QTouchDevice_devices(PyObject *, PyObject *);}
static PyObject *meth_QTouchDevice_devices(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<const QTouchDevice*>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<const QTouchDevice*>(QTouchDevice::devices());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0111QTouchDevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchDevice, sipName_devices, doc_QTouchDevice_devices);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchDevice_name, "name(self) -> QString");

extern "C" {static PyObject *meth_QTouchDevice_name(PyObject *, PyObject *);}
static PyObject *meth_QTouchDevice_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchDevice, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchDevice, sipName_name, doc_QTouchDevice_name);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchDevice_type, "type(self) -> QTouchDevice.DeviceType");

extern "C" {static PyObject *meth_QTouchDevice_type(PyObject *, PyObject *);}
static PyObject *meth_QTouchDevice_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchDevice, &sipCpp))
        {
            QTouchDevice::DeviceType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->type();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QTouchDevice_DeviceType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchDevice, sipName_type, doc_QTouchDevice_type);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchDevice_capabilities, "capabilities(self) -> QTouchDevice.Capabilities");

extern "C" {static PyObject *meth_QTouchDevice_capabilities(PyObject *, PyObject *);}
static PyObject *meth_QTouchDevice_capabilities(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTouchDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTouchDevice, &sipCpp))
        {
            QTouchDevice::Capabilities*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTouchDevice::Capabilities(sipCpp->capabilities());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTouchDevice_Capabilities,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchDevice, sipName_capabilities, doc_QTouchDevice_capabilities);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchDevice_setName, "setName(self, QString)");

extern "C" {static PyObject *meth_QTouchDevice_setName(PyObject *, PyObject *);}
static PyObject *meth_QTouchDevice_setName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QTouchDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTouchDevice, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchDevice, sipName_setName, doc_QTouchDevice_setName);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchDevice_setType, "setType(self, QTouchDevice.DeviceType)");

extern "C" {static PyObject *meth_QTouchDevice_setType(PyObject *, PyObject *);}
static PyObject *meth_QTouchDevice_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTouchDevice::DeviceType a0;
        QTouchDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QTouchDevice, &sipCpp, sipType_QTouchDevice_DeviceType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchDevice, sipName_setType, doc_QTouchDevice_setType);

    return NULL;
}


PyDoc_STRVAR(doc_QTouchDevice_setCapabilities, "setCapabilities(self, QTouchDevice.Capabilities)");

extern "C" {static PyObject *meth_QTouchDevice_setCapabilities(PyObject *, PyObject *);}
static PyObject *meth_QTouchDevice_setCapabilities(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTouchDevice::Capabilities* a0;
        int a0State = 0;
        QTouchDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTouchDevice, &sipCpp, sipType_QTouchDevice_Capabilities, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCapabilities(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTouchDevice_Capabilities,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTouchDevice, sipName_setCapabilities, doc_QTouchDevice_setCapabilities);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTouchDevice(void *, int);}
static void release_QTouchDevice(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTouchDevice *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTouchDevice(void *, SIP_SSIZE_T, const void *);}
static void assign_QTouchDevice(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTouchDevice *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTouchDevice *>(sipSrc);
}


extern "C" {static void *array_QTouchDevice(SIP_SSIZE_T);}
static void *array_QTouchDevice(SIP_SSIZE_T sipNrElem)
{
    return new QTouchDevice[sipNrElem];
}


extern "C" {static void *copy_QTouchDevice(const void *, SIP_SSIZE_T);}
static void *copy_QTouchDevice(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTouchDevice(reinterpret_cast<const QTouchDevice *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTouchDevice(sipSimpleWrapper *);}
static void dealloc_QTouchDevice(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTouchDevice(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTouchDevice(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTouchDevice(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTouchDevice *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTouchDevice();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTouchDevice* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTouchDevice, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTouchDevice(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTouchDevice[] = {
    {SIP_MLNAME_CAST(sipName_capabilities), meth_QTouchDevice_capabilities, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchDevice_capabilities)},
    {SIP_MLNAME_CAST(sipName_devices), meth_QTouchDevice_devices, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchDevice_devices)},
    {SIP_MLNAME_CAST(sipName_name), meth_QTouchDevice_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchDevice_name)},
    {SIP_MLNAME_CAST(sipName_setCapabilities), meth_QTouchDevice_setCapabilities, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchDevice_setCapabilities)},
    {SIP_MLNAME_CAST(sipName_setName), meth_QTouchDevice_setName, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchDevice_setName)},
    {SIP_MLNAME_CAST(sipName_setType), meth_QTouchDevice_setType, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchDevice_setType)},
    {SIP_MLNAME_CAST(sipName_type), meth_QTouchDevice_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QTouchDevice_type)}
};

static sipEnumMemberDef enummembers_QTouchDevice[] = {
    {sipName_Area, static_cast<int>(QTouchDevice::Area), 698},
    {sipName_NormalizedPosition, static_cast<int>(QTouchDevice::NormalizedPosition), 698},
    {sipName_Position, static_cast<int>(QTouchDevice::Position), 698},
    {sipName_Pressure, static_cast<int>(QTouchDevice::Pressure), 698},
    {sipName_RawPositions, static_cast<int>(QTouchDevice::RawPositions), 698},
    {sipName_TouchPad, static_cast<int>(QTouchDevice::TouchPad), 699},
    {sipName_TouchScreen, static_cast<int>(QTouchDevice::TouchScreen), 699},
    {sipName_Velocity, static_cast<int>(QTouchDevice::Velocity), 698},
};

PyDoc_STRVAR(doc_QTouchDevice, "\1QTouchDevice()\n"
    "QTouchDevice(QTouchDevice)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTouchDevice = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTouchDevice,
        {0}
    },
    {
        sipNameNr_QTouchDevice,
        {0, 0, 1},
        7, methods_QTouchDevice,
        8, enummembers_QTouchDevice,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTouchDevice,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTouchDevice,
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
    dealloc_QTouchDevice,
    assign_QTouchDevice,
    array_QTouchDevice,
    copy_QTouchDevice,
    release_QTouchDevice,
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
