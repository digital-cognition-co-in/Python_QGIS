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

#include "sipAPIQtDesigner.h"

#line 29 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtDesigner/qpydesignertaskmenuextension.sip"
#include <qpydesignertaskmenuextension.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"

#line 34 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 35 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 355 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 47 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 338 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 50 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 53 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 274 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 56 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 33 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 59 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 37 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 62 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 35 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 65 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 68 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 31 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 71 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 35 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 74 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 31 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 77 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 31 "sip/QtGui/qaction.sip"
#include <qaction.h>
#line 80 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 120 "sip/QtCore/qlist.sip"
#include <qlist.h>
#line 83 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtDesigner/sipQtDesignerQPyDesignerTaskMenuExtension.cpp"


class sipQPyDesignerTaskMenuExtension : public QPyDesignerTaskMenuExtension
{
public:
    sipQPyDesignerTaskMenuExtension(QObject*);
    virtual ~sipQPyDesignerTaskMenuExtension();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QAction* preferredEditAction() const;
    QList<QAction*> taskActions() const;
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPyDesignerTaskMenuExtension(const sipQPyDesignerTaskMenuExtension &);
    sipQPyDesignerTaskMenuExtension &operator = (const sipQPyDesignerTaskMenuExtension &);

    char sipPyMethods[9];
};

sipQPyDesignerTaskMenuExtension::sipQPyDesignerTaskMenuExtension(QObject*a0): QPyDesignerTaskMenuExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerTaskMenuExtension::~sipQPyDesignerTaskMenuExtension()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerTaskMenuExtension::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerTaskMenuExtension);
}

int sipQPyDesignerTaskMenuExtension::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPyDesignerTaskMenuExtension::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerTaskMenuExtension,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerTaskMenuExtension::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast(sipPySelf, sipType_QPyDesignerTaskMenuExtension, _clname)) ? this : QPyDesignerTaskMenuExtension::qt_metacast(_clname);
}

QAction* sipQPyDesignerTaskMenuExtension::preferredEditAction() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_preferredEditAction);

    if (!sipMeth)
        return QPyDesignerTaskMenuExtension::preferredEditAction();

    extern QAction* sipVH_QtDesigner_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_0(sipGILState, 0, sipPySelf, sipMeth);
}

QList<QAction*> sipQPyDesignerTaskMenuExtension::taskActions() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QPyDesignerTaskMenuExtension,sipName_taskActions);

    if (!sipMeth)
        return QList<QAction*>();

    extern QList<QAction*> sipVH_QtDesigner_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_1(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQPyDesignerTaskMenuExtension::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_24)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[24]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[17]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPyDesignerTaskMenuExtension::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QPyDesignerTaskMenuExtension::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPyDesignerTaskMenuExtension::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QPyDesignerTaskMenuExtension::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[18]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPyDesignerTaskMenuExtension::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QPyDesignerTaskMenuExtension::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}


/* Cast a pointer to a type somewhere in its multiple inheritance hierarchy. */
extern "C" {static void *cast_QPyDesignerTaskMenuExtension(void *, const sipTypeDef *);}
static void *cast_QPyDesignerTaskMenuExtension(void *sipCppV, const sipTypeDef *targetType)
{
    QPyDesignerTaskMenuExtension *sipCpp = reinterpret_cast<QPyDesignerTaskMenuExtension *>(sipCppV);

    if (targetType == sipType_QDesignerTaskMenuExtension)
        return static_cast<QDesignerTaskMenuExtension *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerTaskMenuExtension(void *, int);}
static void release_QPyDesignerTaskMenuExtension(void *sipCppV,int)
{
    QPyDesignerTaskMenuExtension *sipCpp = reinterpret_cast<QPyDesignerTaskMenuExtension *>(sipCppV);

    Py_BEGIN_ALLOW_THREADS

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDesignerTaskMenuExtension(sipSimpleWrapper *);}
static void dealloc_QPyDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPyDesignerTaskMenuExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPyDesignerTaskMenuExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPyDesignerTaskMenuExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPyDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerTaskMenuExtension *sipCpp = 0;

    {
        QObject* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDesignerTaskMenuExtension(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerTaskMenuExtension[] = {{138, 0, 0}, {21, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerTaskMenuExtension, "\1QPyDesignerTaskMenuExtension(QObject)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QPyDesignerTaskMenuExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerTaskMenuExtension,
        {0}
    },
    {
        sipNameNr_QPyDesignerTaskMenuExtension,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerTaskMenuExtension,
    -1,
    -1,
    supers_QPyDesignerTaskMenuExtension,
    0,
    init_type_QPyDesignerTaskMenuExtension,
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
    dealloc_QPyDesignerTaskMenuExtension,
    0,
    0,
    0,
    release_QPyDesignerTaskMenuExtension,
    cast_QPyDesignerTaskMenuExtension,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QPyDesignerTaskMenuExtension::staticMetaObject,
    0,
    0
};
