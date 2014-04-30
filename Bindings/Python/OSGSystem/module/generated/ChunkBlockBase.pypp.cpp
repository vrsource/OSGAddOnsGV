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
#include "ChunkBlockBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ChunkBlockBase_class(){

    { //::OSG::ChunkBlockBase
        typedef bp::class_< OSG::ChunkBlockBase, bp::bases< ::OSG::FieldContainer >, boost::noncopyable > ChunkBlockBase_exposer_t;
        ChunkBlockBase_exposer_t ChunkBlockBase_exposer = ChunkBlockBase_exposer_t( "ChunkBlockBase", bp::no_init );
        bp::scope ChunkBlockBase_scope( ChunkBlockBase_exposer );
        bp::scope().attr("ChunksFieldId") = (int)OSG::ChunkBlockBase::ChunksFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ChunkBlockBase::NextFieldId;
        { //::OSG::ChunkBlockBase::copyFromBin
        
            typedef void ( ::OSG::ChunkBlockBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ChunkBlockBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ChunkBlockBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ChunkBlockBase::copyToBin
        
            typedef void ( ::OSG::ChunkBlockBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ChunkBlockBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ChunkBlockBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ChunkBlockBase::create
        
            typedef ::OSG::ChunkBlockTransitPtr ( *create_function_type )(  );
            
            ChunkBlockBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ChunkBlockBase::create ) );
        
        }
        { //::OSG::ChunkBlockBase::createDependent
        
            typedef ::OSG::ChunkBlockTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ChunkBlockBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ChunkBlockBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ChunkBlockBase::createLocal
        
            typedef ::OSG::ChunkBlockTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ChunkBlockBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ChunkBlockBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ChunkBlockBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ChunkBlockBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ChunkBlockBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ChunkBlockBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ChunkBlockBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ChunkBlockBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ChunkBlockBase::getClassGroupId ) );
        
        }
        { //::OSG::ChunkBlockBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ChunkBlockBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ChunkBlockBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ChunkBlockBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ChunkBlockBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ChunkBlockBase::getClassTypeId ) );
        
        }
        { //::OSG::ChunkBlockBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ChunkBlockBase::*getContainerSize_function_type )(  ) const;
            
            ChunkBlockBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ChunkBlockBase::getContainerSize ) );
        
        }
        { //::OSG::ChunkBlockBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ChunkBlockBase::*getType_function_type )(  ) ;
            
            ChunkBlockBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ChunkBlockBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ChunkBlockBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ChunkBlockBase::*getType_function_type )(  ) const;
            
            ChunkBlockBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ChunkBlockBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        ChunkBlockBase_exposer.staticmethod( "create" );
        ChunkBlockBase_exposer.staticmethod( "createDependent" );
        ChunkBlockBase_exposer.staticmethod( "createLocal" );
        ChunkBlockBase_exposer.staticmethod( "getClassGroupId" );
        ChunkBlockBase_exposer.staticmethod( "getClassType" );
        ChunkBlockBase_exposer.staticmethod( "getClassTypeId" );
    }

}
