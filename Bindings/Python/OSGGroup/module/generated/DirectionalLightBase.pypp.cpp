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
#include "DirectionalLightBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct DirectionalLightBase_wrapper : OSG::DirectionalLightBase, bp::wrapper< OSG::DirectionalLightBase > {

    virtual void callLightEngineEnter( ::OSG::RenderAction * ract ){
        bp::override func_callLightEngineEnter = this->get_override( "callLightEngineEnter" );
        func_callLightEngineEnter( boost::python::ptr(ract) );
    }

    virtual void callLightEngineLeave( ::OSG::RenderAction * ract ){
        bp::override func_callLightEngineLeave = this->get_override( "callLightEngineLeave" );
        func_callLightEngineLeave( boost::python::ptr(ract) );
    }

};

void register_DirectionalLightBase_class(){

    { //::OSG::DirectionalLightBase
        typedef bp::class_< DirectionalLightBase_wrapper, bp::bases< ::OSG::Light >, boost::noncopyable > DirectionalLightBase_exposer_t;
        DirectionalLightBase_exposer_t DirectionalLightBase_exposer = DirectionalLightBase_exposer_t( "DirectionalLightBase", bp::no_init );
        bp::scope DirectionalLightBase_scope( DirectionalLightBase_exposer );
        bp::scope().attr("DirectionFieldId") = (int)OSG::DirectionalLightBase::DirectionFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::DirectionalLightBase::NextFieldId;
        { //::OSG::DirectionalLightBase::copyFromBin
        
            typedef void ( ::OSG::DirectionalLightBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DirectionalLightBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::DirectionalLightBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DirectionalLightBase::copyToBin
        
            typedef void ( ::OSG::DirectionalLightBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DirectionalLightBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::DirectionalLightBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DirectionalLightBase::create
        
            typedef ::OSG::DirectionalLightTransitPtr ( *create_function_type )(  );
            
            DirectionalLightBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::DirectionalLightBase::create ) );
        
        }
        { //::OSG::DirectionalLightBase::createDependent
        
            typedef ::OSG::DirectionalLightTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            DirectionalLightBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::DirectionalLightBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::DirectionalLightBase::createLocal
        
            typedef ::OSG::DirectionalLightTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            DirectionalLightBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::DirectionalLightBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::DirectionalLightBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::DirectionalLightBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            DirectionalLightBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::DirectionalLightBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::DirectionalLightBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            DirectionalLightBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::DirectionalLightBase::getClassGroupId ) );
        
        }
        { //::OSG::DirectionalLightBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            DirectionalLightBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::DirectionalLightBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::DirectionalLightBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            DirectionalLightBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::DirectionalLightBase::getClassTypeId ) );
        
        }
        { //::OSG::DirectionalLightBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::DirectionalLightBase::*getContainerSize_function_type )(  ) const;
            
            DirectionalLightBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::DirectionalLightBase::getContainerSize ) );
        
        }
        { //::OSG::DirectionalLightBase::getDirection
        
            typedef ::OSG::Vec3f const & ( ::OSG::DirectionalLightBase::*getDirection_function_type )(  ) const;
            
            DirectionalLightBase_exposer.def( 
                "getDirection"
                , getDirection_function_type( &::OSG::DirectionalLightBase::getDirection )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::DirectionalLightBase::getSFDirection
        
            typedef ::OSG::SFVec3f const * ( ::OSG::DirectionalLightBase::*getSFDirection_function_type )(  ) const;
            
            DirectionalLightBase_exposer.def( 
                "getSFDirection"
                , getSFDirection_function_type( &::OSG::DirectionalLightBase::getSFDirection )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DirectionalLightBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::DirectionalLightBase::*getType_function_type )(  ) ;
            
            DirectionalLightBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DirectionalLightBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DirectionalLightBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::DirectionalLightBase::*getType_function_type )(  ) const;
            
            DirectionalLightBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DirectionalLightBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DirectionalLightBase::setDirection
        
            typedef void ( ::OSG::DirectionalLightBase::*setDirection_function_type )( ::OSG::Vec3f const & ) ;
            
            DirectionalLightBase_exposer.def( 
                "setDirection"
                , setDirection_function_type( &::OSG::DirectionalLightBase::setDirection )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Light::callLightEngineEnter
        
            typedef void ( ::OSG::Light::*callLightEngineEnter_function_type )( ::OSG::RenderAction * ) ;
            
            DirectionalLightBase_exposer.def( 
                "callLightEngineEnter"
                , bp::pure_virtual( callLightEngineEnter_function_type(&::OSG::Light::callLightEngineEnter) )
                , ( bp::arg("ract") ) );
        
        }
        { //::OSG::Light::callLightEngineLeave
        
            typedef void ( ::OSG::Light::*callLightEngineLeave_function_type )( ::OSG::RenderAction * ) ;
            
            DirectionalLightBase_exposer.def( 
                "callLightEngineLeave"
                , bp::pure_virtual( callLightEngineLeave_function_type(&::OSG::Light::callLightEngineLeave) )
                , ( bp::arg("ract") ) );
        
        }
        DirectionalLightBase_exposer.staticmethod( "create" );
        DirectionalLightBase_exposer.staticmethod( "createDependent" );
        DirectionalLightBase_exposer.staticmethod( "createLocal" );
        DirectionalLightBase_exposer.staticmethod( "getClassGroupId" );
        DirectionalLightBase_exposer.staticmethod( "getClassType" );
        DirectionalLightBase_exposer.staticmethod( "getClassTypeId" );
    }

}
