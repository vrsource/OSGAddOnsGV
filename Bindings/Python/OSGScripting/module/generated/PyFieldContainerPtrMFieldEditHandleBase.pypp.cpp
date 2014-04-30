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
#include "OSGScripting_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "PyFieldContainerPtrMFieldEditHandleBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_PyFieldContainerPtrMFieldEditHandleBase_class(){

    { //::OSG::PyFieldContainerPtrMFieldEditHandleBase
        typedef bp::class_< OSG::PyFieldContainerPtrMFieldEditHandleBase, bp::bases< ::OSG::FieldContainer >, boost::noncopyable > PyFieldContainerPtrMFieldEditHandleBase_exposer_t;
        PyFieldContainerPtrMFieldEditHandleBase_exposer_t PyFieldContainerPtrMFieldEditHandleBase_exposer = PyFieldContainerPtrMFieldEditHandleBase_exposer_t( "PyFieldContainerPtrMFieldEditHandleBase", bp::no_init );
        bp::scope PyFieldContainerPtrMFieldEditHandleBase_scope( PyFieldContainerPtrMFieldEditHandleBase_exposer );
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::copyFromBin
        
            typedef void ( ::OSG::PyFieldContainerPtrMFieldEditHandleBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::copyToBin
        
            typedef void ( ::OSG::PyFieldContainerPtrMFieldEditHandleBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::create
        
            typedef ::OSG::PyFieldContainerPtrMFieldEditHandleTransitPtr ( *create_function_type )(  );
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::create ) );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::createDependent
        
            typedef ::OSG::PyFieldContainerPtrMFieldEditHandleTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::createLocal
        
            typedef ::OSG::PyFieldContainerPtrMFieldEditHandleTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::PyFieldContainerPtrMFieldEditHandleBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::getClassGroupId ) );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::getClassTypeId ) );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::PyFieldContainerPtrMFieldEditHandleBase::*getContainerSize_function_type )(  ) const;
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::getContainerSize ) );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::PyFieldContainerPtrMFieldEditHandleBase::*getType_function_type )(  ) ;
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::PyFieldContainerPtrMFieldEditHandleBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::PyFieldContainerPtrMFieldEditHandleBase::*getType_function_type )(  ) const;
            
            PyFieldContainerPtrMFieldEditHandleBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::PyFieldContainerPtrMFieldEditHandleBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        PyFieldContainerPtrMFieldEditHandleBase_exposer.staticmethod( "create" );
        PyFieldContainerPtrMFieldEditHandleBase_exposer.staticmethod( "createDependent" );
        PyFieldContainerPtrMFieldEditHandleBase_exposer.staticmethod( "createLocal" );
        PyFieldContainerPtrMFieldEditHandleBase_exposer.staticmethod( "getClassGroupId" );
        PyFieldContainerPtrMFieldEditHandleBase_exposer.staticmethod( "getClassType" );
        PyFieldContainerPtrMFieldEditHandleBase_exposer.staticmethod( "getClassTypeId" );
    }

}
