TEMPLATE = lib
CONFIG += warn_on plugin
QT += sql widgets
CONFIG += release
CONFIG -= android_install

win32 {
    PY_MODULE = QtSql.pyd
    target.files = QtSql.pyd
    LIBS += -L -lpython3.5m
} else {
    PY_MODULE = QtSql.so
    target.files = QtSql.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtSql
sip.files = ../sip/QtSql/qsqlresult.sip ../sip/QtSql/qsqlerror.sip ../sip/QtSql/qsqlquery.sip ../sip/QtSql/qsqldatabase.sip ../sip/QtSql/qsqlfield.sip ../sip/QtSql/qsqlrelationaldelegate.sip ../sip/QtSql/QtSqlmod.sip ../sip/QtSql/qsqldriver.sip ../sip/QtSql/qsqlrecord.sip ../sip/QtSql/qsqlrelationaltablemodel.sip ../sip/QtSql/qsql.sip ../sip/QtSql/qsqlquerymodel.sip ../sip/QtSql/qsqlindex.sip ../sip/QtSql/qsqltablemodel.sip
INSTALLS += sip
QMAKE_CXXFLAGS += -fno-exceptions
QMAKE_LFLAGS += -Wl,--version-script=QtSql.exp
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

TARGET = QtSql
HEADERS = sipAPIQtSql.h
SOURCES = sipQtSqlQSqlDriverCreatorBase.cpp sipQtSqlQSqlRelation.cpp sipQtSqlQSql.cpp sipQtSqlQSqlQueryModel.cpp sipQtSqlQSqlRecord.cpp sipQtSqlQSqlParamType.cpp sipQtSqlcmodule.cpp sipQtSqlQSqlIndex.cpp sipQtSqlQVector0100QVariant.cpp sipQtSqlQSqlQuery.cpp sipQtSqlQSqlDatabase.cpp sipQtSqlQSqlRelationalTableModel.cpp sipQtSqlQSqlResult.cpp sipQtSqlQSqlError.cpp sipQtSqlQSqlField.cpp sipQtSqlQSqlTableModel.cpp sipQtSqlQSqlRelationalDelegate.cpp sipQtSqlQSqlDriver.cpp
