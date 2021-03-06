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

#include "sipAPIQtBluetooth.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qlowenergyservicedata.sip"
#include <qlowenergyservicedata.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQLowEnergyServiceData.cpp"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qlowenergycharacteristicdata.sip"
#include <qlowenergycharacteristicdata.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQLowEnergyServiceData.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQLowEnergyServiceData.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qlowenergyservice.sip"
#include <qlowenergyservice.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQLowEnergyServiceData.cpp"
#line 148 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQLowEnergyServiceData.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtBluetooth/qbluetoothuuid.sip"
#include <qbluetoothuuid.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtBluetooth/sipQtBluetoothQLowEnergyServiceData.cpp"


PyDoc_STRVAR(doc_QLowEnergyServiceData_type, "type(self) -> QLowEnergyServiceData.ServiceType");

extern "C" {static PyObject *meth_QLowEnergyServiceData_type(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp))
        {
            QLowEnergyServiceData::ServiceType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QLowEnergyServiceData_ServiceType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_type, doc_QLowEnergyServiceData_type);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_setType, "setType(self, QLowEnergyServiceData.ServiceType)");

extern "C" {static PyObject *meth_QLowEnergyServiceData_setType(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_setType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLowEnergyServiceData::ServiceType a0;
        QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp, sipType_QLowEnergyServiceData_ServiceType, &a0))
        {
            sipCpp->setType(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_setType, doc_QLowEnergyServiceData_setType);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_uuid, "uuid(self) -> QBluetoothUuid");

extern "C" {static PyObject *meth_QLowEnergyServiceData_uuid(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_uuid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp))
        {
            QBluetoothUuid*sipRes;

            sipRes = new QBluetoothUuid(sipCpp->uuid());

            return sipConvertFromNewType(sipRes,sipType_QBluetoothUuid,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_uuid, doc_QLowEnergyServiceData_uuid);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_setUuid, "setUuid(self, QBluetoothUuid)");

extern "C" {static PyObject *meth_QLowEnergyServiceData_setUuid(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_setUuid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothUuid* a0;
        QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp, sipType_QBluetoothUuid, &a0))
        {
            sipCpp->setUuid(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_setUuid, doc_QLowEnergyServiceData_setUuid);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_includedServices, "includedServices(self) -> object");

extern "C" {static PyObject *meth_QLowEnergyServiceData_includedServices(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_includedServices(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp))
        {
            QList<QLowEnergyService*>*sipRes;

            sipRes = new QList<QLowEnergyService*>(sipCpp->includedServices());

            return sipConvertFromNewType(sipRes,sipType_QList_0101QLowEnergyService,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_includedServices, doc_QLowEnergyServiceData_includedServices);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_setIncludedServices, "setIncludedServices(self, Iterable[QLowEnergyService])");

extern "C" {static PyObject *meth_QLowEnergyServiceData_setIncludedServices(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_setIncludedServices(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QLowEnergyService*>* a0;
        int a0State = 0;
        QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp, sipType_QList_0101QLowEnergyService,&a0, &a0State))
        {
            sipCpp->setIncludedServices(*a0);
            sipReleaseType(const_cast<QList<QLowEnergyService*> *>(a0),sipType_QList_0101QLowEnergyService,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_setIncludedServices, doc_QLowEnergyServiceData_setIncludedServices);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_addIncludedService, "addIncludedService(self, QLowEnergyService)");

extern "C" {static PyObject *meth_QLowEnergyServiceData_addIncludedService(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_addIncludedService(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLowEnergyService* a0;
        QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp, sipType_QLowEnergyService, &a0))
        {
            sipCpp->addIncludedService(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_addIncludedService, doc_QLowEnergyServiceData_addIncludedService);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_characteristics, "characteristics(self) -> object");

extern "C" {static PyObject *meth_QLowEnergyServiceData_characteristics(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_characteristics(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp))
        {
            QList<QLowEnergyCharacteristicData>*sipRes;

            sipRes = new QList<QLowEnergyCharacteristicData>(sipCpp->characteristics());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QLowEnergyCharacteristicData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_characteristics, doc_QLowEnergyServiceData_characteristics);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_setCharacteristics, "setCharacteristics(self, Iterable[QLowEnergyCharacteristicData])");

extern "C" {static PyObject *meth_QLowEnergyServiceData_setCharacteristics(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_setCharacteristics(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QLowEnergyCharacteristicData>* a0;
        int a0State = 0;
        QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp, sipType_QList_0100QLowEnergyCharacteristicData,&a0, &a0State))
        {
            sipCpp->setCharacteristics(*a0);
            sipReleaseType(const_cast<QList<QLowEnergyCharacteristicData> *>(a0),sipType_QList_0100QLowEnergyCharacteristicData,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_setCharacteristics, doc_QLowEnergyServiceData_setCharacteristics);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_addCharacteristic, "addCharacteristic(self, QLowEnergyCharacteristicData)");

extern "C" {static PyObject *meth_QLowEnergyServiceData_addCharacteristic(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_addCharacteristic(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLowEnergyCharacteristicData* a0;
        QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp, sipType_QLowEnergyCharacteristicData, &a0))
        {
            sipCpp->addCharacteristic(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_addCharacteristic, doc_QLowEnergyServiceData_addCharacteristic);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QLowEnergyServiceData_isValid(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_isValid, doc_QLowEnergyServiceData_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QLowEnergyServiceData_swap, "swap(self, QLowEnergyServiceData)");

extern "C" {static PyObject *meth_QLowEnergyServiceData_swap(PyObject *, PyObject *);}
static PyObject *meth_QLowEnergyServiceData_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLowEnergyServiceData* a0;
        QLowEnergyServiceData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLowEnergyServiceData, &sipCpp, sipType_QLowEnergyServiceData, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLowEnergyServiceData, sipName_swap, doc_QLowEnergyServiceData_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QLowEnergyServiceData___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyServiceData___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QLowEnergyServiceData *sipCpp = reinterpret_cast<QLowEnergyServiceData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyServiceData));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLowEnergyServiceData* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLowEnergyServiceData, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,eq_slot,sipType_QLowEnergyServiceData,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLowEnergyServiceData___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLowEnergyServiceData___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QLowEnergyServiceData *sipCpp = reinterpret_cast<QLowEnergyServiceData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLowEnergyServiceData));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLowEnergyServiceData* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLowEnergyServiceData, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,ne_slot,sipType_QLowEnergyServiceData,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QLowEnergyServiceData(void *, int);}
static void release_QLowEnergyServiceData(void *sipCppV,int)
{
    delete reinterpret_cast<QLowEnergyServiceData *>(sipCppV);
}


extern "C" {static void assign_QLowEnergyServiceData(void *, SIP_SSIZE_T, const void *);}
static void assign_QLowEnergyServiceData(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QLowEnergyServiceData *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QLowEnergyServiceData *>(sipSrc);
}


extern "C" {static void *array_QLowEnergyServiceData(SIP_SSIZE_T);}
static void *array_QLowEnergyServiceData(SIP_SSIZE_T sipNrElem)
{
    return new QLowEnergyServiceData[sipNrElem];
}


extern "C" {static void *copy_QLowEnergyServiceData(const void *, SIP_SSIZE_T);}
static void *copy_QLowEnergyServiceData(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QLowEnergyServiceData(reinterpret_cast<const QLowEnergyServiceData *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLowEnergyServiceData(sipSimpleWrapper *);}
static void dealloc_QLowEnergyServiceData(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLowEnergyServiceData(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QLowEnergyServiceData(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLowEnergyServiceData(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLowEnergyServiceData *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QLowEnergyServiceData();

            return sipCpp;
        }
    }

    {
        const QLowEnergyServiceData* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLowEnergyServiceData, &a0))
        {
            sipCpp = new QLowEnergyServiceData(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLowEnergyServiceData[] = {
    {(void *)slot_QLowEnergyServiceData___eq__, eq_slot},
    {(void *)slot_QLowEnergyServiceData___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QLowEnergyServiceData[] = {
    {SIP_MLNAME_CAST(sipName_addCharacteristic), meth_QLowEnergyServiceData_addCharacteristic, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_addCharacteristic)},
    {SIP_MLNAME_CAST(sipName_addIncludedService), meth_QLowEnergyServiceData_addIncludedService, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_addIncludedService)},
    {SIP_MLNAME_CAST(sipName_characteristics), meth_QLowEnergyServiceData_characteristics, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_characteristics)},
    {SIP_MLNAME_CAST(sipName_includedServices), meth_QLowEnergyServiceData_includedServices, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_includedServices)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QLowEnergyServiceData_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_isValid)},
    {SIP_MLNAME_CAST(sipName_setCharacteristics), meth_QLowEnergyServiceData_setCharacteristics, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_setCharacteristics)},
    {SIP_MLNAME_CAST(sipName_setIncludedServices), meth_QLowEnergyServiceData_setIncludedServices, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_setIncludedServices)},
    {SIP_MLNAME_CAST(sipName_setType), meth_QLowEnergyServiceData_setType, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_setType)},
    {SIP_MLNAME_CAST(sipName_setUuid), meth_QLowEnergyServiceData_setUuid, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_setUuid)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QLowEnergyServiceData_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_swap)},
    {SIP_MLNAME_CAST(sipName_type), meth_QLowEnergyServiceData_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_type)},
    {SIP_MLNAME_CAST(sipName_uuid), meth_QLowEnergyServiceData_uuid, METH_VARARGS, SIP_MLDOC_CAST(doc_QLowEnergyServiceData_uuid)}
};

static sipEnumMemberDef enummembers_QLowEnergyServiceData[] = {
    {sipName_ServiceTypePrimary, static_cast<int>(QLowEnergyServiceData::ServiceTypePrimary), 90},
    {sipName_ServiceTypeSecondary, static_cast<int>(QLowEnergyServiceData::ServiceTypeSecondary), 90},
};

PyDoc_STRVAR(doc_QLowEnergyServiceData, "\1QLowEnergyServiceData()\n"
    "QLowEnergyServiceData(QLowEnergyServiceData)");


pyqt5ClassTypeDef sipTypeDef_QtBluetooth_QLowEnergyServiceData = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QLowEnergyServiceData,
        {0}
    },
    {
        sipNameNr_QLowEnergyServiceData,
        {0, 0, 1},
        12, methods_QLowEnergyServiceData,
        2, enummembers_QLowEnergyServiceData,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLowEnergyServiceData,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QLowEnergyServiceData,
    init_type_QLowEnergyServiceData,
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
    dealloc_QLowEnergyServiceData,
    assign_QLowEnergyServiceData,
    array_QLowEnergyServiceData,
    copy_QLowEnergyServiceData,
    release_QLowEnergyServiceData,
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
