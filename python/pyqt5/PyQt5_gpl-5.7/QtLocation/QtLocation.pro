TEMPLATE = lib
CONFIG += warn_on plugin
QT += location
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtLocation.pyd
    target.files = QtLocation.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtLocation.so
    target.files = QtLocation.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtLocation
sip.files = ../sip/QtLocation/qplaceresult.sip ../sip/QtLocation/qplacecontent.sip ../sip/QtLocation/qplaceratings.sip ../sip/QtLocation/qplaceuser.sip ../sip/QtLocation/qlocation.sip ../sip/QtLocation/qgeorouterequest.sip ../sip/QtLocation/qgeocodereply.sip ../sip/QtLocation/qplaceidreply.sip ../sip/QtLocation/qplacecontentrequest.sip ../sip/QtLocation/qplacesearchrequest.sip ../sip/QtLocation/qplaceicon.sip ../sip/QtLocation/qgeoroutingmanager.sip ../sip/QtLocation/qplacematchreply.sip ../sip/QtLocation/qplacesearchresult.sip ../sip/QtLocation/qplaceimage.sip ../sip/QtLocation/qgeomaneuver.sip ../sip/QtLocation/qplaceproposedsearchresult.sip ../sip/QtLocation/qplaceeditorial.sip ../sip/QtLocation/qplacecategory.sip ../sip/QtLocation/qplacereview.sip ../sip/QtLocation/qgeoroutingmanagerengine.sip ../sip/QtLocation/qplacemanagerengine.sip ../sip/QtLocation/qplacereply.sip ../sip/QtLocation/qgeoserviceprovider.sip ../sip/QtLocation/qgeoroutesegment.sip ../sip/QtLocation/qgeocodingmanagerengine.sip ../sip/QtLocation/qplacematchrequest.sip ../sip/QtLocation/qgeoroutereply.sip ../sip/QtLocation/qplacemanager.sip ../sip/QtLocation/QtLocationmod.sip ../sip/QtLocation/qplacesupplier.sip ../sip/QtLocation/qplacecontactdetail.sip ../sip/QtLocation/qplacedetailsreply.sip ../sip/QtLocation/qplacecontentreply.sip ../sip/QtLocation/qplaceattribute.sip ../sip/QtLocation/qplacesearchreply.sip ../sip/QtLocation/qplacesearchsuggestionreply.sip ../sip/QtLocation/qgeocodingmanager.sip ../sip/QtLocation/qgeoroute.sip ../sip/QtLocation/qplace.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtLocation.exp
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += .
INCLUDEPATH += /usr/include/python2.7
INCLUDEPATH += /usr/local/python3/include/python3.5m

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
    QMAKE_LFLAGS += "-install_name $$absolute_path($$PY_MODULE, $$target.path)"

    equals(QT_MINOR_VERSION, 5) {
        QMAKE_RPATHDIR += $$[QT_INSTALL_LIBS]
    }
}

TARGET = QtLocation
HEADERS = sipAPIQtLocation.h
SOURCES = sipQtLocationQGeoRouteRequestManeuverDetails.cpp sipQtLocationQGeoServiceProviderGeocodingFeatures.cpp sipQtLocationQPlaceDetailsReply.cpp sipQtLocationQList0100QPlace.cpp sipQtLocationQPlaceUser.cpp sipQtLocationQList0100QGeoRouteRequestFeatureType.cpp sipQtLocationQPlaceSupplier.cpp sipQtLocationQGeoRouteRequestFeatureWeights.cpp sipQtLocationQPlaceResult.cpp sipQtLocationQPlaceReview.cpp sipQtLocationQPlaceEditorial.cpp sipQtLocationQList0100QPlaceSearchResult.cpp sipQtLocationQPlaceCategory.cpp sipQtLocationQPlaceMatchRequest.cpp sipQtLocationQMap18000100QPlaceContent.cpp sipQtLocationQGeoCodeReply.cpp sipQtLocationQGeoCodingManagerEngine.cpp sipQtLocationQGeoRouteRequestSegmentDetails.cpp sipQtLocationQPlaceSearchRequest.cpp sipQtLocationQGeoRoute.cpp sipQtLocationQPlaceContactDetail.cpp sipQtLocationQPlaceImage.cpp sipQtLocationQPlaceContentReply.cpp sipQtLocationQGeoServiceProviderMappingFeatures.cpp sipQtLocationQList0100QPlaceContactDetail.cpp sipQtLocationQGeoRouteRequestTravelModes.cpp sipQtLocationQGeoRoutingManager.cpp sipQtLocationcmodule.cpp sipQtLocationQLocationVisibilityScope.cpp sipQtLocationQList0100QGeoRectangle.cpp sipQtLocationQPlaceIdReply.cpp sipQtLocationQPlaceSearchResult.cpp sipQtLocationQPlaceContentRequest.cpp sipQtLocationQGeoServiceProviderRoutingFeatures.cpp sipQtLocationQPlace.cpp sipQtLocationQPlaceIcon.cpp sipQtLocationQGeoRouteRequestRouteOptimizations.cpp sipQtLocationQPlaceContent.cpp sipQtLocationQGeoRouteReply.cpp sipQtLocationQGeoManeuver.cpp sipQtLocationQGeoRoutingManagerEngine.cpp sipQtLocationQLocation.cpp sipQtLocationQGeoRouteRequestFeatureTypes.cpp sipQtLocationQList0100QGeoRoute.cpp sipQtLocationQPlaceManagerEngine.cpp sipQtLocationQGeoRouteRequest.cpp sipQtLocationQPlaceSearchSuggestionReply.cpp sipQtLocationQPlaceSearchReply.cpp sipQtLocationQGeoCodingManager.cpp sipQtLocationQGeoRouteSegment.cpp sipQtLocationQPlaceReply.cpp sipQtLocationQList0100QGeoLocation.cpp sipQtLocationQGeoServiceProviderPlacesFeatures.cpp sipQtLocationQPlaceManager.cpp sipQtLocationQGeoServiceProvider.cpp sipQtLocationQPlaceMatchReply.cpp sipQtLocationQPlaceAttribute.cpp sipQtLocationQPlaceRatings.cpp sipQtLocationQList0100QPlaceCategory.cpp sipQtLocationQPlaceProposedSearchResult.cpp
