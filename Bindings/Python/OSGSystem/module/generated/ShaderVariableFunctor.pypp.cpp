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
#include "ShaderVariableFunctor.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

void functorCallback(bp::object callable, OSG::DrawEnv* env, int i)
{
   callable(env, i);
}

void wrapSetFunctor(OSG::ShaderVariableFunctor* svf, bp::object pFunc)
{
    OSG::ShaderVariableFunctor::ProcVarFunctor pvf = boost::bind(functorCallback, pFunc, _1, _2);

    svf->setFunctor(pvf);
}

}

void register_ShaderVariableFunctor_class(){

    { //::OSG::ShaderVariableFunctor
        typedef bp::class_< OSG::ShaderVariableFunctor, bp::bases< OSG::ShaderVariableFunctorBase >, OSG::ShaderVariableFunctor::ObjRecPtr, boost::noncopyable > ShaderVariableFunctor_exposer_t;
        ShaderVariableFunctor_exposer_t ShaderVariableFunctor_exposer = ShaderVariableFunctor_exposer_t( "ShaderVariableFunctor", bp::no_init );
        bp::scope ShaderVariableFunctor_scope( ShaderVariableFunctor_exposer );
        { //::OSG::ShaderVariableFunctor::changed
        
            typedef void ( ::OSG::ShaderVariableFunctor::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            ShaderVariableFunctor_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::ShaderVariableFunctor::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::ShaderVariableFunctor::dump
        
            typedef void ( ::OSG::ShaderVariableFunctor::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            ShaderVariableFunctor_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ShaderVariableFunctor::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::ShaderVariableFunctor::evaluate
        
            typedef void ( ::OSG::ShaderVariableFunctor::*evaluate_function_type )( ::OSG::DrawEnv *,::OSG::Int32 & ) ;
            
            ShaderVariableFunctor_exposer.def( 
                "evaluate"
                , evaluate_function_type( &::OSG::ShaderVariableFunctor::evaluate )
                , ( bp::arg("pEnv"), bp::arg("iLocation") ) );
        
        }
        { //::OSG::ShaderVariableFunctor::isProcedural
        
            typedef bool ( ::OSG::ShaderVariableFunctor::*isProcedural_function_type )(  ) const;
            
            ShaderVariableFunctor_exposer.def( 
                "isProcedural"
                , isProcedural_function_type( &::OSG::ShaderVariableFunctor::isProcedural ) );
        
        }
        pyopensg::register_transit< OSG::ShaderVariableFunctor >::execute();
        bp::implicitly_convertible< OSG::ShaderVariableFunctor::ObjRecPtr, OSG::ShaderVariableFunctor* >();
        bp::implicitly_convertible< OSG::ShaderVariableFunctor::ObjRecPtr, OSG::ShaderVariableFunctor::ObjCPtr >();
        bp::implicitly_convertible< OSG::ShaderVariableFunctor::ObjRecPtr, OSG::ShaderProcVariable* >();
        bp::implicitly_convertible< OSG::ShaderVariableFunctor::ObjRecPtr, OSG::ShaderProcVariable::ObjRecPtr >();
        bp::implicitly_convertible<OSG::ShaderVariableFunctor::ObjRecPtr, OSG::ShaderProcVariable::ObjCPtr>();
        ShaderVariableFunctor_exposer.def("setFunctor", wrapSetFunctor, (bp::arg("pFunc")));
    }

}
