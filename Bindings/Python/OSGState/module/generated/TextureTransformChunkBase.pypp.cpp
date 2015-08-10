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
#include "TextureTransformChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TextureTransformChunkBase_class(){

    { //::OSG::TextureTransformChunkBase
        typedef bp::class_< OSG::TextureTransformChunkBase, bp::bases< OSG::TransformChunk >, boost::noncopyable > TextureTransformChunkBase_exposer_t;
        TextureTransformChunkBase_exposer_t TextureTransformChunkBase_exposer = TextureTransformChunkBase_exposer_t( "TextureTransformChunkBase", bp::no_init );
        bp::scope TextureTransformChunkBase_scope( TextureTransformChunkBase_exposer );
        bp::scope().attr("UseCameraBeaconFieldId") = (int)OSG::TextureTransformChunkBase::UseCameraBeaconFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::TextureTransformChunkBase::NextFieldId;
        { //::OSG::TextureTransformChunkBase::copyFromBin
        
            typedef void ( ::OSG::TextureTransformChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureTransformChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::TextureTransformChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureTransformChunkBase::copyToBin
        
            typedef void ( ::OSG::TextureTransformChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            TextureTransformChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::TextureTransformChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureTransformChunkBase::create
        
            typedef ::OSG::TextureTransformChunkTransitPtr ( *create_function_type )(  );
            
            TextureTransformChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::TextureTransformChunkBase::create ) );
        
        }
        { //::OSG::TextureTransformChunkBase::createDependent
        
            typedef ::OSG::TextureTransformChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            TextureTransformChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::TextureTransformChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::TextureTransformChunkBase::createLocal
        
            typedef ::OSG::TextureTransformChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            TextureTransformChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::TextureTransformChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::TextureTransformChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::TextureTransformChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            TextureTransformChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::TextureTransformChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::TextureTransformChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            TextureTransformChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::TextureTransformChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::TextureTransformChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            TextureTransformChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::TextureTransformChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::TextureTransformChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            TextureTransformChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::TextureTransformChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::TextureTransformChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::TextureTransformChunkBase::*getContainerSize_function_type )(  ) const;
            
            TextureTransformChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::TextureTransformChunkBase::getContainerSize ) );
        
        }
        { //::OSG::TextureTransformChunkBase::getSFUseCameraBeacon
        
            typedef ::OSG::SFBool const * ( ::OSG::TextureTransformChunkBase::*getSFUseCameraBeacon_function_type )(  ) const;
            
            TextureTransformChunkBase_exposer.def( 
                "getSFUseCameraBeacon"
                , getSFUseCameraBeacon_function_type( &::OSG::TextureTransformChunkBase::getSFUseCameraBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureTransformChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::TextureTransformChunkBase::*getType_function_type )(  ) ;
            
            TextureTransformChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureTransformChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureTransformChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::TextureTransformChunkBase::*getType_function_type )(  ) const;
            
            TextureTransformChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::TextureTransformChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::TextureTransformChunkBase::getUseCameraBeacon
        
            typedef bool ( ::OSG::TextureTransformChunkBase::*getUseCameraBeacon_function_type )(  ) const;
            
            TextureTransformChunkBase_exposer.def( 
                "getUseCameraBeacon"
                , getUseCameraBeacon_function_type( &::OSG::TextureTransformChunkBase::getUseCameraBeacon ) );
        
        }
        { //::OSG::TextureTransformChunkBase::setUseCameraBeacon
        
            typedef void ( ::OSG::TextureTransformChunkBase::*setUseCameraBeacon_function_type )( bool const ) ;
            
            TextureTransformChunkBase_exposer.def( 
                "setUseCameraBeacon"
                , setUseCameraBeacon_function_type( &::OSG::TextureTransformChunkBase::setUseCameraBeacon )
                , ( bp::arg("value") ) );
        
        }
        TextureTransformChunkBase_exposer.staticmethod( "create" );
        TextureTransformChunkBase_exposer.staticmethod( "createDependent" );
        TextureTransformChunkBase_exposer.staticmethod( "createLocal" );
        TextureTransformChunkBase_exposer.staticmethod( "getClassGroupId" );
        TextureTransformChunkBase_exposer.staticmethod( "getClassType" );
        TextureTransformChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
