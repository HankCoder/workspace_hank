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

#include "sipAPIQtMultimedia.h"

#line 231 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtMultimedia/qpymultimedia_qlist.sip"
#include <qaudioformat.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtMultimedia/sipQtMultimediaQList0100QAudioFormatSampleType.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtMultimedia/sipQtMultimediaQList0100QAudioFormatSampleType.cpp"


extern "C" {static void assign_QList_0100QAudioFormat_SampleType(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QAudioFormat_SampleType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QAudioFormat::SampleType> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QAudioFormat::SampleType> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QAudioFormat_SampleType(SIP_SSIZE_T);}
static void *array_QList_0100QAudioFormat_SampleType(SIP_SSIZE_T sipNrElem)
{
    return new QList<QAudioFormat::SampleType>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QAudioFormat_SampleType(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QAudioFormat_SampleType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QAudioFormat::SampleType>(reinterpret_cast<const QList<QAudioFormat::SampleType> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QAudioFormat_SampleType(void *, int);}
static void release_QList_0100QAudioFormat_SampleType(void *ptr, int)
{
    delete reinterpret_cast<QList<QAudioFormat::SampleType> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QAudioFormat_SampleType(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QAudioFormat_SampleType(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QAudioFormat::SampleType> **sipCppPtr = reinterpret_cast<QList<QAudioFormat::SampleType> **>(sipCppPtrV);

#line 259 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtMultimedia/qpymultimedia_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QAudioFormat::SampleType> *ql = new QList<QAudioFormat::SampleType>;

    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        if (!sipCanConvertToEnum(itm, sipType_QAudioFormat_SampleType))
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QAudioFormat.SampleType' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        ql->append(static_cast<QAudioFormat::SampleType>(SIPLong_AsLong(itm)));

        Py_DECREF(itm);
    }

    Py_DECREF(iter);

    *sipCppPtr = ql;

    return sipGetState(sipTransferObj);
#line 137 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtMultimedia/sipQtMultimediaQList0100QAudioFormatSampleType.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QAudioFormat_SampleType(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QAudioFormat_SampleType(void *sipCppV, PyObject *)
{
   QList<QAudioFormat::SampleType> *sipCpp = reinterpret_cast<QList<QAudioFormat::SampleType> *>(sipCppV);

#line 235 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtMultimedia/qpymultimedia_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *eobj = sipConvertFromEnum(sipCpp->at(i),
                sipType_QAudioFormat_SampleType);

        if (!eobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, eobj);
    }

    return l;
#line 168 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtMultimedia/sipQtMultimediaQList0100QAudioFormatSampleType.cpp"
}


sipMappedTypeDef sipTypeDef_QtMultimedia_QList_0100QAudioFormat_SampleType = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_400,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QAudioFormat_SampleType,
    array_QList_0100QAudioFormat_SampleType,
    copy_QList_0100QAudioFormat_SampleType,
    release_QList_0100QAudioFormat_SampleType,
    convertTo_QList_0100QAudioFormat_SampleType,
    convertFrom_QList_0100QAudioFormat_SampleType
};
