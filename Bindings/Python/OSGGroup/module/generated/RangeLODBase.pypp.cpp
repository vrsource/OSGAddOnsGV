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
#endif

#include "boost/python.hpp"
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "RangeLODBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_RangeLODBase_class(){

    { //::OSG::RangeLODBase
        typedef bp::class_< OSG::RangeLODBase, bp::bases< ::OSG::Group >, boost::noncopyable > RangeLODBase_exposer_t;
        RangeLODBase_exposer_t RangeLODBase_exposer = RangeLODBase_exposer_t( "RangeLODBase", bp::no_init );
        bp::scope RangeLODBase_scope( RangeLODBase_exposer );
        bp::scope().attr("CenterFieldId") = (int)OSG::RangeLODBase::CenterFieldId;
        bp::scope().attr("SwitchInFieldId") = (int)OSG::RangeLODBase::SwitchInFieldId;
        bp::scope().attr("SwitchOutFieldId") = (int)OSG::RangeLODBase::SwitchOutFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::RangeLODBase::NextFieldId;
        { //::OSG::RangeLODBase::copyFromBin
        
            typedef void ( ::OSG::RangeLODBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            RangeLODBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::RangeLODBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::RangeLODBase::copyToBin
        
            typedef void ( ::OSG::RangeLODBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            RangeLODBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::RangeLODBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::RangeLODBase::create
        
            typedef ::OSG::RangeLODTransitPtr ( *create_function_type )(  );
            
            RangeLODBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::RangeLODBase::create ) );
        
        }
        { //::OSG::RangeLODBase::createDependent
        
            typedef ::OSG::RangeLODTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            RangeLODBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::RangeLODBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::RangeLODBase::createLocal
        
            typedef ::OSG::RangeLODTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            RangeLODBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::RangeLODBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::RangeLODBase::getBinSize
        
            typedef ::OSG::UInt32 ( ::OSG::RangeLODBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            RangeLODBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::RangeLODBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::RangeLODBase::getCenter
        
            typedef ::OSG::Pnt3f const & ( ::OSG::RangeLODBase::*getCenter_function_type )(  ) const;
            
            RangeLODBase_exposer.def( 
                "getCenter"
                , getCenter_function_type( &::OSG::RangeLODBase::getCenter )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::RangeLODBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            RangeLODBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::RangeLODBase::getClassGroupId ) );
        
        }
        { //::OSG::RangeLODBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            RangeLODBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::RangeLODBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::RangeLODBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            RangeLODBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::RangeLODBase::getClassTypeId ) );
        
        }
        { //::OSG::RangeLODBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::RangeLODBase::*getContainerSize_function_type )(  ) const;
            
            RangeLODBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::RangeLODBase::getContainerSize ) );
        
        }
        { //::OSG::RangeLODBase::getSFCenter
        
            typedef ::OSG::SFPnt3f const * ( ::OSG::RangeLODBase::*getSFCenter_function_type )(  ) const;
            
            RangeLODBase_exposer.def( 
                "getSFCenter"
                , getSFCenter_function_type( &::OSG::RangeLODBase::getSFCenter )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RangeLODBase::getSFSwitchIn
        
            typedef ::OSG::SFReal32 const * ( ::OSG::RangeLODBase::*getSFSwitchIn_function_type )(  ) const;
            
            RangeLODBase_exposer.def( 
                "getSFSwitchIn"
                , getSFSwitchIn_function_type( &::OSG::RangeLODBase::getSFSwitchIn )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RangeLODBase::getSFSwitchOut
        
            typedef ::OSG::SFReal32 const * ( ::OSG::RangeLODBase::*getSFSwitchOut_function_type )(  ) const;
            
            RangeLODBase_exposer.def( 
                "getSFSwitchOut"
                , getSFSwitchOut_function_type( &::OSG::RangeLODBase::getSFSwitchOut )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RangeLODBase::getSwitchIn
        
            typedef ::OSG::Real32 ( ::OSG::RangeLODBase::*getSwitchIn_function_type )(  ) const;
            
            RangeLODBase_exposer.def( 
                "getSwitchIn"
                , getSwitchIn_function_type( &::OSG::RangeLODBase::getSwitchIn ) );
        
        }
        { //::OSG::RangeLODBase::getSwitchOut
        
            typedef ::OSG::Real32 ( ::OSG::RangeLODBase::*getSwitchOut_function_type )(  ) const;
            
            RangeLODBase_exposer.def( 
                "getSwitchOut"
                , getSwitchOut_function_type( &::OSG::RangeLODBase::getSwitchOut ) );
        
        }
        { //::OSG::RangeLODBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::RangeLODBase::*getType_function_type )(  ) ;
            
            RangeLODBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::RangeLODBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RangeLODBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::RangeLODBase::*getType_function_type )(  ) const;
            
            RangeLODBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::RangeLODBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::RangeLODBase::setCenter
        
            typedef void ( ::OSG::RangeLODBase::*setCenter_function_type )( ::OSG::Pnt3f const & ) ;
            
            RangeLODBase_exposer.def( 
                "setCenter"
                , setCenter_function_type( &::OSG::RangeLODBase::setCenter )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::RangeLODBase::setSwitchIn
        
            typedef void ( ::OSG::RangeLODBase::*setSwitchIn_function_type )( ::OSG::Real32 const ) ;
            
            RangeLODBase_exposer.def( 
                "setSwitchIn"
                , setSwitchIn_function_type( &::OSG::RangeLODBase::setSwitchIn )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::RangeLODBase::setSwitchOut
        
            typedef void ( ::OSG::RangeLODBase::*setSwitchOut_function_type )( ::OSG::Real32 const ) ;
            
            RangeLODBase_exposer.def( 
                "setSwitchOut"
                , setSwitchOut_function_type( &::OSG::RangeLODBase::setSwitchOut )
                , ( bp::arg("value") ) );
        
        }
        RangeLODBase_exposer.staticmethod( "create" );
        RangeLODBase_exposer.staticmethod( "createDependent" );
        RangeLODBase_exposer.staticmethod( "createLocal" );
        RangeLODBase_exposer.staticmethod( "getClassGroupId" );
        RangeLODBase_exposer.staticmethod( "getClassType" );
        RangeLODBase_exposer.staticmethod( "getClassTypeId" );
    }

}