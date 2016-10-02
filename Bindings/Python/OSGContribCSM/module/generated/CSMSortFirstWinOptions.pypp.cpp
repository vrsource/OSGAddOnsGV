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
#include "OSGContribCSM_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CSMSortFirstWinOptions.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CSMSortFirstWinOptions_class(){

    { //::OSG::CSMSortFirstWinOptions
        typedef bp::class_< OSG::CSMSortFirstWinOptions, bp::bases< OSG::CSMSortFirstWinOptionsBase >, OSG::CSMSortFirstWinOptions::ObjRecPtr, boost::noncopyable > CSMSortFirstWinOptions_exposer_t;
        CSMSortFirstWinOptions_exposer_t CSMSortFirstWinOptions_exposer = CSMSortFirstWinOptions_exposer_t( "CSMSortFirstWinOptions", bp::no_init );
        bp::scope CSMSortFirstWinOptions_scope( CSMSortFirstWinOptions_exposer );
        { //::OSG::CSMSortFirstWinOptions::changed
        
            typedef void ( ::OSG::CSMSortFirstWinOptions::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CSMSortFirstWinOptions_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CSMSortFirstWinOptions::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CSMSortFirstWinOptions::dump
        
            typedef void ( ::OSG::CSMSortFirstWinOptions::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CSMSortFirstWinOptions_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CSMSortFirstWinOptions::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::CSMSortFirstWinOptions >::execute();
        bp::implicitly_convertible< OSG::CSMSortFirstWinOptions::ObjRecPtr, OSG::CSMSortFirstWinOptions* >();
        bp::implicitly_convertible< OSG::CSMSortFirstWinOptions::ObjRecPtr, OSG::CSMSortFirstWinOptions::ObjCPtr >();
        bp::implicitly_convertible< OSG::CSMSortFirstWinOptions::ObjRecPtr, OSG::CSMClusterWinOptions* >();
        bp::implicitly_convertible< OSG::CSMSortFirstWinOptions::ObjRecPtr, OSG::CSMClusterWinOptions::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CSMSortFirstWinOptions::ObjRecPtr, OSG::CSMClusterWinOptions::ObjCPtr>();
    }

}
