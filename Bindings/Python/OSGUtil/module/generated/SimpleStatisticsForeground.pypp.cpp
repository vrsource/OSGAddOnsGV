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
#include "OSGUtil_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "SimpleStatisticsForeground.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_SimpleStatisticsForeground_class(){

    { //::OSG::SimpleStatisticsForeground
        typedef bp::class_< OSG::SimpleStatisticsForeground, bp::bases< OSG::SimpleStatisticsForegroundBase >, OSG::SimpleStatisticsForeground::ObjRecPtr, boost::noncopyable > SimpleStatisticsForeground_exposer_t;
        SimpleStatisticsForeground_exposer_t SimpleStatisticsForeground_exposer = SimpleStatisticsForeground_exposer_t( "SimpleStatisticsForeground", bp::no_init );
        bp::scope SimpleStatisticsForeground_scope( SimpleStatisticsForeground_exposer );
        bp::scope().attr("Left") = (int)OSG::SimpleStatisticsForeground::Left;
        bp::scope().attr("Middle") = (int)OSG::SimpleStatisticsForeground::Middle;
        bp::scope().attr("Right") = (int)OSG::SimpleStatisticsForeground::Right;
        bp::scope().attr("Top") = (int)OSG::SimpleStatisticsForeground::Top;
        bp::scope().attr("Center") = (int)OSG::SimpleStatisticsForeground::Center;
        bp::scope().attr("Bottom") = (int)OSG::SimpleStatisticsForeground::Bottom;
        { //::OSG::SimpleStatisticsForeground::addElement
        
            typedef void ( ::OSG::SimpleStatisticsForeground::*addElement_function_type )( ::OSG::StatElemDescBase &,::OSG::Char8 const * ) ;
            
            SimpleStatisticsForeground_exposer.def( 
                "addElement"
                , addElement_function_type( &::OSG::SimpleStatisticsForeground::addElement )
                , ( bp::arg("desc"), bp::arg("format")=0l ) );
        
        }
        { //::OSG::SimpleStatisticsForeground::addElement
        
            typedef void ( ::OSG::SimpleStatisticsForeground::*addElement_function_type )( ::OSG::Int32,::OSG::Char8 const * ) ;
            
            SimpleStatisticsForeground_exposer.def( 
                "addElement"
                , addElement_function_type( &::OSG::SimpleStatisticsForeground::addElement )
                , ( bp::arg("id"), bp::arg("format")=0l ) );
        
        }
        { //::OSG::SimpleStatisticsForeground::addText
        
            typedef void ( ::OSG::SimpleStatisticsForeground::*addText_function_type )( char const * ) ;
            
            SimpleStatisticsForeground_exposer.def( 
                "addText"
                , addText_function_type( &::OSG::SimpleStatisticsForeground::addText )
                , ( bp::arg("text") ) );
        
        }
        { //::OSG::SimpleStatisticsForeground::changed
        
            typedef void ( ::OSG::SimpleStatisticsForeground::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            SimpleStatisticsForeground_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::SimpleStatisticsForeground::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::SimpleStatisticsForeground::clearElems
        
            typedef void ( ::OSG::SimpleStatisticsForeground::*clearElems_function_type )(  ) ;
            
            SimpleStatisticsForeground_exposer.def( 
                "clearElems"
                , clearElems_function_type( &::OSG::SimpleStatisticsForeground::clearElems ) );
        
        }
        { //::OSG::SimpleStatisticsForeground::dump
        
            typedef void ( ::OSG::SimpleStatisticsForeground::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            SimpleStatisticsForeground_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::SimpleStatisticsForeground::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        pyopensg::register_transit< OSG::SimpleStatisticsForeground >::execute();
        bp::implicitly_convertible< OSG::SimpleStatisticsForeground::ObjRecPtr, OSG::SimpleStatisticsForeground* >();
        bp::implicitly_convertible< OSG::SimpleStatisticsForeground::ObjRecPtr, OSG::SimpleStatisticsForeground::ObjCPtr >();
        bp::implicitly_convertible< OSG::SimpleStatisticsForeground::ObjRecPtr, OSG::StatisticsForeground* >();
        bp::implicitly_convertible< OSG::SimpleStatisticsForeground::ObjRecPtr, OSG::StatisticsForeground::ObjRecPtr >();
        bp::implicitly_convertible<OSG::SimpleStatisticsForeground::ObjRecPtr, OSG::StatisticsForeground::ObjCPtr>();
    }

}
