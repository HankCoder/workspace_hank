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

#include "sipAPIQtSensors.h"

#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtSensors/qaltimeter.sip"
#include <qaltimeter.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtSensors/sipQtSensorsQAltimeterFilter.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtSensors/qaltimeter.sip"
#include <qaltimeter.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtSensors/sipQtSensorsQAltimeterFilter.cpp"


class sipQAltimeterFilter : public QAltimeterFilter
{
public:
    sipQAltimeterFilter();
    sipQAltimeterFilter(const QAltimeterFilter&);
    virtual ~sipQAltimeterFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter(QAltimeterReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAltimeterFilter(const sipQAltimeterFilter &);
    sipQAltimeterFilter &operator = (const sipQAltimeterFilter &);

    char sipPyMethods[1];
};

sipQAltimeterFilter::sipQAltimeterFilter(): QAltimeterFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAltimeterFilter::sipQAltimeterFilter(const QAltimeterFilter& a0): QAltimeterFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAltimeterFilter::~sipQAltimeterFilter()
{
    sipCommonDtor(sipPySelf);
}

bool sipQAltimeterFilter::filter(QAltimeterReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QAltimeterFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QAltimeterReading*);

    return sipVH_QtSensors_16(sipGILState, sipModuleAPI_QtSensors_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QAltimeterFilter_filter, "filter(self, QAltimeterReading) -> bool");

extern "C" {static PyObject *meth_QAltimeterFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QAltimeterFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAltimeterReading* a0;
        QAltimeterFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAltimeterFilter, &sipCpp, sipType_QAltimeterReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAltimeterFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAltimeterFilter, sipName_filter, doc_QAltimeterFilter_filter);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAltimeterFilter(void *, int);}
static void release_QAltimeterFilter(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAltimeterFilter *>(sipCppV);
    else
        delete reinterpret_cast<QAltimeterFilter *>(sipCppV);
}


extern "C" {static void dealloc_QAltimeterFilter(sipSimpleWrapper *);}
static void dealloc_QAltimeterFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAltimeterFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAltimeterFilter(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAltimeterFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAltimeterFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAltimeterFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQAltimeterFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QAltimeterFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QAltimeterFilter, &a0))
        {
            sipCpp = new sipQAltimeterFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAltimeterFilter[] = {{53, 255, 1}};


static PyMethodDef methods_QAltimeterFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QAltimeterFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QAltimeterFilter_filter)}
};

PyDoc_STRVAR(doc_QAltimeterFilter, "\1QAltimeterFilter()\n"
    "QAltimeterFilter(QAltimeterFilter)");


pyqt5ClassTypeDef sipTypeDef_QtSensors_QAltimeterFilter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAltimeterFilter,
        {0}
    },
    {
        sipNameNr_QAltimeterFilter,
        {0, 0, 1},
        1, methods_QAltimeterFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAltimeterFilter,
    -1,
    -1,
    supers_QAltimeterFilter,
    0,
    init_type_QAltimeterFilter,
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
    dealloc_QAltimeterFilter,
    0,
    0,
    0,
    release_QAltimeterFilter,
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
