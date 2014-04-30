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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GrabForegroundBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GrabForegroundBase_class(){

    { //::OSG::GrabForegroundBase
        typedef bp::class_< OSG::GrabForegroundBase, bp::bases< ::OSG::Foreground >, boost::noncopyable > GrabForegroundBase_exposer_t;
        GrabForegroundBase_exposer_t GrabForegroundBase_exposer = GrabForegroundBase_exposer_t( "GrabForegroundBase", bp::no_init );
        bp::scope GrabForegroundBase_scope( GrabForegroundBase_exposer );
        bp::scope().attr("ImageFieldId") = (int)OSG::GrabForegroundBase::ImageFieldId;
        bp::scope().attr("AutoResizeFieldId") = (int)OSG::GrabForegroundBase::AutoResizeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::GrabForegroundBase::NextFieldId;
        { //::OSG::GrabForegroundBase::copyFromBin
        
            typedef void ( ::OSG::GrabForegroundBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GrabForegroundBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GrabForegroundBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GrabForegroundBase::copyToBin
        
            typedef void ( ::OSG::GrabForegroundBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GrabForegroundBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GrabForegroundBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GrabForegroundBase::create
        
            typedef ::OSG::GrabForegroundTransitPtr ( *create_function_type )(  );
            
            GrabForegroundBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GrabForegroundBase::create ) );
        
        }
        { //::OSG::GrabForegroundBase::createDependent
        
            typedef ::OSG::GrabForegroundTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GrabForegroundBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GrabForegroundBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GrabForegroundBase::createLocal
        
            typedef ::OSG::GrabForegroundTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GrabForegroundBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GrabForegroundBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GrabForegroundBase::getAutoResize
        
            typedef bool ( ::OSG::GrabForegroundBase::*getAutoResize_function_type )(  ) const;
            
            GrabForegroundBase_exposer.def( 
                "getAutoResize"
                , getAutoResize_function_type( &::OSG::GrabForegroundBase::getAutoResize ) );
        
        }
        { //::OSG::GrabForegroundBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GrabForegroundBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GrabForegroundBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GrabForegroundBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GrabForegroundBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GrabForegroundBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GrabForegroundBase::getClassGroupId ) );
        
        }
        { //::OSG::GrabForegroundBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GrabForegroundBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GrabForegroundBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GrabForegroundBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GrabForegroundBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GrabForegroundBase::getClassTypeId ) );
        
        }
        { //::OSG::GrabForegroundBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GrabForegroundBase::*getContainerSize_function_type )(  ) const;
            
            GrabForegroundBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GrabForegroundBase::getContainerSize ) );
        
        }
        { //::OSG::GrabForegroundBase::getImage
        
            typedef ::OSG::Image * ( ::OSG::GrabForegroundBase::*getImage_function_type )(  ) const;
            
            GrabForegroundBase_exposer.def( 
                "getImage"
                , getImage_function_type( &::OSG::GrabForegroundBase::getImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GrabForegroundBase::getSFAutoResize
        
            typedef ::OSG::SFBool const * ( ::OSG::GrabForegroundBase::*getSFAutoResize_function_type )(  ) const;
            
            GrabForegroundBase_exposer.def( 
                "getSFAutoResize"
                , getSFAutoResize_function_type( &::OSG::GrabForegroundBase::getSFAutoResize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GrabForegroundBase::getSFImage
        
            typedef ::OSG::SFUnrecImagePtr const * ( ::OSG::GrabForegroundBase::*getSFImage_function_type )(  ) const;
            
            GrabForegroundBase_exposer.def( 
                "getSFImage"
                , getSFImage_function_type( &::OSG::GrabForegroundBase::getSFImage )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GrabForegroundBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GrabForegroundBase::*getType_function_type )(  ) ;
            
            GrabForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GrabForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GrabForegroundBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GrabForegroundBase::*getType_function_type )(  ) const;
            
            GrabForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GrabForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GrabForegroundBase::setAutoResize
        
            typedef void ( ::OSG::GrabForegroundBase::*setAutoResize_function_type )( bool const ) ;
            
            GrabForegroundBase_exposer.def( 
                "setAutoResize"
                , setAutoResize_function_type( &::OSG::GrabForegroundBase::setAutoResize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::GrabForegroundBase::setImage
        
            typedef void ( ::OSG::GrabForegroundBase::*setImage_function_type )( ::OSG::Image * const ) ;
            
            GrabForegroundBase_exposer.def( 
                "setImage"
                , setImage_function_type( &::OSG::GrabForegroundBase::setImage )
                , ( bp::arg("value") ) );
        
        }
        GrabForegroundBase_exposer.staticmethod( "create" );
        GrabForegroundBase_exposer.staticmethod( "createDependent" );
        GrabForegroundBase_exposer.staticmethod( "createLocal" );
        GrabForegroundBase_exposer.staticmethod( "getClassGroupId" );
        GrabForegroundBase_exposer.staticmethod( "getClassType" );
        GrabForegroundBase_exposer.staticmethod( "getClassTypeId" );
    }

}
