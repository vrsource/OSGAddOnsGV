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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMPassiveWindowBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct CSMPassiveWindowBase_wrapper : OSG::CSMPassiveWindowBase, bp::wrapper< OSG::CSMPassiveWindowBase > {

    void terminateGLContext(  ){
        OSG::CSMWindow::terminateGLContext(  );
    }

};

void register_CSMPassiveWindowBase_class(){

    { //::OSG::CSMPassiveWindowBase
        typedef bp::class_< CSMPassiveWindowBase_wrapper, bp::bases< OSG::CSMWindow >, boost::noncopyable > CSMPassiveWindowBase_exposer_t;
        CSMPassiveWindowBase_exposer_t CSMPassiveWindowBase_exposer = CSMPassiveWindowBase_exposer_t( "CSMPassiveWindowBase", bp::no_init );
        bp::scope CSMPassiveWindowBase_scope( CSMPassiveWindowBase_exposer );
        bp::scope().attr("ViewportScaleFieldId") = (int)OSG::CSMPassiveWindowBase::ViewportScaleFieldId;
        bp::scope().attr("ClearOpFieldId") = (int)OSG::CSMPassiveWindowBase::ClearOpFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::CSMPassiveWindowBase::NextFieldId;
        { //::OSG::CSMPassiveWindowBase::copyFromBin
        
            typedef void ( ::OSG::CSMPassiveWindowBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMPassiveWindowBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::CSMPassiveWindowBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::copyToBin
        
            typedef void ( ::OSG::CSMPassiveWindowBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            CSMPassiveWindowBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::CSMPassiveWindowBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::create
        
            typedef ::OSG::CSMPassiveWindowTransitPtr ( *create_function_type )(  );
            
            CSMPassiveWindowBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::CSMPassiveWindowBase::create ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::createDependent
        
            typedef ::OSG::CSMPassiveWindowTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            CSMPassiveWindowBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::CSMPassiveWindowBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::createLocal
        
            typedef ::OSG::CSMPassiveWindowTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            CSMPassiveWindowBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::CSMPassiveWindowBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::CSMPassiveWindowBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            CSMPassiveWindowBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::CSMPassiveWindowBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            CSMPassiveWindowBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::CSMPassiveWindowBase::getClassGroupId ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            CSMPassiveWindowBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::CSMPassiveWindowBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::CSMPassiveWindowBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            CSMPassiveWindowBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::CSMPassiveWindowBase::getClassTypeId ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::getClearOp
        
            typedef ::OSG::CSMPassiveWinClearOp * ( ::OSG::CSMPassiveWindowBase::*getClearOp_function_type )(  ) const;
            
            CSMPassiveWindowBase_exposer.def( 
                "getClearOp"
                , getClearOp_function_type( &::OSG::CSMPassiveWindowBase::getClearOp )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPassiveWindowBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::CSMPassiveWindowBase::*getContainerSize_function_type )(  ) const;
            
            CSMPassiveWindowBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::CSMPassiveWindowBase::getContainerSize ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::getSFClearOp
        
            typedef ::OSG::SFUnrecCSMPassiveWinClearOpPtr const * ( ::OSG::CSMPassiveWindowBase::*getSFClearOp_function_type )(  ) const;
            
            CSMPassiveWindowBase_exposer.def( 
                "getSFClearOp"
                , getSFClearOp_function_type( &::OSG::CSMPassiveWindowBase::getSFClearOp )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPassiveWindowBase::getSFViewportScale
        
            typedef ::OSG::SFVec2f const * ( ::OSG::CSMPassiveWindowBase::*getSFViewportScale_function_type )(  ) const;
            
            CSMPassiveWindowBase_exposer.def( 
                "getSFViewportScale"
                , getSFViewportScale_function_type( &::OSG::CSMPassiveWindowBase::getSFViewportScale )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPassiveWindowBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::CSMPassiveWindowBase::*getType_function_type )(  ) ;
            
            CSMPassiveWindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMPassiveWindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPassiveWindowBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::CSMPassiveWindowBase::*getType_function_type )(  ) const;
            
            CSMPassiveWindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::CSMPassiveWindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::CSMPassiveWindowBase::getViewportScale
        
            typedef ::OSG::Vec2f const & ( ::OSG::CSMPassiveWindowBase::*getViewportScale_function_type )(  ) const;
            
            CSMPassiveWindowBase_exposer.def( 
                "getViewportScale"
                , getViewportScale_function_type( &::OSG::CSMPassiveWindowBase::getViewportScale )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::CSMPassiveWindowBase::setClearOp
        
            typedef void ( ::OSG::CSMPassiveWindowBase::*setClearOp_function_type )( ::OSG::CSMPassiveWinClearOp * const ) ;
            
            CSMPassiveWindowBase_exposer.def( 
                "setClearOp"
                , setClearOp_function_type( &::OSG::CSMPassiveWindowBase::setClearOp )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMPassiveWindowBase::setViewportScale
        
            typedef void ( ::OSG::CSMPassiveWindowBase::*setViewportScale_function_type )( ::OSG::Vec2f const & ) ;
            
            CSMPassiveWindowBase_exposer.def( 
                "setViewportScale"
                , setViewportScale_function_type( &::OSG::CSMPassiveWindowBase::setViewportScale )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::CSMWindow::terminateGLContext
        
            typedef void ( CSMPassiveWindowBase_wrapper::*terminateGLContext_function_type )(  ) ;
            
            CSMPassiveWindowBase_exposer.def( 
                "terminateGLContext"
                , terminateGLContext_function_type( &CSMPassiveWindowBase_wrapper::terminateGLContext ) );
        
        }
        CSMPassiveWindowBase_exposer.staticmethod( "create" );
        CSMPassiveWindowBase_exposer.staticmethod( "createDependent" );
        CSMPassiveWindowBase_exposer.staticmethod( "createLocal" );
        CSMPassiveWindowBase_exposer.staticmethod( "getClassGroupId" );
        CSMPassiveWindowBase_exposer.staticmethod( "getClassType" );
        CSMPassiveWindowBase_exposer.staticmethod( "getClassTypeId" );
    }

}
