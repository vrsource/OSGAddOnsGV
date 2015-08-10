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
#include "SimpleStage.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct SimpleStage_wrapper : OSG::SimpleStage, bp::wrapper< OSG::SimpleStage > {

    virtual void copyFromBin( ::OSG::BinaryDataHandler & pMem, ::OSG::ConstFieldMaskArg whichField ) {
        if( bp::override func_copyFromBin = this->get_override( "copyFromBin" ) )
            func_copyFromBin( boost::ref(pMem), whichField );
        else{
            this->OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyFromBin( boost::ref(pMem), whichField );
        }
    }
    
    void default_copyFromBin( ::OSG::BinaryDataHandler & pMem, ::OSG::ConstFieldMaskArg whichField ) {
        OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyFromBin( boost::ref(pMem), whichField );
    }

    virtual void copyToBin( ::OSG::BinaryDataHandler & pMem, ::OSG::ConstFieldMaskArg whichField ) {
        if( bp::override func_copyToBin = this->get_override( "copyToBin" ) )
            func_copyToBin( boost::ref(pMem), whichField );
        else{
            this->OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyToBin( boost::ref(pMem), whichField );
        }
    }
    
    void default_copyToBin( ::OSG::BinaryDataHandler & pMem, ::OSG::ConstFieldMaskArg whichField ) {
        OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyToBin( boost::ref(pMem), whichField );
    }

    virtual ::OSG::SizeT getBinSize( ::OSG::ConstFieldMaskArg whichField ) {
        if( bp::override func_getBinSize = this->get_override( "getBinSize" ) )
            return func_getBinSize( whichField );
        else{
            return this->OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::getBinSize( whichField );
        }
    }
    
    ::OSG::SizeT default_getBinSize( ::OSG::ConstFieldMaskArg whichField ) {
        return OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::getBinSize( whichField );
    }

};

void register_SimpleStage_class(){

    { //::OSG::SimpleStage
        typedef bp::class_< SimpleStage_wrapper, bp::bases< OSG::SimpleStageBase >, OSG::SimpleStage::ObjRecPtr, boost::noncopyable > SimpleStage_exposer_t;
        SimpleStage_exposer_t SimpleStage_exposer = SimpleStage_exposer_t( "SimpleStage", bp::no_init );
        bp::scope SimpleStage_scope( SimpleStage_exposer );
        { //::OSG::SimpleStage::changed
        
            typedef void ( ::OSG::SimpleStage::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SimpleStage_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SimpleStage::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::SimpleStage::dump
        
            typedef void ( ::OSG::SimpleStage::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SimpleStage_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SimpleStage::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::SimpleStage::setSize
        
            typedef void ( ::OSG::SimpleStage::*setSize_function_type )( ::OSG::Real32,::OSG::Real32,::OSG::Real32,::OSG::Real32 ) ;
            
            SimpleStage_exposer.def( 
                "setSize"
                , setSize_function_type( &::OSG::SimpleStage::setSize )
                , ( bp::arg("left"), bp::arg("bottom"), bp::arg("right"), bp::arg("top") ) );
        
        }
        { //::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyFromBin
        
            typedef OSG::SimpleStage exported_class_t;
            typedef void ( exported_class_t::*copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            typedef void ( SimpleStage_wrapper::*default_copyFromBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleStage_exposer.def( 
                "copyFromBin"
                , copyFromBin_function_type(&::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyFromBin)
                , default_copyFromBin_function_type(&SimpleStage_wrapper::default_copyFromBin)
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyToBin
        
            typedef OSG::SimpleStage exported_class_t;
            typedef void ( exported_class_t::*copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            typedef void ( SimpleStage_wrapper::*default_copyToBin_function_type )( ::OSG::BinaryDataHandler &,::OSG::ConstFieldMaskArg ) ;
            
            SimpleStage_exposer.def( 
                "copyToBin"
                , copyToBin_function_type(&::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::copyToBin)
                , default_copyToBin_function_type(&SimpleStage_wrapper::default_copyToBin)
                , ( bp::arg("pMem"), bp::arg("whichField") ) );
        
        }
        { //::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::getBinSize
        
            typedef OSG::SimpleStage exported_class_t;
            typedef ::OSG::SizeT ( exported_class_t::*getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            typedef ::OSG::SizeT ( SimpleStage_wrapper::*default_getBinSize_function_type )( ::OSG::ConstFieldMaskArg ) ;
            
            SimpleStage_exposer.def( 
                "getBinSize"
                , getBinSize_function_type(&::OSG::TraversalValidationHandlerMixin< OSG::ContainerMixinHead< OSG::StageDesc > >::getBinSize)
                , default_getBinSize_function_type(&SimpleStage_wrapper::default_getBinSize)
                , ( bp::arg("whichField") ) );
        
        }
        pyopensg::register_transit< OSG::SimpleStage >::execute();
        bp::implicitly_convertible< OSG::SimpleStage::ObjRecPtr, OSG::SimpleStage* >();
        bp::implicitly_convertible< OSG::SimpleStage::ObjRecPtr, OSG::SimpleStage::ObjCPtr >();
        bp::implicitly_convertible< OSG::SimpleStage::ObjRecPtr, OSG::RenderCallbackStage* >();
        bp::implicitly_convertible< OSG::SimpleStage::ObjRecPtr, OSG::RenderCallbackStage::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SimpleStage::ObjRecPtr, OSG::RenderCallbackStage::ObjCPtr>();
    }

}
