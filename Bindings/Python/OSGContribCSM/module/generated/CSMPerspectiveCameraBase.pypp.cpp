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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMPerspectiveCameraBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CSMPerspectiveCameraBase_class(){

    { //::OSG::CSMPerspectiveCameraBase
        typedef bp::class_< OSG::CSMPerspectiveCameraBase, bp::bases< ::OSG::PerspectiveCamera >, boost::noncopyable > CSMPerspectiveCameraBase_exposer_t;
        CSMPerspectiveCameraBase_exposer_t CSMPerspectiveCameraBase_exposer = CSMPerspectiveCameraBase_exposer_t( "CSMPerspectiveCameraBase", bp::no_init );
        bp::scope CSMPerspectiveCameraBase_scope( CSMPerspectiveCameraBase_exposer );
        bp::scope().attr("EyeSeparationFieldId") = (int)OSG::CSMPerspectiveCameraBase::EyeSeparationFieldId;
        bp::scope().attr("ZeroParallaxFieldId") = (int)OSG::CSMPerspectiveCameraBase::ZeroParallaxFieldId;
        bp::scope().attr("HeadBeaconFieldId") = (int)OSG::CSMPerspectiveCameraBase::HeadBeaconFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CSMPerspectiveCameraBase::NextFieldId;
        { //::OSG::CSMPerspectiveCameraBase::copyFromBin
        
            typedef void ( ::OSG::CSMPerspectiveCameraBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CSMPerspectiveCameraBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::copyToBin
        
            typedef void ( ::OSG::CSMPerspectiveCameraBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CSMPerspectiveCameraBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::create
        
            typedef ::OSG::CSMPerspectiveCameraTransitPtr ( *create_function_type )(  );
            
            CSMPerspectiveCameraBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CSMPerspectiveCameraBase::create ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::createDependent
        
            typedef ::OSG::CSMPerspectiveCameraTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CSMPerspectiveCameraBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CSMPerspectiveCameraBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::createLocal
        
            typedef ::OSG::CSMPerspectiveCameraTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CSMPerspectiveCameraBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CSMPerspectiveCameraBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CSMPerspectiveCameraBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CSMPerspectiveCameraBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CSMPerspectiveCameraBase::getClassGroupId ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CSMPerspectiveCameraBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CSMPerspectiveCameraBase::getClassTypeId ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CSMPerspectiveCameraBase::*getContainerSize_function_type )(  ) const;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CSMPerspectiveCameraBase::getContainerSize ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getEyeSeparation
        
            typedef ::OSG::Real32 ( ::OSG::CSMPerspectiveCameraBase::*getEyeSeparation_function_type )(  ) const;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getEyeSeparation"
                , getEyeSeparation_function_type( &::OSG::CSMPerspectiveCameraBase::getEyeSeparation ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getHeadBeacon
        
            typedef ::OSG::Node * ( ::OSG::CSMPerspectiveCameraBase::*getHeadBeacon_function_type )(  ) const;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getHeadBeacon"
                , getHeadBeacon_function_type( &::OSG::CSMPerspectiveCameraBase::getHeadBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getSFEyeSeparation
        
            typedef ::OSG::SFReal32 const * ( ::OSG::CSMPerspectiveCameraBase::*getSFEyeSeparation_function_type )(  ) const;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getSFEyeSeparation"
                , getSFEyeSeparation_function_type( &::OSG::CSMPerspectiveCameraBase::getSFEyeSeparation )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getSFHeadBeacon
        
            typedef ::OSG::SFWeakNodePtr const * ( ::OSG::CSMPerspectiveCameraBase::*getSFHeadBeacon_function_type )(  ) const;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getSFHeadBeacon"
                , getSFHeadBeacon_function_type( &::OSG::CSMPerspectiveCameraBase::getSFHeadBeacon )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getSFZeroParallax
        
            typedef ::OSG::SFReal32 const * ( ::OSG::CSMPerspectiveCameraBase::*getSFZeroParallax_function_type )(  ) const;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getSFZeroParallax"
                , getSFZeroParallax_function_type( &::OSG::CSMPerspectiveCameraBase::getSFZeroParallax )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CSMPerspectiveCameraBase::*getType_function_type )(  ) ;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMPerspectiveCameraBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CSMPerspectiveCameraBase::*getType_function_type )(  ) const;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMPerspectiveCameraBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::getZeroParallax
        
            typedef ::OSG::Real32 ( ::OSG::CSMPerspectiveCameraBase::*getZeroParallax_function_type )(  ) const;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "getZeroParallax"
                , getZeroParallax_function_type( &::OSG::CSMPerspectiveCameraBase::getZeroParallax ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::setEyeSeparation
        
            typedef void ( ::OSG::CSMPerspectiveCameraBase::*setEyeSeparation_function_type )( ::OSG::Real32 const ) ;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "setEyeSeparation"
                , setEyeSeparation_function_type( &::OSG::CSMPerspectiveCameraBase::setEyeSeparation )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::setHeadBeacon
        
            typedef void ( ::OSG::CSMPerspectiveCameraBase::*setHeadBeacon_function_type )( ::OSG::Node * const ) ;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "setHeadBeacon"
                , setHeadBeacon_function_type( &::OSG::CSMPerspectiveCameraBase::setHeadBeacon )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMPerspectiveCameraBase::setZeroParallax
        
            typedef void ( ::OSG::CSMPerspectiveCameraBase::*setZeroParallax_function_type )( ::OSG::Real32 const ) ;
            
            CSMPerspectiveCameraBase_exposer.def( 
                "setZeroParallax"
                , setZeroParallax_function_type( &::OSG::CSMPerspectiveCameraBase::setZeroParallax )
                , ( bp::arg("value") ) );
        
        }
        CSMPerspectiveCameraBase_exposer.staticmethod( "create" );
        CSMPerspectiveCameraBase_exposer.staticmethod( "createDependent" );
        CSMPerspectiveCameraBase_exposer.staticmethod( "createLocal" );
        CSMPerspectiveCameraBase_exposer.staticmethod( "getClassGroupId" );
        CSMPerspectiveCameraBase_exposer.staticmethod( "getClassType" );
        CSMPerspectiveCameraBase_exposer.staticmethod( "getClassTypeId" );
    }

}
