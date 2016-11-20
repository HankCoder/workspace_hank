TEMPLATE = lib
CONFIG += warn_on plugin
QT += sql widgets
CONFIG += release

win32 {
    PY_MODULE = QtSql.pyd
    target.files = QtSql.pyd
    LIBS += -L/usr/local/python3/lib -lpython3.5m
} else {
    PY_MODULE = QtSql.so
    target.files = QtSql.so
}

target.CONFIG = no_check_exist
target.path = /usr/local/python3/lib/python3.5/site-packages/PyQt5
INSTALLS += target
sip.path = /usr/local/python3/share/sip/PyQt5/QtSql
sip.files = /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqlresult.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqlerror.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqlquery.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqldatabase.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqlfield.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqlrelationaldelegate.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/QtSqlmod.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqldriver.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqlrecord.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqlrelationaltablemodel.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsql.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqlquerymodel.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqlindex.sip /home/pythoner/workspace_hank/python/pyqt5/PyQt-gpl-5.1/sip/QtSql/qsqltablemodel.sip
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

TARGET = QtSql
HEADERS = sipAPIQtSql.h
SOURCES = sipQtSqlQSqlDriverCreatorBase.cpp sipQtSqlQSqlRelation.cpp sipQtSqlQSql.cpp sipQtSqlQSqlQueryModel.cpp sipQtSqlQSqlRecord.cpp sipQtSqlQSqlParamType.cpp sipQtSqlcmodule.cpp sipQtSqlQSqlIndex.cpp sipQtSqlQVector0100QVariant.cpp sipQtSqlQSqlQuery.cpp sipQtSqlQSqlDatabase.cpp sipQtSqlQSqlRelationalTableModel.cpp sipQtSqlQSqlResult.cpp sipQtSqlQSqlError.cpp sipQtSqlQSqlField.cpp sipQtSqlQSqlTableModel.cpp sipQtSqlQSqlRelationalDelegate.cpp sipQtSqlQSqlDriver.cpp