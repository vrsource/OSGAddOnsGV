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
#include "OSGGroup_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "RangeLOD.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_RangeLOD_class(){

    { //::OSG::RangeLOD
        typedef bp::class_< OSG::RangeLOD, bp::bases< OSG::RangeLODBase >, OSG::RangeLOD::ObjRecPtr, boost::noncopyable > RangeLOD_exposer_t;
        RangeLOD_exposer_t RangeLOD_exposer = RangeLOD_exposer_t( "RangeLOD", bp::no_init );
        bp::scope RangeLOD_scope( RangeLOD_exposer );
        { //::OSG::RangeLOD::changed
        
            typedef void ( ::OSG::RangeLOD::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            RangeLOD_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::RangeLOD::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::RangeLOD::dump
        
            typedef void ( ::OSG::RangeLOD::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            RangeLOD_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::RangeLOD::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::RangeLOD >::execute();
        bp::implicitly_convertible< OSG::RangeLOD::ObjRecPtr, OSG::RangeLOD* >();
        bp::implicitly_convertible< OSG::RangeLOD::ObjRecPtr, OSG::RangeLOD::ObjCPtr >();
        bp::implicitly_convertible< OSG::RangeLOD::ObjRecPtr, OSG::Group* >();
        bp::implicitly_convertible< OSG::RangeLOD::ObjRecPtr, OSG::Group::ObjRecPtr >();
        bp::implicitly_convertible<OSG::RangeLOD::ObjRecPtr, OSG::Group::ObjCPtr>();
    }

}
