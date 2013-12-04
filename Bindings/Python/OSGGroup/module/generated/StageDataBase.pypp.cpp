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
#if WIN32
#pragma warning(disable : 4267)
#pragma warning(disable : 4344)
#endif

#include "boost/python.hpp"
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "StageDataBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_StageDataBase_class(){

    { //::OSG::StageDataBase
        typedef bp::class_< OSG::StageDataBase, bp::bases< ::OSG::TraversalData >, boost::noncopyable > StageDataBase_exposer_t;
        StageDataBase_exposer_t StageDataBase_exposer = StageDataBase_exposer_t( "StageDataBase", bp::no_init );
        bp::scope StageDataBase_scope( StageDataBase_exposer );
        bp::scope().attr("PartitionRangeBeginFieldId") = (int)OSG::StageDataBase::PartitionRangeBeginFieldId;
        bp::scope().attr("PartitionRangeEndFieldId") = (int)OSG::StageDataBase::PartitionRangeEndFieldId;
        bp::scope().attr("GroupModeFieldId") = (int)OSG::StageDataBase::GroupModeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::StageDataBase::NextFieldId;
        { //::OSG::StageDataBase::copyFromBin
        
            typedef void ( ::OSG::StageDataBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StageDataBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::StageDataBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StageDataBase::copyToBin
        
            typedef void ( ::OSG::StageDataBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            StageDataBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::StageDataBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::StageDataBase::create
        
            typedef ::OSG::StageDataTransitPtr ( *create_function_type )(  );
            
            StageDataBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::StageDataBase::create ) );
        
        }
        { //::OSG::StageDataBase::createDependent
        
            typedef ::OSG::StageDataTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            StageDataBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::StageDataBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::StageDataBase::createLocal
        
            typedef ::OSG::StageDataTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            StageDataBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::StageDataBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::StageDataBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::StageDataBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            StageDataBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::StageDataBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::StageDataBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            StageDataBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::StageDataBase::getClassGroupId ) );
        
        }
        { //::OSG::StageDataBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            StageDataBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::StageDataBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::StageDataBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            StageDataBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::StageDataBase::getClassTypeId ) );
        
        }
        { //::OSG::StageDataBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::StageDataBase::*getContainerSize_function_type )(  ) const;
            
            StageDataBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::StageDataBase::getContainerSize ) );
        
        }
        { //::OSG::StageDataBase::getGroupMode
        
            typedef ::OSG::Int32 ( ::OSG::StageDataBase::*getGroupMode_function_type )(  ) const;
            
            StageDataBase_exposer.def( 
                "getGroupMode"
                , getGroupMode_function_type( &::OSG::StageDataBase::getGroupMode ) );
        
        }
        { //::OSG::StageDataBase::getPartitionRangeBegin
        
            typedef ::OSG::Int32 ( ::OSG::StageDataBase::*getPartitionRangeBegin_function_type )(  ) const;
            
            StageDataBase_exposer.def( 
                "getPartitionRangeBegin"
                , getPartitionRangeBegin_function_type( &::OSG::StageDataBase::getPartitionRangeBegin ) );
        
        }
        { //::OSG::StageDataBase::getPartitionRangeEnd
        
            typedef ::OSG::Int32 ( ::OSG::StageDataBase::*getPartitionRangeEnd_function_type )(  ) const;
            
            StageDataBase_exposer.def( 
                "getPartitionRangeEnd"
                , getPartitionRangeEnd_function_type( &::OSG::StageDataBase::getPartitionRangeEnd ) );
        
        }
        { //::OSG::StageDataBase::getSFGroupMode
        
            typedef ::OSG::SFInt32 const * ( ::OSG::StageDataBase::*getSFGroupMode_function_type )(  ) const;
            
            StageDataBase_exposer.def( 
                "getSFGroupMode"
                , getSFGroupMode_function_type( &::OSG::StageDataBase::getSFGroupMode )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageDataBase::getSFPartitionRangeBegin
        
            typedef ::OSG::SFInt32 const * ( ::OSG::StageDataBase::*getSFPartitionRangeBegin_function_type )(  ) const;
            
            StageDataBase_exposer.def( 
                "getSFPartitionRangeBegin"
                , getSFPartitionRangeBegin_function_type( &::OSG::StageDataBase::getSFPartitionRangeBegin )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageDataBase::getSFPartitionRangeEnd
        
            typedef ::OSG::SFInt32 const * ( ::OSG::StageDataBase::*getSFPartitionRangeEnd_function_type )(  ) const;
            
            StageDataBase_exposer.def( 
                "getSFPartitionRangeEnd"
                , getSFPartitionRangeEnd_function_type( &::OSG::StageDataBase::getSFPartitionRangeEnd )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageDataBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::StageDataBase::*getType_function_type )(  ) ;
            
            StageDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StageDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageDataBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::StageDataBase::*getType_function_type )(  ) const;
            
            StageDataBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::StageDataBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::StageDataBase::setGroupMode
        
            typedef void ( ::OSG::StageDataBase::*setGroupMode_function_type )( ::OSG::Int32 const ) ;
            
            StageDataBase_exposer.def( 
                "setGroupMode"
                , setGroupMode_function_type( &::OSG::StageDataBase::setGroupMode )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StageDataBase::setPartitionRangeBegin
        
            typedef void ( ::OSG::StageDataBase::*setPartitionRangeBegin_function_type )( ::OSG::Int32 const ) ;
            
            StageDataBase_exposer.def( 
                "setPartitionRangeBegin"
                , setPartitionRangeBegin_function_type( &::OSG::StageDataBase::setPartitionRangeBegin )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::StageDataBase::setPartitionRangeEnd
        
            typedef void ( ::OSG::StageDataBase::*setPartitionRangeEnd_function_type )( ::OSG::Int32 const ) ;
            
            StageDataBase_exposer.def( 
                "setPartitionRangeEnd"
                , setPartitionRangeEnd_function_type( &::OSG::StageDataBase::setPartitionRangeEnd )
                , ( bp::arg("value") ) );
        
        }
        StageDataBase_exposer.staticmethod( "create" );
        StageDataBase_exposer.staticmethod( "createDependent" );
        StageDataBase_exposer.staticmethod( "createLocal" );
        StageDataBase_exposer.staticmethod( "getClassGroupId" );
        StageDataBase_exposer.staticmethod( "getClassType" );
        StageDataBase_exposer.staticmethod( "getClassTypeId" );
    }

}
