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

#include "sipAPIQtLocation.h"

#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qgeorouterequest.sip"
#include <qgeorouterequest.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequest.cpp"

#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 33 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequest.cpp"
#line 28 "sip/QtPositioning/qgeocoordinate.sip"
#include <qgeocoordinate.h>
#line 36 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequest.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qgeorouterequest.sip"
#include <qgeorouterequest.h>
#line 39 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequest.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 42 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequest.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtLocation/qgeorouterequest.sip"
#include <qgeorouterequest.h>
#line 45 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequest.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 48 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequest.cpp"
#line 28 "sip/QtPositioning/qgeorectangle.sip"
#include <qgeorectangle.h>
#line 51 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtLocation/sipQtLocationQGeoRouteRequest.cpp"


PyDoc_STRVAR(doc_QGeoRouteRequest_setWaypoints, "setWaypoints(self, Iterable[QGeoCoordinate])");

extern "C" {static PyObject *meth_QGeoRouteRequest_setWaypoints(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_setWaypoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QGeoCoordinate>* a0;
        int a0State = 0;
        QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoRouteRequest, &sipCpp, sipType_QList_0100QGeoCoordinate,&a0, &a0State))
        {
            sipCpp->setWaypoints(*a0);
            sipReleaseType(const_cast<QList<QGeoCoordinate> *>(a0),sipType_QList_0100QGeoCoordinate,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_setWaypoints, doc_QGeoRouteRequest_setWaypoints);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_waypoints, "waypoints(self) -> List[QGeoCoordinate]");

extern "C" {static PyObject *meth_QGeoRouteRequest_waypoints(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_waypoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRouteRequest, &sipCpp))
        {
            QList<QGeoCoordinate>*sipRes;

            sipRes = new QList<QGeoCoordinate>(sipCpp->waypoints());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QGeoCoordinate,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_waypoints, doc_QGeoRouteRequest_waypoints);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_setExcludeAreas, "setExcludeAreas(self, object)");

extern "C" {static PyObject *meth_QGeoRouteRequest_setExcludeAreas(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_setExcludeAreas(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QGeoRectangle>* a0;
        int a0State = 0;
        QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoRouteRequest, &sipCpp, sipType_QList_0100QGeoRectangle,&a0, &a0State))
        {
            sipCpp->setExcludeAreas(*a0);
            sipReleaseType(const_cast<QList<QGeoRectangle> *>(a0),sipType_QList_0100QGeoRectangle,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_setExcludeAreas, doc_QGeoRouteRequest_setExcludeAreas);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_excludeAreas, "excludeAreas(self) -> List[QGeoRectangle]");

extern "C" {static PyObject *meth_QGeoRouteRequest_excludeAreas(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_excludeAreas(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRouteRequest, &sipCpp))
        {
            QList<QGeoRectangle>*sipRes;

            sipRes = new QList<QGeoRectangle>(sipCpp->excludeAreas());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QGeoRectangle,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_excludeAreas, doc_QGeoRouteRequest_excludeAreas);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_setNumberAlternativeRoutes, "setNumberAlternativeRoutes(self, int)");

extern "C" {static PyObject *meth_QGeoRouteRequest_setNumberAlternativeRoutes(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_setNumberAlternativeRoutes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGeoRouteRequest, &sipCpp, &a0))
        {
            sipCpp->setNumberAlternativeRoutes(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_setNumberAlternativeRoutes, doc_QGeoRouteRequest_setNumberAlternativeRoutes);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_numberAlternativeRoutes, "numberAlternativeRoutes(self) -> int");

extern "C" {static PyObject *meth_QGeoRouteRequest_numberAlternativeRoutes(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_numberAlternativeRoutes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRouteRequest, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->numberAlternativeRoutes();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_numberAlternativeRoutes, doc_QGeoRouteRequest_numberAlternativeRoutes);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_setTravelModes, "setTravelModes(self, QGeoRouteRequest.TravelModes)");

extern "C" {static PyObject *meth_QGeoRouteRequest_setTravelModes(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_setTravelModes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::TravelModes* a0;
        int a0State = 0;
        QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoRouteRequest, &sipCpp, sipType_QGeoRouteRequest_TravelModes, &a0, &a0State))
        {
            sipCpp->setTravelModes(*a0);
            sipReleaseType(a0,sipType_QGeoRouteRequest_TravelModes,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_setTravelModes, doc_QGeoRouteRequest_setTravelModes);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_travelModes, "travelModes(self) -> QGeoRouteRequest.TravelModes");

extern "C" {static PyObject *meth_QGeoRouteRequest_travelModes(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_travelModes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRouteRequest, &sipCpp))
        {
            QGeoRouteRequest::TravelModes*sipRes;

            sipRes = new QGeoRouteRequest::TravelModes(sipCpp->travelModes());

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_TravelModes,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_travelModes, doc_QGeoRouteRequest_travelModes);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_setFeatureWeight, "setFeatureWeight(self, QGeoRouteRequest.FeatureType, QGeoRouteRequest.FeatureWeight)");

extern "C" {static PyObject *meth_QGeoRouteRequest_setFeatureWeight(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_setFeatureWeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::FeatureType a0;
        QGeoRouteRequest::FeatureWeight a1;
        QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEE", &sipSelf, sipType_QGeoRouteRequest, &sipCpp, sipType_QGeoRouteRequest_FeatureType, &a0, sipType_QGeoRouteRequest_FeatureWeight, &a1))
        {
            sipCpp->setFeatureWeight(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_setFeatureWeight, doc_QGeoRouteRequest_setFeatureWeight);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_featureWeight, "featureWeight(self, QGeoRouteRequest.FeatureType) -> QGeoRouteRequest.FeatureWeight");

extern "C" {static PyObject *meth_QGeoRouteRequest_featureWeight(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_featureWeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::FeatureType a0;
        const QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoRouteRequest, &sipCpp, sipType_QGeoRouteRequest_FeatureType, &a0))
        {
            QGeoRouteRequest::FeatureWeight sipRes;

            sipRes = sipCpp->featureWeight(a0);

            return sipConvertFromEnum(sipRes,sipType_QGeoRouteRequest_FeatureWeight);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_featureWeight, doc_QGeoRouteRequest_featureWeight);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_featureTypes, "featureTypes(self) -> object");

extern "C" {static PyObject *meth_QGeoRouteRequest_featureTypes(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_featureTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRouteRequest, &sipCpp))
        {
            QList<QGeoRouteRequest::FeatureType>*sipRes;

            sipRes = new QList<QGeoRouteRequest::FeatureType>(sipCpp->featureTypes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QGeoRouteRequest_FeatureType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_featureTypes, doc_QGeoRouteRequest_featureTypes);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_setRouteOptimization, "setRouteOptimization(self, QGeoRouteRequest.RouteOptimizations)");

extern "C" {static PyObject *meth_QGeoRouteRequest_setRouteOptimization(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_setRouteOptimization(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::RouteOptimizations* a0;
        int a0State = 0;
        QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGeoRouteRequest, &sipCpp, sipType_QGeoRouteRequest_RouteOptimizations, &a0, &a0State))
        {
            sipCpp->setRouteOptimization(*a0);
            sipReleaseType(a0,sipType_QGeoRouteRequest_RouteOptimizations,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_setRouteOptimization, doc_QGeoRouteRequest_setRouteOptimization);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_routeOptimization, "routeOptimization(self) -> QGeoRouteRequest.RouteOptimizations");

extern "C" {static PyObject *meth_QGeoRouteRequest_routeOptimization(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_routeOptimization(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRouteRequest, &sipCpp))
        {
            QGeoRouteRequest::RouteOptimizations*sipRes;

            sipRes = new QGeoRouteRequest::RouteOptimizations(sipCpp->routeOptimization());

            return sipConvertFromNewType(sipRes,sipType_QGeoRouteRequest_RouteOptimizations,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_routeOptimization, doc_QGeoRouteRequest_routeOptimization);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_setSegmentDetail, "setSegmentDetail(self, QGeoRouteRequest.SegmentDetail)");

extern "C" {static PyObject *meth_QGeoRouteRequest_setSegmentDetail(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_setSegmentDetail(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::SegmentDetail a0;
        QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoRouteRequest, &sipCpp, sipType_QGeoRouteRequest_SegmentDetail, &a0))
        {
            sipCpp->setSegmentDetail(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_setSegmentDetail, doc_QGeoRouteRequest_setSegmentDetail);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_segmentDetail, "segmentDetail(self) -> QGeoRouteRequest.SegmentDetail");

extern "C" {static PyObject *meth_QGeoRouteRequest_segmentDetail(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_segmentDetail(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRouteRequest, &sipCpp))
        {
            QGeoRouteRequest::SegmentDetail sipRes;

            sipRes = sipCpp->segmentDetail();

            return sipConvertFromEnum(sipRes,sipType_QGeoRouteRequest_SegmentDetail);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_segmentDetail, doc_QGeoRouteRequest_segmentDetail);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_setManeuverDetail, "setManeuverDetail(self, QGeoRouteRequest.ManeuverDetail)");

extern "C" {static PyObject *meth_QGeoRouteRequest_setManeuverDetail(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_setManeuverDetail(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGeoRouteRequest::ManeuverDetail a0;
        QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGeoRouteRequest, &sipCpp, sipType_QGeoRouteRequest_ManeuverDetail, &a0))
        {
            sipCpp->setManeuverDetail(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_setManeuverDetail, doc_QGeoRouteRequest_setManeuverDetail);

    return NULL;
}


PyDoc_STRVAR(doc_QGeoRouteRequest_maneuverDetail, "maneuverDetail(self) -> QGeoRouteRequest.ManeuverDetail");

extern "C" {static PyObject *meth_QGeoRouteRequest_maneuverDetail(PyObject *, PyObject *);}
static PyObject *meth_QGeoRouteRequest_maneuverDetail(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGeoRouteRequest, &sipCpp))
        {
            QGeoRouteRequest::ManeuverDetail sipRes;

            sipRes = sipCpp->maneuverDetail();

            return sipConvertFromEnum(sipRes,sipType_QGeoRouteRequest_ManeuverDetail);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGeoRouteRequest, sipName_maneuverDetail, doc_QGeoRouteRequest_maneuverDetail);

    return NULL;
}


extern "C" {static PyObject *slot_QGeoRouteRequest___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoRouteRequest *sipCpp = reinterpret_cast<QGeoRouteRequest *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoRouteRequest, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoRouteRequest::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,ne_slot,sipType_QGeoRouteRequest,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGeoRouteRequest___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGeoRouteRequest___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGeoRouteRequest *sipCpp = reinterpret_cast<QGeoRouteRequest *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGeoRouteRequest));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGeoRouteRequest* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGeoRouteRequest, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGeoRouteRequest::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtLocation,eq_slot,sipType_QGeoRouteRequest,sipSelf,sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QGeoRouteRequest(void *, int);}
static void release_QGeoRouteRequest(void *sipCppV,int)
{
    delete reinterpret_cast<QGeoRouteRequest *>(sipCppV);
}


extern "C" {static void assign_QGeoRouteRequest(void *, SIP_SSIZE_T, const void *);}
static void assign_QGeoRouteRequest(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGeoRouteRequest *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGeoRouteRequest *>(sipSrc);
}


extern "C" {static void *array_QGeoRouteRequest(SIP_SSIZE_T);}
static void *array_QGeoRouteRequest(SIP_SSIZE_T sipNrElem)
{
    return new QGeoRouteRequest[sipNrElem];
}


extern "C" {static void *copy_QGeoRouteRequest(const void *, SIP_SSIZE_T);}
static void *copy_QGeoRouteRequest(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGeoRouteRequest(reinterpret_cast<const QGeoRouteRequest *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGeoRouteRequest(sipSimpleWrapper *);}
static void dealloc_QGeoRouteRequest(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGeoRouteRequest(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGeoRouteRequest(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGeoRouteRequest(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGeoRouteRequest *sipCpp = 0;

    {
        const QList<QGeoCoordinate>& a0def = QList<QGeoCoordinate>();
        const QList<QGeoCoordinate>* a0 = &a0def;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_waypoints,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_QList_0100QGeoCoordinate,&a0, &a0State))
        {
            sipCpp = new QGeoRouteRequest(*a0);
            sipReleaseType(const_cast<QList<QGeoCoordinate> *>(a0),sipType_QList_0100QGeoCoordinate,a0State);

            return sipCpp;
        }
    }

    {
        const QGeoCoordinate* a0;
        const QGeoCoordinate* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_QGeoCoordinate, &a0, sipType_QGeoCoordinate, &a1))
        {
            sipCpp = new QGeoRouteRequest(*a0,*a1);

            return sipCpp;
        }
    }

    {
        const QGeoRouteRequest* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGeoRouteRequest, &a0))
        {
            sipCpp = new QGeoRouteRequest(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGeoRouteRequest[] = {
    {(void *)slot_QGeoRouteRequest___ne__, ne_slot},
    {(void *)slot_QGeoRouteRequest___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGeoRouteRequest[] = {
    {SIP_MLNAME_CAST(sipName_excludeAreas), meth_QGeoRouteRequest_excludeAreas, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_excludeAreas)},
    {SIP_MLNAME_CAST(sipName_featureTypes), meth_QGeoRouteRequest_featureTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_featureTypes)},
    {SIP_MLNAME_CAST(sipName_featureWeight), meth_QGeoRouteRequest_featureWeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_featureWeight)},
    {SIP_MLNAME_CAST(sipName_maneuverDetail), meth_QGeoRouteRequest_maneuverDetail, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_maneuverDetail)},
    {SIP_MLNAME_CAST(sipName_numberAlternativeRoutes), meth_QGeoRouteRequest_numberAlternativeRoutes, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_numberAlternativeRoutes)},
    {SIP_MLNAME_CAST(sipName_routeOptimization), meth_QGeoRouteRequest_routeOptimization, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_routeOptimization)},
    {SIP_MLNAME_CAST(sipName_segmentDetail), meth_QGeoRouteRequest_segmentDetail, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_segmentDetail)},
    {SIP_MLNAME_CAST(sipName_setExcludeAreas), meth_QGeoRouteRequest_setExcludeAreas, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_setExcludeAreas)},
    {SIP_MLNAME_CAST(sipName_setFeatureWeight), meth_QGeoRouteRequest_setFeatureWeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_setFeatureWeight)},
    {SIP_MLNAME_CAST(sipName_setManeuverDetail), meth_QGeoRouteRequest_setManeuverDetail, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_setManeuverDetail)},
    {SIP_MLNAME_CAST(sipName_setNumberAlternativeRoutes), meth_QGeoRouteRequest_setNumberAlternativeRoutes, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_setNumberAlternativeRoutes)},
    {SIP_MLNAME_CAST(sipName_setRouteOptimization), meth_QGeoRouteRequest_setRouteOptimization, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_setRouteOptimization)},
    {SIP_MLNAME_CAST(sipName_setSegmentDetail), meth_QGeoRouteRequest_setSegmentDetail, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_setSegmentDetail)},
    {SIP_MLNAME_CAST(sipName_setTravelModes), meth_QGeoRouteRequest_setTravelModes, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_setTravelModes)},
    {SIP_MLNAME_CAST(sipName_setWaypoints), meth_QGeoRouteRequest_setWaypoints, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_setWaypoints)},
    {SIP_MLNAME_CAST(sipName_travelModes), meth_QGeoRouteRequest_travelModes, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_travelModes)},
    {SIP_MLNAME_CAST(sipName_waypoints), meth_QGeoRouteRequest_waypoints, METH_VARARGS, SIP_MLDOC_CAST(doc_QGeoRouteRequest_waypoints)}
};

static sipEnumMemberDef enummembers_QGeoRouteRequest[] = {
    {sipName_AvoidFeatureWeight, static_cast<int>(QGeoRouteRequest::AvoidFeatureWeight), 12},
    {sipName_BasicManeuvers, static_cast<int>(QGeoRouteRequest::BasicManeuvers), 14},
    {sipName_BasicSegmentData, static_cast<int>(QGeoRouteRequest::BasicSegmentData), 18},
    {sipName_BicycleTravel, static_cast<int>(QGeoRouteRequest::BicycleTravel), 20},
    {sipName_CarTravel, static_cast<int>(QGeoRouteRequest::CarTravel), 20},
    {sipName_DirtRoadFeature, static_cast<int>(QGeoRouteRequest::DirtRoadFeature), 10},
    {sipName_DisallowFeatureWeight, static_cast<int>(QGeoRouteRequest::DisallowFeatureWeight), 12},
    {sipName_FastestRoute, static_cast<int>(QGeoRouteRequest::FastestRoute), 16},
    {sipName_FerryFeature, static_cast<int>(QGeoRouteRequest::FerryFeature), 10},
    {sipName_HighwayFeature, static_cast<int>(QGeoRouteRequest::HighwayFeature), 10},
    {sipName_MostEconomicRoute, static_cast<int>(QGeoRouteRequest::MostEconomicRoute), 16},
    {sipName_MostScenicRoute, static_cast<int>(QGeoRouteRequest::MostScenicRoute), 16},
    {sipName_MotorPoolLaneFeature, static_cast<int>(QGeoRouteRequest::MotorPoolLaneFeature), 10},
    {sipName_NeutralFeatureWeight, static_cast<int>(QGeoRouteRequest::NeutralFeatureWeight), 12},
    {sipName_NoFeature, static_cast<int>(QGeoRouteRequest::NoFeature), 10},
    {sipName_NoManeuvers, static_cast<int>(QGeoRouteRequest::NoManeuvers), 14},
    {sipName_NoSegmentData, static_cast<int>(QGeoRouteRequest::NoSegmentData), 18},
    {sipName_ParksFeature, static_cast<int>(QGeoRouteRequest::ParksFeature), 10},
    {sipName_PedestrianTravel, static_cast<int>(QGeoRouteRequest::PedestrianTravel), 20},
    {sipName_PreferFeatureWeight, static_cast<int>(QGeoRouteRequest::PreferFeatureWeight), 12},
    {sipName_PublicTransitFeature, static_cast<int>(QGeoRouteRequest::PublicTransitFeature), 10},
    {sipName_PublicTransitTravel, static_cast<int>(QGeoRouteRequest::PublicTransitTravel), 20},
    {sipName_RequireFeatureWeight, static_cast<int>(QGeoRouteRequest::RequireFeatureWeight), 12},
    {sipName_ShortestRoute, static_cast<int>(QGeoRouteRequest::ShortestRoute), 16},
    {sipName_TollFeature, static_cast<int>(QGeoRouteRequest::TollFeature), 10},
    {sipName_TruckTravel, static_cast<int>(QGeoRouteRequest::TruckTravel), 20},
    {sipName_TunnelFeature, static_cast<int>(QGeoRouteRequest::TunnelFeature), 10},
};

PyDoc_STRVAR(doc_QGeoRouteRequest, "\1QGeoRouteRequest(waypoints: Iterable[QGeoCoordinate] = [])\n"
    "QGeoRouteRequest(QGeoCoordinate, QGeoCoordinate)\n"
    "QGeoRouteRequest(QGeoRouteRequest)");


pyqt5ClassTypeDef sipTypeDef_QtLocation_QGeoRouteRequest = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGeoRouteRequest,
        {0}
    },
    {
        sipNameNr_QGeoRouteRequest,
        {0, 0, 1},
        17, methods_QGeoRouteRequest,
        27, enummembers_QGeoRouteRequest,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGeoRouteRequest,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGeoRouteRequest,
    init_type_QGeoRouteRequest,
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
    dealloc_QGeoRouteRequest,
    assign_QGeoRouteRequest,
    array_QGeoRouteRequest,
    copy_QGeoRouteRequest,
    release_QGeoRouteRequest,
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
