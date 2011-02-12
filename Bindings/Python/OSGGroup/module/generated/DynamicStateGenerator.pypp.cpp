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
#endif

#include "boost/python.hpp"
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "DynamicStateGenerator.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

OSG::FrameBufferObjectRecPtr
wrapGetRenderTarget(OSG::DynamicStateGenerator* dsg)
{
   return OSG::FrameBufferObjectRecPtr(
             OSG::FrameBufferObject::ObjTransitPtr(dsg->getRenderTarget())
          );
}

}

void register_DynamicStateGenerator_class(){

    { //::OSG::DynamicStateGenerator
        typedef bp::class_< OSG::DynamicStateGenerator, bp::bases< OSG::DynamicStateGeneratorBase >, OSG::DynamicStateGenerator::ObjRecPtr, boost::noncopyable > DynamicStateGenerator_exposer_t;
        DynamicStateGenerator_exposer_t DynamicStateGenerator_exposer = DynamicStateGenerator_exposer_t( "DynamicStateGenerator", bp::no_init );
        bp::scope DynamicStateGenerator_scope( DynamicStateGenerator_exposer );
        { //::OSG::DynamicStateGenerator::changed
        
            typedef void ( ::OSG::DynamicStateGenerator::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DynamicStateGenerator_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DynamicStateGenerator::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::DynamicStateGenerator::dump
        
            typedef void ( ::OSG::DynamicStateGenerator::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DynamicStateGenerator_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DynamicStateGenerator::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::DynamicStateGenerator >::execute();
        bp::implicitly_convertible< OSG::DynamicStateGenerator::ObjRecPtr, OSG::DynamicStateGenerator* >();
        bp::implicitly_convertible< OSG::DynamicStateGenerator::ObjRecPtr, OSG::DynamicStateGenerator::ObjCPtr >();
        bp::implicitly_convertible< OSG::DynamicStateGenerator::ObjRecPtr, OSG::ChunkOverrideGroup* >();
        bp::implicitly_convertible< OSG::DynamicStateGenerator::ObjRecPtr, OSG::ChunkOverrideGroup::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DynamicStateGenerator::ObjRecPtr, OSG::ChunkOverrideGroup::ObjCPtr>();
        DynamicStateGenerator_exposer.def("getRenderTarget", wrapGetRenderTarget);
    }

}