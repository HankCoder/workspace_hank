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

#include "sipAPIQtGui.h"

#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/sip/QtGui/qopenglversionfunctions.sip"
#include <qopenglversionfunctions.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.7/QtGui/sipQtGuiQAbstractOpenGLFunctions.cpp"



/* Call the instance's destructor. */
extern "C" {static void release_QAbstractOpenGLFunctions(void *, int);}
static void release_QAbstractOpenGLFunctions(void *sipCppV,int)
{
    delete reinterpret_cast<QAbstractOpenGLFunctions *>(sipCppV);
}


extern "C" {static void dealloc_QAbstractOpenGLFunctions(sipSimpleWrapper *);}
static void dealloc_QAbstractOpenGLFunctions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractOpenGLFunctions(sipGetAddress(sipSelf),0);
    }
}


pyqt5ClassTypeDef sipTypeDef_QtGui_QAbstractOpenGLFunctions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractOpenGLFunctions,
        {0}
    },
    {
        sipNameNr_QAbstractOpenGLFunctions,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    0,
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
    dealloc_QAbstractOpenGLFunctions,
    0,
    0,
    0,
    release_QAbstractOpenGLFunctions,
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
