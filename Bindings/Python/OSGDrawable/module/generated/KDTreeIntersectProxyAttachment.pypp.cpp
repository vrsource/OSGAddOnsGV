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
#include "KDTreeIntersectProxyAttachment.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list KDTreeIntersectProxyAttachment_getMFTreeNodes(OSG::KDTreeIntersectProxyAttachment *self)
{
   boost::python::list result;
   OSG::MFIntersectKDTreeNode const * mf_data = self->getMFTreeNodes();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

boost::python::list KDTreeIntersectProxyAttachment_getMFTriIndices(OSG::KDTreeIntersectProxyAttachment *self)
{
   boost::python::list result;
   OSG::MFUInt32 const * mf_data = self->getMFTriIndices();
   const OSG::UInt32 size(mf_data->size32());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append((*mf_data)[i]);
   }
   return result;
}

void register_KDTreeIntersectProxyAttachment_class(){

    { //::OSG::KDTreeIntersectProxyAttachment
        typedef bp::class_< OSG::KDTreeIntersectProxyAttachment, bp::bases< OSG::KDTreeIntersectProxyAttachmentBase >, OSG::KDTreeIntersectProxyAttachment::ObjRecPtr, boost::noncopyable > KDTreeIntersectProxyAttachment_exposer_t;
        KDTreeIntersectProxyAttachment_exposer_t KDTreeIntersectProxyAttachment_exposer = KDTreeIntersectProxyAttachment_exposer_t( "KDTreeIntersectProxyAttachment", bp::no_init );
        bp::scope KDTreeIntersectProxyAttachment_scope( KDTreeIntersectProxyAttachment_exposer );
        { //::OSG::KDTreeIntersectProxyAttachment::changed
        
            typedef void ( ::OSG::KDTreeIntersectProxyAttachment::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            KDTreeIntersectProxyAttachment_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::KDTreeIntersectProxyAttachment::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachment::dump
        
            typedef void ( ::OSG::KDTreeIntersectProxyAttachment::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            KDTreeIntersectProxyAttachment_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::KDTreeIntersectProxyAttachment::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachment::getTreeNodes
        
            typedef ::OSG::IntersectKDTreeNode const & ( ::OSG::KDTreeIntersectProxyAttachment::*getTreeNodes_function_type )( ::OSG::UInt32 const ) const;
            
            KDTreeIntersectProxyAttachment_exposer.def( 
                "getTreeNodes"
                , getTreeNodes_function_type( &::OSG::KDTreeIntersectProxyAttachment::getTreeNodes )
                , ( bp::arg("index") )
                , bp::return_value_policy< bp::copy_const_reference >() );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachment::getTriIndices
        
            typedef ::OSG::UInt32 ( ::OSG::KDTreeIntersectProxyAttachment::*getTriIndices_function_type )( ::OSG::UInt32 const ) const;
            
            KDTreeIntersectProxyAttachment_exposer.def( 
                "getTriIndices"
                , getTriIndices_function_type( &::OSG::KDTreeIntersectProxyAttachment::getTriIndices )
                , ( bp::arg("index") ) );
        
        }
        { //::OSG::KDTreeIntersectProxyAttachment::intersectEnter
        
            typedef ::OSG::ActionBase::ResultE ( ::OSG::KDTreeIntersectProxyAttachment::*intersectEnter_function_type )( ::OSG::Node *,::OSG::Action * ) ;
            
            KDTreeIntersectProxyAttachment_exposer.def( 
                "intersectEnter"
                , intersectEnter_function_type( &::OSG::KDTreeIntersectProxyAttachment::intersectEnter )
                , ( bp::arg("node"), bp::arg("action") ) );
        
        }
        KDTreeIntersectProxyAttachment_exposer.def("getMFTreeNodes",KDTreeIntersectProxyAttachment_getMFTreeNodes);
        KDTreeIntersectProxyAttachment_exposer.def("getMFTriIndices",KDTreeIntersectProxyAttachment_getMFTriIndices);
        pyopensg::register_transit< OSG::KDTreeIntersectProxyAttachment >::execute();
        bp::implicitly_convertible< OSG::KDTreeIntersectProxyAttachment::ObjRecPtr, OSG::KDTreeIntersectProxyAttachment* >();
        bp::implicitly_convertible< OSG::KDTreeIntersectProxyAttachment::ObjRecPtr, OSG::KDTreeIntersectProxyAttachment::ObjCPtr >();
        bp::implicitly_convertible< OSG::KDTreeIntersectProxyAttachment::ObjRecPtr, OSG::IntersectProxyAttachment* >();
        bp::implicitly_convertible< OSG::KDTreeIntersectProxyAttachment::ObjRecPtr, OSG::IntersectProxyAttachment::ObjRecPtr >();
        bp::implicitly_convertible<OSG::KDTreeIntersectProxyAttachment::ObjRecPtr, OSG::IntersectProxyAttachment::ObjCPtr>();
    }

}
