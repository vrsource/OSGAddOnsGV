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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SkeletonBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list SkeletonBase_getMFRoots(OSG::SkeletonBase *self)
{
   boost::python::list result;
   OSG::MFUnrecNodePtr const * mf_data = self->getMFRoots();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::Node::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list SkeletonBase_getMFJoints(OSG::SkeletonBase *self)
{
   boost::python::list result;
   OSG::MFUnrecChildBaseSkeletonJointPtr const * mf_data = self->getMFJoints();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::BaseSkeletonJoint::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list SkeletonBase_getMFParentJoints(OSG::SkeletonBase *self)
{
   boost::python::list result;
   OSG::MFUnrecBaseSkeletonJointPtr const * mf_data = self->getMFParentJoints();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::BaseSkeletonJoint::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

boost::python::list SkeletonBase_getMFJointMatrices(OSG::SkeletonBase *self)
{
   boost::python::list result;
   OSG::MFMatrix const * mf_data = self->getMFJointMatrices();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list SkeletonBase_getMFJointNormalMatrices(OSG::SkeletonBase *self)
{
   boost::python::list result;
   OSG::MFMatrix const * mf_data = self->getMFJointNormalMatrices();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_SkeletonBase_class(){

    { //::OSG::SkeletonBase
        typedef bp::class_< OSG::SkeletonBase, boost::noncopyable > SkeletonBase_exposer_t;
        SkeletonBase_exposer_t SkeletonBase_exposer = SkeletonBase_exposer_t( "SkeletonBase", bp::no_init );
        bp::scope SkeletonBase_scope( SkeletonBase_exposer );
        bp::scope().attr("RootsFieldId") = (int)OSG::SkeletonBase::RootsFieldId;
        bp::scope().attr("JointsFieldId") = (int)OSG::SkeletonBase::JointsFieldId;
        bp::scope().attr("ParentJointsFieldId") = (int)OSG::SkeletonBase::ParentJointsFieldId;
        bp::scope().attr("JointMatricesFieldId") = (int)OSG::SkeletonBase::JointMatricesFieldId;
        bp::scope().attr("JointNormalMatricesFieldId") = (int)OSG::SkeletonBase::JointNormalMatricesFieldId;
        bp::scope().attr("UseInvBindMatrixFieldId") = (int)OSG::SkeletonBase::UseInvBindMatrixFieldId;
        bp::scope().attr("CalcNormalMatricesFieldId") = (int)OSG::SkeletonBase::CalcNormalMatricesFieldId;
        bp::scope().attr("JointsChangedFieldId") = (int)OSG::SkeletonBase::JointsChangedFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SkeletonBase::NextFieldId;
        { //::OSG::SkeletonBase::assignJoints
        
            typedef void ( ::OSG::SkeletonBase::*assignJoints_function_type )( ::OSG::MFUnrecChildBaseSkeletonJointPtr const & ) ;
            
            SkeletonBase_exposer.def( 
                "assignJoints"
                , assignJoints_function_type( &::OSG::SkeletonBase::assignJoints )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::assignParentJoints
        
            typedef void ( ::OSG::SkeletonBase::*assignParentJoints_function_type )( ::OSG::MFUnrecBaseSkeletonJointPtr const & ) ;
            
            SkeletonBase_exposer.def( 
                "assignParentJoints"
                , assignParentJoints_function_type( &::OSG::SkeletonBase::assignParentJoints )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::assignRoots
        
            typedef void ( ::OSG::SkeletonBase::*assignRoots_function_type )( ::OSG::MFUnrecNodePtr const & ) ;
            
            SkeletonBase_exposer.def( 
                "assignRoots"
                , assignRoots_function_type( &::OSG::SkeletonBase::assignRoots )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::clearJoints
        
            typedef void ( ::OSG::SkeletonBase::*clearJoints_function_type )(  ) ;
            
            SkeletonBase_exposer.def( 
                "clearJoints"
                , clearJoints_function_type( &::OSG::SkeletonBase::clearJoints ) );
        
        }
        { //::OSG::SkeletonBase::clearParentJoints
        
            typedef void ( ::OSG::SkeletonBase::*clearParentJoints_function_type )(  ) ;
            
            SkeletonBase_exposer.def( 
                "clearParentJoints"
                , clearParentJoints_function_type( &::OSG::SkeletonBase::clearParentJoints ) );
        
        }
        { //::OSG::SkeletonBase::clearRoots
        
            typedef void ( ::OSG::SkeletonBase::*clearRoots_function_type )(  ) ;
            
            SkeletonBase_exposer.def( 
                "clearRoots"
                , clearRoots_function_type( &::OSG::SkeletonBase::clearRoots ) );
        
        }
        { //::OSG::SkeletonBase::copyFromBin
        
            typedef void ( ::OSG::SkeletonBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SkeletonBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SkeletonBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SkeletonBase::copyToBin
        
            typedef void ( ::OSG::SkeletonBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SkeletonBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SkeletonBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SkeletonBase::create
        
            typedef ::OSG::SkeletonTransitPtr ( *create_function_type )(  );
            
            SkeletonBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::SkeletonBase::create ) );
        
        }
        { //::OSG::SkeletonBase::createDependent
        
            typedef ::OSG::SkeletonTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            SkeletonBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::SkeletonBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::SkeletonBase::createLocal
        
            typedef ::OSG::SkeletonTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            SkeletonBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::SkeletonBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::SkeletonBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SkeletonBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SkeletonBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SkeletonBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SkeletonBase::getCalcNormalMatrices
        
            typedef bool ( ::OSG::SkeletonBase::*getCalcNormalMatrices_function_type )(  ) const;
            
            SkeletonBase_exposer.def( 
                "getCalcNormalMatrices"
                , getCalcNormalMatrices_function_type( &::OSG::SkeletonBase::getCalcNormalMatrices ) );
        
        }
        { //::OSG::SkeletonBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SkeletonBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SkeletonBase::getClassGroupId ) );
        
        }
        { //::OSG::SkeletonBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SkeletonBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SkeletonBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SkeletonBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SkeletonBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SkeletonBase::getClassTypeId ) );
        
        }
        { //::OSG::SkeletonBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SkeletonBase::*getContainerSize_function_type )(  ) const;
            
            SkeletonBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SkeletonBase::getContainerSize ) );
        
        }
        { //::OSG::SkeletonBase::getJointMatrices
        
            typedef ::OSG::Matrix const & ( ::OSG::SkeletonBase::*getJointMatrices_function_type )( ::OSG::UInt32 const ) const;
            
            SkeletonBase_exposer.def( 
                "getJointMatrices"
                , getJointMatrices_function_type( &::OSG::SkeletonBase::getJointMatrices )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkeletonBase::getJointNormalMatrices
        
            typedef ::OSG::Matrix const & ( ::OSG::SkeletonBase::*getJointNormalMatrices_function_type )( ::OSG::UInt32 const ) const;
            
            SkeletonBase_exposer.def( 
                "getJointNormalMatrices"
                , getJointNormalMatrices_function_type( &::OSG::SkeletonBase::getJointNormalMatrices )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkeletonBase::getJoints
        
            typedef ::OSG::BaseSkeletonJoint * ( ::OSG::SkeletonBase::*getJoints_function_type )( ::OSG::UInt32 const ) const;
            
            SkeletonBase_exposer.def( 
                "getJoints"
                , getJoints_function_type( &::OSG::SkeletonBase::getJoints )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkeletonBase::getJointsChanged
        
            typedef ::OSG::OSGAny const & ( ::OSG::SkeletonBase::*getJointsChanged_function_type )(  ) const;
            
            SkeletonBase_exposer.def( 
                "getJointsChanged"
                , getJointsChanged_function_type( &::OSG::SkeletonBase::getJointsChanged )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::SkeletonBase::getParentJoints
        
            typedef ::OSG::BaseSkeletonJoint * ( ::OSG::SkeletonBase::*getParentJoints_function_type )( ::OSG::UInt32 const ) const;
            
            SkeletonBase_exposer.def( 
                "getParentJoints"
                , getParentJoints_function_type( &::OSG::SkeletonBase::getParentJoints )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkeletonBase::getRoots
        
            typedef ::OSG::Node * ( ::OSG::SkeletonBase::*getRoots_function_type )( ::OSG::UInt32 const ) const;
            
            SkeletonBase_exposer.def( 
                "getRoots"
                , getRoots_function_type( &::OSG::SkeletonBase::getRoots )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkeletonBase::getSFCalcNormalMatrices
        
            typedef ::OSG::SFBool const * ( ::OSG::SkeletonBase::*getSFCalcNormalMatrices_function_type )(  ) const;
            
            SkeletonBase_exposer.def( 
                "getSFCalcNormalMatrices"
                , getSFCalcNormalMatrices_function_type( &::OSG::SkeletonBase::getSFCalcNormalMatrices )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkeletonBase::getSFJointsChanged
        
            typedef ::OSG::SFOSGAny const * ( ::OSG::SkeletonBase::*getSFJointsChanged_function_type )(  ) const;
            
            SkeletonBase_exposer.def( 
                "getSFJointsChanged"
                , getSFJointsChanged_function_type( &::OSG::SkeletonBase::getSFJointsChanged )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkeletonBase::getSFUseInvBindMatrix
        
            typedef ::OSG::SFBool const * ( ::OSG::SkeletonBase::*getSFUseInvBindMatrix_function_type )(  ) const;
            
            SkeletonBase_exposer.def( 
                "getSFUseInvBindMatrix"
                , getSFUseInvBindMatrix_function_type( &::OSG::SkeletonBase::getSFUseInvBindMatrix )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkeletonBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SkeletonBase::*getType_function_type )(  ) ;
            
            SkeletonBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SkeletonBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkeletonBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SkeletonBase::*getType_function_type )(  ) const;
            
            SkeletonBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SkeletonBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkeletonBase::getUseInvBindMatrix
        
            typedef bool ( ::OSG::SkeletonBase::*getUseInvBindMatrix_function_type )(  ) const;
            
            SkeletonBase_exposer.def( 
                "getUseInvBindMatrix"
                , getUseInvBindMatrix_function_type( &::OSG::SkeletonBase::getUseInvBindMatrix ) );
        
        }
        { //::OSG::SkeletonBase::pushToJoints
        
            typedef void ( ::OSG::SkeletonBase::*pushToJoints_function_type )( ::OSG::BaseSkeletonJoint * const ) ;
            
            SkeletonBase_exposer.def( 
                "pushToJoints"
                , pushToJoints_function_type( &::OSG::SkeletonBase::pushToJoints )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::pushToParentJoints
        
            typedef void ( ::OSG::SkeletonBase::*pushToParentJoints_function_type )( ::OSG::BaseSkeletonJoint * const ) ;
            
            SkeletonBase_exposer.def( 
                "pushToParentJoints"
                , pushToParentJoints_function_type( &::OSG::SkeletonBase::pushToParentJoints )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::pushToRoots
        
            typedef void ( ::OSG::SkeletonBase::*pushToRoots_function_type )( ::OSG::Node * const ) ;
            
            SkeletonBase_exposer.def( 
                "pushToRoots"
                , pushToRoots_function_type( &::OSG::SkeletonBase::pushToRoots )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::removeFromJoints
        
            typedef void ( ::OSG::SkeletonBase::*removeFromJoints_function_type )( ::OSG::UInt32 ) ;
            
            SkeletonBase_exposer.def( 
                "removeFromJoints"
                , removeFromJoints_function_type( &::OSG::SkeletonBase::removeFromJoints )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::SkeletonBase::removeFromParentJoints
        
            typedef void ( ::OSG::SkeletonBase::*removeFromParentJoints_function_type )( ::OSG::UInt32 ) ;
            
            SkeletonBase_exposer.def( 
                "removeFromParentJoints"
                , removeFromParentJoints_function_type( &::OSG::SkeletonBase::removeFromParentJoints )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::SkeletonBase::removeFromRoots
        
            typedef void ( ::OSG::SkeletonBase::*removeFromRoots_function_type )( ::OSG::UInt32 ) ;
            
            SkeletonBase_exposer.def( 
                "removeFromRoots"
                , removeFromRoots_function_type( &::OSG::SkeletonBase::removeFromRoots )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::SkeletonBase::removeObjFromJoints
        
            typedef void ( ::OSG::SkeletonBase::*removeObjFromJoints_function_type )( ::OSG::BaseSkeletonJoint * const ) ;
            
            SkeletonBase_exposer.def( 
                "removeObjFromJoints"
                , removeObjFromJoints_function_type( &::OSG::SkeletonBase::removeObjFromJoints )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::removeObjFromParentJoints
        
            typedef void ( ::OSG::SkeletonBase::*removeObjFromParentJoints_function_type )( ::OSG::BaseSkeletonJoint * const ) ;
            
            SkeletonBase_exposer.def( 
                "removeObjFromParentJoints"
                , removeObjFromParentJoints_function_type( &::OSG::SkeletonBase::removeObjFromParentJoints )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::removeObjFromRoots
        
            typedef void ( ::OSG::SkeletonBase::*removeObjFromRoots_function_type )( ::OSG::Node * const ) ;
            
            SkeletonBase_exposer.def( 
                "removeObjFromRoots"
                , removeObjFromRoots_function_type( &::OSG::SkeletonBase::removeObjFromRoots )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::setCalcNormalMatrices
        
            typedef void ( ::OSG::SkeletonBase::*setCalcNormalMatrices_function_type )( bool const ) ;
            
            SkeletonBase_exposer.def( 
                "setCalcNormalMatrices"
                , setCalcNormalMatrices_function_type( &::OSG::SkeletonBase::setCalcNormalMatrices )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::setJointsChanged
        
            typedef void ( ::OSG::SkeletonBase::*setJointsChanged_function_type )( ::OSG::OSGAny const & ) ;
            
            SkeletonBase_exposer.def( 
                "setJointsChanged"
                , setJointsChanged_function_type( &::OSG::SkeletonBase::setJointsChanged )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::SkeletonBase::setUseInvBindMatrix
        
            typedef void ( ::OSG::SkeletonBase::*setUseInvBindMatrix_function_type )( bool const ) ;
            
            SkeletonBase_exposer.def( 
                "setUseInvBindMatrix"
                , setUseInvBindMatrix_function_type( &::OSG::SkeletonBase::setUseInvBindMatrix )
                , ( bp::arg("value") ) );
        
        }
        SkeletonBase_exposer.staticmethod( "create" );
        SkeletonBase_exposer.staticmethod( "createDependent" );
        SkeletonBase_exposer.staticmethod( "createLocal" );
        SkeletonBase_exposer.staticmethod( "getClassGroupId" );
        SkeletonBase_exposer.staticmethod( "getClassType" );
        SkeletonBase_exposer.staticmethod( "getClassTypeId" );
        SkeletonBase_exposer.def("getMFRoots",SkeletonBase_getMFRoots);
        SkeletonBase_exposer.def("getMFJoints",SkeletonBase_getMFJoints);
        SkeletonBase_exposer.def("getMFParentJoints",SkeletonBase_getMFParentJoints);
        SkeletonBase_exposer.def("getMFJointMatrices",SkeletonBase_getMFJointMatrices);
        SkeletonBase_exposer.def("getMFJointNormalMatrices",SkeletonBase_getMFJointNormalMatrices);
    }

}
