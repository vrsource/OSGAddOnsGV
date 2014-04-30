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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SkinningAlgorithmBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct SkinningAlgorithmBase_wrapper : OSG::SkinningAlgorithmBase, bp::wrapper< OSG::SkinningAlgorithmBase > {

    virtual void execute( ::OSG::DrawEnv * pEnv ){
        bp::override func_execute = this->get_override( "execute" );
        func_execute( boost::python::ptr(pEnv) );
    }

    virtual ::OSG::ActionBase::ResultE renderEnter( ::OSG::Action * pAction ){
        bp::override func_renderEnter = this->get_override( "renderEnter" );
        return func_renderEnter( boost::python::ptr(pAction) );
    }

    virtual ::OSG::ActionBase::ResultE renderLeave( ::OSG::Action * pAction ){
        bp::override func_renderLeave = this->get_override( "renderLeave" );
        return func_renderLeave( boost::python::ptr(pAction) );
    }

};

void register_SkinningAlgorithmBase_class(){

    { //::OSG::SkinningAlgorithmBase
        typedef bp::class_< SkinningAlgorithmBase_wrapper, bp::bases< ::OSG::Algorithm >, boost::noncopyable > SkinningAlgorithmBase_exposer_t;
        SkinningAlgorithmBase_exposer_t SkinningAlgorithmBase_exposer = SkinningAlgorithmBase_exposer_t( "SkinningAlgorithmBase", bp::no_init );
        bp::scope SkinningAlgorithmBase_scope( SkinningAlgorithmBase_exposer );
        bp::scope().attr("SkinFieldId") = (int)OSG::SkinningAlgorithmBase::SkinFieldId;
        bp::scope().attr("SkeletonFieldId") = (int)OSG::SkinningAlgorithmBase::SkeletonFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::SkinningAlgorithmBase::NextFieldId;
        { //::OSG::SkinningAlgorithmBase::copyFromBin
        
            typedef void ( ::OSG::SkinningAlgorithmBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SkinningAlgorithmBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::SkinningAlgorithmBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SkinningAlgorithmBase::copyToBin
        
            typedef void ( ::OSG::SkinningAlgorithmBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SkinningAlgorithmBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::SkinningAlgorithmBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::SkinningAlgorithmBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::SkinningAlgorithmBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SkinningAlgorithmBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::SkinningAlgorithmBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::SkinningAlgorithmBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            SkinningAlgorithmBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::SkinningAlgorithmBase::getClassGroupId ) );
        
        }
        { //::OSG::SkinningAlgorithmBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            SkinningAlgorithmBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::SkinningAlgorithmBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::SkinningAlgorithmBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            SkinningAlgorithmBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::SkinningAlgorithmBase::getClassTypeId ) );
        
        }
        { //::OSG::SkinningAlgorithmBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::SkinningAlgorithmBase::*getContainerSize_function_type )(  ) const;
            
            SkinningAlgorithmBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::SkinningAlgorithmBase::getContainerSize ) );
        
        }
        { //::OSG::SkinningAlgorithmBase::getSFSkeleton
        
            typedef ::OSG::SFUnrecSkeletonPtr const * ( ::OSG::SkinningAlgorithmBase::*getSFSkeleton_function_type )(  ) const;
            
            SkinningAlgorithmBase_exposer.def( 
                "getSFSkeleton"
                , getSFSkeleton_function_type( &::OSG::SkinningAlgorithmBase::getSFSkeleton )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkinningAlgorithmBase::getSkeleton
        
            typedef ::OSG::Skeleton * ( ::OSG::SkinningAlgorithmBase::*getSkeleton_function_type )(  ) const;
            
            SkinningAlgorithmBase_exposer.def( 
                "getSkeleton"
                , getSkeleton_function_type( &::OSG::SkinningAlgorithmBase::getSkeleton )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkinningAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::SkinningAlgorithmBase::*getType_function_type )(  ) ;
            
            SkinningAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SkinningAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkinningAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::SkinningAlgorithmBase::*getType_function_type )(  ) const;
            
            SkinningAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::SkinningAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SkinningAlgorithmBase::setSkeleton
        
            typedef void ( ::OSG::SkinningAlgorithmBase::*setSkeleton_function_type )( ::OSG::Skeleton * const ) ;
            
            SkinningAlgorithmBase_exposer.def( 
                "setSkeleton"
                , setSkeleton_function_type( &::OSG::SkinningAlgorithmBase::setSkeleton )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Algorithm::execute
        
            typedef void ( ::OSG::Algorithm::*execute_function_type )( ::OSG::DrawEnv * ) ;
            
            SkinningAlgorithmBase_exposer.def( 
                "execute"
                , bp::pure_virtual( execute_function_type(&::OSG::Algorithm::execute) )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::Algorithm::renderEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderEnter_function_type )( ::OSG::Action * ) ;
            
            SkinningAlgorithmBase_exposer.def( 
                "renderEnter"
                , bp::pure_virtual( renderEnter_function_type(&::OSG::Algorithm::renderEnter) )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::Algorithm::renderLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderLeave_function_type )( ::OSG::Action * ) ;
            
            SkinningAlgorithmBase_exposer.def( 
                "renderLeave"
                , bp::pure_virtual( renderLeave_function_type(&::OSG::Algorithm::renderLeave) )
                , ( bp::arg("pAction") ) );
        
        }
        SkinningAlgorithmBase_exposer.staticmethod( "getClassGroupId" );
        SkinningAlgorithmBase_exposer.staticmethod( "getClassType" );
        SkinningAlgorithmBase_exposer.staticmethod( "getClassTypeId" );
    }

}
