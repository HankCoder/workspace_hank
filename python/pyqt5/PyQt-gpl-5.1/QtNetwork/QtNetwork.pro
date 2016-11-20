TEMPLATE = lib
CONFIG += warn_on plugin
QT -= gui
QT += network
CONFIG += release

win32 {
    PY_MODULE = QtNetwork.pyd
    target.files = QtNetwork.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtNetwork.so
    target.files = QtNetwork.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtNetwork
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qtcpsocket.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qsslsocket.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qhostaddress.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qssl.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qsslcertificateextension.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qhostinfo.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworksession.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qsslkey.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkrequest.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkconfigmanager.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qdnslookup.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qsslerror.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkaccessmanager.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkcookiejar.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkreply.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qsslconfiguration.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qsslcertificate.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/QtNetworkmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qauthenticator.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkproxy.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkcookie.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qabstractnetworkcache.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qlocalserver.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qtcpserver.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qlocalsocket.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkconfiguration.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkinterface.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qsslcipher.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qabstractsocket.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qudpsocket.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qnetworkdiskcache.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtNetwork/qhttpmultipart.sip
INSTALLS += sip
DEFINES += SIP_PROTECTED_IS_PUBLIC protected=public
INCLUDEPATH += /usr/local/python3/include/python3.5m
INCLUDEPATH += /usr/include/python2.7

win32 {
    QMAKE_POST_LINK = $(COPY_FILE) $(DESTDIR_TARGET) $$PY_MODULE
} else {
    QMAKE_POST_LINK = $(COPY_FILE) $(TARGET) $$PY_MODULE
}
macx {
    QMAKE_LFLAGS += "-undefined dynamic_lookup"
}

TARGET = QtNetwork
HEADERS = sipAPIQtNetwork.h
SOURCES = sipQtNetworkQNetworkCacheMetaData.cpp sipQtNetworkQSsl.cpp sipQtNetworkQList0100QDnsHostAddressRecord.cpp sipQtNetworkQSslError.cpp sipQtNetworkQSslCertificateExtension.cpp sipQtNetworkQList0100QNetworkAddressEntry.cpp sipQtNetworkQNetworkConfigurationManager.cpp sipQtNetworkQHttpPart.cpp sipQtNetworkQList0100QSslCertificate.cpp sipQtNetworkQHostAddress.cpp sipQtNetworkQNetworkProxyQuery.cpp sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp sipQtNetworkQNetworkConfiguration.cpp sipQtNetworkQAbstractSocket.cpp sipQtNetworkQSslCipher.cpp sipQtNetworkQNetworkInterfaceInterfaceFlags.cpp sipQtNetworkQList0100QSslCipher.cpp sipQtNetworkQNetworkProxy.cpp sipQtNetworkQTcpServer.cpp sipQtNetworkQNetworkSession.cpp sipQtNetworkcmodule.cpp sipQtNetworkQNetworkCookieJar.cpp sipQtNetworkQList0100QNetworkConfiguration.cpp sipQtNetworkQHttpMultiPart.cpp sipQtNetworkQAbstractSocketBindMode.cpp sipQtNetworkQList0100QNetworkProxy.cpp sipQtNetworkQList0100QHostAddress.cpp sipQtNetworkQSslSocket.cpp sipQtNetworkQList0100QNetworkInterface.cpp sipQtNetworkQList0100QDnsTextRecord.cpp sipQtNetworkQUdpSocket.cpp sipQtNetworkQNetworkProxyCapabilities.cpp sipQtNetworkQLocalServer.cpp sipQtNetworkQPair0100QHostAddress1800.cpp sipQtNetworkQAbstractNetworkCache.cpp sipQtNetworkQList0100QSslCertificateExtension.cpp sipQtNetworkQLocalSocket.cpp sipQtNetworkQTcpSocket.cpp sipQtNetworkQList0100QDnsDomainNameRecord.cpp sipQtNetworkQHostInfo.cpp sipQtNetworkQAbstractSocketPauseModes.cpp sipQtNetworkQDnsServiceRecord.cpp sipQtNetworkQNetworkRequest.cpp sipQtNetworkQLocalServerSocketOptions.cpp sipQtNetworkQNetworkConfigurationManagerCapabilities.cpp sipQtNetworkQNetworkInterface.cpp sipQtNetworkQSslSslOptions.cpp sipQtNetworkQSslConfiguration.cpp sipQtNetworkQ_IPV6ADDR.cpp sipQtNetworkQNetworkAccessManager.cpp sipQtNetworkQSslCertificate.cpp sipQtNetworkQMultiMap0100QSslAlternativeNameEntryType0100QString.cpp sipQtNetworkQNetworkSessionUsagePolicies.cpp sipQtNetworkQDnsMailExchangeRecord.cpp sipQtNetworkQList0100QNetworkCookie.cpp sipQtNetworkQSslKey.cpp sipQtNetworkQHash0100QNetworkRequestAttribute0100QVariant.cpp sipQtNetworkQNetworkCookie.cpp sipQtNetworkQNetworkConfigurationStateFlags.cpp sipQtNetworkQList0100QDnsServiceRecord.cpp sipQtNetworkQList0100QDnsMailExchangeRecord.cpp sipQtNetworkQDnsDomainNameRecord.cpp sipQtNetworkQList0100QSslError.cpp sipQtNetworkQNetworkAddressEntry.cpp sipQtNetworkQNetworkProxyFactory.cpp sipQtNetworkQDnsLookup.cpp sipQtNetworkQNetworkReply.cpp sipQtNetworkQNetworkDiskCache.cpp sipQtNetworkQDnsHostAddressRecord.cpp sipQtNetworkQDnsTextRecord.cpp sipQtNetworkQAuthenticator.cpp