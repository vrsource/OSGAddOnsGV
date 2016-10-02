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
#include "OSGWindowGLUT_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "GLUTWindowBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GLUTWindowBase_class(){

    { //::OSG::GLUTWindowBase
        typedef bp::class_< OSG::GLUTWindowBase, bp::bases< ::OSG::XWindow >, boost::noncopyable > GLUTWindowBase_exposer_t;
        GLUTWindowBase_exposer_t GLUTWindowBase_exposer = GLUTWindowBase_exposer_t( "GLUTWindowBase", bp::no_init );
        bp::scope GLUTWindowBase_scope( GLUTWindowBase_exposer );
        bp::scope().attr("GlutIdFieldId") = (int)OSG::GLUTWindowBase::GlutIdFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::GLUTWindowBase::NextFieldId;
        { //::OSG::GLUTWindowBase::copyFromBin
        
            typedef void ( ::OSG::GLUTWindowBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GLUTWindowBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::GLUTWindowBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GLUTWindowBase::copyToBin
        
            typedef void ( ::OSG::GLUTWindowBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            GLUTWindowBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::GLUTWindowBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::GLUTWindowBase::create
        
            typedef ::OSG::GLUTWindowTransitPtr ( *create_function_type )(  );
            
            GLUTWindowBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::GLUTWindowBase::create ) );
        
        }
        { //::OSG::GLUTWindowBase::createDependent
        
            typedef ::OSG::GLUTWindowTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            GLUTWindowBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::GLUTWindowBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::GLUTWindowBase::createLocal
        
            typedef ::OSG::GLUTWindowTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            GLUTWindowBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::GLUTWindowBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::GLUTWindowBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::GLUTWindowBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            GLUTWindowBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::GLUTWindowBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::GLUTWindowBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            GLUTWindowBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::GLUTWindowBase::getClassGroupId ) );
        
        }
        { //::OSG::GLUTWindowBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            GLUTWindowBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::GLUTWindowBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::GLUTWindowBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            GLUTWindowBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::GLUTWindowBase::getClassTypeId ) );
        
        }
        { //::OSG::GLUTWindowBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::GLUTWindowBase::*getContainerSize_function_type )(  ) const;
            
            GLUTWindowBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::GLUTWindowBase::getContainerSize ) );
        
        }
        { //::OSG::GLUTWindowBase::getGlutId
        
            typedef ::OSG::Int32 ( ::OSG::GLUTWindowBase::*getGlutId_function_type )(  ) const;
            
            GLUTWindowBase_exposer.def( 
                "getGlutId"
                , getGlutId_function_type( &::OSG::GLUTWindowBase::getGlutId ) );
        
        }
        { //::OSG::GLUTWindowBase::getSFGlutId
        
            typedef ::OSG::SFInt32 const * ( ::OSG::GLUTWindowBase::*getSFGlutId_function_type )(  ) const;
            
            GLUTWindowBase_exposer.def( 
                "getSFGlutId"
                , getSFGlutId_function_type( &::OSG::GLUTWindowBase::getSFGlutId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GLUTWindowBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::GLUTWindowBase::*getType_function_type )(  ) ;
            
            GLUTWindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GLUTWindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GLUTWindowBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::GLUTWindowBase::*getType_function_type )(  ) const;
            
            GLUTWindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::GLUTWindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::GLUTWindowBase::setGlutId
        
            typedef void ( ::OSG::GLUTWindowBase::*setGlutId_function_type )( ::OSG::Int32 const ) ;
            
            GLUTWindowBase_exposer.def( 
                "setGlutId"
                , setGlutId_function_type( &::OSG::GLUTWindowBase::setGlutId )
                , ( bp::arg("value") ) );
        
        }
        GLUTWindowBase_exposer.staticmethod( "create" );
        GLUTWindowBase_exposer.staticmethod( "createDependent" );
        GLUTWindowBase_exposer.staticmethod( "createLocal" );
        GLUTWindowBase_exposer.staticmethod( "getClassGroupId" );
        GLUTWindowBase_exposer.staticmethod( "getClassType" );
        GLUTWindowBase_exposer.staticmethod( "getClassTypeId" );
    }

}
