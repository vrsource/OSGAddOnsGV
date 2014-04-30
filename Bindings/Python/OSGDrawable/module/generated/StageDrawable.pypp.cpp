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
#include "OSGDrawable_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "StageDrawable.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct StageDrawable_wrapper : OSG::StageDrawable, bp::wrapper< OSG::StageDrawable > {

    virtual void fill( ::OSG::DrawableStatsAttachment * pStat ){
        bp::override func_fill = this->get_override( "fill" );
        func_fill( boost::python::ptr(pStat) );
    }

};

void register_StageDrawable_class(){

    { //::OSG::StageDrawable
        typedef bp::class_< StageDrawable_wrapper, bp::bases< OSG::StageDrawableBase >, boost::noncopyable > StageDrawable_exposer_t;
        StageDrawable_exposer_t StageDrawable_exposer = StageDrawable_exposer_t( "StageDrawable", bp::no_init );
        bp::scope StageDrawable_scope( StageDrawable_exposer );
        { //::OSG::StageDrawable::changed
        
            typedef void ( ::OSG::StageDrawable::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            StageDrawable_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::StageDrawable::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::StageDrawable::dump
        
            typedef void ( ::OSG::StageDrawable::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            StageDrawable_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::StageDrawable::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::Drawable::fill
        
            typedef void ( ::OSG::Drawable::*fill_function_type )( ::OSG::DrawableStatsAttachment * ) ;
            
            StageDrawable_exposer.def( 
                "fill"
                , bp::pure_virtual( fill_function_type(&::OSG::Drawable::fill) )
                , ( bp::arg("pStat") ) );
        
        }
        pyopensg::register_transit< OSG::StageDrawable >::execute();
        bp::register_ptr_to_python< OSG::StageDrawable::ObjRecPtr >();
        bp::implicitly_convertible< OSG::StageDrawable::ObjRecPtr, OSG::StageDrawable* >();
        bp::implicitly_convertible< OSG::StageDrawable::ObjRecPtr, OSG::StageDrawable::ObjCPtr >();
        bp::implicitly_convertible< OSG::StageDrawable::ObjRecPtr, OSG::Drawable* >();
        bp::implicitly_convertible< OSG::StageDrawable::ObjRecPtr, OSG::Drawable::ObjRecPtr >();
        bp::implicitly_convertible<OSG::StageDrawable::ObjRecPtr, OSG::Drawable::ObjCPtr>();
    }

}
