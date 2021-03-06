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

#line 863 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionEvent.cpp"

#line 31 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtGui/qaction.sip"
#include <qaction.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionEvent.cpp"
#line 31 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtGui/sipQtGuiQActionEvent.cpp"


class sipQActionEvent : public QActionEvent
{
public:
    sipQActionEvent(int,QAction*,QAction*);
    sipQActionEvent(const QActionEvent&);
    ~sipQActionEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQActionEvent(const sipQActionEvent &);
    sipQActionEvent &operator = (const sipQActionEvent &);
};

sipQActionEvent::sipQActionEvent(int a0,QAction*a1,QAction*a2): QActionEvent(a0,a1,a2), sipPySelf(0)
{
}

sipQActionEvent::sipQActionEvent(const QActionEvent& a0): QActionEvent(a0), sipPySelf(0)
{
}

sipQActionEvent::~sipQActionEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QActionEvent_action, "action(self) -> QAction");

extern "C" {static PyObject *meth_QActionEvent_action(PyObject *, PyObject *);}
static PyObject *meth_QActionEvent_action(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QActionEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionEvent, &sipCpp))
        {
            QAction*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->action();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionEvent, sipName_action, doc_QActionEvent_action);

    return NULL;
}


PyDoc_STRVAR(doc_QActionEvent_before, "before(self) -> QAction");

extern "C" {static PyObject *meth_QActionEvent_before(PyObject *, PyObject *);}
static PyObject *meth_QActionEvent_before(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QActionEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QActionEvent, &sipCpp))
        {
            QAction*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->before();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QActionEvent, sipName_before, doc_QActionEvent_before);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QActionEvent(void *, int);}
static void release_QActionEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQActionEvent *>(sipCppV);
    else
        delete reinterpret_cast<QActionEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QActionEvent(sipSimpleWrapper *);}
static void dealloc_QActionEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQActionEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QActionEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QActionEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QActionEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQActionEvent *sipCpp = 0;

    {
        int a0;
        QAction* a1;
        QAction* a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_before,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iJ8|J8", &a0, sipType_QAction, &a1, sipType_QAction, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQActionEvent(a0,a1,a2);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QActionEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QActionEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQActionEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QActionEvent[] = {{52, 0, 1}};


static PyMethodDef methods_QActionEvent[] = {
    {SIP_MLNAME_CAST(sipName_action), meth_QActionEvent_action, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionEvent_action)},
    {SIP_MLNAME_CAST(sipName_before), meth_QActionEvent_before, METH_VARARGS, SIP_MLDOC_CAST(doc_QActionEvent_before)}
};

PyDoc_STRVAR(doc_QActionEvent, "\1QActionEvent(int, QAction, before: QAction = None)\n"
    "QActionEvent(QActionEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QActionEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QActionEvent,
        {0}
    },
    {
        sipNameNr_QActionEvent,
        {0, 0, 1},
        2, methods_QActionEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QActionEvent,
    -1,
    -1,
    supers_QActionEvent,
    0,
    init_type_QActionEvent,
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
    dealloc_QActionEvent,
    0,
    0,
    0,
    release_QActionEvent,
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
