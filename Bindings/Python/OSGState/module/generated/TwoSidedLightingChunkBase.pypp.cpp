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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TwoSidedLightingChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct TwoSidedLightingChunkBase_wrapper : OSG::TwoSidedLightingChunkBase, bp::wrapper< OSG::TwoSidedLightingChunkBase > {



};

void register_TwoSidedLightingChunkBase_class(){

    { //::OSG::TwoSidedLightingChunkBase
        typedef bp::class_< TwoSidedLightingChunkBase_wrapper, bp::bases< ::OSG::StateChunk >, boost::noncopyable > TwoSidedLightingChunkBase_exposer_t;
        TwoSidedLightingChunkBase_exposer_t TwoSidedLightingChunkBase_exposer = TwoSidedLightingChunkBase_exposer_t( "TwoSidedLightingChunkBase", bp::no_init );
        bp::scope TwoSidedLightingChunkBase_scope( TwoSidedLightingChunkBase_exposer );
        { //::OSG::TwoSidedLightingChunkBase::copyFromBin
        
            typedef void ( ::OSG::TwoSidedLightingChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TwoSidedLightingChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::TwoSidedLightingChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::copyToBin
        
            typedef void ( ::OSG::TwoSidedLightingChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TwoSidedLightingChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::TwoSidedLightingChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::create
        
            typedef ::OSG::TwoSidedLightingChunkTransitPtr ( *create_function_type )(  );
            
            TwoSidedLightingChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::TwoSidedLightingChunkBase::create ) );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::createDependent
        
            typedef ::OSG::TwoSidedLightingChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            TwoSidedLightingChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TwoSidedLightingChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::createLocal
        
            typedef ::OSG::TwoSidedLightingChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            TwoSidedLightingChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TwoSidedLightingChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::TwoSidedLightingChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            TwoSidedLightingChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::TwoSidedLightingChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            TwoSidedLightingChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TwoSidedLightingChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            TwoSidedLightingChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TwoSidedLightingChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            TwoSidedLightingChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TwoSidedLightingChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::TwoSidedLightingChunkBase::*getContainerSize_function_type )(  ) const;
            
            TwoSidedLightingChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TwoSidedLightingChunkBase::getContainerSize ) );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::TwoSidedLightingChunkBase::*getType_function_type )(  ) ;
            
            TwoSidedLightingChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TwoSidedLightingChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TwoSidedLightingChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::TwoSidedLightingChunkBase::*getType_function_type )(  ) const;
            
            TwoSidedLightingChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TwoSidedLightingChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StateChunk::activate
        
            typedef void ( ::OSG::StateChunk::*activate_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            TwoSidedLightingChunkBase_exposer.def( 
                "activate"
                , activate_function_type( &::OSG::StateChunk::activate )
                , ( bp::arg("pEnv"), bp::arg("index")=(::OSG::UInt32)(0) ) );
        
        }
        { //::OSG::StateChunk::changeFrom
        
            typedef void ( ::OSG::StateChunk::*changeFrom_function_type )( ::OSG::DrawEnv *,::OSG::StateChunk *,::OSG::UInt32 ) ;
            
            TwoSidedLightingChunkBase_exposer.def( 
                "changeFrom"
                , changeFrom_function_type( &::OSG::StateChunk::changeFrom )
                , ( bp::arg("pEnv"), bp::arg("pOld"), bp::arg("index")=(::OSG::UInt32)(0) ) );
        
        }
        { //::OSG::StateChunk::deactivate
        
            typedef void ( ::OSG::StateChunk::*deactivate_function_type )( ::OSG::DrawEnv *,::OSG::UInt32 ) ;
            
            TwoSidedLightingChunkBase_exposer.def( 
                "deactivate"
                , deactivate_function_type( &::OSG::StateChunk::deactivate )
                , ( bp::arg("pEnv"), bp::arg("index")=(::OSG::UInt32)(0) ) );
        
        }
        TwoSidedLightingChunkBase_exposer.staticmethod( "create" );
        TwoSidedLightingChunkBase_exposer.staticmethod( "createDependent" );
        TwoSidedLightingChunkBase_exposer.staticmethod( "createLocal" );
        TwoSidedLightingChunkBase_exposer.staticmethod( "getClassGroupId" );
        TwoSidedLightingChunkBase_exposer.staticmethod( "getClassType" );
        TwoSidedLightingChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
