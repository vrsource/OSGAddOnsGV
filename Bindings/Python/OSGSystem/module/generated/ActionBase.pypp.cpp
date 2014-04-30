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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ActionBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_ActionBase_class(){

    { //::OSG::ActionBase
        typedef bp::class_< OSG::ActionBase, bp::bases< ::OSG::MemoryObject >, boost::noncopyable > ActionBase_exposer_t;
        ActionBase_exposer_t ActionBase_exposer = ActionBase_exposer_t( "ActionBase", bp::no_init );
        bp::scope ActionBase_scope( ActionBase_exposer );
        bp::enum_< OSG::ActionBase::ResultE>("ResultE")
            .value("Continue", OSG::ActionBase::Continue)
            .value("Skip", OSG::ActionBase::Skip)
            .value("Quit", OSG::ActionBase::Quit)
            .export_values()
            ;
    }

}
