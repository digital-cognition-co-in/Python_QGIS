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

#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 57 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 36 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtWebKit/sipQtWebKitQWebPluginFactoryPlugin.cpp"

#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 40 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtWebKit/sipQtWebKitQWebPluginFactoryPlugin.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 43 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtWebKit/sipQtWebKitQWebPluginFactoryPlugin.cpp"
#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 40 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 48 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtWebKit/sipQtWebKitQWebPluginFactoryPlugin.cpp"


/* Call the instance's destructor. */
extern "C" {static void release_QWebPluginFactory_Plugin(void *, int);}
static void release_QWebPluginFactory_Plugin(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPluginFactory::Plugin *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPluginFactory_Plugin(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPluginFactory_Plugin(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPluginFactory::Plugin *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPluginFactory::Plugin *>(sipSrc);
}


extern "C" {static void *array_QWebPluginFactory_Plugin(SIP_SSIZE_T);}
static void *array_QWebPluginFactory_Plugin(SIP_SSIZE_T sipNrElem)
{
    return new QWebPluginFactory::Plugin[sipNrElem];
}


extern "C" {static void *copy_QWebPluginFactory_Plugin(const void *, SIP_SSIZE_T);}
static void *copy_QWebPluginFactory_Plugin(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPluginFactory::Plugin(reinterpret_cast<const QWebPluginFactory::Plugin *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPluginFactory_Plugin(sipSimpleWrapper *);}
static void dealloc_QWebPluginFactory_Plugin(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPluginFactory_Plugin(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPluginFactory_Plugin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPluginFactory_Plugin(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPluginFactory::Plugin *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::Plugin();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPluginFactory::Plugin* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPluginFactory_Plugin, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::Plugin(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QWebPluginFactory_Plugin_description(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPluginFactory_Plugin_description(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -8);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->description;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -8, sipPy);

    return sipPy;
}


extern "C" {static int varset_QWebPluginFactory_Plugin_description(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_Plugin_description(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->description = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_Plugin_mimeTypes(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPluginFactory_Plugin_mimeTypes(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QList<QWebPluginFactory::MimeType>*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -9);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->mimeTypes;

    sipPy = sipConvertFromType(sipVal, sipType_QList_0100QWebPluginFactory_MimeType, NULL);
    sipKeepReference(sipPySelf, -9, sipPy);

    return sipPy;
}


extern "C" {static int varset_QWebPluginFactory_Plugin_mimeTypes(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_Plugin_mimeTypes(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QList<QWebPluginFactory::MimeType>*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QList<QWebPluginFactory::MimeType> *>(sipForceConvertToType(sipPy,sipType_QList_0100QWebPluginFactory_MimeType,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mimeTypes = *sipVal;

    sipReleaseType(sipVal, sipType_QList_0100QWebPluginFactory_MimeType, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_Plugin_name(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPluginFactory_Plugin_name(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QString*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -10);
    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->name;

    sipPy = sipConvertFromType(sipVal, sipType_QString, NULL);
    sipKeepReference(sipPySelf, -10, sipPy);

    return sipPy;
}


extern "C" {static int varset_QWebPluginFactory_Plugin_name(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_Plugin_name(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->name = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QWebPluginFactory_Plugin[] = {
    {InstanceVariable, sipName_description, (PyMethodDef *)varget_QWebPluginFactory_Plugin_description, (PyMethodDef *)varset_QWebPluginFactory_Plugin_description, NULL, NULL},
    {InstanceVariable, sipName_mimeTypes, (PyMethodDef *)varget_QWebPluginFactory_Plugin_mimeTypes, (PyMethodDef *)varset_QWebPluginFactory_Plugin_mimeTypes, NULL, NULL},
    {InstanceVariable, sipName_name, (PyMethodDef *)varget_QWebPluginFactory_Plugin_name, (PyMethodDef *)varset_QWebPluginFactory_Plugin_name, NULL, NULL},
};

PyDoc_STRVAR(doc_QWebPluginFactory_Plugin, "\1QWebPluginFactory.Plugin()\n"
    "QWebPluginFactory.Plugin(QWebPluginFactory.Plugin)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPluginFactory_Plugin = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPluginFactory__Plugin,
        {0}
    },
    {
        sipNameNr_Plugin,
        {40, 255, 0},
        0, 0,
        0, 0,
        3, variables_QWebPluginFactory_Plugin,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPluginFactory_Plugin,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPluginFactory_Plugin,
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
    dealloc_QWebPluginFactory_Plugin,
    assign_QWebPluginFactory_Plugin,
    array_QWebPluginFactory_Plugin,
    copy_QWebPluginFactory_Plugin,
    release_QWebPluginFactory_Plugin,
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
