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

#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtSensors/qholstersensor.sip"
#include <qholstersensor.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtSensors/sipQtSensorsQHolsterFilter.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtSensors/qholstersensor.sip"
#include <qholstersensor.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtSensors/sipQtSensorsQHolsterFilter.cpp"


class sipQHolsterFilter : public QHolsterFilter
{
public:
    sipQHolsterFilter();
    sipQHolsterFilter(const QHolsterFilter&);
    virtual ~sipQHolsterFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter(QHolsterReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHolsterFilter(const sipQHolsterFilter &);
    sipQHolsterFilter &operator = (const sipQHolsterFilter &);

    char sipPyMethods[1];
};

sipQHolsterFilter::sipQHolsterFilter(): QHolsterFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHolsterFilter::sipQHolsterFilter(const QHolsterFilter& a0): QHolsterFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQHolsterFilter::~sipQHolsterFilter()
{
    sipCommonDtor(sipPySelf);
}

bool sipQHolsterFilter::filter(QHolsterReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QHolsterFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QHolsterReading*);

    return sipVH_QtSensors_10(sipGILState, sipModuleAPI_QtSensors_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QHolsterFilter_filter, "filter(self, QHolsterReading) -> bool");

extern "C" {static PyObject *meth_QHolsterFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QHolsterFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QHolsterReading* a0;
        QHolsterFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QHolsterFilter, &sipCpp, sipType_QHolsterReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QHolsterFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QHolsterFilter, sipName_filter, doc_QHolsterFilter_filter);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHolsterFilter(void *, int);}
static void release_QHolsterFilter(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHolsterFilter *>(sipCppV);
    else
        delete reinterpret_cast<QHolsterFilter *>(sipCppV);
}


extern "C" {static void dealloc_QHolsterFilter(sipSimpleWrapper *);}
static void dealloc_QHolsterFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQHolsterFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QHolsterFilter(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QHolsterFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHolsterFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHolsterFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQHolsterFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QHolsterFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHolsterFilter, &a0))
        {
            sipCpp = new sipQHolsterFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHolsterFilter[] = {{53, 255, 1}};


static PyMethodDef methods_QHolsterFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QHolsterFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QHolsterFilter_filter)}
};

PyDoc_STRVAR(doc_QHolsterFilter, "\1QHolsterFilter()\n"
    "QHolsterFilter(QHolsterFilter)");


pyqt5ClassTypeDef sipTypeDef_QtSensors_QHolsterFilter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QHolsterFilter,
        {0}
    },
    {
        sipNameNr_QHolsterFilter,
        {0, 0, 1},
        1, methods_QHolsterFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHolsterFilter,
    -1,
    -1,
    supers_QHolsterFilter,
    0,
    init_type_QHolsterFilter,
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
    dealloc_QHolsterFilter,
    0,
    0,
    0,
    release_QHolsterFilter,
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
