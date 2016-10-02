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
#include "OSGState_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "StencilChunkBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_StencilChunkBase_class(){

    { //::OSG::StencilChunkBase
        typedef bp::class_< OSG::StencilChunkBase, bp::bases< ::OSG::StateChunk >, boost::noncopyable > StencilChunkBase_exposer_t;
        StencilChunkBase_exposer_t StencilChunkBase_exposer = StencilChunkBase_exposer_t( "StencilChunkBase", bp::no_init );
        bp::scope StencilChunkBase_scope( StencilChunkBase_exposer );
        bp::scope().attr("StencilFuncFieldId") = (int)OSG::StencilChunkBase::StencilFuncFieldId;
        bp::scope().attr("StencilValueFieldId") = (int)OSG::StencilChunkBase::StencilValueFieldId;
        bp::scope().attr("StencilMaskFieldId") = (int)OSG::StencilChunkBase::StencilMaskFieldId;
        bp::scope().attr("StencilOpFailFieldId") = (int)OSG::StencilChunkBase::StencilOpFailFieldId;
        bp::scope().attr("StencilOpZFailFieldId") = (int)OSG::StencilChunkBase::StencilOpZFailFieldId;
        bp::scope().attr("StencilOpZPassFieldId") = (int)OSG::StencilChunkBase::StencilOpZPassFieldId;
        bp::scope().attr("ClearBufferFieldId") = (int)OSG::StencilChunkBase::ClearBufferFieldId;
        bp::scope().attr("BitMaskFieldId") = (int)OSG::StencilChunkBase::BitMaskFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::StencilChunkBase::NextFieldId;
        { //::OSG::StencilChunkBase::copyFromBin
        
            typedef void ( ::OSG::StencilChunkBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StencilChunkBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::StencilChunkBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StencilChunkBase::copyToBin
        
            typedef void ( ::OSG::StencilChunkBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StencilChunkBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::StencilChunkBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StencilChunkBase::create
        
            typedef ::OSG::StencilChunkTransitPtr ( *create_function_type )(  );
            
            StencilChunkBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::StencilChunkBase::create ) );
        
        }
        { //::OSG::StencilChunkBase::createDependent
        
            typedef ::OSG::StencilChunkTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            StencilChunkBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::StencilChunkBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::StencilChunkBase::createLocal
        
            typedef ::OSG::StencilChunkTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            StencilChunkBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::StencilChunkBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::StencilChunkBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::StencilChunkBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            StencilChunkBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::StencilChunkBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::StencilChunkBase::getBitMask
        
            typedef ::OSG::UInt32 ( ::OSG::StencilChunkBase::*getBitMask_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getBitMask"
                , getBitMask_function_type( &::OSG::StencilChunkBase::getBitMask ) );
        
        }
        { //::OSG::StencilChunkBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            StencilChunkBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::StencilChunkBase::getClassGroupId ) );
        
        }
        { //::OSG::StencilChunkBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            StencilChunkBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::StencilChunkBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::StencilChunkBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            StencilChunkBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::StencilChunkBase::getClassTypeId ) );
        
        }
        { //::OSG::StencilChunkBase::getClearBuffer
        
            typedef ::OSG::Int32 ( ::OSG::StencilChunkBase::*getClearBuffer_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getClearBuffer"
                , getClearBuffer_function_type( &::OSG::StencilChunkBase::getClearBuffer ) );
        
        }
        { //::OSG::StencilChunkBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::StencilChunkBase::*getContainerSize_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::StencilChunkBase::getContainerSize ) );
        
        }
        { //::OSG::StencilChunkBase::getSFBitMask
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::StencilChunkBase::*getSFBitMask_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getSFBitMask"
                , getSFBitMask_function_type( &::OSG::StencilChunkBase::getSFBitMask )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::getSFClearBuffer
        
            typedef ::OSG::SFInt32 const * ( ::OSG::StencilChunkBase::*getSFClearBuffer_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getSFClearBuffer"
                , getSFClearBuffer_function_type( &::OSG::StencilChunkBase::getSFClearBuffer )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::getSFStencilFunc
        
            typedef ::OSG::SFGLenum const * ( ::OSG::StencilChunkBase::*getSFStencilFunc_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getSFStencilFunc"
                , getSFStencilFunc_function_type( &::OSG::StencilChunkBase::getSFStencilFunc )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::getSFStencilMask
        
            typedef ::OSG::SFUInt32 const * ( ::OSG::StencilChunkBase::*getSFStencilMask_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getSFStencilMask"
                , getSFStencilMask_function_type( &::OSG::StencilChunkBase::getSFStencilMask )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::getSFStencilOpFail
        
            typedef ::OSG::SFGLenum const * ( ::OSG::StencilChunkBase::*getSFStencilOpFail_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getSFStencilOpFail"
                , getSFStencilOpFail_function_type( &::OSG::StencilChunkBase::getSFStencilOpFail )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::getSFStencilOpZFail
        
            typedef ::OSG::SFGLenum const * ( ::OSG::StencilChunkBase::*getSFStencilOpZFail_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getSFStencilOpZFail"
                , getSFStencilOpZFail_function_type( &::OSG::StencilChunkBase::getSFStencilOpZFail )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::getSFStencilOpZPass
        
            typedef ::OSG::SFGLenum const * ( ::OSG::StencilChunkBase::*getSFStencilOpZPass_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getSFStencilOpZPass"
                , getSFStencilOpZPass_function_type( &::OSG::StencilChunkBase::getSFStencilOpZPass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::getSFStencilValue
        
            typedef ::OSG::SFInt32 const * ( ::OSG::StencilChunkBase::*getSFStencilValue_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getSFStencilValue"
                , getSFStencilValue_function_type( &::OSG::StencilChunkBase::getSFStencilValue )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::getStencilFunc
        
            typedef ::GLenum const & ( ::OSG::StencilChunkBase::*getStencilFunc_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getStencilFunc"
                , getStencilFunc_function_type( &::OSG::StencilChunkBase::getStencilFunc )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::StencilChunkBase::getStencilMask
        
            typedef ::OSG::UInt32 ( ::OSG::StencilChunkBase::*getStencilMask_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getStencilMask"
                , getStencilMask_function_type( &::OSG::StencilChunkBase::getStencilMask ) );
        
        }
        { //::OSG::StencilChunkBase::getStencilOpFail
        
            typedef ::GLenum const & ( ::OSG::StencilChunkBase::*getStencilOpFail_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getStencilOpFail"
                , getStencilOpFail_function_type( &::OSG::StencilChunkBase::getStencilOpFail )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::StencilChunkBase::getStencilOpZFail
        
            typedef ::GLenum const & ( ::OSG::StencilChunkBase::*getStencilOpZFail_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getStencilOpZFail"
                , getStencilOpZFail_function_type( &::OSG::StencilChunkBase::getStencilOpZFail )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::StencilChunkBase::getStencilOpZPass
        
            typedef ::GLenum const & ( ::OSG::StencilChunkBase::*getStencilOpZPass_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getStencilOpZPass"
                , getStencilOpZPass_function_type( &::OSG::StencilChunkBase::getStencilOpZPass )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::StencilChunkBase::getStencilValue
        
            typedef ::OSG::Int32 ( ::OSG::StencilChunkBase::*getStencilValue_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getStencilValue"
                , getStencilValue_function_type( &::OSG::StencilChunkBase::getStencilValue ) );
        
        }
        { //::OSG::StencilChunkBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::StencilChunkBase::*getType_function_type )(  ) ;
            
            StencilChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StencilChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::StencilChunkBase::*getType_function_type )(  ) const;
            
            StencilChunkBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StencilChunkBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StencilChunkBase::setBitMask
        
            typedef void ( ::OSG::StencilChunkBase::*setBitMask_function_type )( ::OSG::UInt32 const ) ;
            
            StencilChunkBase_exposer.def( 
                "setBitMask"
                , setBitMask_function_type( &::OSG::StencilChunkBase::setBitMask )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StencilChunkBase::setClearBuffer
        
            typedef void ( ::OSG::StencilChunkBase::*setClearBuffer_function_type )( ::OSG::Int32 const ) ;
            
            StencilChunkBase_exposer.def( 
                "setClearBuffer"
                , setClearBuffer_function_type( &::OSG::StencilChunkBase::setClearBuffer )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StencilChunkBase::setStencilFunc
        
            typedef void ( ::OSG::StencilChunkBase::*setStencilFunc_function_type )( ::GLenum const & ) ;
            
            StencilChunkBase_exposer.def( 
                "setStencilFunc"
                , setStencilFunc_function_type( &::OSG::StencilChunkBase::setStencilFunc )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StencilChunkBase::setStencilMask
        
            typedef void ( ::OSG::StencilChunkBase::*setStencilMask_function_type )( ::OSG::UInt32 const ) ;
            
            StencilChunkBase_exposer.def( 
                "setStencilMask"
                , setStencilMask_function_type( &::OSG::StencilChunkBase::setStencilMask )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StencilChunkBase::setStencilOpFail
        
            typedef void ( ::OSG::StencilChunkBase::*setStencilOpFail_function_type )( ::GLenum const & ) ;
            
            StencilChunkBase_exposer.def( 
                "setStencilOpFail"
                , setStencilOpFail_function_type( &::OSG::StencilChunkBase::setStencilOpFail )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StencilChunkBase::setStencilOpZFail
        
            typedef void ( ::OSG::StencilChunkBase::*setStencilOpZFail_function_type )( ::GLenum const & ) ;
            
            StencilChunkBase_exposer.def( 
                "setStencilOpZFail"
                , setStencilOpZFail_function_type( &::OSG::StencilChunkBase::setStencilOpZFail )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StencilChunkBase::setStencilOpZPass
        
            typedef void ( ::OSG::StencilChunkBase::*setStencilOpZPass_function_type )( ::GLenum const & ) ;
            
            StencilChunkBase_exposer.def( 
                "setStencilOpZPass"
                , setStencilOpZPass_function_type( &::OSG::StencilChunkBase::setStencilOpZPass )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StencilChunkBase::setStencilValue
        
            typedef void ( ::OSG::StencilChunkBase::*setStencilValue_function_type )( ::OSG::Int32 const ) ;
            
            StencilChunkBase_exposer.def( 
                "setStencilValue"
                , setStencilValue_function_type( &::OSG::StencilChunkBase::setStencilValue )
                , ( bp::arg("value") ) );
        
        }
        StencilChunkBase_exposer.staticmethod( "create" );
        StencilChunkBase_exposer.staticmethod( "createDependent" );
        StencilChunkBase_exposer.staticmethod( "createLocal" );
        StencilChunkBase_exposer.staticmethod( "getClassGroupId" );
        StencilChunkBase_exposer.staticmethod( "getClassType" );
        StencilChunkBase_exposer.staticmethod( "getClassTypeId" );
    }

}
