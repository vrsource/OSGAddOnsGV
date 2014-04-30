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
#include "GeoReferenceAttachment.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_GeoReferenceAttachment_class(){

    { //::OSG::GeoReferenceAttachment
        typedef bp::class_< OSG::GeoReferenceAttachment, bp::bases< OSG::GeoReferenceAttachmentBase >, OSG::GeoReferenceAttachment::ObjRecPtr, boost::noncopyable > GeoReferenceAttachment_exposer_t;
        GeoReferenceAttachment_exposer_t GeoReferenceAttachment_exposer = GeoReferenceAttachment_exposer_t( "GeoReferenceAttachment", bp::no_init );
        bp::scope GeoReferenceAttachment_scope( GeoReferenceAttachment_exposer );
        bp::enum_< OSG::GeoReferenceAttachment::Datum>("Datum")
            .value("UnknownDatum", OSG::GeoReferenceAttachment::UnknownDatum)
            .value("WGS84", OSG::GeoReferenceAttachment::WGS84)
            .export_values()
            ;
        { //::OSG::GeoReferenceAttachment::changed
        
            typedef void ( ::OSG::GeoReferenceAttachment::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            GeoReferenceAttachment_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::GeoReferenceAttachment::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::GeoReferenceAttachment::dump
        
            typedef void ( ::OSG::GeoReferenceAttachment::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            GeoReferenceAttachment_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::GeoReferenceAttachment::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::GeoReferenceAttachment::setupWGS84Datum
        
            typedef void ( ::OSG::GeoReferenceAttachment::*setupWGS84Datum_function_type )(  ) ;
            
            GeoReferenceAttachment_exposer.def( 
                "setupWGS84Datum"
                , setupWGS84Datum_function_type( &::OSG::GeoReferenceAttachment::setupWGS84Datum ) );
        
        }
        pyopensg::register_transit< OSG::GeoReferenceAttachment >::execute();
        bp::implicitly_convertible< OSG::GeoReferenceAttachment::ObjRecPtr, OSG::GeoReferenceAttachment* >();
        bp::implicitly_convertible< OSG::GeoReferenceAttachment::ObjRecPtr, OSG::GeoReferenceAttachment::ObjCPtr >();
        bp::implicitly_convertible< OSG::GeoReferenceAttachment::ObjRecPtr, OSG::Attachment* >();
        bp::implicitly_convertible< OSG::GeoReferenceAttachment::ObjRecPtr, OSG::Attachment::ObjRecPtr >();
        bp::implicitly_convertible<OSG::GeoReferenceAttachment::ObjRecPtr, OSG::Attachment::ObjCPtr>();
    }

}
