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
#endif

#include "boost/python.hpp"
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimTargetAttachment.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_AnimTargetAttachment_class(){

    { //::OSG::AnimTargetAttachment
        typedef bp::class_< OSG::AnimTargetAttachment, bp::bases< OSG::AnimTargetAttachmentBase >, OSG::AnimTargetAttachment::ObjRecPtr, boost::noncopyable > AnimTargetAttachment_exposer_t;
        AnimTargetAttachment_exposer_t AnimTargetAttachment_exposer = AnimTargetAttachment_exposer_t( "AnimTargetAttachment", bp::no_init );
        bp::scope AnimTargetAttachment_scope( AnimTargetAttachment_exposer );
        { //::OSG::AnimTargetAttachment::changed
        
            typedef void ( ::OSG::AnimTargetAttachment::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            AnimTargetAttachment_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::AnimTargetAttachment::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::AnimTargetAttachment::dump
        
            typedef void ( ::OSG::AnimTargetAttachment::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            AnimTargetAttachment_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::AnimTargetAttachment::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::AnimTargetAttachment >::execute();
        bp::implicitly_convertible< OSG::AnimTargetAttachment::ObjRecPtr, OSG::AnimTargetAttachment* >();
        bp::implicitly_convertible< OSG::AnimTargetAttachment::ObjRecPtr, OSG::AnimTargetAttachment::ObjCPtr >();
        bp::implicitly_convertible< OSG::AnimTargetAttachment::ObjRecPtr, OSG::Attachment* >();
        bp::implicitly_convertible< OSG::AnimTargetAttachment::ObjRecPtr, OSG::Attachment::ObjRecPtr >();
        bp::implicitly_convertible<OSG::AnimTargetAttachment::ObjRecPtr, OSG::Attachment::ObjCPtr>();
    }

}