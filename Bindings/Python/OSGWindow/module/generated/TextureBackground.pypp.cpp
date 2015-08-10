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
#include "OSGWindow_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "TextureBackground.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_TextureBackground_class(){

    { //::OSG::TextureBackground
        typedef bp::class_< OSG::TextureBackground, bp::bases< OSG::TextureBackgroundBase >, OSG::TextureBackground::ObjRecPtr, boost::noncopyable > TextureBackground_exposer_t;
        TextureBackground_exposer_t TextureBackground_exposer = TextureBackground_exposer_t( "TextureBackground", bp::no_init );
        bp::scope TextureBackground_scope( TextureBackground_exposer );
        { //::OSG::TextureBackground::changed
        
            typedef void ( ::OSG::TextureBackground::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            TextureBackground_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::TextureBackground::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("detail") ) );
        
        }
        { //::OSG::TextureBackground::clear
        
            typedef void ( ::OSG::TextureBackground::*clear_function_type )( ::OSG::DrawEnv * ) ;
            
            TextureBackground_exposer.def( 
                "clear"
                , clear_function_type( &::OSG::TextureBackground::clear )
                , ( bp::arg("pEnv") ) );
        
        }
        { //::OSG::TextureBackground::dump
        
            typedef void ( ::OSG::TextureBackground::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            TextureBackground_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::TextureBackground::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::TextureBackground >::execute();
        bp::implicitly_convertible< OSG::TextureBackground::ObjRecPtr, OSG::TextureBackground* >();
        bp::implicitly_convertible< OSG::TextureBackground::ObjRecPtr, OSG::TextureBackground::ObjCPtr >();
        bp::implicitly_convertible< OSG::TextureBackground::ObjRecPtr, OSG::Background* >();
        bp::implicitly_convertible< OSG::TextureBackground::ObjRecPtr, OSG::Background::ObjRecPtr >();
        bp::implicitly_convertible<OSG::TextureBackground::ObjRecPtr, OSG::Background::ObjCPtr>();
    }

}
