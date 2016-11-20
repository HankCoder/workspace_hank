/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 *
 * Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtXmlPatterns.h"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXmlPatterns/qxmlserializer.sip"
#include <qxmlserializer.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlSerializer.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXmlPatterns/qxmlquery.sip"
#include <qxmlquery.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlSerializer.cpp"
#line 26 "sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlSerializer.cpp"
#line 26 "sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlSerializer.cpp"
#line 26 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlSerializer.cpp"
#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlSerializer.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlSerializer.cpp"
#line 68 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtXmlPatterns/sipQtXmlPatternsQXmlSerializer.cpp"


class sipQXmlSerializer : public QXmlSerializer
{
public:
    sipQXmlSerializer(const QXmlQuery&,QIODevice*);
    virtual ~sipQXmlSerializer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void endOfSequence();
    void startOfSequence();
    void endDocument();
    void startDocument();
    void atomicValue(const QVariant&);
    void processingInstruction(const QXmlName&,const QString&);
    void attribute(const QXmlName&,const QStringRef&);
    void endElement();
    void startElement(const QXmlName&);
    void comment(const QString&);
    void characters(const QStringRef&);
    void namespaceBinding(const QXmlName&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlSerializer(const sipQXmlSerializer &);
    sipQXmlSerializer &operator = (const sipQXmlSerializer &);

    char sipPyMethods[12];
};

sipQXmlSerializer::sipQXmlSerializer(const QXmlQuery& a0,QIODevice*a1): QXmlSerializer(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlSerializer::~sipQXmlSerializer()
{
    sipCommonDtor(sipPySelf);
}

void sipQXmlSerializer::endOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_endOfSequence);

    if (!sipMeth)
    {
        QXmlSerializer::endOfSequence();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQXmlSerializer::startOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_startOfSequence);

    if (!sipMeth)
    {
        QXmlSerializer::startOfSequence();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQXmlSerializer::endDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_endDocument);

    if (!sipMeth)
    {
        QXmlSerializer::endDocument();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQXmlSerializer::startDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_startDocument);

    if (!sipMeth)
    {
        QXmlSerializer::startDocument();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQXmlSerializer::atomicValue(const QVariant& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_atomicValue);

    if (!sipMeth)
    {
        QXmlSerializer::atomicValue(a0);
        return;
    }

    typedef void (*sipVH_QtCore_2)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QVariant&);

    ((sipVH_QtCore_2)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[2]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQXmlSerializer::processingInstruction(const QXmlName& a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_processingInstruction);

    if (!sipMeth)
    {
        QXmlSerializer::processingInstruction(a0,a1);
        return;
    }

    extern void sipVH_QtXmlPatterns_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&,const QString&);

    sipVH_QtXmlPatterns_0(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

void sipQXmlSerializer::attribute(const QXmlName& a0,const QStringRef& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_attribute);

    if (!sipMeth)
    {
        QXmlSerializer::attribute(a0,a1);
        return;
    }

    extern void sipVH_QtXmlPatterns_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&,const QStringRef&);

    sipVH_QtXmlPatterns_1(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

void sipQXmlSerializer::endElement()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_endElement);

    if (!sipMeth)
    {
        QXmlSerializer::endElement();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQXmlSerializer::startElement(const QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_startElement);

    if (!sipMeth)
    {
        QXmlSerializer::startElement(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&);

    sipVH_QtXmlPatterns_2(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQXmlSerializer::comment(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_comment);

    if (!sipMeth)
    {
        QXmlSerializer::comment(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    sipVH_QtXmlPatterns_3(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQXmlSerializer::characters(const QStringRef& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_characters);

    if (!sipMeth)
    {
        QXmlSerializer::characters(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QStringRef&);

    sipVH_QtXmlPatterns_4(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQXmlSerializer::namespaceBinding(const QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_namespaceBinding);

    if (!sipMeth)
    {
        QXmlSerializer::namespaceBinding(a0);
        return;
    }

    extern void sipVH_QtXmlPatterns_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&);

    sipVH_QtXmlPatterns_2(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QXmlSerializer_namespaceBinding, "namespaceBinding(self, QXmlName)");

extern "C" {static PyObject *meth_QXmlSerializer_namespaceBinding(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_namespaceBinding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName* a0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QXmlName, &a0))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::namespaceBinding(*a0) : sipCpp->namespaceBinding(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_namespaceBinding, doc_QXmlSerializer_namespaceBinding);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_characters, "characters(self, str)");

extern "C" {static PyObject *meth_QXmlSerializer_characters(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_characters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QStringRef* a0;
        int a0State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QStringRef,&a0, &a0State))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::characters(*a0) : sipCpp->characters(*a0));
            sipReleaseType(const_cast<QStringRef *>(a0),sipType_QStringRef,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_characters, doc_QXmlSerializer_characters);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_comment, "comment(self, str)");

extern "C" {static PyObject *meth_QXmlSerializer_comment(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_comment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QString,&a0, &a0State))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::comment(*a0) : sipCpp->comment(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_comment, doc_QXmlSerializer_comment);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_startElement, "startElement(self, QXmlName)");

extern "C" {static PyObject *meth_QXmlSerializer_startElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_startElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName* a0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QXmlName, &a0))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::startElement(*a0) : sipCpp->startElement(*a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_startElement, doc_QXmlSerializer_startElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_endElement, "endElement(self)");

extern "C" {static PyObject *meth_QXmlSerializer_endElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_endElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::endElement() : sipCpp->endElement());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_endElement, doc_QXmlSerializer_endElement);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_attribute, "attribute(self, QXmlName, str)");

extern "C" {static PyObject *meth_QXmlSerializer_attribute(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_attribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName* a0;
        const QStringRef* a1;
        int a1State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QXmlName, &a0, sipType_QStringRef,&a1, &a1State))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::attribute(*a0,*a1) : sipCpp->attribute(*a0,*a1));
            sipReleaseType(const_cast<QStringRef *>(a1),sipType_QStringRef,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_attribute, doc_QXmlSerializer_attribute);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_processingInstruction, "processingInstruction(self, QXmlName, str)");

extern "C" {static PyObject *meth_QXmlSerializer_processingInstruction(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_processingInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName* a0;
        const QString* a1;
        int a1State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QXmlName, &a0, sipType_QString,&a1, &a1State))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::processingInstruction(*a0,*a1) : sipCpp->processingInstruction(*a0,*a1));
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_processingInstruction, doc_QXmlSerializer_processingInstruction);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_atomicValue, "atomicValue(self, Any)");

extern "C" {static PyObject *meth_QXmlSerializer_atomicValue(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_atomicValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QVariant* a0;
        int a0State = 0;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlSerializer, &sipCpp, sipType_QVariant, &a0, &a0State))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::atomicValue(*a0) : sipCpp->atomicValue(*a0));
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_atomicValue, doc_QXmlSerializer_atomicValue);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_startDocument, "startDocument(self)");

extern "C" {static PyObject *meth_QXmlSerializer_startDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_startDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::startDocument() : sipCpp->startDocument());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_startDocument, doc_QXmlSerializer_startDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_endDocument, "endDocument(self)");

extern "C" {static PyObject *meth_QXmlSerializer_endDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_endDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::endDocument() : sipCpp->endDocument());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_endDocument, doc_QXmlSerializer_endDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_startOfSequence, "startOfSequence(self)");

extern "C" {static PyObject *meth_QXmlSerializer_startOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_startOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::startOfSequence() : sipCpp->startOfSequence());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_startOfSequence, doc_QXmlSerializer_startOfSequence);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_endOfSequence, "endOfSequence(self)");

extern "C" {static PyObject *meth_QXmlSerializer_endOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_endOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QXmlSerializer::endOfSequence() : sipCpp->endOfSequence());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_endOfSequence, doc_QXmlSerializer_endOfSequence);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_outputDevice, "outputDevice(self) -> QIODevice");

extern "C" {static PyObject *meth_QXmlSerializer_outputDevice(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_outputDevice(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            QIODevice*sipRes;

            sipRes = sipCpp->outputDevice();

            return sipConvertFromType(sipRes,sipType_QIODevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_outputDevice, doc_QXmlSerializer_outputDevice);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_setCodec, "setCodec(self, QTextCodec)");

extern "C" {static PyObject *meth_QXmlSerializer_setCodec(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_setCodec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextCodec* a0;
        PyObject *a0Keep;
        QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlSerializer, &sipCpp, &a0Keep, sipType_QTextCodec, &a0))
        {
            sipCpp->setCodec(a0);

            sipKeepReference(sipSelf, -10, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_setCodec, doc_QXmlSerializer_setCodec);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlSerializer_codec, "codec(self) -> QTextCodec");

extern "C" {static PyObject *meth_QXmlSerializer_codec(PyObject *, PyObject *);}
static PyObject *meth_QXmlSerializer_codec(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QXmlSerializer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlSerializer, &sipCpp))
        {
            const QTextCodec*sipRes;

            sipRes = sipCpp->codec();

            return sipConvertFromType(const_cast<QTextCodec *>(sipRes),sipType_QTextCodec,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlSerializer, sipName_codec, doc_QXmlSerializer_codec);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlSerializer(void *, int);}
static void release_QXmlSerializer(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlSerializer *>(sipCppV);
    else
        delete reinterpret_cast<QXmlSerializer *>(sipCppV);
}


extern "C" {static void dealloc_QXmlSerializer(sipSimpleWrapper *);}
static void dealloc_QXmlSerializer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlSerializer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlSerializer(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QXmlSerializer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlSerializer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlSerializer *sipCpp = 0;

    {
        const QXmlQuery* a0;
        QIODevice* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J8", sipType_QXmlQuery, &a0, sipType_QIODevice, &a1))
        {
            sipCpp = new sipQXmlSerializer(*a0,a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QXmlSerializer[] = {{4, 255, 1}};


static PyMethodDef methods_QXmlSerializer[] = {
    {SIP_MLNAME_CAST(sipName_atomicValue), meth_QXmlSerializer_atomicValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_atomicValue)},
    {SIP_MLNAME_CAST(sipName_attribute), meth_QXmlSerializer_attribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_attribute)},
    {SIP_MLNAME_CAST(sipName_characters), meth_QXmlSerializer_characters, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_characters)},
    {SIP_MLNAME_CAST(sipName_codec), meth_QXmlSerializer_codec, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_codec)},
    {SIP_MLNAME_CAST(sipName_comment), meth_QXmlSerializer_comment, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_comment)},
    {SIP_MLNAME_CAST(sipName_endDocument), meth_QXmlSerializer_endDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_endDocument)},
    {SIP_MLNAME_CAST(sipName_endElement), meth_QXmlSerializer_endElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_endElement)},
    {SIP_MLNAME_CAST(sipName_endOfSequence), meth_QXmlSerializer_endOfSequence, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_endOfSequence)},
    {SIP_MLNAME_CAST(sipName_namespaceBinding), meth_QXmlSerializer_namespaceBinding, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_namespaceBinding)},
    {SIP_MLNAME_CAST(sipName_outputDevice), meth_QXmlSerializer_outputDevice, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_outputDevice)},
    {SIP_MLNAME_CAST(sipName_processingInstruction), meth_QXmlSerializer_processingInstruction, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_processingInstruction)},
    {SIP_MLNAME_CAST(sipName_setCodec), meth_QXmlSerializer_setCodec, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_setCodec)},
    {SIP_MLNAME_CAST(sipName_startDocument), meth_QXmlSerializer_startDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_startDocument)},
    {SIP_MLNAME_CAST(sipName_startElement), meth_QXmlSerializer_startElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_startElement)},
    {SIP_MLNAME_CAST(sipName_startOfSequence), meth_QXmlSerializer_startOfSequence, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlSerializer_startOfSequence)}
};

PyDoc_STRVAR(doc_QXmlSerializer, "\1QXmlSerializer(QXmlQuery, QIODevice)");


pyqt5ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlSerializer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QXmlSerializer,
        {0}
    },
    {
        sipNameNr_QXmlSerializer,
        {0, 0, 1},
        15, methods_QXmlSerializer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlSerializer,
    -1,
    -1,
    supers_QXmlSerializer,
    0,
    init_type_QXmlSerializer,
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
    dealloc_QXmlSerializer,
    0,
    0,
    0,
    release_QXmlSerializer,
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
    0,
    0
};
