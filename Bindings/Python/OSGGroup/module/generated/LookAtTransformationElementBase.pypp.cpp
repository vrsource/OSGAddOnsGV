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
#include "LookAtTransformationElementBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_LookAtTransformationElementBase_class(){

    { //::OSG::LookAtTransformationElementBase
        typedef bp::class_< OSG::LookAtTransformationElementBase, bp::bases< OSG::TransformationElement >, boost::noncopyable > LookAtTransformationElementBase_exposer_t;
        LookAtTransformationElementBase_exposer_t LookAtTransformationElementBase_exposer = LookAtTransformationElementBase_exposer_t( "LookAtTransformationElementBase", bp::no_init );
        bp::scope LookAtTransformationElementBase_scope( LookAtTransformationElementBase_exposer );
        bp::scope().attr("EyePositionFieldId") = (int)OSG::LookAtTransformationElementBase::EyePositionFieldId;
        bp::scope().attr("LookAtPositionFieldId") = (int)OSG::LookAtTransformationElementBase::LookAtPositionFieldId;
        bp::scope().attr("UpDirectionFieldId") = (int)OSG::LookAtTransformationElementBase::UpDirectionFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::LookAtTransformationElementBase::NextFieldId;
        { //::OSG::LookAtTransformationElementBase::copyFromBin
        
            typedef void ( ::OSG::LookAtTransformationElementBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            LookAtTransformationElementBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::LookAtTransformationElementBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::copyToBin
        
            typedef void ( ::OSG::LookAtTransformationElementBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            LookAtTransformationElementBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::LookAtTransformationElementBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::create
        
            typedef ::OSG::LookAtTransformationElementTransitPtr ( *create_function_type )(  );
            
            LookAtTransformationElementBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::LookAtTransformationElementBase::create ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::createDependent
        
            typedef ::OSG::LookAtTransformationElementTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            LookAtTransformationElementBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::LookAtTransformationElementBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::createLocal
        
            typedef ::OSG::LookAtTransformationElementTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            LookAtTransformationElementBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::LookAtTransformationElementBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::LookAtTransformationElementBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            LookAtTransformationElementBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::LookAtTransformationElementBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            LookAtTransformationElementBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::LookAtTransformationElementBase::getClassGroupId ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            LookAtTransformationElementBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::LookAtTransformationElementBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::LookAtTransformationElementBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            LookAtTransformationElementBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::LookAtTransformationElementBase::getClassTypeId ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::LookAtTransformationElementBase::*getContainerSize_function_type )(  ) const;
            
            LookAtTransformationElementBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::LookAtTransformationElementBase::getContainerSize ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::getEyePosition
        
            typedef ::OSG::Pnt3f const & ( ::OSG::LookAtTransformationElementBase::*getEyePosition_function_type )(  ) const;
            
            LookAtTransformationElementBase_exposer.def( 
                "getEyePosition"
                , getEyePosition_function_type( &::OSG::LookAtTransformationElementBase::getEyePosition )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::LookAtTransformationElementBase::getLookAtPosition
        
            typedef ::OSG::Pnt3f const & ( ::OSG::LookAtTransformationElementBase::*getLookAtPosition_function_type )(  ) const;
            
            LookAtTransformationElementBase_exposer.def( 
                "getLookAtPosition"
                , getLookAtPosition_function_type( &::OSG::LookAtTransformationElementBase::getLookAtPosition )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::LookAtTransformationElementBase::getSFEyePosition
        
            typedef ::OSG::SFPnt3f const * ( ::OSG::LookAtTransformationElementBase::*getSFEyePosition_function_type )(  ) const;
            
            LookAtTransformationElementBase_exposer.def( 
                "getSFEyePosition"
                , getSFEyePosition_function_type( &::OSG::LookAtTransformationElementBase::getSFEyePosition )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LookAtTransformationElementBase::getSFLookAtPosition
        
            typedef ::OSG::SFPnt3f const * ( ::OSG::LookAtTransformationElementBase::*getSFLookAtPosition_function_type )(  ) const;
            
            LookAtTransformationElementBase_exposer.def( 
                "getSFLookAtPosition"
                , getSFLookAtPosition_function_type( &::OSG::LookAtTransformationElementBase::getSFLookAtPosition )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LookAtTransformationElementBase::getSFUpDirection
        
            typedef ::OSG::SFVec3f const * ( ::OSG::LookAtTransformationElementBase::*getSFUpDirection_function_type )(  ) const;
            
            LookAtTransformationElementBase_exposer.def( 
                "getSFUpDirection"
                , getSFUpDirection_function_type( &::OSG::LookAtTransformationElementBase::getSFUpDirection )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LookAtTransformationElementBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::LookAtTransformationElementBase::*getType_function_type )(  ) ;
            
            LookAtTransformationElementBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::LookAtTransformationElementBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LookAtTransformationElementBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::LookAtTransformationElementBase::*getType_function_type )(  ) const;
            
            LookAtTransformationElementBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::LookAtTransformationElementBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::LookAtTransformationElementBase::getUpDirection
        
            typedef ::OSG::Vec3f const & ( ::OSG::LookAtTransformationElementBase::*getUpDirection_function_type )(  ) const;
            
            LookAtTransformationElementBase_exposer.def( 
                "getUpDirection"
                , getUpDirection_function_type( &::OSG::LookAtTransformationElementBase::getUpDirection )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::LookAtTransformationElementBase::setEyePosition
        
            typedef void ( ::OSG::LookAtTransformationElementBase::*setEyePosition_function_type )( ::OSG::Pnt3f const & ) ;
            
            LookAtTransformationElementBase_exposer.def( 
                "setEyePosition"
                , setEyePosition_function_type( &::OSG::LookAtTransformationElementBase::setEyePosition )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::setLookAtPosition
        
            typedef void ( ::OSG::LookAtTransformationElementBase::*setLookAtPosition_function_type )( ::OSG::Pnt3f const & ) ;
            
            LookAtTransformationElementBase_exposer.def( 
                "setLookAtPosition"
                , setLookAtPosition_function_type( &::OSG::LookAtTransformationElementBase::setLookAtPosition )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::LookAtTransformationElementBase::setUpDirection
        
            typedef void ( ::OSG::LookAtTransformationElementBase::*setUpDirection_function_type )( ::OSG::Vec3f const & ) ;
            
            LookAtTransformationElementBase_exposer.def( 
                "setUpDirection"
                , setUpDirection_function_type( &::OSG::LookAtTransformationElementBase::setUpDirection )
                , ( bp::arg("value") ) );
        
        }
        LookAtTransformationElementBase_exposer.staticmethod( "create" );
        LookAtTransformationElementBase_exposer.staticmethod( "createDependent" );
        LookAtTransformationElementBase_exposer.staticmethod( "createLocal" );
        LookAtTransformationElementBase_exposer.staticmethod( "getClassGroupId" );
        LookAtTransformationElementBase_exposer.staticmethod( "getClassType" );
        LookAtTransformationElementBase_exposer.staticmethod( "getClassTypeId" );
    }

}
