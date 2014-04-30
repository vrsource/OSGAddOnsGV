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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "VRMLNormalInterpolator.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_VRMLNormalInterpolator_class(){

    { //::OSG::VRMLNormalInterpolator
        typedef bp::class_< OSG::VRMLNormalInterpolator, bp::bases< OSG::VRMLNormalInterpolatorBase >, OSG::VRMLNormalInterpolator::ObjRecPtr, boost::noncopyable > VRMLNormalInterpolator_exposer_t;
        VRMLNormalInterpolator_exposer_t VRMLNormalInterpolator_exposer = VRMLNormalInterpolator_exposer_t( "VRMLNormalInterpolator", bp::no_init );
        bp::scope VRMLNormalInterpolator_scope( VRMLNormalInterpolator_exposer );
        { //::OSG::VRMLNormalInterpolator::changed
        
            typedef void ( ::OSG::VRMLNormalInterpolator::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            VRMLNormalInterpolator_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::VRMLNormalInterpolator::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::VRMLNormalInterpolator::dump
        
            typedef void ( ::OSG::VRMLNormalInterpolator::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            VRMLNormalInterpolator_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::VRMLNormalInterpolator::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::VRMLNormalInterpolator::evaluate
        
            typedef void ( ::OSG::VRMLNormalInterpolator::*evaluate_function_type )(  ) ;
            
            VRMLNormalInterpolator_exposer.def( 
                "evaluate"
                , evaluate_function_type( &::OSG::VRMLNormalInterpolator::evaluate ) );
        
        }
        pyopensg::register_transit< OSG::VRMLNormalInterpolator >::execute();
        bp::implicitly_convertible< OSG::VRMLNormalInterpolator::ObjRecPtr, OSG::VRMLNormalInterpolator* >();
        bp::implicitly_convertible< OSG::VRMLNormalInterpolator::ObjRecPtr, OSG::VRMLNormalInterpolator::ObjCPtr >();
        bp::implicitly_convertible< OSG::VRMLNormalInterpolator::ObjRecPtr, OSG::VRMLInterpolator* >();
        bp::implicitly_convertible< OSG::VRMLNormalInterpolator::ObjRecPtr, OSG::VRMLInterpolator::ObjRecPtr >();
        bp::implicitly_convertible<OSG::VRMLNormalInterpolator::ObjRecPtr, OSG::VRMLInterpolator::ObjCPtr>();
    }

}
