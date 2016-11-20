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

#line 44 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtSensors/qtiltsensor.sip"
#include <qtiltsensor.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtSensors/sipQtSensorsQTiltFilter.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtSensors/qtiltsensor.sip"
#include <qtiltsensor.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtSensors/sipQtSensorsQTiltFilter.cpp"


class sipQTiltFilter : public QTiltFilter
{
public:
    sipQTiltFilter();
    sipQTiltFilter(const QTiltFilter&);
    virtual ~sipQTiltFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter(QTiltReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTiltFilter(const sipQTiltFilter &);
    sipQTiltFilter &operator = (const sipQTiltFilter &);

    char sipPyMethods[1];
};

sipQTiltFilter::sipQTiltFilter(): QTiltFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTiltFilter::sipQTiltFilter(const QTiltFilter& a0): QTiltFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTiltFilter::~sipQTiltFilter()
{
    sipCommonDtor(sipPySelf);
}

bool sipQTiltFilter::filter(QTiltReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QTiltFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTiltReading*);

    return sipVH_QtSensors_1(sipGILState, sipModuleAPI_QtSensors_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QTiltFilter_filter, "filter(self, QTiltReading) -> bool");

extern "C" {static PyObject *meth_QTiltFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QTiltFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QTiltReading* a0;
        QTiltFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QTiltFilter, &sipCpp, sipType_QTiltReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTiltFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTiltFilter, sipName_filter, doc_QTiltFilter_filter);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTiltFilter(void *, int);}
static void release_QTiltFilter(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTiltFilter *>(sipCppV);
    else
        delete reinterpret_cast<QTiltFilter *>(sipCppV);
}


extern "C" {static void dealloc_QTiltFilter(sipSimpleWrapper *);}
static void dealloc_QTiltFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTiltFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTiltFilter(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QTiltFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTiltFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTiltFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQTiltFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QTiltFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTiltFilter, &a0))
        {
            sipCpp = new sipQTiltFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTiltFilter[] = {{53, 255, 1}};


static PyMethodDef methods_QTiltFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QTiltFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QTiltFilter_filter)}
};

PyDoc_STRVAR(doc_QTiltFilter, "\1QTiltFilter()\n"
    "QTiltFilter(QTiltFilter)");


pyqt5ClassTypeDef sipTypeDef_QtSensors_QTiltFilter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTiltFilter,
        {0}
    },
    {
        sipNameNr_QTiltFilter,
        {0, 0, 1},
        1, methods_QTiltFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTiltFilter,
    -1,
    -1,
    supers_QTiltFilter,
    0,
    init_type_QTiltFilter,
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
    dealloc_QTiltFilter,
    0,
    0,
    0,
    release_QTiltFilter,
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
