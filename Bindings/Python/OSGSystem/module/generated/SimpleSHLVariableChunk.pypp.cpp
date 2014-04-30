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
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SimpleSHLVariableChunk.pypp.hpp"

using namespace std;
namespace bp = boost::python;

static boost::python::tuple getUniformVariable_d8bf75a6b4422c83d5718bb7612f4851( ::OSG::SimpleSHLVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Point<float, 3u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_ef86d8a540a162a4014c7287b0636200( ::OSG::SimpleSHLVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Point<float, 2u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_51777cdb7be446027a5315c6676d5b36( ::OSG::SimpleSHLVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::TransformationMatrix<float> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_fc310a224867304dc5b3c9272d923e83( ::OSG::SimpleSHLVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Vector<float, 4u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_078df43a00b19df9d2973217be97bcc2( ::OSG::SimpleSHLVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Vector<float, 3u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_6847c5060017aad06c4c31a16865b390( ::OSG::SimpleSHLVariableChunk & inst, ::OSG::Char8 const * name ){
    OSG::Vector<float, 2u> value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_dff57b1671add0f9f22a15ce1230cd70( ::OSG::SimpleSHLVariableChunk & inst, ::OSG::Char8 const * name ){
    float value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_26d8e7ac25fec3ad3fc7d9cc7f52f804( ::OSG::SimpleSHLVariableChunk & inst, ::OSG::Char8 const * name ){
    int value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

static boost::python::tuple getUniformVariable_366a90094d2818deac04a9825c0e924b( ::OSG::SimpleSHLVariableChunk & inst, ::OSG::Char8 const * name ){
    bool value2;
    bool result = inst.getUniformVariable(name, value2);
    return bp::make_tuple( result, value2 );
}

void register_SimpleSHLVariableChunk_class(){

    { //::OSG::SimpleSHLVariableChunk
        typedef bp::class_< OSG::SimpleSHLVariableChunk, bp::bases< OSG::SimpleSHLVariableChunkBase >, OSG::SimpleSHLVariableChunk::ObjRecPtr, boost::noncopyable > SimpleSHLVariableChunk_exposer_t;
        SimpleSHLVariableChunk_exposer_t SimpleSHLVariableChunk_exposer = SimpleSHLVariableChunk_exposer_t( "SimpleSHLVariableChunk", bp::no_init );
        bp::scope SimpleSHLVariableChunk_scope( SimpleSHLVariableChunk_exposer );
        { //::OSG::SimpleSHLVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Pnt3f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Pnt2f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Matrix const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec4f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec3f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec2f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Real32 const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Int32 const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::addUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*addUniformVariable_function_type )( ::OSG::Char8 const *,bool const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "addUniformVariable"
                , addUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::addUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::changed
        
            typedef void ( ::OSG::SimpleSHLVariableChunk::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SimpleSHLVariableChunk::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::clearUniformVariables
        
            typedef void ( ::OSG::SimpleSHLVariableChunk::*clearUniformVariables_function_type )(  ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "clearUniformVariables"
                , clearUniformVariables_function_type( &::OSG::SimpleSHLVariableChunk::clearUniformVariables ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::dump
        
            typedef void ( ::OSG::SimpleSHLVariableChunk::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SimpleSHLVariableChunk_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SimpleSHLVariableChunk::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getChunkId
        
            typedef ::OSG::UInt16 ( ::OSG::SimpleSHLVariableChunk::*getChunkId_function_type )(  ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "getChunkId"
                , getChunkId_function_type( &::OSG::SimpleSHLVariableChunk::getChunkId ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getClass
        
            typedef ::OSG::StateChunkClass const * ( ::OSG::SimpleSHLVariableChunk::*getClass_function_type )(  ) const;
            
            SimpleSHLVariableChunk_exposer.def( 
                "getClass"
                , getClass_function_type( &::OSG::SimpleSHLVariableChunk::getClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getStaticClass
        
            typedef ::OSG::StateChunkClass const * ( *getStaticClass_function_type )(  );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getStaticClass"
                , getStaticClass_function_type( &::OSG::SimpleSHLVariableChunk::getStaticClass )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getStaticClassId
        
            typedef ::OSG::UInt32 ( *getStaticClassId_function_type )(  );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getStaticClassId"
                , getStaticClassId_function_type( &::OSG::SimpleSHLVariableChunk::getStaticClassId ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Point_less__float_comma__3u__greater__function_type )( ::OSG::SimpleSHLVariableChunk &,::OSG::Char8 const * );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getUniformVariable_Point_less__float_comma__3u__greater_"
                , getUniformVariable_Point_less__float_comma__3u__greater__function_type( &getUniformVariable_d8bf75a6b4422c83d5718bb7612f4851 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Point_less__float_comma__2u__greater__function_type )( ::OSG::SimpleSHLVariableChunk &,::OSG::Char8 const * );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getUniformVariable_Point_less__float_comma__2u__greater_"
                , getUniformVariable_Point_less__float_comma__2u__greater__function_type( &getUniformVariable_ef86d8a540a162a4014c7287b0636200 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_TransformationMatrix_less__float__greater__function_type )( ::OSG::SimpleSHLVariableChunk &,::OSG::Char8 const * );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getUniformVariable_TransformationMatrix_less__float__greater_"
                , getUniformVariable_TransformationMatrix_less__float__greater__function_type( &getUniformVariable_51777cdb7be446027a5315c6676d5b36 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Vector_less__float_comma__4u__greater__function_type )( ::OSG::SimpleSHLVariableChunk &,::OSG::Char8 const * );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getUniformVariable_Vector_less__float_comma__4u__greater_"
                , getUniformVariable_Vector_less__float_comma__4u__greater__function_type( &getUniformVariable_fc310a224867304dc5b3c9272d923e83 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Vector_less__float_comma__3u__greater__function_type )( ::OSG::SimpleSHLVariableChunk &,::OSG::Char8 const * );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getUniformVariable_Vector_less__float_comma__3u__greater_"
                , getUniformVariable_Vector_less__float_comma__3u__greater__function_type( &getUniformVariable_078df43a00b19df9d2973217be97bcc2 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_Vector_less__float_comma__2u__greater__function_type )( ::OSG::SimpleSHLVariableChunk &,::OSG::Char8 const * );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getUniformVariable_Vector_less__float_comma__2u__greater_"
                , getUniformVariable_Vector_less__float_comma__2u__greater__function_type( &getUniformVariable_6847c5060017aad06c4c31a16865b390 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_float_function_type )( ::OSG::SimpleSHLVariableChunk &,::OSG::Char8 const * );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getUniformVariable_float"
                , getUniformVariable_float_function_type( &getUniformVariable_dff57b1671add0f9f22a15ce1230cd70 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_int_function_type )( ::OSG::SimpleSHLVariableChunk &,::OSG::Char8 const * );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getUniformVariable_int"
                , getUniformVariable_int_function_type( &getUniformVariable_26d8e7ac25fec3ad3fc7d9cc7f52f804 )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::getUniformVariable
        
            typedef boost::python::tuple ( *getUniformVariable_bool_function_type )( ::OSG::SimpleSHLVariableChunk &,::OSG::Char8 const * );
            
            SimpleSHLVariableChunk_exposer.def( 
                "getUniformVariable_bool"
                , getUniformVariable_bool_function_type( &getUniformVariable_366a90094d2818deac04a9825c0e924b )
                , ( bp::arg("inst"), bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::subUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*subUniformVariable_function_type )( ::OSG::Char8 const * ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "subUniformVariable"
                , subUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::subUniformVariable )
                , ( bp::arg("name") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Pnt3f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Pnt2f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Matrix const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec4f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec3f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Vec2f const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Real32 const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,::OSG::Int32 const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::SimpleSHLVariableChunk::updateUniformVariable
        
            typedef bool ( ::OSG::SimpleSHLVariableChunk::*updateUniformVariable_function_type )( ::OSG::Char8 const *,bool const & ) ;
            
            SimpleSHLVariableChunk_exposer.def( 
                "updateUniformVariable"
                , updateUniformVariable_function_type( &::OSG::SimpleSHLVariableChunk::updateUniformVariable )
                , ( bp::arg("name"), bp::arg("value") ) );
        
        }
        SimpleSHLVariableChunk_exposer.staticmethod( "getStaticClass" );
        SimpleSHLVariableChunk_exposer.staticmethod( "getStaticClassId" );
        pyopensg::register_transit< OSG::SimpleSHLVariableChunk >::execute();
        bp::implicitly_convertible< OSG::SimpleSHLVariableChunk::ObjRecPtr, OSG::SimpleSHLVariableChunk* >();
        bp::implicitly_convertible< OSG::SimpleSHLVariableChunk::ObjRecPtr, OSG::SimpleSHLVariableChunk::ObjCPtr >();
        bp::implicitly_convertible< OSG::SimpleSHLVariableChunk::ObjRecPtr, OSG::StateChunk* >();
        bp::implicitly_convertible< OSG::SimpleSHLVariableChunk::ObjRecPtr, OSG::StateChunk::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SimpleSHLVariableChunk::ObjRecPtr, OSG::StateChunk::ObjCPtr>();
    }

}
