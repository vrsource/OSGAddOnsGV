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
#include "ShaderVariableUInt.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderVariableUInt_class(){

    { //::OSG::ShaderVariableUInt
        typedef bp::class_< OSG::ShaderVariableUInt, bp::bases< OSG::ShaderVariableUIntBase >, OSG::ShaderVariableUInt::ObjRecPtr, boost::noncopyable > ShaderVariableUInt_exposer_t;
        ShaderVariableUInt_exposer_t ShaderVariableUInt_exposer = ShaderVariableUInt_exposer_t( "ShaderVariableUInt", bp::no_init );
        bp::scope ShaderVariableUInt_scope( ShaderVariableUInt_exposer );
        { //::OSG::ShaderVariableUInt::changed
        
            typedef void ( ::OSG::ShaderVariableUInt::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShaderVariableUInt_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShaderVariableUInt::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ShaderVariableUInt::dump
        
            typedef void ( ::OSG::ShaderVariableUInt::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShaderVariableUInt_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShaderVariableUInt::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::ShaderVariableUInt >::execute();
        bp::implicitly_convertible< OSG::ShaderVariableUInt::ObjRecPtr, OSG::ShaderVariableUInt* >();
        bp::implicitly_convertible< OSG::ShaderVariableUInt::ObjRecPtr, OSG::ShaderVariableUInt::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShaderVariableUInt::ObjRecPtr, OSG::ShaderValueVariable* >();
        bp::implicitly_convertible< OSG::ShaderVariableUInt::ObjRecPtr, OSG::ShaderValueVariable::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShaderVariableUInt::ObjRecPtr, OSG::ShaderValueVariable::ObjCPtr>();
    }

}
