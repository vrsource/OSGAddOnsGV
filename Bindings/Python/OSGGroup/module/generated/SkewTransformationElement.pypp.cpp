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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SkewTransformationElement.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SkewTransformationElement_class(){

    { //::OSG::SkewTransformationElement
        typedef bp::class_< OSG::SkewTransformationElement, bp::bases< OSG::SkewTransformationElementBase >, OSG::SkewTransformationElement::ObjRecPtr, boost::noncopyable > SkewTransformationElement_exposer_t;
        SkewTransformationElement_exposer_t SkewTransformationElement_exposer = SkewTransformationElement_exposer_t( "SkewTransformationElement", bp::no_init );
        bp::scope SkewTransformationElement_scope( SkewTransformationElement_exposer );
        { //::OSG::SkewTransformationElement::calcMatrix
        
            typedef void ( ::OSG::SkewTransformationElement::*calcMatrix_function_type )( ::OSG::Matrix & ) const;
            
            SkewTransformationElement_exposer.def( 
                "calcMatrix"
                , calcMatrix_function_type( &::OSG::SkewTransformationElement::calcMatrix )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::SkewTransformationElement::changed
        
            typedef void ( ::OSG::SkewTransformationElement::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SkewTransformationElement_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SkewTransformationElement::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::SkewTransformationElement::dump
        
            typedef void ( ::OSG::SkewTransformationElement::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SkewTransformationElement_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SkewTransformationElement::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::SkewTransformationElement >::execute();
        bp::implicitly_convertible< OSG::SkewTransformationElement::ObjRecPtr, OSG::SkewTransformationElement* >();
        bp::implicitly_convertible< OSG::SkewTransformationElement::ObjRecPtr, OSG::SkewTransformationElement::ObjCPtr >();
        bp::implicitly_convertible< OSG::SkewTransformationElement::ObjRecPtr, OSG::TransformationElement* >();
        bp::implicitly_convertible< OSG::SkewTransformationElement::ObjRecPtr, OSG::TransformationElement::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SkewTransformationElement::ObjRecPtr, OSG::TransformationElement::ObjCPtr>();
    }

}
