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

#line 128 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 34 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkProxyQuery.cpp"

#line 107 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 38 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkProxyQuery.cpp"
#line 36 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 41 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkProxyQuery.cpp"
#line 33 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/sip/QtNetwork/qnetworkconfiguration.sip"
#include <qnetworkconfiguration.h>
#line 44 "/media/dhankar/Dhankar_1/a1_18/a1_______QGIS/QtNetwork/sipQtNetworkQNetworkProxyQuery.cpp"


PyDoc_STRVAR(doc_QNetworkProxyQuery_queryType, "queryType(self) -> QNetworkProxyQuery.QueryType");

extern "C" {static PyObject *meth_QNetworkProxyQuery_queryType(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_queryType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            QNetworkProxyQuery::QueryType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->queryType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QNetworkProxyQuery_QueryType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_queryType, doc_QNetworkProxyQuery_queryType);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setQueryType, "setQueryType(self, QNetworkProxyQuery.QueryType)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setQueryType(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setQueryType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyQuery::QueryType a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QNetworkProxyQuery_QueryType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setQueryType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setQueryType, doc_QNetworkProxyQuery_setQueryType);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_peerPort, "peerPort(self) -> int");

extern "C" {static PyObject *meth_QNetworkProxyQuery_peerPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_peerPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->peerPort();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_peerPort, doc_QNetworkProxyQuery_peerPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setPeerPort, "setPeerPort(self, int)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setPeerPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setPeerPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPeerPort(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setPeerPort, doc_QNetworkProxyQuery_setPeerPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_peerHostName, "peerHostName(self) -> QString");

extern "C" {static PyObject *meth_QNetworkProxyQuery_peerHostName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_peerHostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->peerHostName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_peerHostName, doc_QNetworkProxyQuery_peerHostName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setPeerHostName, "setPeerHostName(self, QString)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setPeerHostName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setPeerHostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPeerHostName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setPeerHostName, doc_QNetworkProxyQuery_setPeerHostName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_localPort, "localPort(self) -> int");

extern "C" {static PyObject *meth_QNetworkProxyQuery_localPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_localPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->localPort();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_localPort, doc_QNetworkProxyQuery_localPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setLocalPort, "setLocalPort(self, int)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setLocalPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setLocalPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLocalPort(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setLocalPort, doc_QNetworkProxyQuery_setLocalPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_protocolTag, "protocolTag(self) -> QString");

extern "C" {static PyObject *meth_QNetworkProxyQuery_protocolTag(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_protocolTag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            QString*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->protocolTag());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_protocolTag, doc_QNetworkProxyQuery_protocolTag);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setProtocolTag, "setProtocolTag(self, QString)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setProtocolTag(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setProtocolTag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProtocolTag(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setProtocolTag, doc_QNetworkProxyQuery_setProtocolTag);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_url, "url(self) -> QUrl");

extern "C" {static PyObject *meth_QNetworkProxyQuery_url(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            QUrl*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->url());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_url, doc_QNetworkProxyQuery_url);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setUrl, "setUrl(self, QUrl)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setUrl(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QUrl, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUrl(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setUrl, doc_QNetworkProxyQuery_setUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_networkConfiguration, "networkConfiguration(self) -> QNetworkConfiguration");

extern "C" {static PyObject *meth_QNetworkProxyQuery_networkConfiguration(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_networkConfiguration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            QNetworkConfiguration*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkConfiguration(sipCpp->networkConfiguration());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkConfiguration,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_networkConfiguration, doc_QNetworkProxyQuery_networkConfiguration);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setNetworkConfiguration, "setNetworkConfiguration(self, QNetworkConfiguration)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setNetworkConfiguration(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setNetworkConfiguration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkConfiguration* a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QNetworkConfiguration, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setNetworkConfiguration(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setNetworkConfiguration, doc_QNetworkProxyQuery_setNetworkConfiguration);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_swap, "swap(self, QNetworkProxyQuery)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_swap(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyQuery* a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QNetworkProxyQuery, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->swap(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_swap, doc_QNetworkProxyQuery_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkProxyQuery___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxyQuery___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxyQuery *sipCpp = reinterpret_cast<QNetworkProxyQuery *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxyQuery));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkProxyQuery, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkProxyQuery::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkProxyQuery,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkProxyQuery___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkProxyQuery___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxyQuery *sipCpp = reinterpret_cast<QNetworkProxyQuery *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxyQuery));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkProxyQuery, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkProxyQuery::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkProxyQuery,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkProxyQuery(void *, int);}
static void release_QNetworkProxyQuery(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkProxyQuery *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkProxyQuery(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkProxyQuery(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkProxyQuery *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkProxyQuery *>(sipSrc);
}


extern "C" {static void *array_QNetworkProxyQuery(SIP_SSIZE_T);}
static void *array_QNetworkProxyQuery(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkProxyQuery[sipNrElem];
}


extern "C" {static void *copy_QNetworkProxyQuery(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkProxyQuery(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkProxyQuery(reinterpret_cast<const QNetworkProxyQuery *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkProxyQuery(sipSimpleWrapper *);}
static void dealloc_QNetworkProxyQuery(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkProxyQuery(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNetworkProxyQuery(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkProxyQuery(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkProxyQuery *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QUrl* a0;
        QNetworkProxyQuery::QueryType a1 = QNetworkProxyQuery::UrlRequest;

        static const char *sipKwdList[] = {
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|E", sipType_QUrl, &a0, sipType_QNetworkProxyQuery_QueryType, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(*a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        int a1;
        const QString& a2def = QString();
        const QString* a2 = &a2def;
        int a2State = 0;
        QNetworkProxyQuery::QueryType a3 = QNetworkProxyQuery::TcpSocket;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_protocolTag,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1i|J1E", sipType_QString,&a0, &a0State, &a1, sipType_QString,&a2, &a2State, sipType_QNetworkProxyQuery_QueryType, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(*a0,a1,*a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return sipCpp;
        }
    }

    {
        quint16 a0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        QNetworkProxyQuery::QueryType a2 = QNetworkProxyQuery::TcpServer;

        static const char *sipKwdList[] = {
            NULL,
            sipName_protocolTag,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "t|J1E", &a0, sipType_QString,&a1, &a1State, sipType_QNetworkProxyQuery_QueryType, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        const QNetworkConfiguration* a0;
        const QUrl* a1;
        QNetworkProxyQuery::QueryType a2 = QNetworkProxyQuery::UrlRequest;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_queryType,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J9|E", sipType_QNetworkConfiguration, &a0, sipType_QUrl, &a1, sipType_QNetworkProxyQuery_QueryType, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(*a0,*a1,a2);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QNetworkConfiguration* a0;
        const QString* a1;
        int a1State = 0;
        int a2;
        const QString& a3def = QString();
        const QString* a3 = &a3def;
        int a3State = 0;
        QNetworkProxyQuery::QueryType a4 = QNetworkProxyQuery::TcpSocket;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_protocolTag,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J1i|J1E", sipType_QNetworkConfiguration, &a0, sipType_QString,&a1, &a1State, &a2, sipType_QString,&a3, &a3State, sipType_QNetworkProxyQuery_QueryType, &a4))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(*a0,*a1,a2,*a3,a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);

            return sipCpp;
        }
    }

    {
        const QNetworkConfiguration* a0;
        quint16 a1;
        const QString& a2def = QString();
        const QString* a2 = &a2def;
        int a2State = 0;
        QNetworkProxyQuery::QueryType a3 = QNetworkProxyQuery::TcpServer;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_protocolTag,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9t|J1E", sipType_QNetworkConfiguration, &a0, &a1, sipType_QString,&a2, &a2State, sipType_QNetworkProxyQuery_QueryType, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(*a0,a1,*a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return sipCpp;
        }
    }

    {
        const QNetworkProxyQuery* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkProxyQuery, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkProxyQuery[] = {
    {(void *)slot_QNetworkProxyQuery___ne__, ne_slot},
    {(void *)slot_QNetworkProxyQuery___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkProxyQuery[] = {
    {SIP_MLNAME_CAST(sipName_localPort), meth_QNetworkProxyQuery_localPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_localPort)},
    {SIP_MLNAME_CAST(sipName_networkConfiguration), meth_QNetworkProxyQuery_networkConfiguration, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_networkConfiguration)},
    {SIP_MLNAME_CAST(sipName_peerHostName), meth_QNetworkProxyQuery_peerHostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_peerHostName)},
    {SIP_MLNAME_CAST(sipName_peerPort), meth_QNetworkProxyQuery_peerPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_peerPort)},
    {SIP_MLNAME_CAST(sipName_protocolTag), meth_QNetworkProxyQuery_protocolTag, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_protocolTag)},
    {SIP_MLNAME_CAST(sipName_queryType), meth_QNetworkProxyQuery_queryType, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_queryType)},
    {SIP_MLNAME_CAST(sipName_setLocalPort), meth_QNetworkProxyQuery_setLocalPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setLocalPort)},
    {SIP_MLNAME_CAST(sipName_setNetworkConfiguration), meth_QNetworkProxyQuery_setNetworkConfiguration, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setNetworkConfiguration)},
    {SIP_MLNAME_CAST(sipName_setPeerHostName), meth_QNetworkProxyQuery_setPeerHostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setPeerHostName)},
    {SIP_MLNAME_CAST(sipName_setPeerPort), meth_QNetworkProxyQuery_setPeerPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setPeerPort)},
    {SIP_MLNAME_CAST(sipName_setProtocolTag), meth_QNetworkProxyQuery_setProtocolTag, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setProtocolTag)},
    {SIP_MLNAME_CAST(sipName_setQueryType), meth_QNetworkProxyQuery_setQueryType, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setQueryType)},
    {SIP_MLNAME_CAST(sipName_setUrl), meth_QNetworkProxyQuery_setUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setUrl)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QNetworkProxyQuery_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_swap)},
    {SIP_MLNAME_CAST(sipName_url), meth_QNetworkProxyQuery_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_url)}
};

static sipEnumMemberDef enummembers_QNetworkProxyQuery[] = {
    {sipName_TcpServer, static_cast<int>(QNetworkProxyQuery::TcpServer), 78},
    {sipName_TcpSocket, static_cast<int>(QNetworkProxyQuery::TcpSocket), 78},
    {sipName_UdpSocket, static_cast<int>(QNetworkProxyQuery::UdpSocket), 78},
    {sipName_UrlRequest, static_cast<int>(QNetworkProxyQuery::UrlRequest), 78},
};

PyDoc_STRVAR(doc_QNetworkProxyQuery, "\1QNetworkProxyQuery()\n"
    "QNetworkProxyQuery(QUrl, type: QNetworkProxyQuery.QueryType = QNetworkProxyQuery.UrlRequest)\n"
    "QNetworkProxyQuery(QString, int, protocolTag: QString = QString(), type: QNetworkProxyQuery.QueryType = QNetworkProxyQuery.TcpSocket)\n"
    "QNetworkProxyQuery(int, protocolTag: QString = QString(), type: QNetworkProxyQuery.QueryType = QNetworkProxyQuery.TcpServer)\n"
    "QNetworkProxyQuery(QNetworkConfiguration, QUrl, queryType: QNetworkProxyQuery.QueryType = QNetworkProxyQuery.UrlRequest)\n"
    "QNetworkProxyQuery(QNetworkConfiguration, QString, int, protocolTag: QString = QString(), type: QNetworkProxyQuery.QueryType = QNetworkProxyQuery.TcpSocket)\n"
    "QNetworkProxyQuery(QNetworkConfiguration, int, protocolTag: QString = QString(), type: QNetworkProxyQuery.QueryType = QNetworkProxyQuery.TcpServer)\n"
    "QNetworkProxyQuery(QNetworkProxyQuery)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkProxyQuery = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkProxyQuery,
        {0}
    },
    {
        sipNameNr_QNetworkProxyQuery,
        {0, 0, 1},
        15, methods_QNetworkProxyQuery,
        4, enummembers_QNetworkProxyQuery,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkProxyQuery,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkProxyQuery,
    init_type_QNetworkProxyQuery,
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
    dealloc_QNetworkProxyQuery,
    assign_QNetworkProxyQuery,
    array_QNetworkProxyQuery,
    copy_QNetworkProxyQuery,
    release_QNetworkProxyQuery,
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
