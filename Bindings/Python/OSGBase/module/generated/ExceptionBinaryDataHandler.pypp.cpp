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
#include "__convenience.pypp.hpp"
#include "__call_policies.pypp.hpp"
#include "OSGBase_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ExceptionBinaryDataHandler.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct ExceptionBinaryDataHandler_wrapper : OSG::ExceptionBinaryDataHandler, bp::wrapper< OSG::ExceptionBinaryDataHandler > {

    ExceptionBinaryDataHandler_wrapper(::OSG::UInt32 zeroCopyThreshold=0, bool networkOrder=true )
    : OSG::ExceptionBinaryDataHandler( zeroCopyThreshold, networkOrder )
      , bp::wrapper< OSG::ExceptionBinaryDataHandler >(){
        // constructor
    
    }

    virtual void forceCopy(  ) {
        if( bp::override func_forceCopy = this->get_override( "forceCopy" ) )
            func_forceCopy(  );
        else{
            this->OSG::ExceptionBinaryDataHandler::forceCopy(  );
        }
    }
    
    void default_forceCopy(  ) {
        OSG::ExceptionBinaryDataHandler::forceCopy( );
    }

    virtual void forceDirectIO(  ) {
        if( bp::override func_forceDirectIO = this->get_override( "forceDirectIO" ) )
            func_forceDirectIO(  );
        else{
            this->OSG::ExceptionBinaryDataHandler::forceDirectIO(  );
        }
    }
    
    void default_forceDirectIO(  ) {
        OSG::ExceptionBinaryDataHandler::forceDirectIO( );
    }

    static boost::python::object getValue_d71695bfd702fc4f89d7d4003aa9445f( ::OSG::ExceptionBinaryDataHandler & inst ){
        bool value2;
        inst.getValue(value2);
        return bp::object( value2 );
    }

    static boost::python::object getValue_ec22520c3b8166a3c01a84501a67d557( ::OSG::ExceptionBinaryDataHandler & inst ){
        signed char value2;
        inst.getValue(value2);
        return bp::object( value2 );
    }

    static boost::python::object getValue_1f694b39370329f48068116b03da2cdd( ::OSG::ExceptionBinaryDataHandler & inst ){
        short int value2;
        inst.getValue(value2);
        return bp::object( value2 );
    }

    static boost::python::object getValue_a423e62c1fe6844140c70a4793e1706a( ::OSG::ExceptionBinaryDataHandler & inst ){
        int value2;
        inst.getValue(value2);
        return bp::object( value2 );
    }

    static boost::python::object getValue_a0cfb5fd7fcb57b21afe11a9a7dd15eb( ::OSG::ExceptionBinaryDataHandler & inst ){
        float value2;
        inst.getValue(value2);
        return bp::object( value2 );
    }

    static boost::python::object getValue_4a80038fbb04bd0f6d42383f1ff6ad32( ::OSG::ExceptionBinaryDataHandler & inst ){
        double value2;
        inst.getValue(value2);
        return bp::object( value2 );
    }

    static boost::python::object getValue_9d3f662c74136f6fb45d12dcd60147cc( ::OSG::ExceptionBinaryDataHandler & inst ){
        long double value2;
        inst.getValue(value2);
        return bp::object( value2 );
    }

};

void translate_ReadError( const OSG::ExceptionBinaryDataHandler::ReadError& exc ){
    PyErr_SetString( PyExc_IOError, exc.what() ); 
}

void translate_WriteError( const OSG::ExceptionBinaryDataHandler::WriteError& exc ){
    PyErr_SetString( PyExc_IOError, exc.what() ); 
}

void register_ExceptionBinaryDataHandler_class(){

    { //::OSG::ExceptionBinaryDataHandler
        typedef bp::class_< ExceptionBinaryDataHandler_wrapper, boost::noncopyable > ExceptionBinaryDataHandler_exposer_t;
        ExceptionBinaryDataHandler_exposer_t ExceptionBinaryDataHandler_exposer = ExceptionBinaryDataHandler_exposer_t( "ExceptionBinaryDataHandler", bp::init< bp::optional< OSG::UInt32, bool > >(( bp::arg("zeroCopyThreshold")=(::OSG::UInt32)(0), bp::arg("networkOrder")=(bool)(true) )) );
        bp::scope ExceptionBinaryDataHandler_scope( ExceptionBinaryDataHandler_exposer );
        { //::OSG::ExceptionBinaryDataHandler::ReadError
            typedef bp::class_< OSG::ExceptionBinaryDataHandler::ReadError, bp::bases< OSG::Exception > > ReadError_exposer_t;
            ReadError_exposer_t ReadError_exposer = ReadError_exposer_t( "ReadError", bp::init< OSG::Char8 const * >(( bp::arg("reason") )) );
            bp::scope ReadError_scope( ReadError_exposer );
            bp::implicitly_convertible< OSG::Char8 const *, OSG::ExceptionBinaryDataHandler::ReadError >();
            bp::register_exception_translator< OSG::ExceptionBinaryDataHandler::ReadError >( &translate_ReadError );
        }
        { //::OSG::ExceptionBinaryDataHandler::WriteError
            typedef bp::class_< OSG::ExceptionBinaryDataHandler::WriteError, bp::bases< OSG::Exception > > WriteError_exposer_t;
            WriteError_exposer_t WriteError_exposer = WriteError_exposer_t( "WriteError", bp::init< OSG::Char8 const * >(( bp::arg("reason") )) );
            bp::scope WriteError_scope( WriteError_exposer );
            bp::implicitly_convertible< OSG::Char8 const *, OSG::ExceptionBinaryDataHandler::WriteError >();
            bp::register_exception_translator< OSG::ExceptionBinaryDataHandler::WriteError >( &translate_WriteError );
        }
        bp::implicitly_convertible< OSG::UInt32, OSG::ExceptionBinaryDataHandler >();
        { //::OSG::ExceptionBinaryDataHandler::flush
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*flush_function_type )(  ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "flush"
                , flush_function_type( &::OSG::ExceptionBinaryDataHandler::flush ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::forceCopy
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*forceCopy_function_type )(  ) ;
            typedef void ( ExceptionBinaryDataHandler_wrapper::*default_forceCopy_function_type )(  ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "forceCopy"
                , forceCopy_function_type(&::OSG::ExceptionBinaryDataHandler::forceCopy)
                , default_forceCopy_function_type(&ExceptionBinaryDataHandler_wrapper::default_forceCopy) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::forceDirectIO
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*forceDirectIO_function_type )(  ) ;
            typedef void ( ExceptionBinaryDataHandler_wrapper::*default_forceDirectIO_function_type )(  ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "forceDirectIO"
                , forceDirectIO_function_type(&::OSG::ExceptionBinaryDataHandler::forceDirectIO)
                , default_forceDirectIO_function_type(&ExceptionBinaryDataHandler_wrapper::default_forceDirectIO) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::getNetworkOrder
        
            typedef bool ( ::OSG::ExceptionBinaryDataHandler::*getNetworkOrder_function_type )(  ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "getNetworkOrder"
                , getNetworkOrder_function_type( &::OSG::ExceptionBinaryDataHandler::getNetworkOrder ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::getValue
        
            typedef boost::python::object ( *getBool_function_type )( ::OSG::ExceptionBinaryDataHandler & );
            
            ExceptionBinaryDataHandler_exposer.def( 
                "getBool"
                , getBool_function_type( &ExceptionBinaryDataHandler_wrapper::getValue_d71695bfd702fc4f89d7d4003aa9445f )
                , ( bp::arg("inst") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::getValue
        
            typedef boost::python::object ( *getInt8_function_type )( ::OSG::ExceptionBinaryDataHandler & );
            
            ExceptionBinaryDataHandler_exposer.def( 
                "getInt8"
                , getInt8_function_type( &ExceptionBinaryDataHandler_wrapper::getValue_ec22520c3b8166a3c01a84501a67d557 )
                , ( bp::arg("inst") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::getValue
        
            typedef boost::python::object ( *getInt16_function_type )( ::OSG::ExceptionBinaryDataHandler & );
            
            ExceptionBinaryDataHandler_exposer.def( 
                "getInt16"
                , getInt16_function_type( &ExceptionBinaryDataHandler_wrapper::getValue_1f694b39370329f48068116b03da2cdd )
                , ( bp::arg("inst") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::getValue
        
            typedef boost::python::object ( *getInt32_function_type )( ::OSG::ExceptionBinaryDataHandler & );
            
            ExceptionBinaryDataHandler_exposer.def( 
                "getInt32"
                , getInt32_function_type( &ExceptionBinaryDataHandler_wrapper::getValue_a423e62c1fe6844140c70a4793e1706a )
                , ( bp::arg("inst") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::getValue
        
            typedef boost::python::object ( *getReal32_function_type )( ::OSG::ExceptionBinaryDataHandler & );
            
            ExceptionBinaryDataHandler_exposer.def( 
                "getReal32"
                , getReal32_function_type( &ExceptionBinaryDataHandler_wrapper::getValue_a0cfb5fd7fcb57b21afe11a9a7dd15eb )
                , ( bp::arg("inst") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::getValue
        
            typedef boost::python::object ( *getReal64_function_type )( ::OSG::ExceptionBinaryDataHandler & );
            
            ExceptionBinaryDataHandler_exposer.def( 
                "getReal64"
                , getReal64_function_type( &ExceptionBinaryDataHandler_wrapper::getValue_4a80038fbb04bd0f6d42383f1ff6ad32 )
                , ( bp::arg("inst") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::getValue
        
            typedef boost::python::object ( *getReal128_function_type )( ::OSG::ExceptionBinaryDataHandler & );
            
            ExceptionBinaryDataHandler_exposer.def( 
                "getReal128"
                , getReal128_function_type( &ExceptionBinaryDataHandler_wrapper::getValue_9d3f662c74136f6fb45d12dcd60147cc )
                , ( bp::arg("inst") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::putValue
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*putBool_function_type )( bool const & ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "putBool"
                , putBool_function_type( &::OSG::ExceptionBinaryDataHandler::putValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::putValue
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*putInt8_function_type )( ::OSG::Int8 const & ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "putInt8"
                , putInt8_function_type( &::OSG::ExceptionBinaryDataHandler::putValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::putValue
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*putInt16_function_type )( ::OSG::Int16 const & ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "putInt16"
                , putInt16_function_type( &::OSG::ExceptionBinaryDataHandler::putValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::putValue
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*putInt32_function_type )( ::OSG::Int32 const & ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "putInt32"
                , putInt32_function_type( &::OSG::ExceptionBinaryDataHandler::putValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::putValue
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*putReal32_function_type )( ::OSG::Real32 const & ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "putReal32"
                , putReal32_function_type( &::OSG::ExceptionBinaryDataHandler::putValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::putValue
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*putReal64_function_type )( ::OSG::Real64 const & ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "putReal64"
                , putReal64_function_type( &::OSG::ExceptionBinaryDataHandler::putValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::putValue
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*putReal128_function_type )( ::OSG::Real128 const & ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "putReal128"
                , putReal128_function_type( &::OSG::ExceptionBinaryDataHandler::putValue )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::ExceptionBinaryDataHandler::setNetworkOrder
        
            typedef void ( ::OSG::ExceptionBinaryDataHandler::*setNetworkOrder_function_type )( bool ) ;
            
            ExceptionBinaryDataHandler_exposer.def( 
                "setNetworkOrder"
                , setNetworkOrder_function_type( &::OSG::ExceptionBinaryDataHandler::setNetworkOrder )
                , ( bp::arg("value") ) );
        
        }
    }

}
