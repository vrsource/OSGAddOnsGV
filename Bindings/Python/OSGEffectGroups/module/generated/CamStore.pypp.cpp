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
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CamStore.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CamStore_class(){

    { //::std::vector< OSG::RefCountPtr<OSG::Camera, OSG::UnrecordedRefCountPolicy> >
        typedef bp::class_< std::vector< OSG::RefCountPtr<OSG::Camera, OSG::UnrecordedRefCountPolicy> > > CamStore_exposer_t;
        CamStore_exposer_t CamStore_exposer = CamStore_exposer_t( "CamStore" );
        bp::scope CamStore_scope( CamStore_exposer );
        CamStore_exposer.def( bp::vector_indexing_suite< ::std::vector< OSG::RefCountPtr<OSG::Camera, OSG::UnrecordedRefCountPolicy> > >() );
    }

}
