# The PEP 484 type hints stub file for the QtWebEngineCore module.
#
# Generated by SIP 4.18.1
#
# Copyright (c) 2016 Riverbank Computing Limited <info@riverbankcomputing.com>
# 
# This file is part of PyQt5.
# 
# This file may be used under the terms of the GNU General Public License
# version 3.0 as published by the Free Software Foundation and appearing in
# the file LICENSE included in the packaging of this file.  Please review the
# following information to ensure the GNU General Public License version 3.0
# requirements will be met: http://www.gnu.org/copyleft/gpl.html.
# 
# If you do not wish to use this file under the terms of the GPL version 3.0
# then you may purchase a commercial license.  For more information contact
# info@riverbankcomputing.com.
# 
# This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
# WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


import typing
import sip

from PyQt5 import QtNetwork
from PyQt5 import QtCore

# Support for QDate, QDateTime and QTime.
import datetime

# Convenient type aliases.
PYQT_SIGNAL = typing.Union[QtCore.pyqtSignal, QtCore.pyqtBoundSignal]
PYQT_SLOT = typing.Union[typing.Callable[..., None], QtCore.pyqtBoundSignal]


class QWebEngineCookieStore(QtCore.QObject):

    def cookieRemoved(self, cookie: QtNetwork.QNetworkCookie) -> None: ...
    def cookieAdded(self, cookie: QtNetwork.QNetworkCookie) -> None: ...
    def loadAllCookies(self) -> None: ...
    def deleteAllCookies(self) -> None: ...
    def deleteSessionCookies(self) -> None: ...
    def deleteCookie(self, cookie: QtNetwork.QNetworkCookie, origin: QtCore.QUrl = ...) -> None: ...
    def setCookie(self, cookie: QtNetwork.QNetworkCookie, origin: QtCore.QUrl = ...) -> None: ...


class QWebEngineUrlRequestInfo(sip.simplewrapper):

    class NavigationType(int): ...
    NavigationTypeLink = ... # type: 'QWebEngineUrlRequestInfo.NavigationType'
    NavigationTypeTyped = ... # type: 'QWebEngineUrlRequestInfo.NavigationType'
    NavigationTypeFormSubmitted = ... # type: 'QWebEngineUrlRequestInfo.NavigationType'
    NavigationTypeBackForward = ... # type: 'QWebEngineUrlRequestInfo.NavigationType'
    NavigationTypeReload = ... # type: 'QWebEngineUrlRequestInfo.NavigationType'
    NavigationTypeOther = ... # type: 'QWebEngineUrlRequestInfo.NavigationType'

    class ResourceType(int): ...
    ResourceTypeMainFrame = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeSubFrame = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeStylesheet = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeScript = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeImage = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeFontResource = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeSubResource = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeObject = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeMedia = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeWorker = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeSharedWorker = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypePrefetch = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeFavicon = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeXhr = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypePing = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeServiceWorker = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'
    ResourceTypeUnknown = ... # type: 'QWebEngineUrlRequestInfo.ResourceType'

    def setHttpHeader(self, name: typing.Union[QtCore.QByteArray, bytes, bytearray], value: typing.Union[QtCore.QByteArray, bytes, bytearray]) -> None: ...
    def redirect(self, url: QtCore.QUrl) -> None: ...
    def block(self, shouldBlock: bool) -> None: ...
    def requestMethod(self) -> QtCore.QByteArray: ...
    def firstPartyUrl(self) -> QtCore.QUrl: ...
    def requestUrl(self) -> QtCore.QUrl: ...
    def navigationType(self) -> 'QWebEngineUrlRequestInfo.NavigationType': ...
    def resourceType(self) -> 'QWebEngineUrlRequestInfo.ResourceType': ...


class QWebEngineUrlRequestInterceptor(QtCore.QObject):

    def __init__(self, parent: typing.Optional[QtCore.QObject] = ...) -> None: ...

    def interceptRequest(self, info: QWebEngineUrlRequestInfo) -> None: ...


class QWebEngineUrlRequestJob(QtCore.QObject):

    class Error(int): ...
    NoError = ... # type: 'QWebEngineUrlRequestJob.Error'
    UrlNotFound = ... # type: 'QWebEngineUrlRequestJob.Error'
    UrlInvalid = ... # type: 'QWebEngineUrlRequestJob.Error'
    RequestAborted = ... # type: 'QWebEngineUrlRequestJob.Error'
    RequestDenied = ... # type: 'QWebEngineUrlRequestJob.Error'
    RequestFailed = ... # type: 'QWebEngineUrlRequestJob.Error'

    def redirect(self, url: QtCore.QUrl) -> None: ...
    def fail(self, error: 'QWebEngineUrlRequestJob.Error') -> None: ...
    def reply(self, contentType: typing.Union[QtCore.QByteArray, bytes, bytearray], device: QtCore.QIODevice) -> None: ...
    def requestMethod(self) -> QtCore.QByteArray: ...
    def requestUrl(self) -> QtCore.QUrl: ...


class QWebEngineUrlSchemeHandler(QtCore.QObject):

    def __init__(self, parent: typing.Optional[QtCore.QObject] = ...) -> None: ...

    def requestStarted(self, a0: QWebEngineUrlRequestJob) -> None: ...
