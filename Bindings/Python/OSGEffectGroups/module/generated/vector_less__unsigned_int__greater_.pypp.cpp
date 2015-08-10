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
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "vector_less__unsigned_int__greater_.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_vector_less__unsigned_int__greater__class(){

    { //::std::vector< unsigned int >
        typedef bp::class_< std::vector< unsigned int > > vector_less__unsigned_int__greater__exposer_t;
        vector_less__unsigned_int__greater__exposer_t vector_less__unsigned_int__greater__exposer = vector_less__unsigned_int__greater__exposer_t( "vector_less__unsigned_int__greater_" );
        bp::scope vector_less__unsigned_int__greater__scope( vector_less__unsigned_int__greater__exposer );
        vector_less__unsigned_int__greater__exposer.def( bp::vector_indexing_suite< ::std::vector< unsigned int >, true >() );
    }

}
