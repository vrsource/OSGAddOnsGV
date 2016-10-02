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
#include "OSGWindowX_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "XWindowBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct XWindowBase_wrapper : OSG::XWindowBase, bp::wrapper< OSG::XWindowBase > {

    virtual void doActivate(  ){
        bp::override func_doActivate = this->get_override( "doActivate" );
        func_doActivate(  );
    }

    virtual void doDeactivate(  ){
        bp::override func_doDeactivate = this->get_override( "doDeactivate" );
        func_doDeactivate(  );
    }

    virtual bool doSwap(  ){
        bp::override func_doSwap = this->get_override( "doSwap" );
        return func_doSwap(  );
    }

    virtual bool hasContext(  ){
        bp::override func_hasContext = this->get_override( "hasContext" );
        return func_hasContext(  );
    }

    virtual void terminate(  ){
        bp::override func_terminate = this->get_override( "terminate" );
        func_terminate(  );
    }

};

void register_XWindowBase_class(){

    { //::OSG::XWindowBase
        typedef bp::class_< XWindowBase_wrapper, bp::bases< ::OSG::Window >, boost::noncopyable > XWindowBase_exposer_t;
        XWindowBase_exposer_t XWindowBase_exposer = XWindowBase_exposer_t( "XWindowBase", bp::no_init );
        bp::scope XWindowBase_scope( XWindowBase_exposer );
        bp::scope().attr("DisplayFieldId") = (int)OSG::XWindowBase::DisplayFieldId;
        bp::scope().attr("WindowFieldId") = (int)OSG::XWindowBase::WindowFieldId;
        bp::scope().attr("ContextFieldId") = (int)OSG::XWindowBase::ContextFieldId;
        bp::scope().attr("FbConfigIdFieldId") = (int)OSG::XWindowBase::FbConfigIdFieldId;
        bp::scope().attr("NextFieldId") = (int)OSG::XWindowBase::NextFieldId;
        { //::OSG::XWindowBase::copyFromBin
        
            typedef void ( ::OSG::XWindowBase::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            XWindowBase_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type( &::OSG::XWindowBase::copyFromBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::XWindowBase::copyToBin
        
            typedef void ( ::OSG::XWindowBase::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            XWindowBase_exposer.def( 
                "copyToBin"
                , copyToBin_function_type( &::OSG::XWindowBase::copyToBin )
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::XWindowBase::create
        
            typedef ::OSG::XWindowTransitPtr ( *create_function_type )(  );
            
            XWindowBase_exposer.def( 
                "create"
                , create_function_type( &::OSG::XWindowBase::create ) );
        
        }
        { //::OSG::XWindowBase::createDependent
        
            typedef ::OSG::XWindowTransitPtr ( *createDependent_function_type )( ::OSG::BitVector );
            
            XWindowBase_exposer.def( 
                "createDependent"
                , createDependent_function_type( &::OSG::XWindowBase::createDependent )
                , ( bp::arg("bFlags") ) );
        
        }
        { //::OSG::XWindowBase::createLocal
        
            typedef ::OSG::XWindowTransitPtr ( *createLocal_function_type )( ::OSG::BitVector );
            
            XWindowBase_exposer.def( 
                "createLocal"
                , createLocal_function_type( &::OSG::XWindowBase::createLocal )
                , ( bp::arg("bFlags")=(::OSG::BitVector)(OSG::FCLocal::All) ) );
        
        }
        { //::OSG::XWindowBase::getBinSize
        
            typedef ::OSG::SizeT ( ::OSG::XWindowBase::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            XWindowBase_exposer.def( 
                "getBinSize"
                , getBinSize_function_type( &::OSG::XWindowBase::getBinSize )
                , ( bp::arg("whichField") ) );
        
        }
        { //::OSG::XWindowBase::getClassGroupId
        
            typedef ::OSG::UInt16 ( *getClassGroupId_function_type )(  );
            
            XWindowBase_exposer.def( 
                "getClassGroupId"
                , getClassGroupId_function_type( &::OSG::XWindowBase::getClassGroupId ) );
        
        }
        { //::OSG::XWindowBase::getClassType
        
            typedef ::OSG::FieldContainerType & ( *getClassType_function_type )(  );
            
            XWindowBase_exposer.def( 
                "getClassType"
                , getClassType_function_type( &::OSG::XWindowBase::getClassType )
                , bp::return_value_policy< bp::reference_existing_object >() );
        
        }
        { //::OSG::XWindowBase::getClassTypeId
        
            typedef ::OSG::UInt32 ( *getClassTypeId_function_type )(  );
            
            XWindowBase_exposer.def( 
                "getClassTypeId"
                , getClassTypeId_function_type( &::OSG::XWindowBase::getClassTypeId ) );
        
        }
        { //::OSG::XWindowBase::getContainerSize
        
            typedef ::OSG::UInt32 ( ::OSG::XWindowBase::*getContainerSize_function_type )(  ) const;
            
            XWindowBase_exposer.def( 
                "getContainerSize"
                , getContainerSize_function_type( &::OSG::XWindowBase::getContainerSize ) );
        
        }
        { //::OSG::XWindowBase::getFbConfigId
        
            typedef ::OSG::Int32 ( ::OSG::XWindowBase::*getFbConfigId_function_type )(  ) const;
            
            XWindowBase_exposer.def( 
                "getFbConfigId"
                , getFbConfigId_function_type( &::OSG::XWindowBase::getFbConfigId ) );
        
        }
        { //::OSG::XWindowBase::getSFFbConfigId
        
            typedef ::OSG::SFInt32 const * ( ::OSG::XWindowBase::*getSFFbConfigId_function_type )(  ) const;
            
            XWindowBase_exposer.def( 
                "getSFFbConfigId"
                , getSFFbConfigId_function_type( &::OSG::XWindowBase::getSFFbConfigId )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::XWindowBase::getSFWindow
        
            typedef ::OSG::SFX11Window const * ( ::OSG::XWindowBase::*getSFWindow_function_type )(  ) const;
            
            XWindowBase_exposer.def( 
                "getSFWindow"
                , getSFWindow_function_type( &::OSG::XWindowBase::getSFWindow )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::XWindowBase::getType
        
            typedef ::OSG::FieldContainerType & ( ::OSG::XWindowBase::*getType_function_type )(  ) ;
            
            XWindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::XWindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::XWindowBase::getType
        
            typedef ::OSG::FieldContainerType const & ( ::OSG::XWindowBase::*getType_function_type )(  ) const;
            
            XWindowBase_exposer.def( 
                "getType"
                , getType_function_type( &::OSG::XWindowBase::getType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::XWindowBase::getWindow
        
            typedef ::OSG::X11Window const & ( ::OSG::XWindowBase::*getWindow_function_type )(  ) const;
            
            XWindowBase_exposer.def( 
                "getWindow"
                , getWindow_function_type( &::OSG::XWindowBase::getWindow )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::OSG::XWindowBase::setFbConfigId
        
            typedef void ( ::OSG::XWindowBase::*setFbConfigId_function_type )( ::OSG::Int32 const ) ;
            
            XWindowBase_exposer.def( 
                "setFbConfigId"
                , setFbConfigId_function_type( &::OSG::XWindowBase::setFbConfigId )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::XWindowBase::setWindow
        
            typedef void ( ::OSG::XWindowBase::*setWindow_function_type )( ::OSG::X11Window const & ) ;
            
            XWindowBase_exposer.def( 
                "setWindow"
                , setWindow_function_type( &::OSG::XWindowBase::setWindow )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::Window::doActivate
        
            typedef void ( XWindowBase_wrapper::*doActivate_function_type )(  ) ;
            
            XWindowBase_exposer.def( 
                "doActivate"
                , doActivate_function_type( &XWindowBase_wrapper::doActivate ) );
        
        }
        { //::OSG::Window::doDeactivate
        
            typedef void ( XWindowBase_wrapper::*doDeactivate_function_type )(  ) ;
            
            XWindowBase_exposer.def( 
                "doDeactivate"
                , doDeactivate_function_type( &XWindowBase_wrapper::doDeactivate ) );
        
        }
        { //::OSG::Window::doSwap
        
            typedef bool ( XWindowBase_wrapper::*doSwap_function_type )(  ) ;
            
            XWindowBase_exposer.def( 
                "doSwap"
                , doSwap_function_type( &XWindowBase_wrapper::doSwap ) );
        
        }
        { //::OSG::Window::hasContext
        
            typedef bool ( XWindowBase_wrapper::*hasContext_function_type )(  ) ;
            
            XWindowBase_exposer.def( 
                "hasContext"
                , hasContext_function_type( &XWindowBase_wrapper::hasContext ) );
        
        }
        { //::OSG::Window::terminate
        
            typedef void ( ::OSG::Window::*terminate_function_type )(  ) ;
            
            XWindowBase_exposer.def( 
                "terminate"
                , bp::pure_virtual( terminate_function_type(&::OSG::Window::terminate) ) );
        
        }
        XWindowBase_exposer.staticmethod( "create" );
        XWindowBase_exposer.staticmethod( "createDependent" );
        XWindowBase_exposer.staticmethod( "createLocal" );
        XWindowBase_exposer.staticmethod( "getClassGroupId" );
        XWindowBase_exposer.staticmethod( "getClassType" );
        XWindowBase_exposer.staticmethod( "getClassTypeId" );
    }

}
