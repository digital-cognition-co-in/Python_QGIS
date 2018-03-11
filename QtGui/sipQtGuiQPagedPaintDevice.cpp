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

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPagedPaintDevice.cpp"

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 84 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 40 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 112 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 43 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 46 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPagedPaintDevice.cpp"
#line 61 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qpaintengine.sip"
#include <qpaintengine.h>
#line 49 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQPagedPaintDevice.cpp"


class sipQPagedPaintDevice : public QPagedPaintDevice
{
public:
    sipQPagedPaintDevice();
    virtual ~sipQPagedPaintDevice();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int metric(QPaintDevice::PaintDeviceMetric) const;
    QPaintEngine* paintEngine() const;
    void setMargins(const QPagedPaintDevice::Margins&);
    void setPageSizeMM(const QSizeF&);
    void setPageSize(QPagedPaintDevice::PageSize);
    bool newPage();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPagedPaintDevice(const sipQPagedPaintDevice &);
    sipQPagedPaintDevice &operator = (const sipQPagedPaintDevice &);

    char sipPyMethods[6];
};

sipQPagedPaintDevice::sipQPagedPaintDevice(): QPagedPaintDevice(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPagedPaintDevice::~sipQPagedPaintDevice()
{
    sipCommonDtor(sipPySelf);
}

int sipQPagedPaintDevice::metric(QPaintDevice::PaintDeviceMetric a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_metric);

    if (!sipMeth)
        return QPagedPaintDevice::metric(a0);

    extern int sipVH_QtGui_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPaintDevice::PaintDeviceMetric);

    return sipVH_QtGui_12(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QPaintEngine* sipQPagedPaintDevice::paintEngine() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QPagedPaintDevice,sipName_paintEngine);

    if (!sipMeth)
        return 0;

    extern QPaintEngine* sipVH_QtGui_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_28(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQPagedPaintDevice::setMargins(const QPagedPaintDevice::Margins& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_setMargins);

    if (!sipMeth)
    {
        QPagedPaintDevice::setMargins(a0);
        return;
    }

    extern void sipVH_QtGui_123(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QPagedPaintDevice::Margins&);

    sipVH_QtGui_123(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPagedPaintDevice::setPageSizeMM(const QSizeF& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_setPageSizeMM);

    if (!sipMeth)
    {
        QPagedPaintDevice::setPageSizeMM(a0);
        return;
    }

    extern void sipVH_QtGui_124(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSizeF&);

    sipVH_QtGui_124(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPagedPaintDevice::setPageSize(QPagedPaintDevice::PageSize a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_setPageSize);

    if (!sipMeth)
    {
        QPagedPaintDevice::setPageSize(a0);
        return;
    }

    extern void sipVH_QtGui_125(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPagedPaintDevice::PageSize);

    sipVH_QtGui_125(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPagedPaintDevice::newPage()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QPagedPaintDevice,sipName_newPage);

    if (!sipMeth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QPagedPaintDevice_newPage, "newPage(self) -> bool");

extern "C" {static PyObject *meth_QPagedPaintDevice_newPage(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_newPage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QPagedPaintDevice, sipName_newPage);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->newPage();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_newPage, doc_QPagedPaintDevice_newPage);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setPageSize, "setPageSize(self, QPagedPaintDevice.PageSize)");

extern "C" {static PyObject *meth_QPagedPaintDevice_setPageSize(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setPageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QPagedPaintDevice::PageSize a0;
        QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QPagedPaintDevice_PageSize, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QPagedPaintDevice::setPageSize(a0) : sipCpp->setPageSize(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setPageSize, doc_QPagedPaintDevice_setPageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_pageSize, "pageSize(self) -> QPagedPaintDevice.PageSize");

extern "C" {static PyObject *meth_QPagedPaintDevice_pageSize(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_pageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
            QPagedPaintDevice::PageSize sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pageSize();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QPagedPaintDevice_PageSize);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_pageSize, doc_QPagedPaintDevice_pageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setPageSizeMM, "setPageSizeMM(self, QSizeF)");

extern "C" {static PyObject *meth_QPagedPaintDevice_setPageSizeMM(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setPageSizeMM(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSizeF* a0;
        QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QSizeF, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QPagedPaintDevice::setPageSizeMM(*a0) : sipCpp->setPageSizeMM(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setPageSizeMM, doc_QPagedPaintDevice_setPageSizeMM);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_pageSizeMM, "pageSizeMM(self) -> QSizeF");

extern "C" {static PyObject *meth_QPagedPaintDevice_pageSizeMM(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_pageSizeMM(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
            QSizeF*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSizeF(sipCpp->pageSizeMM());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_pageSizeMM, doc_QPagedPaintDevice_pageSizeMM);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_setMargins, "setMargins(self, QPagedPaintDevice.Margins)");

extern "C" {static PyObject *meth_QPagedPaintDevice_setMargins(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_setMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QPagedPaintDevice::Margins* a0;
        QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPagedPaintDevice, &sipCpp, sipType_QPagedPaintDevice_Margins, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QPagedPaintDevice::setMargins(*a0) : sipCpp->setMargins(*a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_setMargins, doc_QPagedPaintDevice_setMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QPagedPaintDevice_margins, "margins(self) -> QPagedPaintDevice.Margins");

extern "C" {static PyObject *meth_QPagedPaintDevice_margins(PyObject *, PyObject *);}
static PyObject *meth_QPagedPaintDevice_margins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPagedPaintDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPagedPaintDevice, &sipCpp))
        {
            QPagedPaintDevice::Margins*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPagedPaintDevice::Margins(sipCpp->margins());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPagedPaintDevice_Margins,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPagedPaintDevice, sipName_margins, doc_QPagedPaintDevice_margins);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPagedPaintDevice(void *, int);}
static void release_QPagedPaintDevice(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPagedPaintDevice *>(sipCppV);
    else
        delete reinterpret_cast<QPagedPaintDevice *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPagedPaintDevice(sipSimpleWrapper *);}
static void dealloc_QPagedPaintDevice(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPagedPaintDevice *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPagedPaintDevice(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPagedPaintDevice(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPagedPaintDevice(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQPagedPaintDevice *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPagedPaintDevice();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPagedPaintDevice[] = {{363, 255, 1}};


static PyMethodDef methods_QPagedPaintDevice[] = {
    {SIP_MLNAME_CAST(sipName_margins), meth_QPagedPaintDevice_margins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_margins)},
    {SIP_MLNAME_CAST(sipName_newPage), meth_QPagedPaintDevice_newPage, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_newPage)},
    {SIP_MLNAME_CAST(sipName_pageSize), meth_QPagedPaintDevice_pageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_pageSize)},
    {SIP_MLNAME_CAST(sipName_pageSizeMM), meth_QPagedPaintDevice_pageSizeMM, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_pageSizeMM)},
    {SIP_MLNAME_CAST(sipName_setMargins), meth_QPagedPaintDevice_setMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setMargins)},
    {SIP_MLNAME_CAST(sipName_setPageSize), meth_QPagedPaintDevice_setPageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setPageSize)},
    {SIP_MLNAME_CAST(sipName_setPageSizeMM), meth_QPagedPaintDevice_setPageSizeMM, METH_VARARGS, SIP_MLDOC_CAST(doc_QPagedPaintDevice_setPageSizeMM)}
};

static sipEnumMemberDef enummembers_QPagedPaintDevice[] = {
    {sipName_A0, static_cast<int>(QPagedPaintDevice::A0), 362},
    {sipName_A1, static_cast<int>(QPagedPaintDevice::A1), 362},
    {sipName_A2, static_cast<int>(QPagedPaintDevice::A2), 362},
    {sipName_A3, static_cast<int>(QPagedPaintDevice::A3), 362},
    {sipName_A4, static_cast<int>(QPagedPaintDevice::A4), 362},
    {sipName_A5, static_cast<int>(QPagedPaintDevice::A5), 362},
    {sipName_A6, static_cast<int>(QPagedPaintDevice::A6), 362},
    {sipName_A7, static_cast<int>(QPagedPaintDevice::A7), 362},
    {sipName_A8, static_cast<int>(QPagedPaintDevice::A8), 362},
    {sipName_A9, static_cast<int>(QPagedPaintDevice::A9), 362},
    {sipName_B0, static_cast<int>(QPagedPaintDevice::B0), 362},
    {sipName_B1, static_cast<int>(QPagedPaintDevice::B1), 362},
    {sipName_B10, static_cast<int>(QPagedPaintDevice::B10), 362},
    {sipName_B2, static_cast<int>(QPagedPaintDevice::B2), 362},
    {sipName_B3, static_cast<int>(QPagedPaintDevice::B3), 362},
    {sipName_B4, static_cast<int>(QPagedPaintDevice::B4), 362},
    {sipName_B5, static_cast<int>(QPagedPaintDevice::B5), 362},
    {sipName_B6, static_cast<int>(QPagedPaintDevice::B6), 362},
    {sipName_B7, static_cast<int>(QPagedPaintDevice::B7), 362},
    {sipName_B8, static_cast<int>(QPagedPaintDevice::B8), 362},
    {sipName_B9, static_cast<int>(QPagedPaintDevice::B9), 362},
    {sipName_C5E, static_cast<int>(QPagedPaintDevice::C5E), 362},
    {sipName_Comm10E, static_cast<int>(QPagedPaintDevice::Comm10E), 362},
    {sipName_Custom, static_cast<int>(QPagedPaintDevice::Custom), 362},
    {sipName_DLE, static_cast<int>(QPagedPaintDevice::DLE), 362},
    {sipName_Executive, static_cast<int>(QPagedPaintDevice::Executive), 362},
    {sipName_Folio, static_cast<int>(QPagedPaintDevice::Folio), 362},
    {sipName_Ledger, static_cast<int>(QPagedPaintDevice::Ledger), 362},
    {sipName_Legal, static_cast<int>(QPagedPaintDevice::Legal), 362},
    {sipName_Letter, static_cast<int>(QPagedPaintDevice::Letter), 362},
    {sipName_Tabloid, static_cast<int>(QPagedPaintDevice::Tabloid), 362},
};

PyDoc_STRVAR(doc_QPagedPaintDevice, "\1QPagedPaintDevice()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QPagedPaintDevice = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QPagedPaintDevice,
        {0}
    },
    {
        sipNameNr_QPagedPaintDevice,
        {0, 0, 1},
        7, methods_QPagedPaintDevice,
        31, enummembers_QPagedPaintDevice,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPagedPaintDevice,
    -1,
    -1,
    supers_QPagedPaintDevice,
    0,
    init_type_QPagedPaintDevice,
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
    dealloc_QPagedPaintDevice,
    0,
    0,
    0,
    release_QPagedPaintDevice,
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
