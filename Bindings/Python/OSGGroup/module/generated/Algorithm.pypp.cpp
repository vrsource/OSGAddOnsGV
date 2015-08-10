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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "Algorithm.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_Algorithm_class(){

    { //::OSG::Algorithm
        typedef bp::class_< OSG::Algorithm, bp::bases< OSG::AlgorithmBase >, boost::noncopyable > Algorithm_exposer_t;
        Algorithm_exposer_t Algorithm_exposer = Algorithm_exposer_t( "Algorithm", bp::no_init );
        bp::scope Algorithm_scope( Algorithm_exposer );
        { //::OSG::Algorithm::changed
        
            typedef void ( ::OSG::Algorithm::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            Algorithm_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::Algorithm::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::Algorithm::dump
        
            typedef void ( ::OSG::Algorithm::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            Algorithm_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::Algorithm::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::Algorithm::execute
        
            typedef void ( ::OSG::Algorithm::*execute_function_type )( ::OSG::DrawEnv * ) ;
            
            Algorithm_exposer.def( 
                "execute"
                , execute_function_type( &::OSG::Algorithm::execute )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::Algorithm::renderEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderEnter_function_type )( ::OSG::Action * ) ;
            
            Algorithm_exposer.def( 
                "renderEnter"
                , renderEnter_function_type( &::OSG::Algorithm::renderEnter )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::Algorithm::renderLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderLeave_function_type )( ::OSG::Action * ) ;
            
            Algorithm_exposer.def( 
                "renderLeave"
                , renderLeave_function_type( &::OSG::Algorithm::renderLeave )
                , ( bp::arg("pAction") ) );
        
        }
        pyopensg::register_transit< OSG::Algorithm >::execute();
        bp::register_ptr_to_python< OSG::Algorithm::ObjRecPtr >();
        bp::implicitly_convertible< OSG::Algorithm::ObjRecPtr, OSG::Algorithm* >();
        bp::implicitly_convertible< OSG::Algorithm::ObjRecPtr, OSG::Algorithm::ObjCPtr >();
        bp::implicitly_convertible< OSG::Algorithm::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::Algorithm::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::Algorithm::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
    }

}
