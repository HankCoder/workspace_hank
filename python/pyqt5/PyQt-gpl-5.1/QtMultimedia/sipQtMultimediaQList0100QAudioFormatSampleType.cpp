/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.18.1
 *
 * Copyright (c) 2013 Riverbank Computing Limited <info@riverbankcomputing.com>
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

#line 135 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQList0100QAudioFormatSampleType.cpp"

#line 26 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudioformat.sip"
#include <qaudioformat.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQList0100QAudioFormatSampleType.cpp"


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

#line 165 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudioformat.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PyList_Check(sipPy))
            return 0;

        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
            if (!sipCanConvertToEnum(PyList_GET_ITEM(sipPy, i), sipType_QAudioFormat_SampleType))
                return 0;

        return 1;
    }

    QList<QAudioFormat::SampleType> *ql = new QList<QAudioFormat::SampleType>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
    {
        long l = SIPLong_AsLong(PyList_GET_ITEM(sipPy, i));
        ql->append(static_cast<QAudioFormat::SampleType>(l));
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 96 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQList0100QAudioFormatSampleType.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QAudioFormat_SampleType(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QAudioFormat_SampleType(void *sipCppV, PyObject *)
{
   QList<QAudioFormat::SampleType> *sipCpp = reinterpret_cast<QList<QAudioFormat::SampleType> *>(sipCppV);

#line 139 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtMultimedia/qaudioformat.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QAudioFormat::SampleType e = sipCpp->at(i);
        PyObject *eobj;

        if ((eobj = sipConvertFromEnum(e, sipType_QAudioFormat_SampleType)) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, eobj);
    }

    return l;
#line 129 "/home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/QtMultimedia/sipQtMultimediaQList0100QAudioFormatSampleType.cpp"
}


sipMappedTypeDef sipTypeDef_QtMultimedia_QList_0100QAudioFormat_SampleType = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_392,
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