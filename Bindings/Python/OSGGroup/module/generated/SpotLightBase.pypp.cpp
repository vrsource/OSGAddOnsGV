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
#include "SpotLightBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SpotLightBase_class(){

    { //::OSG::SpotLightBase
        typedef bp::class_< OSG::SpotLightBase, bp::bases< OSG::PointLight >, boost::noncopyable > SpotLightBase_exposer_t;
        SpotLightBase_exposer_t SpotLightBase_exposer = SpotLightBase_exposer_t( "SpotLightBase", bp::no_init );
        bp::scope SpotLightBase_scope( SpotLightBase_exposer );
        bp::scope().attr("DirectionFieldId") = (int)OSG::SpotLightBase::DirectionFieldId;
        bp::scope().attr("SpotExponentFieldId") = (int)OSG::SpotLightBase::SpotExponentFieldId;
        bp::scope().attr("SpotCutOffFieldId") = (int)OSG::SpotLightBase::SpotCutOffFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SpotLightBase::NextFieldId;
        { //::OSG::SpotLightBase::copyFromBin
        
            typedef void ( ::OSG::SpotLightBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SpotLightBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SpotLightBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SpotLightBase::copyToBin
        
            typedef void ( ::OSG::SpotLightBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SpotLightBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SpotLightBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SpotLightBase::create
        
            typedef ::OSG::SpotLightTransitPtr ( *create_function_type )(  );
            
            SpotLightBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SpotLightBase::create ) );
        
        }
        { //::OSG::SpotLightBase::createDependent
        
            typedef ::OSG::SpotLightTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SpotLightBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SpotLightBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SpotLightBase::createLocal
        
            typedef ::OSG::SpotLightTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SpotLightBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SpotLightBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SpotLightBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SpotLightBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SpotLightBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SpotLightBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SpotLightBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SpotLightBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SpotLightBase::getClassGroupId ) );
        
        }
        { //::OSG::SpotLightBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SpotLightBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SpotLightBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SpotLightBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SpotLightBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SpotLightBase::getClassTypeId ) );
        
        }
        { //::OSG::SpotLightBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SpotLightBase::*getContainerSize_function_type )(  ) const;
            
            SpotLightBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SpotLightBase::getContainerSize ) );
        
        }
        { //::OSG::SpotLightBase::getDirection
        
            typedef ::OSG::Vec3f const & ( ::OSG::SpotLightBase::*getDirection_function_type )(  ) const;
            
            SpotLightBase_exposer.def( 
                "getDirection"
                , getDirection_function_type( &::OSG::SpotLightBase::getDirection )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SpotLightBase::getSFDirection
        
            typedef ::OSG::SFVec3f const * ( ::OSG::SpotLightBase::*getSFDirection_function_type )(  ) const;
            
            SpotLightBase_exposer.def( 
                "getSFDirection"
                , getSFDirection_function_type( &::OSG::SpotLightBase::getSFDirection )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SpotLightBase::getSFSpotCutOff
        
            typedef ::OSG::SFReal32 const * ( ::OSG::SpotLightBase::*getSFSpotCutOff_function_type )(  ) const;
            
            SpotLightBase_exposer.def( 
                "getSFSpotCutOff"
                , getSFSpotCutOff_function_type( &::OSG::SpotLightBase::getSFSpotCutOff )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SpotLightBase::getSFSpotExponent
        
            typedef ::OSG::SFReal32 const * ( ::OSG::SpotLightBase::*getSFSpotExponent_function_type )(  ) const;
            
            SpotLightBase_exposer.def( 
                "getSFSpotExponent"
                , getSFSpotExponent_function_type( &::OSG::SpotLightBase::getSFSpotExponent )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SpotLightBase::getSpotCutOff
        
            typedef ::OSG::Real32 ( ::OSG::SpotLightBase::*getSpotCutOff_function_type )(  ) const;
            
            SpotLightBase_exposer.def( 
                "getSpotCutOff"
                , getSpotCutOff_function_type( &::OSG::SpotLightBase::getSpotCutOff ) );
        
        }
        { //::OSG::SpotLightBase::getSpotExponent
        
            typedef ::OSG::Real32 ( ::OSG::SpotLightBase::*getSpotExponent_function_type )(  ) const;
            
            SpotLightBase_exposer.def( 
                "getSpotExponent"
                , getSpotExponent_function_type( &::OSG::SpotLightBase::getSpotExponent ) );
        
        }
        { //::OSG::SpotLightBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SpotLightBase::*getType_function_type )(  ) ;
            
            SpotLightBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SpotLightBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SpotLightBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SpotLightBase::*getType_function_type )(  ) const;
            
            SpotLightBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SpotLightBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SpotLightBase::setDirection
        
            typedef void ( ::OSG::SpotLightBase::*setDirection_function_type )( ::OSG::Vec3f const & ) ;
            
            SpotLightBase_exposer.def( 
                "setDirection"
                , setDirection_function_type( &::OSG::SpotLightBase::setDirection )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SpotLightBase::setSpotCutOff
        
            typedef void ( ::OSG::SpotLightBase::*setSpotCutOff_function_type )( ::OSG::Real32 const ) ;
            
            SpotLightBase_exposer.def( 
                "setSpotCutOff"
                , setSpotCutOff_function_type( &::OSG::SpotLightBase::setSpotCutOff )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SpotLightBase::setSpotExponent
        
            typedef void ( ::OSG::SpotLightBase::*setSpotExponent_function_type )( ::OSG::Real32 const ) ;
            
            SpotLightBase_exposer.def( 
                "setSpotExponent"
                , setSpotExponent_function_type( &::OSG::SpotLightBase::setSpotExponent )
                , ( bp::arg("value") ) );
        
        }
        SpotLightBase_exposer.staticmethod( "create" );
        SpotLightBase_exposer.staticmethod( "createDependent" );
        SpotLightBase_exposer.staticmethod( "createLocal" );
        SpotLightBase_exposer.staticmethod( "getClassGroupId" );
        SpotLightBase_exposer.staticmethod( "getClassType" );
        SpotLightBase_exposer.staticmethod( "getClassTypeId" );
    }

}
