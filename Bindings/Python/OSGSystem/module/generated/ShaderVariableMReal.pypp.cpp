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
#include "ShaderVariableMReal.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ShaderVariableMReal_class(){

    { //::OSG::ShaderVariableMReal
        typedef bp::class_< OSG::ShaderVariableMReal, bp::bases< OSG::ShaderVariableMRealBase >, OSG::ShaderVariableMReal::ObjRecPtr, boost::noncopyable > ShaderVariableMReal_exposer_t;
        ShaderVariableMReal_exposer_t ShaderVariableMReal_exposer = ShaderVariableMReal_exposer_t( "ShaderVariableMReal", bp::no_init );
        bp::scope ShaderVariableMReal_scope( ShaderVariableMReal_exposer );
        { //::OSG::ShaderVariableMReal::changed
        
            typedef void ( ::OSG::ShaderVariableMReal::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShaderVariableMReal_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShaderVariableMReal::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ShaderVariableMReal::dump
        
            typedef void ( ::OSG::ShaderVariableMReal::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShaderVariableMReal_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShaderVariableMReal::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::ShaderVariableMReal >::execute();
        bp::implicitly_convertible< OSG::ShaderVariableMReal::ObjRecPtr, OSG::ShaderVariableMReal* >();
        bp::implicitly_convertible< OSG::ShaderVariableMReal::ObjRecPtr, OSG::ShaderVariableMReal::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShaderVariableMReal::ObjRecPtr, OSG::ShaderValueVariable* >();
        bp::implicitly_convertible< OSG::ShaderVariableMReal::ObjRecPtr, OSG::ShaderValueVariable::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShaderVariableMReal::ObjRecPtr, OSG::ShaderValueVariable::ObjCPtr>();
    }

}
