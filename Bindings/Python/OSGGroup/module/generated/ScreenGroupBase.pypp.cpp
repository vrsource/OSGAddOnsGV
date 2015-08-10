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
#include "ScreenGroupBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ScreenGroupBase_class(){

    { //::OSG::ScreenGroupBase
        typedef bp::class_< OSG::ScreenGroupBase, bp::bases< ::OSG::Group >, boost::noncopyable > ScreenGroupBase_exposer_t;
        ScreenGroupBase_exposer_t ScreenGroupBase_exposer = ScreenGroupBase_exposer_t( "ScreenGroupBase", bp::no_init );
        bp::scope ScreenGroupBase_scope( ScreenGroupBase_exposer );
        { //::OSG::ScreenGroupBase::copyFromBin
        
            typedef void ( ::OSG::ScreenGroupBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ScreenGroupBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ScreenGroupBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ScreenGroupBase::copyToBin
        
            typedef void ( ::OSG::ScreenGroupBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ScreenGroupBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ScreenGroupBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ScreenGroupBase::create
        
            typedef ::OSG::ScreenGroupTransitPtr ( *create_function_type )(  );
            
            ScreenGroupBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::ScreenGroupBase::create ) );
        
        }
        { //::OSG::ScreenGroupBase::createDependent
        
            typedef ::OSG::ScreenGroupTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            ScreenGroupBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::ScreenGroupBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::ScreenGroupBase::createLocal
        
            typedef ::OSG::ScreenGroupTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            ScreenGroupBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::ScreenGroupBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::ScreenGroupBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ScreenGroupBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ScreenGroupBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ScreenGroupBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ScreenGroupBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ScreenGroupBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ScreenGroupBase::getClassGroupId ) );
        
        }
        { //::OSG::ScreenGroupBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ScreenGroupBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ScreenGroupBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ScreenGroupBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ScreenGroupBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ScreenGroupBase::getClassTypeId ) );
        
        }
        { //::OSG::ScreenGroupBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ScreenGroupBase::*getContainerSize_function_type )(  ) const;
            
            ScreenGroupBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ScreenGroupBase::getContainerSize ) );
        
        }
        { //::OSG::ScreenGroupBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ScreenGroupBase::*getType_function_type )(  ) ;
            
            ScreenGroupBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ScreenGroupBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ScreenGroupBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ScreenGroupBase::*getType_function_type )(  ) const;
            
            ScreenGroupBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ScreenGroupBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        ScreenGroupBase_exposer.staticmethod( "create" );
        ScreenGroupBase_exposer.staticmethod( "createDependent" );
        ScreenGroupBase_exposer.staticmethod( "createLocal" );
        ScreenGroupBase_exposer.staticmethod( "getClassGroupId" );
        ScreenGroupBase_exposer.staticmethod( "getClassType" );
        ScreenGroupBase_exposer.staticmethod( "getClassTypeId" );
    }

}
