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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ForegroundBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ForegroundBase_class(){

    { //::OSG::ForegroundBase
        typedef bp::class_< OSG::ForegroundBase, bp::bases< ::OSG::AttachmentContainer >, boost::noncopyable > ForegroundBase_exposer_t;
        ForegroundBase_exposer_t ForegroundBase_exposer = ForegroundBase_exposer_t( "ForegroundBase", bp::no_init );
        bp::scope ForegroundBase_scope( ForegroundBase_exposer );
        bp::scope().attr("ActiveFieldId") = (int)OSG::ForegroundBase::ActiveFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::ForegroundBase::NextFieldId;
        { //::OSG::ForegroundBase::copyFromBin
        
            typedef void ( ::OSG::ForegroundBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ForegroundBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::ForegroundBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ForegroundBase::copyToBin
        
            typedef void ( ::OSG::ForegroundBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            ForegroundBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::ForegroundBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::ForegroundBase::getActive
        
            typedef bool ( ::OSG::ForegroundBase::*getActive_function_type )(  ) const;
            
            ForegroundBase_exposer.def( 
                "getActive"
                , getActive_function_type( &::OSG::ForegroundBase::getActive ) );
        
        }
        { //::OSG::ForegroundBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::ForegroundBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            ForegroundBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::ForegroundBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::ForegroundBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            ForegroundBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::ForegroundBase::getClassGroupId ) );
        
        }
        { //::OSG::ForegroundBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            ForegroundBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::ForegroundBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::ForegroundBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            ForegroundBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::ForegroundBase::getClassTypeId ) );
        
        }
        { //::OSG::ForegroundBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::ForegroundBase::*getContainerSize_function_type )(  ) const;
            
            ForegroundBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::ForegroundBase::getContainerSize ) );
        
        }
        { //::OSG::ForegroundBase::getSFActive
        
            typedef ::OSG::SFBool const * ( ::OSG::ForegroundBase::*getSFActive_function_type )(  ) const;
            
            ForegroundBase_exposer.def( 
                "getSFActive"
                , getSFActive_function_type( &::OSG::ForegroundBase::getSFActive )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ForegroundBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::ForegroundBase::*getType_function_type )(  ) ;
            
            ForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ForegroundBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::ForegroundBase::*getType_function_type )(  ) const;
            
            ForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::ForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ForegroundBase::setActive
        
            typedef void ( ::OSG::ForegroundBase::*setActive_function_type )( bool const ) ;
            
            ForegroundBase_exposer.def( 
                "setActive"
                , setActive_function_type( &::OSG::ForegroundBase::setActive )
                , ( bp::arg("value") ) );
        
        }
        ForegroundBase_exposer.staticmethod( "getClassGroupId" );
        ForegroundBase_exposer.staticmethod( "getClassType" );
        ForegroundBase_exposer.staticmethod( "getClassTypeId" );
    }

}
