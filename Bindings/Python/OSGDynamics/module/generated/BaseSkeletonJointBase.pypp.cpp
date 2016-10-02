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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "BaseSkeletonJointBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_BaseSkeletonJointBase_class(){

    { //::OSG::BaseSkeletonJointBase
        typedef bp::class_< OSG::BaseSkeletonJointBase, bp::bases< ::OSG::Group >, boost::noncopyable > BaseSkeletonJointBase_exposer_t;
        BaseSkeletonJointBase_exposer_t BaseSkeletonJointBase_exposer = BaseSkeletonJointBase_exposer_t( "BaseSkeletonJointBase", bp::no_init );
        bp::scope BaseSkeletonJointBase_scope( BaseSkeletonJointBase_exposer );
        bp::scope().attr("SkeletonFieldId") = (int)OSG::BaseSkeletonJointBase::SkeletonFieldId;
        bp::scope().attr("JointIdFieldId") = (int)OSG::BaseSkeletonJointBase::JointIdFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::BaseSkeletonJointBase::NextFieldId;
        { //::OSG::BaseSkeletonJointBase::copyFromBin
        
            typedef void ( ::OSG::BaseSkeletonJointBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            BaseSkeletonJointBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::BaseSkeletonJointBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::BaseSkeletonJointBase::copyToBin
        
            typedef void ( ::OSG::BaseSkeletonJointBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            BaseSkeletonJointBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::BaseSkeletonJointBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::BaseSkeletonJointBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::BaseSkeletonJointBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            BaseSkeletonJointBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::BaseSkeletonJointBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::BaseSkeletonJointBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            BaseSkeletonJointBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::BaseSkeletonJointBase::getClassGroupId ) );
        
        }
        { //::OSG::BaseSkeletonJointBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            BaseSkeletonJointBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::BaseSkeletonJointBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::BaseSkeletonJointBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            BaseSkeletonJointBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::BaseSkeletonJointBase::getClassTypeId ) );
        
        }
        { //::OSG::BaseSkeletonJointBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::BaseSkeletonJointBase::*getContainerSize_function_type )(  ) const;
            
            BaseSkeletonJointBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::BaseSkeletonJointBase::getContainerSize ) );
        
        }
        { //::OSG::BaseSkeletonJointBase::getJointId
        
            typedef ::OSG::Int16 ( ::OSG::BaseSkeletonJointBase::*getJointId_function_type )(  ) const;
            
            BaseSkeletonJointBase_exposer.def( 
                "getJointId"
                , getJointId_function_type( &::OSG::BaseSkeletonJointBase::getJointId ) );
        
        }
        { //::OSG::BaseSkeletonJointBase::getSFJointId
        
            typedef ::OSG::SFInt16 const * ( ::OSG::BaseSkeletonJointBase::*getSFJointId_function_type )(  ) const;
            
            BaseSkeletonJointBase_exposer.def( 
                "getSFJointId"
                , getSFJointId_function_type( &::OSG::BaseSkeletonJointBase::getSFJointId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BaseSkeletonJointBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::BaseSkeletonJointBase::*getType_function_type )(  ) ;
            
            BaseSkeletonJointBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::BaseSkeletonJointBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BaseSkeletonJointBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::BaseSkeletonJointBase::*getType_function_type )(  ) const;
            
            BaseSkeletonJointBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::BaseSkeletonJointBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::BaseSkeletonJointBase::setJointId
        
            typedef void ( ::OSG::BaseSkeletonJointBase::*setJointId_function_type )( ::OSG::Int16 const ) ;
            
            BaseSkeletonJointBase_exposer.def( 
                "setJointId"
                , setJointId_function_type( &::OSG::BaseSkeletonJointBase::setJointId )
                , ( bp::arg("value") ) );
        
        }
        BaseSkeletonJointBase_exposer.staticmethod( "getClassGroupId" );
        BaseSkeletonJointBase_exposer.staticmethod( "getClassType" );
        BaseSkeletonJointBase_exposer.staticmethod( "getClassTypeId" );
    }

}
