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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "FBOGrabForegroundBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_FBOGrabForegroundBase_class(){

    { //::OSG::FBOGrabForegroundBase
        typedef bp::class_< OSG::FBOGrabForegroundBase, bp::bases< ::OSG::Foreground >, boost::noncopyable > FBOGrabForegroundBase_exposer_t;
        FBOGrabForegroundBase_exposer_t FBOGrabForegroundBase_exposer = FBOGrabForegroundBase_exposer_t( "FBOGrabForegroundBase", bp::no_init );
        bp::scope FBOGrabForegroundBase_scope( FBOGrabForegroundBase_exposer );
        bp::scope().attr("FrameBufferObjectFieldId") = (int)OSG::FBOGrabForegroundBase::FrameBufferObjectFieldId;
        bp::scope().attr("AutoResizeFieldId") = (int)OSG::FBOGrabForegroundBase::AutoResizeFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::FBOGrabForegroundBase::NextFieldId;
        { //::OSG::FBOGrabForegroundBase::copyFromBin
        
            typedef void ( ::OSG::FBOGrabForegroundBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FBOGrabForegroundBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::FBOGrabForegroundBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::copyToBin
        
            typedef void ( ::OSG::FBOGrabForegroundBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            FBOGrabForegroundBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::FBOGrabForegroundBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::create
        
            typedef ::OSG::FBOGrabForegroundTransitPtr ( *create_function_type )(  );
            
            FBOGrabForegroundBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::FBOGrabForegroundBase::create ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::createDependent
        
            typedef ::OSG::FBOGrabForegroundTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            FBOGrabForegroundBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::FBOGrabForegroundBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::createLocal
        
            typedef ::OSG::FBOGrabForegroundTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            FBOGrabForegroundBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::FBOGrabForegroundBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::getAutoResize
        
            typedef bool ( ::OSG::FBOGrabForegroundBase::*getAutoResize_function_type )(  ) const;
            
            FBOGrabForegroundBase_exposer.def( 
                "getAutoResize"
                , getAutoResize_function_type( &::OSG::FBOGrabForegroundBase::getAutoResize ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::FBOGrabForegroundBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            FBOGrabForegroundBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::FBOGrabForegroundBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            FBOGrabForegroundBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::FBOGrabForegroundBase::getClassGroupId ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            FBOGrabForegroundBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::FBOGrabForegroundBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::FBOGrabForegroundBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            FBOGrabForegroundBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::FBOGrabForegroundBase::getClassTypeId ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::FBOGrabForegroundBase::*getContainerSize_function_type )(  ) const;
            
            FBOGrabForegroundBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::FBOGrabForegroundBase::getContainerSize ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::getFrameBufferObject
        
            typedef ::OSG::FrameBufferObject * ( ::OSG::FBOGrabForegroundBase::*getFrameBufferObject_function_type )(  ) const;
            
            FBOGrabForegroundBase_exposer.def( 
                "getFrameBufferObject"
                , getFrameBufferObject_function_type( &::OSG::FBOGrabForegroundBase::getFrameBufferObject )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FBOGrabForegroundBase::getSFAutoResize
        
            typedef ::OSG::SFBool const * ( ::OSG::FBOGrabForegroundBase::*getSFAutoResize_function_type )(  ) const;
            
            FBOGrabForegroundBase_exposer.def( 
                "getSFAutoResize"
                , getSFAutoResize_function_type( &::OSG::FBOGrabForegroundBase::getSFAutoResize )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FBOGrabForegroundBase::getSFFrameBufferObject
        
            typedef ::OSG::SFUnrecFrameBufferObjectPtr const * ( ::OSG::FBOGrabForegroundBase::*getSFFrameBufferObject_function_type )(  ) const;
            
            FBOGrabForegroundBase_exposer.def( 
                "getSFFrameBufferObject"
                , getSFFrameBufferObject_function_type( &::OSG::FBOGrabForegroundBase::getSFFrameBufferObject )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FBOGrabForegroundBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::FBOGrabForegroundBase::*getType_function_type )(  ) ;
            
            FBOGrabForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FBOGrabForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FBOGrabForegroundBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::FBOGrabForegroundBase::*getType_function_type )(  ) const;
            
            FBOGrabForegroundBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::FBOGrabForegroundBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::FBOGrabForegroundBase::setAutoResize
        
            typedef void ( ::OSG::FBOGrabForegroundBase::*setAutoResize_function_type )( bool const ) ;
            
            FBOGrabForegroundBase_exposer.def( 
                "setAutoResize"
                , setAutoResize_function_type( &::OSG::FBOGrabForegroundBase::setAutoResize )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::FBOGrabForegroundBase::setFrameBufferObject
        
            typedef void ( ::OSG::FBOGrabForegroundBase::*setFrameBufferObject_function_type )( ::OSG::FrameBufferObject * const ) ;
            
            FBOGrabForegroundBase_exposer.def( 
                "setFrameBufferObject"
                , setFrameBufferObject_function_type( &::OSG::FBOGrabForegroundBase::setFrameBufferObject )
                , ( bp::arg("value") ) );
        
        }
        FBOGrabForegroundBase_exposer.staticmethod( "create" );
        FBOGrabForegroundBase_exposer.staticmethod( "createDependent" );
        FBOGrabForegroundBase_exposer.staticmethod( "createLocal" );
        FBOGrabForegroundBase_exposer.staticmethod( "getClassGroupId" );
        FBOGrabForegroundBase_exposer.staticmethod( "getClassType" );
        FBOGrabForegroundBase_exposer.staticmethod( "getClassTypeId" );
    }

}
