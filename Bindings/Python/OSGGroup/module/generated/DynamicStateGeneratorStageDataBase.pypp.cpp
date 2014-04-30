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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DynamicStateGeneratorStageDataBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DynamicStateGeneratorStageDataBase_class(){

    { //::OSG::DynamicStateGeneratorStageDataBase
        typedef bp::class_< OSG::DynamicStateGeneratorStageDataBase, bp::bases< OSG::StageData >, boost::noncopyable > DynamicStateGeneratorStageDataBase_exposer_t;
        DynamicStateGeneratorStageDataBase_exposer_t DynamicStateGeneratorStageDataBase_exposer = DynamicStateGeneratorStageDataBase_exposer_t( "DynamicStateGeneratorStageDataBase", bp::no_init );
        bp::scope DynamicStateGeneratorStageDataBase_scope( DynamicStateGeneratorStageDataBase_exposer );
        bp::scope().attr("RenderTargetFieldId") = (int)OSG::DynamicStateGeneratorStageDataBase::RenderTargetFieldId;
        bp::scope().attr("ChunksFieldId") = (int)OSG::DynamicStateGeneratorStageDataBase::ChunksFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::DynamicStateGeneratorStageDataBase::NextFieldId;
        { //::OSG::DynamicStateGeneratorStageDataBase::copyFromBin
        
            typedef void ( ::OSG::DynamicStateGeneratorStageDataBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::DynamicStateGeneratorStageDataBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::copyToBin
        
            typedef void ( ::OSG::DynamicStateGeneratorStageDataBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::DynamicStateGeneratorStageDataBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::create
        
            typedef ::OSG::DynamicStateGeneratorStageDataTransitPtr ( *create_function_type )(  );
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::DynamicStateGeneratorStageDataBase::create ) );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::createDependent
        
            typedef ::OSG::DynamicStateGeneratorStageDataTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::DynamicStateGeneratorStageDataBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::createLocal
        
            typedef ::OSG::DynamicStateGeneratorStageDataTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::DynamicStateGeneratorStageDataBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::DynamicStateGeneratorStageDataBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::DynamicStateGeneratorStageDataBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::DynamicStateGeneratorStageDataBase::getClassGroupId ) );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::DynamicStateGeneratorStageDataBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::DynamicStateGeneratorStageDataBase::getClassTypeId ) );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::DynamicStateGeneratorStageDataBase::*getContainerSize_function_type )(  ) const;
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::DynamicStateGeneratorStageDataBase::getContainerSize ) );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::getRenderTarget
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::DynamicStateGeneratorStageDataBase::*getRenderTarget_function_type )(  ) const;
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "getRenderTarget"
                , getRenderTarget_function_type( &::OSG::DynamicStateGeneratorStageDataBase::getRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::getSFRenderTarget
        
            typedef ::OSG::SFUnrecFrameBufferObjectPtr const * ( ::OSG::DynamicStateGeneratorStageDataBase::*getSFRenderTarget_function_type )(  ) const;
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "getSFRenderTarget"
                , getSFRenderTarget_function_type( &::OSG::DynamicStateGeneratorStageDataBase::getSFRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::DynamicStateGeneratorStageDataBase::*getType_function_type )(  ) ;
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DynamicStateGeneratorStageDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::DynamicStateGeneratorStageDataBase::*getType_function_type )(  ) const;
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DynamicStateGeneratorStageDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DynamicStateGeneratorStageDataBase::setRenderTarget
        
            typedef void ( ::OSG::DynamicStateGeneratorStageDataBase::*setRenderTarget_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            DynamicStateGeneratorStageDataBase_exposer.def( 
                "setRenderTarget"
                , setRenderTarget_function_type( &::OSG::DynamicStateGeneratorStageDataBase::setRenderTarget )
                , ( bp::arg("value") ) );
        
        }
        DynamicStateGeneratorStageDataBase_exposer.staticmethod( "create" );
        DynamicStateGeneratorStageDataBase_exposer.staticmethod( "createDependent" );
        DynamicStateGeneratorStageDataBase_exposer.staticmethod( "createLocal" );
        DynamicStateGeneratorStageDataBase_exposer.staticmethod( "getClassGroupId" );
        DynamicStateGeneratorStageDataBase_exposer.staticmethod( "getClassType" );
        DynamicStateGeneratorStageDataBase_exposer.staticmethod( "getClassTypeId" );
    }

}
