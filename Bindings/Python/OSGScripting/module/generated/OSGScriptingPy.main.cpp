// This file has been generated by Py++.

// PyOpenSG is (C) Copyright 2005-2009 by Allen Bierbaum
//
// This file is part of PyOpenSG.
//
// PyOpenSG is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License as published by the Free
// Software Foundation; either version 2 of the License, or (at your option)
// any later version.
//
// PyOpenSG is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
// more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#if __GNUC__ >= 4 || __GNUC_MINOR__ >=3
#pragma GCC diagnostic warning "-Wold-style-cast"
#pragma GCC diagnostic warning "-Wunused-local-typedefs"
#pragma GCC diagnostic warning "-Wnon-virtual-dtor"
#pragma GCC diagnostic warning "-Wshadow"
#endif
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif


#include "boost/python.hpp"

#include "OSGScripting_mainheader.h"

#include "OsgPtrHelpers.h"

#include "boost/python/suite/indexing/map_indexing_suite.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "generated/ContainerMixinHeadNodeCoreScriptDesc.pypp.hpp"

#include "generated/FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc.pypp.hpp"

#include "generated/PyFieldAccessHandler.pypp.hpp"

#include "generated/PyFieldAccessHandlerBase.pypp.hpp"

#include "generated/PyFieldContainerPtrMFieldEditHandle.pypp.hpp"

#include "generated/PyFieldContainerPtrMFieldEditHandleBase.pypp.hpp"

#include "generated/PyFieldContainerPtrMFieldGetHandle.pypp.hpp"

#include "generated/PyFieldContainerPtrMFieldGetHandleBase.pypp.hpp"

#include "generated/PythonScript.pypp.hpp"

#include "generated/PythonScriptBase.pypp.hpp"

#include "generated/PythonScriptFile.pypp.hpp"

#include "generated/PythonScriptFileBase.pypp.hpp"

#include "generated/Script.pypp.hpp"

#include "generated/ScriptBase.pypp.hpp"

#include "generated/ScriptParent.pypp.hpp"

using namespace std;

namespace bp = boost::python;

BOOST_PYTHON_MODULE(OSGScriptingPy){
    register_ContainerMixinHeadNodeCoreScriptDesc_class();

    register_FrameTaskMixinContainerMixinHeadNodeCoreScriptDesc_class();

    register_ScriptParent_class();

    register_PyFieldAccessHandlerBase_class();

    register_PyFieldAccessHandler_class();

    register_PyFieldContainerPtrMFieldEditHandleBase_class();

    register_PyFieldContainerPtrMFieldEditHandle_class();

    register_PyFieldContainerPtrMFieldGetHandleBase_class();

    register_PyFieldContainerPtrMFieldGetHandle_class();

    register_ScriptBase_class();

    register_Script_class();

    register_PythonScriptBase_class();

    register_PythonScript_class();

    register_PythonScriptFile_class();

    /** Helpers for OSG::PythonScript */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::PythonScript, OSG::PythonScript::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::PythonScript::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::PyFieldAccessHandler */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::PyFieldAccessHandler, OSG::PyFieldAccessHandler::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::PyFieldAccessHandler::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::PyFieldContainerPtrMFieldGetHandle */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::PyFieldContainerPtrMFieldGetHandle, OSG::PyFieldContainerPtrMFieldGetHandle::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::PyFieldContainerPtrMFieldGetHandle::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::PyFieldContainerPtrMFieldEditHandle */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::PyFieldContainerPtrMFieldEditHandle, OSG::PyFieldContainerPtrMFieldEditHandle::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::PyFieldContainerPtrMFieldEditHandle::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Script */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Script, OSG::Script::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Script::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::PythonScriptFile */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::PythonScriptFile, OSG::PythonScriptFile::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::PythonScriptFile::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    register_PythonScriptFileBase_class();
}

