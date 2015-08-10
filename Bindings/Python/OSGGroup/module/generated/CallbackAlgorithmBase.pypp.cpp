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
#include "CallbackAlgorithmBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CallbackAlgorithmBase_class(){

    { //::OSG::CallbackAlgorithmBase
        typedef bp::class_< OSG::CallbackAlgorithmBase, bp::bases< OSG::Algorithm >, boost::noncopyable > CallbackAlgorithmBase_exposer_t;
        CallbackAlgorithmBase_exposer_t CallbackAlgorithmBase_exposer = CallbackAlgorithmBase_exposer_t( "CallbackAlgorithmBase", bp::no_init );
        bp::scope CallbackAlgorithmBase_scope( CallbackAlgorithmBase_exposer );
        bp::scope().attr("CallbackFieldId") = (int)OSG::CallbackAlgorithmBase::CallbackFieldId;
        bp::scope().attr("RenderEnterFieldId") = (int)OSG::CallbackAlgorithmBase::RenderEnterFieldId;
        bp::scope().attr("RenderLeaveFieldId") = (int)OSG::CallbackAlgorithmBase::RenderLeaveFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CallbackAlgorithmBase::NextFieldId;
        { //::OSG::CallbackAlgorithmBase::copyFromBin
        
            typedef void ( ::OSG::CallbackAlgorithmBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CallbackAlgorithmBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CallbackAlgorithmBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CallbackAlgorithmBase::copyToBin
        
            typedef void ( ::OSG::CallbackAlgorithmBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CallbackAlgorithmBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CallbackAlgorithmBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CallbackAlgorithmBase::create
        
            typedef ::OSG::CallbackAlgorithmTransitPtr ( *create_function_type )(  );
            
            CallbackAlgorithmBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CallbackAlgorithmBase::create ) );
        
        }
        { //::OSG::CallbackAlgorithmBase::createDependent
        
            typedef ::OSG::CallbackAlgorithmTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CallbackAlgorithmBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CallbackAlgorithmBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CallbackAlgorithmBase::createLocal
        
            typedef ::OSG::CallbackAlgorithmTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CallbackAlgorithmBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CallbackAlgorithmBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CallbackAlgorithmBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CallbackAlgorithmBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CallbackAlgorithmBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CallbackAlgorithmBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CallbackAlgorithmBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CallbackAlgorithmBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CallbackAlgorithmBase::getClassGroupId ) );
        
        }
        { //::OSG::CallbackAlgorithmBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CallbackAlgorithmBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CallbackAlgorithmBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CallbackAlgorithmBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CallbackAlgorithmBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CallbackAlgorithmBase::getClassTypeId ) );
        
        }
        { //::OSG::CallbackAlgorithmBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CallbackAlgorithmBase::*getContainerSize_function_type )(  ) const;
            
            CallbackAlgorithmBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CallbackAlgorithmBase::getContainerSize ) );
        
        }
        { //::OSG::CallbackAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CallbackAlgorithmBase::*getType_function_type )(  ) ;
            
            CallbackAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CallbackAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CallbackAlgorithmBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CallbackAlgorithmBase::*getType_function_type )(  ) const;
            
            CallbackAlgorithmBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CallbackAlgorithmBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        CallbackAlgorithmBase_exposer.staticmethod( "create" );
        CallbackAlgorithmBase_exposer.staticmethod( "createDependent" );
        CallbackAlgorithmBase_exposer.staticmethod( "createLocal" );
        CallbackAlgorithmBase_exposer.staticmethod( "getClassGroupId" );
        CallbackAlgorithmBase_exposer.staticmethod( "getClassType" );
        CallbackAlgorithmBase_exposer.staticmethod( "getClassTypeId" );
    }

}
