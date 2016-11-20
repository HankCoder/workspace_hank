/*
 * Module code.
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

#include "sipAPIQtOpenGL.h"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 29 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtOpenGL/sipQtOpenGLcmodule.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 32 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtOpenGL/sipQtOpenGLcmodule.cpp"
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 35 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtOpenGL/sipQtOpenGLcmodule.cpp"
#line 179 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 38 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtOpenGL/sipQtOpenGLcmodule.cpp"
#line 28 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 41 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtOpenGL/sipQtOpenGLcmodule.cpp"
#line 69 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 44 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtOpenGL/sipQtOpenGLcmodule.cpp"
#line 179 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 47 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtOpenGL/sipQtOpenGLcmodule.cpp"

/* Define the strings used by this module. */
const char sipStrings_QtOpenGL[] = {
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'E', 'S', '_', 'C', 'o', 'm', 'm', 'o', 'n', 'L', 'i', 't', 'e', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '1', '_', '1', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'E', 'S', '_', 'C', 'o', 'm', 'm', 'o', 'n', 'L', 'i', 't', 'e', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '1', '_', '0', 0,
    'Q', 'G', 'L', 'F', 'o', 'r', 'm', 'a', 't', ':', ':', 'O', 'p', 'e', 'n', 'G', 'L', 'C', 'o', 'n', 't', 'e', 'x', 't', 'P', 'r', 'o', 'f', 'i', 'l', 'e', 0,
    'Q', 'G', 'L', 'F', 'o', 'r', 'm', 'a', 't', ':', ':', 'O', 'p', 'e', 'n', 'G', 'L', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'F', 'l', 'a', 'g', 's', 0,
    'P', 'r', 'e', 'm', 'u', 'l', 't', 'i', 'p', 'l', 'i', 'e', 'd', 'A', 'l', 'p', 'h', 'a', 'B', 'i', 'n', 'd', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'E', 'S', '_', 'C', 'o', 'm', 'm', 'o', 'n', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '1', '_', '1', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'E', 'S', '_', 'C', 'o', 'm', 'm', 'o', 'n', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '1', '_', '0', 0,
    'Q', 'G', 'L', 'F', 'o', 'r', 'm', 'a', 't', ':', ':', 'O', 'p', 'e', 'n', 'G', 'L', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'F', 'l', 'a', 'g', 0,
    'P', 'y', 'Q', 't', '5', '.', 'Q', 't', 'C', 'o', 'r', 'e', '.', 'p', 'y', 'q', 't', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 'T', 'y', 'p', 'e', 0,
    'L', 'i', 'n', 'e', 'a', 'r', 'F', 'i', 'l', 't', 'e', 'r', 'i', 'n', 'g', 'B', 'i', 'n', 'd', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'Q', 'G', 'L', 'C', 'o', 'n', 't', 'e', 'x', 't', ':', ':', 'B', 'i', 'n', 'd', 'O', 'p', 't', 'i', 'o', 'n', 's', 0,
    'o', 'v', 'e', 'r', 'l', 'a', 'y', 'T', 'r', 'a', 'n', 's', 'p', 'a', 'r', 'e', 'n', 't', 'C', 'o', 'l', 'o', 'r', 0,
    's', 'e', 't', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'Q', 'G', 'L', 'C', 'o', 'n', 't', 'e', 'x', 't', ':', ':', 'B', 'i', 'n', 'd', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'E', 'S', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '2', '_', '0', 0,
    'N', 'o', 'D', 'e', 'p', 'r', 'e', 'c', 'a', 't', 'e', 'd', 'F', 'u', 'n', 'c', 't', 'i', 'o', 'n', 's', 0,
    'm', 'o', 'u', 's', 'e', 'D', 'o', 'u', 'b', 'l', 'e', 'C', 'l', 'i', 'c', 'k', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'T', 'e', 'x', 't', 'u', 'r', 'e', 'C', 'a', 'c', 'h', 'e', 'L', 'i', 'm', 'i', 't', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 'F', 'o', 'r', 'm', 'a', 't', 0,
    's', 'e', 't', 'S', 't', 'e', 'n', 'c', 'i', 'l', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'C', 'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y', 'P', 'r', 'o', 'f', 'i', 'l', 'e', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 'G', 'L', 0,
    'I', 'n', 'v', 'e', 'r', 't', 'e', 'd', 'Y', 'B', 'i', 'n', 'd', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', 'N', 'o', 'n', 'e', 0,
    'm', 'a', 'k', 'e', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 'C', 'u', 'r', 'r', 'e', 'n', 't', 0,
    'o', 'p', 'e', 'n', 'G', 'L', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'F', 'l', 'a', 'g', 's', 0,
    's', 'e', 't', 'D', 'i', 'r', 'e', 'c', 't', 'R', 'e', 'n', 'd', 'e', 'r', 'i', 'n', 'g', 0,
    's', 'e', 't', 'A', 'c', 'c', 'u', 'm', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '4', '_', '3', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '4', '_', '2', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '4', '_', '1', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '4', '_', '0', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '3', '_', '3', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '3', '_', '2', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '3', '_', '1', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '3', '_', '0', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '2', '_', '1', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '2', '_', '0', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '1', '_', '5', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '1', '_', '4', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '1', '_', '3', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '1', '_', '2', 0,
    'O', 'p', 'e', 'n', 'G', 'L', '_', 'V', 'e', 'r', 's', 'i', 'o', 'n', '_', '1', '_', '1', 0,
    'Q', 'G', 'L', ':', ':', 'F', 'o', 'r', 'm', 'a', 't', 'O', 'p', 't', 'i', 'o', 'n', 's', 0,
    'f', 'o', 'c', 'u', 's', 'N', 'e', 'x', 't', 'P', 'r', 'e', 'v', 'C', 'h', 'i', 'l', 'd', 0,
    's', 'e', 't', 'A', 'l', 'p', 'h', 'a', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    's', 'e', 't', 'G', 'r', 'e', 'e', 'n', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    's', 'e', 't', 'D', 'e', 'p', 't', 'h', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    's', 'e', 't', 'A', 'u', 't', 'o', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'w', 'a', 'p', 0,
    'c', 'o', 'n', 'v', 'e', 'r', 't', 'T', 'o', 'G', 'L', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'D', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'i', 'n', 'd', 'O', 'p', 't', 'i', 'o', 'n', 0,
    't', 'e', 'x', 't', 'u', 'r', 'e', 'C', 'a', 'c', 'h', 'e', 'L', 'i', 'm', 'i', 't', 0,
    'h', 'a', 's', 'O', 'p', 'e', 'n', 'G', 'L', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 's', 0,
    'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'R', 'e', 'n', 'd', 'e', 'r', 'i', 'n', 'g', 0,
    'Q', 'G', 'L', ':', ':', 'F', 'o', 'r', 'm', 'a', 't', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'h', 'a', 's', 'H', 'e', 'i', 'g', 'h', 't', 'F', 'o', 'r', 'W', 'i', 'd', 't', 'h', 0,
    'm', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'B', 'l', 'u', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    's', 't', 'e', 'n', 'c', 'i', 'l', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    's', 'i', 'p', '.', 's', 'i', 'm', 'p', 'l', 'e', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 0,
    'd', 'e', 'l', 'e', 't', 'e', 'O', 'l', 'd', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'M', 'i', 'p', 'm', 'a', 'p', 'B', 'i', 'n', 'd', 'O', 'p', 't', 'i', 'o', 'n', 0,
    's', 'e', 't', 'W', 'i', 'n', 'd', 'o', 'w', 'C', 'r', 'e', 'a', 't', 'e', 'd', 0,
    's', 'e', 't', 'S', 'a', 'm', 'p', 'l', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 's', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 'M', 'e', 'n', 'u', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'E', 'v', 'e', 'n', 't', 0,
    'i', 'n', 'p', 'u', 't', 'M', 'e', 't', 'h', 'o', 'd', 'Q', 'u', 'e', 'r', 'y', 0,
    's', 'e', 't', 'R', 'e', 'd', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    's', 'e', 't', 'D', 'e', 'f', 'a', 'u', 'l', 't', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'd', 'i', 's', 'c', 'o', 'n', 'n', 'e', 'c', 't', 'N', 'o', 't', 'i', 'f', 'y', 0,
    'r', 'e', 's', 'i', 'z', 'e', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 'G', 'L', 0,
    'u', 'p', 'd', 'a', 't', 'e', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 'G', 'L', 0,
    'g', 'r', 'a', 'b', 'F', 'r', 'a', 'm', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 0,
    's', 'e', 't', 'D', 'o', 'u', 'b', 'l', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 0,
    'a', 'c', 'c', 'u', 'm', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'N', 'o', 'S', 'a', 'm', 'p', 'l', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 's', 0,
    'N', 'o', 'S', 't', 'e', 'r', 'e', 'o', 'B', 'u', 'f', 'f', 'e', 'r', 's', 0,
    'N', 'o', 'S', 't', 'e', 'n', 'c', 'i', 'l', 'B', 'u', 'f', 'f', 'e', 'r', 0,
    'm', 'i', 'n', 'i', 'm', 'u', 'm', 'S', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'S', 'w', 'a', 'p', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', 0,
    'a', 'l', 'p', 'h', 'a', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'g', 'r', 'e', 'e', 'n', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'd', 'e', 'p', 't', 'h', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0,
    'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', '_', 'f', 'o', 'r', 'm', 'a', 't', 0,
    'r', 'e', 'q', 'u', 'e', 's', 't', 'e', 'd', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'a', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 'M', 'o', 'd', 'e', 0,
    'a', 'u', 't', 'o', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'w', 'a', 'p', 0,
    'p', 'a', 'i', 'n', 't', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 'G', 'L', 0,
    'o', 'v', 'e', 'r', 'l', 'a', 'y', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    's', 'e', 't', 'I', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'd', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'I', 's', 'P', 'i', 'x', 'm', 'a', 'p', 0,
    'g', 'e', 't', 'P', 'r', 'o', 'c', 'A', 'd', 'd', 'r', 'e', 's', 's', 0,
    'N', 'o', 'A', 'l', 'p', 'h', 'a', 'C', 'h', 'a', 'n', 'n', 'e', 'l', 0,
    'h', 'e', 'i', 'g', 'h', 't', 'F', 'o', 'r', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'r', 'a', 'g', 'L', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'd', 'r', 'a', 'g', 'E', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'b', 'l', 'u', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    'c', 'u', 'r', 'r', 'e', 'n', 't', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'P', 'y', 'Q', 't', '5', '.', 'Q', 't', 'O', 'p', 'e', 'n', 'G', 'L', 0,
    'q', 'g', 'l', 'C', 'l', 'e', 'a', 'r', 'C', 'o', 'l', 'o', 'r', 0,
    'w', 'i', 'n', 'd', 'o', 'w', 'C', 'r', 'e', 'a', 't', 'e', 'd', 0,
    'c', 'h', 'o', 'o', 's', 'e', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'd', 'e', 'l', 'e', 't', 'e', 'T', 'e', 'x', 't', 'u', 'r', 'e', 0,
    's', 'a', 'm', 'p', 'l', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 's', 0,
    'N', 'o', 'A', 'c', 'c', 'u', 'm', 'B', 'u', 'f', 'f', 'e', 'r', 0,
    'N', 'o', 'D', 'e', 'p', 't', 'h', 'B', 'u', 'f', 'f', 'e', 'r', 0,
    's', 'h', 'a', 'r', 'e', 'd', 'P', 'a', 'i', 'n', 't', 'e', 'r', 0,
    'd', 'r', 'a', 'g', 'M', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'k', 'e', 'y', 'P', 'r', 'e', 's', 's', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'o', 'c', 'u', 's', 'O', 'u', 't', 'E', 'v', 'e', 'n', 't', 0,
    'r', 'e', 'd', 'B', 'u', 'f', 'f', 'e', 'r', 'S', 'i', 'z', 'e', 0,
    't', 'e', 'x', 't', 'u', 'r', 'e', 'T', 'a', 'r', 'g', 'e', 't', 0,
    't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'M', 'o', 'd', 'e', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'r', 'e', 'n', 'd', 'e', 'r', 'P', 'i', 'x', 'm', 'a', 'p', 0,
    'N', 'o', 'B', 'i', 'n', 'd', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'd', 'o', 'u', 'b', 'l', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'R', 'e', 'g', 'i', 'o', 'n', 0,
    't', 'a', 'r', 'g', 'e', 't', 'O', 'f', 'f', 's', 'e', 't', 0,
    'm', 'i', 'd', 'L', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'f', 'o', 'c', 'u', 's', 'I', 'n', 'E', 'v', 'e', 'n', 't', 0,
    's', 'w', 'a', 'p', 'I', 'n', 't', 'e', 'r', 'v', 'a', 'l', 0,
    'S', 'i', 'n', 'g', 'l', 'e', 'B', 'u', 'f', 'f', 'e', 'r', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'G', 'L', 0,
    's', 'h', 'a', 'r', 'e', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'b', 'o', 'u', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'c', 't', 0,
    'm', 'i', 'n', 'o', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', 0,
    'm', 'a', 'j', 'o', 'r', 'V', 'e', 'r', 's', 'i', 'o', 'n', 0,
    'm', 'o', 'v', 'e', 'T', 'o', 'T', 'h', 'r', 'e', 'a', 'd', 0,
    's', 'h', 'a', 'r', 'e', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'i', 'n', 'i', 't', 'i', 'a', 'l', 'i', 'z', 'e', 'd', 0,
    'd', 'r', 'a', 'w', 'T', 'e', 'x', 't', 'u', 'r', 'e', 0,
    'b', 'i', 'n', 'd', 'T', 'e', 'x', 't', 'u', 'r', 'e', 0,
    'i', 'n', 'i', 't', 'P', 'a', 'i', 'n', 't', 'e', 'r', 0,
    'n', 'a', 't', 'i', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'a', 'c', 't', 'i', 'o', 'n', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'E', 'v', 'e', 'n', 't', 0,
    't', 'a', 'b', 'l', 'e', 't', 'E', 'v', 'e', 'n', 't', 0,
    'C', 'o', 'r', 'e', 'P', 'r', 'o', 'f', 'i', 'l', 'e', 0,
    'm', 'a', 't', 'c', 'h', 'P', 'o', 'l', 'i', 'c', 'y', 0,
    'r', 'e', 's', 'i', 'z', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'w', 'a', 'p', 'B', 'u', 'f', 'f', 'e', 'r', 's', 0,
    'd', 'o', 'n', 'e', 'C', 'u', 'r', 'r', 'e', 'n', 't', 0,
    'm', 'a', 'k', 'e', 'C', 'u', 'r', 'r', 'e', 'n', 't', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'n', 'g', 'i', 'n', 'e', 0,
    'c', 'u', 's', 't', 'o', 'm', 'E', 'v', 'e', 'n', 't', 0,
    'e', 'v', 'e', 'n', 't', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'r', 'e', 'n', 'd', 'e', 'r', 'T', 'e', 'x', 't', 0,
    'u', 's', 'e', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'Q', 'G', 'L', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'h', 'a', 's', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 0,
    's', 'e', 't', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 0,
    's', 'e', 't', 'S', 't', 'e', 'n', 'c', 'i', 'l', 0,
    'C', 'o', 'l', 'o', 'r', 'I', 'n', 'd', 'e', 'x', 0,
    'H', 'a', 's', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 0,
    's', 'e', 't', 'C', 'o', 'n', 't', 'e', 'x', 't', 0,
    'e', 'n', 't', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    'l', 'e', 'a', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'c', 'l', 'o', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'w', 'h', 'e', 'e', 'l', 'E', 'v', 'e', 'n', 't', 0,
    't', 'e', 's', 't', 'O', 'p', 't', 'i', 'o', 'n', 0,
    'p', 'a', 'i', 'n', 't', 'E', 'v', 'e', 'n', 't', 0,
    'g', 'e', 'n', 'M', 'i', 'p', 'M', 'a', 'p', 's', 0,
    's', 'e', 't', 'S', 'a', 'm', 'p', 'l', 'e', 's', 0,
    's', 'e', 't', 'P', 'r', 'o', 'f', 'i', 'l', 'e', 0,
    'a', 'r', 'e', 'S', 'h', 'a', 'r', 'i', 'n', 'g', 0,
    's', 'e', 't', 'V', 'i', 's', 'i', 'b', 'l', 'e', 0,
    'c', 'h', 'i', 'l', 'd', 'E', 'v', 'e', 'n', 't', 0,
    't', 'i', 'm', 'e', 'r', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'V', 'e', 'r', 's', 'i', 'o', 'n', 0,
    '_', '_', 'i', 'n', 'v', 'e', 'r', 't', '_', '_', 0,
    'w', 'i', 't', 'h', 'A', 'l', 'p', 'h', 'a', 0,
    'Q', 'G', 'L', 'W', 'i', 'd', 'g', 'e', 't', 0,
    'i', 's', 'S', 'h', 'a', 'r', 'i', 'n', 'g', 0,
    'h', 'a', 's', 'O', 'p', 'e', 'n', 'G', 'L', 0,
    'Q', 'G', 'L', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'N', 'o', 'O', 'v', 'e', 'r', 'l', 'a', 'y', 0,
    'd', 'r', 'o', 'p', 'E', 'v', 'e', 'n', 't', 0,
    'h', 'i', 'd', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'h', 'o', 'w', 'E', 'v', 'e', 'n', 't', 0,
    'm', 'o', 'v', 'e', 'E', 'v', 'e', 'n', 't', 0,
    's', 'e', 't', 'S', 't', 'e', 'r', 'e', 'o', 0,
    'N', 'o', 'P', 'r', 'o', 'f', 'i', 'l', 'e', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    's', 'e', 't', 'O', 'p', 't', 'i', 'o', 'n', 0,
    's', 'e', 't', 'F', 'o', 'r', 'm', 'a', 't', 0,
    'l', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'a', 'l', 'i', 'g', 'n', 'm', 'e', 'n', 't', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'u', 'p', 'd', 'a', 't', 'e', 'G', 'L', 0,
    'q', 'g', 'l', 'C', 'o', 'l', 'o', 'r', 0,
    's', 'e', 't', 'P', 'l', 'a', 'n', 'e', 0,
    's', 'e', 't', 'A', 'c', 'c', 'u', 'm', 0,
    's', 'e', 't', 'D', 'e', 'p', 't', 'h', 0,
    's', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    'u', 's', 'e', 'r', 'D', 'a', 't', 'a', 0,
    's', 'i', 'z', 'e', 'H', 'i', 'n', 't', 0,
    'f', 'i', 'l', 'l', 'R', 'u', 'l', 'e', 0,
    'r', 'e', 's', 'i', 'z', 'e', 'G', 'L', 0,
    't', 'a', 'b', 'A', 'r', 'r', 'a', 'y', 0,
    't', 'a', 'b', 'S', 't', 'o', 'p', 's', 0,
    's', 'e', 't', 'A', 'l', 'p', 'h', 'a', 0,
    'n', 'a', 'm', 'e', 'T', 'y', 'p', 'e', 0,
    'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    '_', '_', 'b', 'o', 'o', 'l', '_', '_', 0,
    '_', '_', 'i', 'x', 'o', 'r', '_', '_', 0,
    '_', '_', 'i', 'a', 'n', 'd', '_', '_', 0,
    's', 't', 'e', 'n', 'c', 'i', 'l', 0,
    'y', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'x', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'e', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'p', 'a', 'i', 'n', 't', 'G', 'L', 0,
    's', 'a', 'm', 'p', 'l', 'e', 's', 0,
    'b', 'u', 'f', 'f', 'e', 'r', 's', 0,
    's', 'o', 'u', 'r', 'c', 'e', 's', 0,
    'p', 'r', 'o', 'f', 'i', 'l', 'e', 0,
    'q', 'u', 'a', 'l', 'i', 't', 'y', 0,
    'd', 'e', 'v', 'T', 'y', 'p', 'e', 0,
    's', 'e', 't', 'R', 'g', 'b', 'a', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'c', 'o', 'n', 't', 'e', 'x', 't', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'i', 's', 'V', 'a', 'l', 'i', 'd', 0,
    '_', '_', 'x', 'o', 'r', '_', '_', 0,
    '_', '_', 'i', 'o', 'r', '_', '_', 0,
    '_', '_', 'a', 'n', 'd', '_', '_', 0,
    '_', '_', 'i', 'n', 't', '_', '_', 0,
    'g', 'l', 'D', 'r', 'a', 'w', 0,
    'g', 'l', 'I', 'n', 'i', 't', 0,
    's', 'u', 'n', 'k', 'e', 'n', 0,
    's', 't', 'e', 'r', 'e', 'o', 0,
    'l', 'a', 'y', 'e', 'r', 's', 0,
    's', 't', 'r', 'i', 'd', 'e', 0,
    'm', 'e', 't', 'r', 'i', 'c', 0,
    'c', 'r', 'e', 'a', 't', 'e', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    'h', 'e', 'i', 'g', 'h', 't', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'f', 'i', 'l', 't', 'e', 'r', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 0,
    'o', 'p', 't', 'i', 'o', 'n', 0,
    'l', 'o', 'c', 'a', 'l', 'e', 0,
    't', 'a', 'r', 'g', 'e', 't', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    '_', '_', 'n', 'e', '_', '_', 0,
    '_', '_', 'e', 'q', '_', '_', 0,
    '_', '_', 'o', 'r', '_', '_', 0,
    'a', 'c', 'c', 'u', 'm', 0,
    'p', 'l', 'a', 'n', 'e', 0,
    'd', 'e', 'p', 't', 'h', 0,
    'b', 'r', 'u', 's', 'h', 0,
    'a', 'l', 'p', 'h', 'a', 0,
    't', 'y', 'p', 'e', 's', 0,
    'r', 'e', 's', 'e', 't', 0,
    'w', 'i', 'd', 't', 'h', 0,
    'o', 'r', 'd', 'e', 'r', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'e', 'v', 'e', 'n', 't', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 't', 'a', 't', 'e', 0,
    'f', 'o', 'n', 't', 0,
    'r', 'g', 'b', 'a', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'i', 'l', 'l', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    'Q', 'G', 'L', 0,
    'p', 'e', 'n', 0,
    'p', 'o', 's', 0,
    's', 'w', 0,
    's', 'y', 0,
    's', 'x', 0,
};

bool sipVH_QtOpenGL_0(sip_gilstate_t sipGILState, sipVirtErrorHandlerFunc sipErrorHandler, sipSimpleWrapper *sipPySelf, PyObject *sipMethod, const QGLContext*a0)
{
    bool sipRes = 0;
    PyObject *sipResObj = sipCallMethod(0, sipMethod, "D",const_cast<QGLContext *>(a0),sipType_QGLContext,NULL);

    sipParseResultEx(sipGILState, sipErrorHandler, sipPySelf, sipMethod, sipResObj, "b", &sipRes);

    return sipRes;
}


/* Convert to a sub-class if possible. */
extern "C" {static const sipTypeDef *sipSubClass_QGLWidget(void **);}
static const sipTypeDef *sipSubClass_QGLWidget(void **sipCppRet)
{
    QObject *sipCpp = reinterpret_cast<QObject *>(*sipCppRet);
    const sipTypeDef *sipType;

#line 248 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/sip/QtOpenGL/qgl.sip"
    static struct class_graph {
        const char *name;
        sipTypeDef **type;
        int yes, no;
    } graph[] = {
        {sipName_QGLWidget, &sipType_QGLWidget, -1, -1},
    };
    
    int i = 0;
    
    sipType = NULL;
    
    do
    {
        struct class_graph *cg = &graph[i];
    
        if (cg->name != NULL && sipCpp->inherits(cg->name))
        {
            sipType = *cg->type;
            i = cg->yes;
        }
        else
            i = cg->no;
    }
    while (i >= 0);
#line 389 "/home/pythoner/workspace_hank/python/pyqt5/PyQt5_gpl-5.6/QtOpenGL/sipQtOpenGLcmodule.cpp"

    return sipType;
}


extern "C" {static PyObject *slot_QGLContext_BindOption___or__(PyObject *,PyObject *);}
static PyObject *slot_QGLContext_BindOption___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLContext::BindOption a0;
        QGLContext::BindOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "EJ1", sipType_QGLContext_BindOption, &a0, sipType_QGLContext_BindOptions, &a1, &a1State))
        {
            QGLContext::BindOptions*sipRes;

            sipRes = new QGLContext::BindOptions((a0 | *a1));
            sipReleaseType(a1,sipType_QGLContext_BindOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGLContext_BindOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

static sipPySlotDef slots_QGLContext_BindOption[] = {
    {(void *)slot_QGLContext_BindOption___or__, or_slot},
    {0, (sipPySlotType)0}
};



extern "C" {static PyObject *slot_QGLFormat_OpenGLVersionFlag___or__(PyObject *,PyObject *);}
static PyObject *slot_QGLFormat_OpenGLVersionFlag___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGLFormat::OpenGLVersionFlag a0;
        QGLFormat::OpenGLVersionFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "EJ1", sipType_QGLFormat_OpenGLVersionFlag, &a0, sipType_QGLFormat_OpenGLVersionFlags, &a1, &a1State))
        {
            QGLFormat::OpenGLVersionFlags*sipRes;

            sipRes = new QGLFormat::OpenGLVersionFlags((a0 | *a1));
            sipReleaseType(a1,sipType_QGLFormat_OpenGLVersionFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGLFormat_OpenGLVersionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

static sipPySlotDef slots_QGLFormat_OpenGLVersionFlag[] = {
    {(void *)slot_QGLFormat_OpenGLVersionFlag___or__, or_slot},
    {0, (sipPySlotType)0}
};



extern "C" {static PyObject *slot_QGL_FormatOption___or__(PyObject *,PyObject *);}
static PyObject *slot_QGL_FormatOption___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGL::FormatOption a0;
        QGL::FormatOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "EJ1", sipType_QGL_FormatOption, &a0, sipType_QGL_FormatOptions, &a1, &a1State))
        {
            QGL::FormatOptions*sipRes;

            sipRes = new QGL::FormatOptions((a0 | *a1));
            sipReleaseType(a1,sipType_QGL_FormatOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGL_FormatOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}

static sipPySlotDef slots_QGL_FormatOption[] = {
    {(void *)slot_QGL_FormatOption___or__, or_slot},
    {0, (sipPySlotType)0}
};

static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QGLContext__BindOption, {0}}, sipNameNr_BindOption, 3, slots_QGLContext_BindOption},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QGLFormat__OpenGLContextProfile, {0}}, sipNameNr_OpenGLContextProfile, 6, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QGLFormat__OpenGLVersionFlag, {0}}, sipNameNr_OpenGLVersionFlag, 6, slots_QGLFormat_OpenGLVersionFlag},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QGL__FormatOption, {0}}, sipNameNr_FormatOption, 0, slots_QGL_FormatOption},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtOpenGL_QGL.super.ctd_base,
    &enumTypes[3].etd_base,
    &sipTypeDef_QtOpenGL_QGL_FormatOptions.super.ctd_base,
    &sipTypeDef_QtOpenGL_QGLContext.super.ctd_base,
    &enumTypes[0].etd_base,
    &sipTypeDef_QtOpenGL_QGLContext_BindOptions.super.ctd_base,
    &sipTypeDef_QtOpenGL_QGLFormat.super.ctd_base,
    &enumTypes[1].etd_base,
    &enumTypes[2].etd_base,
    &sipTypeDef_QtOpenGL_QGLFormat_OpenGLVersionFlags.super.ctd_base,
    &sipTypeDef_QtOpenGL_QGLWidget.super.ctd_base,
};


/*
 * This defines the virtual handlers that this module implements and can be
 * used by other modules.
 */
static sipVirtHandlerFunc virtHandlersTable[] = {
    (sipVirtHandlerFunc)sipVH_QtOpenGL_0,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt5.QtCore", 1, NULL},
    {"PyQt5.QtGui", -1, NULL},
    {"PyQt5.QtWidgets", -1, NULL},
    {NULL, -1, NULL}
};


/* This defines the class sub-convertors that this module defines. */
static sipSubClassConvertorDef convertorsTable[] = {
    {sipSubClass_QGLWidget, {164, 0, 0}, NULL},
    {NULL, {0, 0, 0}, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtOpenGL = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt5_QtOpenGL,
    0,
    -1,
    sipStrings_QtOpenGL,
    importsTable,
    NULL,
    11,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    virtHandlersTable,
    NULL,
    convertorsTable,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtOpenGL;
const sipExportedModuleDef *sipModuleAPI_QtOpenGL_QtCore;
const sipExportedModuleDef *sipModuleAPI_QtOpenGL_QtGui;
const sipExportedModuleDef *sipModuleAPI_QtOpenGL_QtWidgets;

sip_qt_metaobject_func sip_QtOpenGL_qt_metaobject;
sip_qt_metacall_func sip_QtOpenGL_qt_metacall;
sip_qt_metacast_func sip_QtOpenGL_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtOpenGL
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtOpenGL
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt5.QtOpenGL",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt5_QtOpenGL, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt5_QtOpenGL), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_QtOpenGL = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_QtOpenGL = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_QtOpenGL == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtOpenGL,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtOpenGL_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtOpenGL_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtOpenGL_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtOpenGL_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtOpenGL,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtOpenGL_QtCore = sipModuleAPI_QtOpenGL.em_imports[0].im_module;
    sipModuleAPI_QtOpenGL_QtGui = sipModuleAPI_QtOpenGL.em_imports[1].im_module;
    sipModuleAPI_QtOpenGL_QtWidgets = sipModuleAPI_QtOpenGL.em_imports[2].im_module;

    SIP_MODULE_RETURN(sipModule);
}
