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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DisplayFilterBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_DisplayFilterBase_class(){

    { //::OSG::DisplayFilterBase
        typedef bp::class_< OSG::DisplayFilterBase, bp::bases< ::OSG::AttachmentContainer >, boost::noncopyable > DisplayFilterBase_exposer_t;
        DisplayFilterBase_exposer_t DisplayFilterBase_exposer = DisplayFilterBase_exposer_t( "DisplayFilterBase", bp::no_init );
        bp::scope DisplayFilterBase_scope( DisplayFilterBase_exposer );
        bp::scope().attr("EnabledFieldId") = (int)OSG::DisplayFilterBase::EnabledFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::DisplayFilterBase::NextFieldId;
        { //::OSG::DisplayFilterBase::copyFromBin
        
            typedef void ( ::OSG::DisplayFilterBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DisplayFilterBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::DisplayFilterBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DisplayFilterBase::copyToBin
        
            typedef void ( ::OSG::DisplayFilterBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            DisplayFilterBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::DisplayFilterBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::DisplayFilterBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::DisplayFilterBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            DisplayFilterBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::DisplayFilterBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::DisplayFilterBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            DisplayFilterBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::DisplayFilterBase::getClassGroupId ) );
        
        }
        { //::OSG::DisplayFilterBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            DisplayFilterBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::DisplayFilterBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::DisplayFilterBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            DisplayFilterBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::DisplayFilterBase::getClassTypeId ) );
        
        }
        { //::OSG::DisplayFilterBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::DisplayFilterBase::*getContainerSize_function_type )(  ) const;
            
            DisplayFilterBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::DisplayFilterBase::getContainerSize ) );
        
        }
        { //::OSG::DisplayFilterBase::getEnabled
        
            typedef bool ( ::OSG::DisplayFilterBase::*getEnabled_function_type )(  ) const;
            
            DisplayFilterBase_exposer.def( 
                "getEnabled"
                , getEnabled_function_type( &::OSG::DisplayFilterBase::getEnabled ) );
        
        }
        { //::OSG::DisplayFilterBase::getSFEnabled
        
            typedef ::OSG::SFBool const * ( ::OSG::DisplayFilterBase::*getSFEnabled_function_type )(  ) const;
            
            DisplayFilterBase_exposer.def( 
                "getSFEnabled"
                , getSFEnabled_function_type( &::OSG::DisplayFilterBase::getSFEnabled )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::DisplayFilterBase::*getType_function_type )(  ) ;
            
            DisplayFilterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DisplayFilterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::DisplayFilterBase::*getType_function_type )(  ) const;
            
            DisplayFilterBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::DisplayFilterBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::DisplayFilterBase::setEnabled
        
            typedef void ( ::OSG::DisplayFilterBase::*setEnabled_function_type )( bool const ) ;
            
            DisplayFilterBase_exposer.def( 
                "setEnabled"
                , setEnabled_function_type( &::OSG::DisplayFilterBase::setEnabled )
                , ( bp::arg("value") ) );
        
        }
        DisplayFilterBase_exposer.staticmethod( "getClassGroupId" );
        DisplayFilterBase_exposer.staticmethod( "getClassType" );
        DisplayFilterBase_exposer.staticmethod( "getClassTypeId" );
    }

}
