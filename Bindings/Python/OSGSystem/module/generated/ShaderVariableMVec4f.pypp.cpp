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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ShaderVariableMVec4f.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderVariableMVec4f_class(){

    { //::OSG::ShaderVariableMVec4f
        typedef bp::class_< OSG::ShaderVariableMVec4f, bp::bases< OSG::ShaderVariableMVec4fBase >, OSG::ShaderVariableMVec4f::ObjRecPtr, boost::noncopyable > ShaderVariableMVec4f_exposer_t;
        ShaderVariableMVec4f_exposer_t ShaderVariableMVec4f_exposer = ShaderVariableMVec4f_exposer_t( "ShaderVariableMVec4f", bp::no_init );
        bp::scope ShaderVariableMVec4f_scope( ShaderVariableMVec4f_exposer );
        { //::OSG::ShaderVariableMVec4f::changed
        
            typedef void ( ::OSG::ShaderVariableMVec4f::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShaderVariableMVec4f_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShaderVariableMVec4f::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ShaderVariableMVec4f::dump
        
            typedef void ( ::OSG::ShaderVariableMVec4f::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShaderVariableMVec4f_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShaderVariableMVec4f::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::ShaderVariableMVec4f >::execute();
        bp::implicitly_convertible< OSG::ShaderVariableMVec4f::ObjRecPtr, OSG::ShaderVariableMVec4f* >();
        bp::implicitly_convertible< OSG::ShaderVariableMVec4f::ObjRecPtr, OSG::ShaderVariableMVec4f::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShaderVariableMVec4f::ObjRecPtr, OSG::ShaderValueVariable* >();
        bp::implicitly_convertible< OSG::ShaderVariableMVec4f::ObjRecPtr, OSG::ShaderValueVariable::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShaderVariableMVec4f::ObjRecPtr, OSG::ShaderValueVariable::ObjCPtr>();
    }

}
