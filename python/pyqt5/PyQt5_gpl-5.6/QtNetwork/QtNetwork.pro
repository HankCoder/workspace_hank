TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += network
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtNetwork.pyd
    target.files = QtNetwork.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtNetwork.so
    target.files = QtNetwork.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtNetwork
sip.files = ../sip/QtNetwork/qtcpsocket.sip ../sip/QtNetwork/qsslsocket.sip ../sip/QtNetwork/qhostaddress.sip ../sip/QtNetwork/qssl.sip ../sip/QtNetwork/qsslcertificateextension.sip ../sip/QtNetwork/qhostinfo.sip ../sip/QtNetwork/qnetworksession.sip ../sip/QtNetwork/qsslkey.sip ../sip/QtNetwork/qpynetwork_qmap.sip ../sip/QtNetwork/qnetworkrequest.sip ../sip/QtNetwork/qnetworkconfigmanager.sip ../sip/QtNetwork/qpynetwork_qhash.sip ../sip/QtNetwork/qdnslookup.sip ../sip/QtNetwork/qsslerror.sip ../sip/QtNetwork/qnetworkaccessmanager.sip ../sip/QtNetwork/qnetworkcookiejar.sip ../sip/QtNetwork/qnetworkreply.sip ../sip/QtNetwork/qsslconfiguration.sip ../sip/QtNetwork/qsslcertificate.sip ../sip/QtNetwork/QtNetworkmod.sip ../sip/QtNetwork/qauthenticator.sip ../sip/QtNetwork/qnetworkproxy.sip ../sip/QtNetwork/qnetworkcookie.sip ../sip/QtNetwork/qabstractnetworkcache.sip ../sip/QtNetwork/qlocalserver.sip ../sip/QtNetwork/qtcpserver.sip ../sip/QtNetwork/qsslellipticcurve.sip ../sip/QtNetwork/qlocalsocket.sip ../sip/QtNetwork/qsslpresharedkeyauthenticator.sip ../sip/QtNetwork/qnetworkconfiguration.sip ../sip/QtNetwork/qnetworkinterface.sip ../sip/QtNetwork/qsslcipher.sip ../sip/QtNetwork/qabstractsocket.sip ../sip/QtNetwork/qudpsocket.sip ../sip/QtNetwork/qnetworkdiskcache.sip ../sip/QtNetwork/qhttpmultipart.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtNetwork.exp
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

TARGET = QtNetwork
HEADERS = sipAPIQtNetwork.h
SOURCES = sipQtNetworkQNetworkCacheMetaData.cpp sipQtNetworkQSsl.cpp sipQtNetworkQList0100QDnsHostAddressRecord.cpp sipQtNetworkQSslError.cpp sipQtNetworkQSslCertificateExtension.cpp sipQtNetworkQList0100QNetworkAddressEntry.cpp sipQtNetworkQNetworkConfigurationManager.cpp sipQtNetworkQHttpPart.cpp sipQtNetworkQList0100QSslCertificate.cpp sipQtNetworkQHostAddress.cpp sipQtNetworkQNetworkProxyQuery.cpp sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp sipQtNetworkQNetworkConfiguration.cpp sipQtNetworkQAbstractSocket.cpp sipQtNetworkQSslCipher.cpp sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp sipQtNetworkQList0100QSslCipher.cpp sipQtNetworkQSslPreSharedKeyAuthenticator.cpp sipQtNetworkQNetworkProxy.cpp sipQtNetworkQTcpServer.cpp sipQtNetworkQNetworkSession.cpp sipQtNetworkQSslEllipticCurve.cpp sipQtNetworkcmodule.cpp sipQtNetworkQNetworkCookieJar.cpp sipQtNetworkQList0100QNetworkConfiguration.cpp sipQtNetworkQHttpMultiPart.cpp sipQtNetworkQAbstractSocketBindMode.cpp sipQtNetworkQList0100QNetworkProxy.cpp sipQtNetworkQList0100QHostAddress.cpp sipQtNetworkQSslSocket.cpp sipQtNetworkQList0100QNetworkInterface.cpp sipQtNetworkQList0100QDnsTextRecord.cpp sipQtNetworkQUdpSocket.cpp sipQtNetworkQNetworkProxyCapabilities.cpp sipQtNetworkQLocalServer.cpp sipQtNetworkQPair0100QHostAddress1800.cpp sipQtNetworkQAbstractNetworkCache.cpp sipQtNetworkQList0100QSslCertificateExtension.cpp sipQtNetworkQLocalSocket.cpp sipQtNetworkQTcpSocket.cpp sipQtNetworkQList0100QDnsDomainNameRecord.cpp sipQtNetworkQHostInfo.cpp sipQtNetworkQAbstractSocketPauseModes.cpp sipQtNetworkQDnsServiceRecord.cpp sipQtNetworkQNetworkRequest.cpp sipQtNetworkQLocalServerSocketOptions.cpp sipQtNetworkQNetworkConfigurationManagerCapabilities.cpp sipQtNetworkQNetworkInterface.cpp sipQtNetworkQSslSslOptions.cpp sipQtNetworkQSslConfiguration.cpp sipQtNetworkQ_IPV6ADDR.cpp sipQtNetworkQNetworkAccessManager.cpp sipQtNetworkQSslCertificate.cpp sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp sipQtNetworkQNetworkSessionUsagePolicies.cpp sipQtNetworkQDnsMailExchangeRecord.cpp sipQtNetworkQList0100QNetworkCookie.cpp sipQtNetworkQSslKey.cpp sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp sipQtNetworkQNetworkCookie.cpp sipQtNetworkQNetworkConfigurationStateFlags.cpp sipQtNetworkQList0100QDnsServiceRecord.cpp sipQtNetworkQList0100QDnsMailExchangeRecord.cpp sipQtNetworkQDnsDomainNameRecord.cpp sipQtNetworkQList0100QSslError.cpp sipQtNetworkQNetworkAddressEntry.cpp sipQtNetworkQNetworkProxyFactory.cpp sipQtNetworkQDnsLookup.cpp sipQtNetworkQNetworkReply.cpp sipQtNetworkQNetworkDiskCache.cpp sipQtNetworkQDnsHostAddressRecord.cpp sipQtNetworkQDnsTextRecord.cpp sipQtNetworkQVector0100QSslEllipticCurve.cpp sipQtNetworkQAuthenticator.cpp
