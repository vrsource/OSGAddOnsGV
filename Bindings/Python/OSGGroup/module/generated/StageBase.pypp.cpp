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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "StageBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct StageBase_wrapper : OSG::StageBase, bp::wrapper< OSG::StageBase > {

    virtual void changed( ::OSG::ConstFieldMaskArg whichField, ::OSG::UInt32 origin, ::OSG::BitVector details ) {
        if( bp::override func_changed = this->get_override( "changed" ) )
            func_changed( whichField, origin, details );
        else{
            this->OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed( whichField, origin, details );
        }
    }
    
    void default_changed( ::OSG::ConstFieldMaskArg whichField, ::OSG::UInt32 origin, ::OSG::BitVector details ) {
        OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed( whichField, origin, details );
    }

    virtual void dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        if( bp::override func_dump = this->get_override( "dump" ) )
            func_dump( uiIndent, bvFlags );
        else{
            this->OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump( uiIndent, bvFlags );
        }
    }
    
    void default_dump( ::OSG::UInt32 uiIndent=0, long unsigned int const bvFlags=0 ) const  {
        OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump( uiIndent, bvFlags );
    }

};

void register_StageBase_class(){

    { //::OSG::StageBase
        typedef bp::class_< StageBase_wrapper, bp::bases< OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > > >, boost::noncopyable > StageBase_exposer_t;
        StageBase_exposer_t StageBase_exposer = StageBase_exposer_t( "StageBase", bp::no_init );
        bp::scope StageBase_scope( StageBase_exposer );
        bp::scope().attr("RenderTargetFieldId") = (int)OSG::StageBase::RenderTargetFieldId;
        bp::scope().attr("InheritedTargetFieldId") = (int)OSG::StageBase::InheritedTargetFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::StageBase::NextFieldId;
        { //::OSG::StageBase::copyFromBin
        
            typedef void ( ::OSG::StageBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StageBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::StageBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StageBase::copyToBin
        
            typedef void ( ::OSG::StageBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StageBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::StageBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StageBase::create
        
            typedef ::OSG::StageTransitPtr ( *create_function_type )(  );
            
            StageBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::StageBase::create ) );
        
        }
        { //::OSG::StageBase::createDependent
        
            typedef ::OSG::StageTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            StageBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::StageBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::StageBase::createLocal
        
            typedef ::OSG::StageTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            StageBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::StageBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::StageBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::StageBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            StageBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::StageBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::StageBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            StageBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::StageBase::getClassGroupId ) );
        
        }
        { //::OSG::StageBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            StageBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::StageBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::StageBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            StageBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::StageBase::getClassTypeId ) );
        
        }
        { //::OSG::StageBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::StageBase::*getContainerSize_function_type )(  ) const;
            
            StageBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::StageBase::getContainerSize ) );
        
        }
        { //::OSG::StageBase::getInheritedTarget
        
            typedef bool ( ::OSG::StageBase::*getInheritedTarget_function_type )(  ) const;
            
            StageBase_exposer.def( 
                "getInheritedTarget"
                , getInheritedTarget_function_type( &::OSG::StageBase::getInheritedTarget ) );
        
        }
        { //::OSG::StageBase::getRenderTarget
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::StageBase::*getRenderTarget_function_type )(  ) const;
            
            StageBase_exposer.def( 
                "getRenderTarget"
                , getRenderTarget_function_type( &::OSG::StageBase::getRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageBase::getSFInheritedTarget
        
            typedef ::OSG::SFBool const * ( ::OSG::StageBase::*getSFInheritedTarget_function_type )(  ) const;
            
            StageBase_exposer.def( 
                "getSFInheritedTarget"
                , getSFInheritedTarget_function_type( &::OSG::StageBase::getSFInheritedTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageBase::getSFRenderTarget
        
            typedef ::OSG::SFUnrecFrameBufferObjectPtr const * ( ::OSG::StageBase::*getSFRenderTarget_function_type )(  ) const;
            
            StageBase_exposer.def( 
                "getSFRenderTarget"
                , getSFRenderTarget_function_type( &::OSG::StageBase::getSFRenderTarget )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::StageBase::*getType_function_type )(  ) ;
            
            StageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::StageBase::*getType_function_type )(  ) const;
            
            StageBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StageBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageBase::setInheritedTarget
        
            typedef void ( ::OSG::StageBase::*setInheritedTarget_function_type )( bool const ) ;
            
            StageBase_exposer.def( 
                "setInheritedTarget"
                , setInheritedTarget_function_type( &::OSG::StageBase::setInheritedTarget )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StageBase::setRenderTarget
        
            typedef void ( ::OSG::StageBase::*setRenderTarget_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            StageBase_exposer.def( 
                "setRenderTarget"
                , setRenderTarget_function_type( &::OSG::StageBase::setRenderTarget )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed
        
            typedef OSG::StageBase exported_class_t;
            typedef void ( exported_class_t::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            typedef void ( StageBase_wrapper::*default_changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            StageBase_exposer.def( 
                "changed"
                , changed_function_type(&::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::changed)
                , default_changed_function_type(&StageBase_wrapper::default_changed)
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump
        
            typedef OSG::StageBase exported_class_t;
            typedef void ( exported_class_t::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            typedef void ( StageBase_wrapper::*default_dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            StageBase_exposer.def( 
                "dump"
                , dump_function_type(&::OSG::StageHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::dump)
                , default_dump_function_type(&StageBase_wrapper::default_dump)
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        StageBase_exposer.staticmethod( "create" );
        StageBase_exposer.staticmethod( "createDependent" );
        StageBase_exposer.staticmethod( "createLocal" );
        StageBase_exposer.staticmethod( "getClassGroupId" );
        StageBase_exposer.staticmethod( "getClassType" );
        StageBase_exposer.staticmethod( "getClassTypeId" );
    }

}
