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
#include "DrawableStatsAttachment.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

void dsa_iadd(OSG::DrawableStatsAttachment* self,
              OSG::DrawableStatsAttachment* other)
{
   *self += other;
}

void dsa_isub(OSG::DrawableStatsAttachment* self,
              OSG::DrawableStatsAttachment* other)
{
   *self -= other;
}

}

void register_DrawableStatsAttachment_class(){

    { //::OSG::DrawableStatsAttachment
        typedef bp::class_< OSG::DrawableStatsAttachment, bp::bases< OSG::DrawableStatsAttachmentBase >, OSG::DrawableStatsAttachment::ObjRecPtr, boost::noncopyable > DrawableStatsAttachment_exposer_t;
        DrawableStatsAttachment_exposer_t DrawableStatsAttachment_exposer = DrawableStatsAttachment_exposer_t( "DrawableStatsAttachment", bp::no_init );
        bp::scope DrawableStatsAttachment_scope( DrawableStatsAttachment_exposer );
        { //::OSG::DrawableStatsAttachment::addTo
        
            typedef ::OSG::DrawableStatsAttachmentTransitPtr ( *addTo_function_type )( ::OSG::AttachmentContainer * );
            
            DrawableStatsAttachment_exposer.def( 
                "addTo"
                , addTo_function_type( &::OSG::DrawableStatsAttachment::addTo )
                , ( bp::arg("obj") ) );
        
        }
        { //::OSG::DrawableStatsAttachment::attachTo
        
            typedef void ( ::OSG::DrawableStatsAttachment::*attachTo_function_type )( ::OSG::AttachmentContainer * ) ;
            
            DrawableStatsAttachment_exposer.def( 
                "attachTo"
                , attachTo_function_type( &::OSG::DrawableStatsAttachment::attachTo )
                , ( bp::arg("obj") ) );
        
        }
        { //::OSG::DrawableStatsAttachment::calcStatic
        
            typedef ::OSG::DrawableStatsAttachmentTransitPtr ( *calcStatic_function_type )( ::OSG::Drawable * );
            
            DrawableStatsAttachment_exposer.def( 
                "calcStatic"
                , calcStatic_function_type( &::OSG::DrawableStatsAttachment::calcStatic )
                , ( bp::arg("pDrawable") ) );
        
        }
        { //::OSG::DrawableStatsAttachment::changed
        
            typedef void ( ::OSG::DrawableStatsAttachment::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            DrawableStatsAttachment_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::DrawableStatsAttachment::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::DrawableStatsAttachment::dump
        
            typedef void ( ::OSG::DrawableStatsAttachment::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            DrawableStatsAttachment_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::DrawableStatsAttachment::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::DrawableStatsAttachment::reset
        
            typedef void ( ::OSG::DrawableStatsAttachment::*reset_function_type )(  ) ;
            
            DrawableStatsAttachment_exposer.def( 
                "reset"
                , reset_function_type( &::OSG::DrawableStatsAttachment::reset ) );
        
        }
        { //::OSG::DrawableStatsAttachment::validate
        
            typedef void ( ::OSG::DrawableStatsAttachment::*validate_function_type )(  ) ;
            
            DrawableStatsAttachment_exposer.def( 
                "validate"
                , validate_function_type( &::OSG::DrawableStatsAttachment::validate ) );
        
        }
        DrawableStatsAttachment_exposer.staticmethod( "addTo" );
        DrawableStatsAttachment_exposer.staticmethod( "calcStatic" );
        pyopensg::register_transit< OSG::DrawableStatsAttachment >::execute();
        bp::implicitly_convertible< OSG::DrawableStatsAttachment::ObjRecPtr, OSG::DrawableStatsAttachment* >();
        bp::implicitly_convertible< OSG::DrawableStatsAttachment::ObjRecPtr, OSG::DrawableStatsAttachment::ObjCPtr >();
        bp::implicitly_convertible< OSG::DrawableStatsAttachment::ObjRecPtr, OSG::StatsAttachment* >();
        bp::implicitly_convertible< OSG::DrawableStatsAttachment::ObjRecPtr, OSG::StatsAttachment::ObjRecPtr >();
        bp::implicitly_convertible<OSG::DrawableStatsAttachment::ObjRecPtr, OSG::StatsAttachment::ObjCPtr>();
        DrawableStatsAttachment_exposer.def("__iadd__",dsa_iadd);
        DrawableStatsAttachment_exposer.def("__isub__",dsa_isub);
    }

}
