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
#include "UnskinnedSkinningAlgorithmBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct UnskinnedSkinningAlgorithmBase_wrapper : OSG::UnskinnedSkinningAlgorithmBase, bp::wrapper< OSG::UnskinnedSkinningAlgorithmBase > {

    virtual ::OSG::ActionBase::ResultE renderEnter( ::OSG::Action * pAction ){
        bp::override func_renderEnter = this->get_override( "renderEnter" );
        return func_renderEnter( boost::python::ptr(pAction) );
    }

    virtual ::OSG::ActionBase::ResultE renderLeave( ::OSG::Action * pAction ){
        bp::override func_renderLeave = this->get_override( "renderLeave" );
        return func_renderLeave( boost::python::ptr(pAction) );
    }

};

void register_UnskinnedSkinningAlgorithmBase_class(){

    { //::OSG::UnskinnedSkinningAlgorithmBase
        typedef bp::class_< UnskinnedSkinningAlgorithmBase_wrapper, bp::bases< OSG::SkinningAlgorithm >, boost::noncopyable > UnskinnedSkinningAlgorithmBase_exposer_t;
        UnskinnedSkinningAlgorithmBase_exposer_t UnskinnedSkinningAlgorithmBase_exposer = UnskinnedSkinningAlgorithmBase_exposer_t( "UnskinnedSkinningAlgorithmBase", bp::no_init );
        bp::scope UnskinnedSkinningAlgorithmBase_scope( UnskinnedSkinningAlgorithmBase_exposer );
        { //::OSG::UnskinnedSkinningAlgorithmBase::copyFromBin
        
            typedef void ( ::OSG::UnskinnedSkinningAlgorithmBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::copyToBin
        
            typedef void ( ::OSG::UnskinnedSkinningAlgorithmBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::create
        
            typedef ::OSG::UnskinnedSkinningAlgorithmTransitPtr ( *create_function_type )(  );
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::create ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::createDependent
        
            typedef ::OSG::UnskinnedSkinningAlgorithmTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::createLocal
        
            typedef ::OSG::UnskinnedSkinningAlgorithmTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::UnskinnedSkinningAlgorithmBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::getClassGroupId ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::getClassTypeId ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::UnskinnedSkinningAlgorithmBase::*getContainerSize_function_type )(  ) const;
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::getContainerSize ) );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::UnskinnedSkinningAlgorithmBase::*getType_function_type )(  ) ;
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::UnskinnedSkinningAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::UnskinnedSkinningAlgorithmBase::*getType_function_type )(  ) const;
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::UnskinnedSkinningAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::Algorithm::renderEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderEnter_function_type )( ::OSG::Action * ) ;
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "renderEnter"
                , bp::pure_virtual( renderEnter_function_type(&::OSG::Algorithm::renderEnter) )
                , ( bp::arg("pAction") ) );
        
        }
        { //::OSG::Algorithm::renderLeave
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::Algorithm::*renderLeave_function_type )( ::OSG::Action * ) ;
            
            UnskinnedSkinningAlgorithmBase_exposer.def( 
                "renderLeave"
                , bp::pure_virtual( renderLeave_function_type(&::OSG::Algorithm::renderLeave) )
                , ( bp::arg("pAction") ) );
        
        }
        UnskinnedSkinningAlgorithmBase_exposer.staticmethod( "create" );
        UnskinnedSkinningAlgorithmBase_exposer.staticmethod( "createDependent" );
        UnskinnedSkinningAlgorithmBase_exposer.staticmethod( "createLocal" );
        UnskinnedSkinningAlgorithmBase_exposer.staticmethod( "getClassGroupId" );
        UnskinnedSkinningAlgorithmBase_exposer.staticmethod( "getClassType" );
        UnskinnedSkinningAlgorithmBase_exposer.staticmethod( "getClassTypeId" );
    }

}
