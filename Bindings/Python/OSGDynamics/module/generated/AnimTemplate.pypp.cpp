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
#include "OSGDynamics_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "AnimTemplate.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_AnimTemplate_class(){

    { //::OSG::AnimTemplate
        typedef bp::class_< OSG::AnimTemplate, bp::bases< OSG::AnimTemplateBase >, boost::noncopyable > AnimTemplate_exposer_t;
        AnimTemplate_exposer_t AnimTemplate_exposer = AnimTemplate_exposer_t( "AnimTemplate", bp::no_init );
        bp::scope AnimTemplate_scope( AnimTemplate_exposer );
        { //::OSG::AnimTemplate::changed
        
            typedef void ( ::OSG::AnimTemplate::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            AnimTemplate_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::AnimTemplate::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::AnimTemplate::dump
        
            typedef void ( ::OSG::AnimTemplate::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            AnimTemplate_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::AnimTemplate::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::AnimTemplate::findTargetId
        
            typedef ::OSG::Int32 ( ::OSG::AnimTemplate::*findTargetId_function_type )( ::std::string const &,::OSG::Int32 ) const;
            
            AnimTemplate_exposer.def( 
                "findTargetId"
                , findTargetId_function_type( &::OSG::AnimTemplate::findTargetId )
                , ( bp::arg("targetId"), bp::arg("offset")=(::OSG::Int32)(0) ) );
        
        }
        { //::OSG::AnimTemplate::getLength
        
            typedef ::OSG::Real32 ( ::OSG::AnimTemplate::*getLength_function_type )(  ) const;
            
            AnimTemplate_exposer.def( 
                "getLength"
                , getLength_function_type( &::OSG::AnimTemplate::getLength ) );
        
        }
        { //::OSG::AnimTemplate::instantiate
        
            typedef ::OSG::AnimationTransitPtr ( ::OSG::AnimTemplate::*instantiate_function_type )( ::OSG::Node * ) ;
            
            AnimTemplate_exposer.def( 
                "instantiate"
                , instantiate_function_type( &::OSG::AnimTemplate::instantiate )
                , ( bp::arg("rootNode") ) );
        
        }
        pyopensg::register_transit< OSG::AnimTemplate >::execute();
        bp::register_ptr_to_python< OSG::AnimTemplate::ObjRecPtr >();
        bp::implicitly_convertible< OSG::AnimTemplate::ObjRecPtr, OSG::AnimTemplate* >();
        bp::implicitly_convertible< OSG::AnimTemplate::ObjRecPtr, OSG::AnimTemplate::ObjCPtr >();
        bp::implicitly_convertible< OSG::AnimTemplate::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::AnimTemplate::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::AnimTemplate::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
    }

}
