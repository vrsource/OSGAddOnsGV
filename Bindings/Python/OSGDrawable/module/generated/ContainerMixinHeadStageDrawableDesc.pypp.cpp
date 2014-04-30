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
#include "ContainerMixinHeadStageDrawableDesc.pypp.hpp"

using namespace std;
namespace bp = boost::python;

struct ContainerMixinHead_less__OSG_scope_StageDrawableDesc__greater__wrapper : OSG::ContainerMixinHead< OSG::StageDrawableDesc >, bp::wrapper< OSG::ContainerMixinHead< OSG::StageDrawableDesc > > {

    virtual void fill( ::OSG::DrawableStatsAttachment * pStat ){
        bp::override func_fill = this->get_override( "fill" );
        func_fill( boost::python::ptr(pStat) );
    }

};

void register_ContainerMixinHeadStageDrawableDesc_class(){

    { //::OSG::ContainerMixinHead< OSG::StageDrawableDesc >
        typedef bp::class_< ContainerMixinHead_less__OSG_scope_StageDrawableDesc__greater__wrapper, bp::bases< ::OSG::Drawable >, boost::noncopyable > ContainerMixinHeadStageDrawableDesc_exposer_t;
        ContainerMixinHeadStageDrawableDesc_exposer_t ContainerMixinHeadStageDrawableDesc_exposer = ContainerMixinHeadStageDrawableDesc_exposer_t( "ContainerMixinHeadStageDrawableDesc", bp::no_init );
        bp::scope ContainerMixinHeadStageDrawableDesc_scope( ContainerMixinHeadStageDrawableDesc_exposer );
        { //::OSG::Drawable::fill
        
            typedef void ( ::OSG::Drawable::*fill_function_type )( ::OSG::DrawableStatsAttachment * ) ;
            
            ContainerMixinHeadStageDrawableDesc_exposer.def( 
                "fill"
                , bp::pure_virtual( fill_function_type(&::OSG::Drawable::fill) )
                , ( bp::arg("pStat") ) );
        
        }
    }

}
