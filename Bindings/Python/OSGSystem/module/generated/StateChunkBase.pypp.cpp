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
#include "StateChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_StateChunkBase_class(){

    { //::OSG::StateChunkBase
        typedef bp::class_< OSG::StateChunkBase, bp::bases< ::OSG::Attachment >, boost::noncopyable > StateChunkBase_exposer_t;
        StateChunkBase_exposer_t StateChunkBase_exposer = StateChunkBase_exposer_t( "StateChunkBase", bp::no_init );
        bp::scope StateChunkBase_scope( StateChunkBase_exposer );
        bp::scope().attr("IgnoreFieldId") = (int)OSG::StateChunkBase::IgnoreFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::StateChunkBase::NextFieldId;
        { //::OSG::StateChunkBase::copyFromBin
        
            typedef void ( ::OSG::StateChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StateChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::StateChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StateChunkBase::copyToBin
        
            typedef void ( ::OSG::StateChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StateChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::StateChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StateChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::StateChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            StateChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::StateChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::StateChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            StateChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::StateChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::StateChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            StateChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::StateChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::StateChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            StateChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::StateChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::StateChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::StateChunkBase::*getContainerSize_function_type )(  ) const;
            
            StateChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::StateChunkBase::getContainerSize ) );
        
        }
        { //::OSG::StateChunkBase::getIgnore
        
            typedef bool ( ::OSG::StateChunkBase::*getIgnore_function_type )(  ) const;
            
            StateChunkBase_exposer.def( 
                "getIgnore"
                , getIgnore_function_type( &::OSG::StateChunkBase::getIgnore ) );
        
        }
        { //::OSG::StateChunkBase::getSFIgnore
        
            typedef ::OSG::SFBool const * ( ::OSG::StateChunkBase::*getSFIgnore_function_type )(  ) const;
            
            StateChunkBase_exposer.def( 
                "getSFIgnore"
                , getSFIgnore_function_type( &::OSG::StateChunkBase::getSFIgnore )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StateChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::StateChunkBase::*getType_function_type )(  ) ;
            
            StateChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StateChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StateChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::StateChunkBase::*getType_function_type )(  ) const;
            
            StateChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StateChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StateChunkBase::setIgnore
        
            typedef void ( ::OSG::StateChunkBase::*setIgnore_function_type )( bool const ) ;
            
            StateChunkBase_exposer.def( 
                "setIgnore"
                , setIgnore_function_type( &::OSG::StateChunkBase::setIgnore )
                , ( bp::arg("value") ) );
        
        }
        StateChunkBase_exposer.staticmethod( "getClassGroupId" );
        StateChunkBase_exposer.staticmethod( "getClassType" );
        StateChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
