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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FatBorderChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FatBorderChunkBase_class(){

    { //::OSG::FatBorderChunkBase
        typedef bp::class_< OSG::FatBorderChunkBase, bp::bases< ::OSG::VertexProgramChunk >, boost::noncopyable > FatBorderChunkBase_exposer_t;
        FatBorderChunkBase_exposer_t FatBorderChunkBase_exposer = FatBorderChunkBase_exposer_t( "FatBorderChunkBase", bp::no_init );
        bp::scope FatBorderChunkBase_scope( FatBorderChunkBase_exposer );
        { //::OSG::FatBorderChunkBase::copyFromBin
        
            typedef void ( ::OSG::FatBorderChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FatBorderChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::FatBorderChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FatBorderChunkBase::copyToBin
        
            typedef void ( ::OSG::FatBorderChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FatBorderChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::FatBorderChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FatBorderChunkBase::create
        
            typedef ::OSG::FatBorderChunkTransitPtr ( *create_function_type )(  );
            
            FatBorderChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::FatBorderChunkBase::create ) );
        
        }
        { //::OSG::FatBorderChunkBase::createDependent
        
            typedef ::OSG::FatBorderChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            FatBorderChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::FatBorderChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::FatBorderChunkBase::createLocal
        
            typedef ::OSG::FatBorderChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            FatBorderChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::FatBorderChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::FatBorderChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::FatBorderChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            FatBorderChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::FatBorderChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::FatBorderChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            FatBorderChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::FatBorderChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::FatBorderChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            FatBorderChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::FatBorderChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::FatBorderChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            FatBorderChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::FatBorderChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::FatBorderChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::FatBorderChunkBase::*getContainerSize_function_type )(  ) const;
            
            FatBorderChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::FatBorderChunkBase::getContainerSize ) );
        
        }
        { //::OSG::FatBorderChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::FatBorderChunkBase::*getType_function_type )(  ) ;
            
            FatBorderChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FatBorderChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FatBorderChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::FatBorderChunkBase::*getType_function_type )(  ) const;
            
            FatBorderChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FatBorderChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        FatBorderChunkBase_exposer.staticmethod( "create" );
        FatBorderChunkBase_exposer.staticmethod( "createDependent" );
        FatBorderChunkBase_exposer.staticmethod( "createLocal" );
        FatBorderChunkBase_exposer.staticmethod( "getClassGroupId" );
        FatBorderChunkBase_exposer.staticmethod( "getClassType" );
        FatBorderChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
