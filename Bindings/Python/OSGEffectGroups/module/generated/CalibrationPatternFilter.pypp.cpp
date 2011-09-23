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
#include "OSGEffectGroups_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "CalibrationPatternFilter.pypp.hpp"

using namespace std;
namespace bp = boost::python;

void register_CalibrationPatternFilter_class(){

    { //::OSG::CalibrationPatternFilter
        typedef bp::class_< OSG::CalibrationPatternFilter, bp::bases< OSG::CalibrationPatternFilterBase >, boost::noncopyable > CalibrationPatternFilter_exposer_t;
        CalibrationPatternFilter_exposer_t CalibrationPatternFilter_exposer = CalibrationPatternFilter_exposer_t( "CalibrationPatternFilter", bp::no_init );
        bp::scope CalibrationPatternFilter_scope( CalibrationPatternFilter_exposer );
        { //::OSG::CalibrationPatternFilter::changed
        
            typedef void ( ::OSG::CalibrationPatternFilter::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            CalibrationPatternFilter_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::CalibrationPatternFilter::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::CalibrationPatternFilter::dump
        
            typedef void ( ::OSG::CalibrationPatternFilter::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            CalibrationPatternFilter_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::CalibrationPatternFilter::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::CalibrationPatternFilter::processActive
        
            typedef void ( ::OSG::CalibrationPatternFilter::*processActive_function_type )( ::OSG::DisplayFilterStageData *,::OSG::DrawEnv * ) ;
            
            CalibrationPatternFilter_exposer.def( 
                "processActive"
                , processActive_function_type( &::OSG::CalibrationPatternFilter::processActive )
                , ( bp::arg("pData"), bp::arg("pEnv") ) );
        
        }
        { //::OSG::CalibrationPatternFilter::processInactive
        
            typedef void ( ::OSG::CalibrationPatternFilter::*processInactive_function_type )( ::OSG::DisplayFilterStageData *,::OSG::DrawEnv * ) ;
            
            CalibrationPatternFilter_exposer.def( 
                "processInactive"
                , processInactive_function_type( &::OSG::CalibrationPatternFilter::processInactive )
                , ( bp::arg("pData"), bp::arg("pEnv") ) );
        
        }
        pyopensg::register_transit< OSG::CalibrationPatternFilter >::execute();
        bp::register_ptr_to_python< OSG::CalibrationPatternFilter::ObjRecPtr >();
        bp::implicitly_convertible< OSG::CalibrationPatternFilter::ObjRecPtr, OSG::CalibrationPatternFilter* >();
        bp::implicitly_convertible< OSG::CalibrationPatternFilter::ObjRecPtr, OSG::CalibrationPatternFilter::ObjCPtr >();
        bp::implicitly_convertible< OSG::CalibrationPatternFilter::ObjRecPtr, OSG::AttachmentContainer* >();
        bp::implicitly_convertible< OSG::CalibrationPatternFilter::ObjRecPtr, OSG::AttachmentContainer::ObjRecPtr >();
        bp::implicitly_convertible<OSG::CalibrationPatternFilter::ObjRecPtr, OSG::AttachmentContainer::ObjCPtr>();
    }

}