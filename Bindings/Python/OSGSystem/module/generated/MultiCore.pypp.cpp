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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "MultiCore.pypp.hpp"

using namespace std;
namespace bp = boost::python;

boost::python::list MultiCore_getMFCores(OSG::MultiCore *self)
{
   boost::python::list result;
   OSG::MFUnrecChildNodeCorePtr const * mf_data = self->getMFCores();
   const OSG::UInt32 size(mf_data->size());
   for ( OSG::UInt32 i = 0; i < size; ++i )
   {
      result.append(OSG::NodeCore::ObjRecPtr((*mf_data)[i]));
   }
   return result;
}

namespace
{

bp::list getCores(OSG::MultiCore* mc)
{
   bp::list cores;

   OSG::UInt32 num_cores(mc->getNCores());
   for ( OSG::UInt32 i = 0; i < num_cores; ++i )
   {
      cores.append(OSG::NodeCore::ObjTransitPtr(mc->getCores(i)));
   }

   return cores;
}

}

void register_MultiCore_class(){

    { //::OSG::MultiCore
        typedef bp::class_< OSG::MultiCore, bp::bases< OSG::MultiCoreBase >, OSG::MultiCore::ObjRecPtr, boost::noncopyable > MultiCore_exposer_t;
        MultiCore_exposer_t MultiCore_exposer = MultiCore_exposer_t( "MultiCore", bp::no_init );
        bp::scope MultiCore_scope( MultiCore_exposer );
        { //::OSG::MultiCore::accumulateMatrix
        
            typedef void ( ::OSG::MultiCore::*accumulateMatrix_function_type )( ::OSG::Matrix & ) ;
            
            MultiCore_exposer.def( 
                "accumulateMatrix"
                , accumulateMatrix_function_type( &::OSG::MultiCore::accumulateMatrix )
                , ( bp::arg("result") ) );
        
        }
        { //::OSG::MultiCore::addCore
        
            typedef void ( ::OSG::MultiCore::*addCore_function_type )( ::OSG::NodeCore * const ) ;
            
            MultiCore_exposer.def( 
                "addCore"
                , addCore_function_type( &::OSG::MultiCore::addCore )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::MultiCore::assignCoresFrom
        
            typedef void ( ::OSG::MultiCore::*assignCoresFrom_function_type )( ::OSG::MFUnrecChildNodeCorePtr const & ) ;
            
            MultiCore_exposer.def( 
                "assignCoresFrom"
                , assignCoresFrom_function_type( &::OSG::MultiCore::assignCoresFrom )
                , ( bp::arg("value") ) );
        
        }
        { //::OSG::MultiCore::changed
        
            typedef void ( ::OSG::MultiCore::*changed_function_type )( ::OSG::ConstFieldMaskArg,::OSG::UInt32,::OSG::BitVector ) ;
            
            MultiCore_exposer.def( 
                "changed"
                , changed_function_type( &::OSG::MultiCore::changed )
                , ( bp::arg("whichField"), bp::arg("origin"), bp::arg("details") ) );
        
        }
        { //::OSG::MultiCore::clearCores
        
            typedef void ( ::OSG::MultiCore::*clearCores_function_type )(  ) ;
            
            MultiCore_exposer.def( 
                "clearCores"
                , clearCores_function_type( &::OSG::MultiCore::clearCores ) );
        
        }
        { //::OSG::MultiCore::dump
        
            typedef void ( ::OSG::MultiCore::*dump_function_type )( ::OSG::UInt32,long unsigned int const ) const;
            
            MultiCore_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::MultiCore::dump )
                , ( bp::arg("uiIndent")=(::OSG::UInt32)(0), bp::arg("bvFlags")=(long unsigned int const)(0) ) );
        
        }
        { //::OSG::MultiCore::findCore
        
            typedef ::OSG::Int32 ( ::OSG::MultiCore::*findCore_function_type )( ::OSG::NodeCore * const ) const;
            
            MultiCore_exposer.def( 
                "findCore"
                , findCore_function_type( &::OSG::MultiCore::findCore )
                , ( bp::arg("pCore") ) );
        
        }
        { //::OSG::MultiCore::getCores
        
            typedef ::OSG::NodeCore * ( ::OSG::MultiCore::*getCores_function_type )( ::OSG::UInt32 const ) const;
            
            MultiCore_exposer.def( 
                "getCores"
                , getCores_function_type( &::OSG::MultiCore::getCores )
                , ( bp::arg("index") )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::MultiCore::getNCores
        
            typedef ::OSG::UInt32 ( ::OSG::MultiCore::*getNCores_function_type )(  ) const;
            
            MultiCore_exposer.def( 
                "getNCores"
                , getNCores_function_type( &::OSG::MultiCore::getNCores ) );
        
        }
        { //::OSG::MultiCore::insertCore
        
            typedef void ( ::OSG::MultiCore::*insertCore_function_type )( ::OSG::UInt32,::OSG::NodeCore * const ) ;
            
            MultiCore_exposer.def( 
                "insertCore"
                , insertCore_function_type( &::OSG::MultiCore::insertCore )
                , ( bp::arg("coreIdx"), bp::arg("coreP") ) );
        
        }
        { //::OSG::MultiCore::replaceCore
        
            typedef void ( ::OSG::MultiCore::*replaceCore_function_type )( ::OSG::UInt32,::OSG::NodeCore * const ) ;
            
            MultiCore_exposer.def( 
                "replaceCore"
                , replaceCore_function_type( &::OSG::MultiCore::replaceCore )
                , ( bp::arg("uiIndex"), bp::arg("value") ) );
        
        }
        { //::OSG::MultiCore::replaceCoreByObj
        
            typedef void ( ::OSG::MultiCore::*replaceCoreByObj_function_type )( ::OSG::NodeCore * const,::OSG::NodeCore * const ) ;
            
            MultiCore_exposer.def( 
                "replaceCoreByObj"
                , replaceCoreByObj_function_type( &::OSG::MultiCore::replaceCoreByObj )
                , ( bp::arg("pOldElem"), bp::arg("pNewElem") ) );
        
        }
        { //::OSG::MultiCore::subCore
        
            typedef void ( ::OSG::MultiCore::*subCore_function_type )( ::OSG::UInt32 ) ;
            
            MultiCore_exposer.def( 
                "subCore"
                , subCore_function_type( &::OSG::MultiCore::subCore )
                , ( bp::arg("uiIndex") ) );
        
        }
        { //::OSG::MultiCore::subCoreByObj
        
            typedef void ( ::OSG::MultiCore::*subCoreByObj_function_type )( ::OSG::NodeCore * const ) ;
            
            MultiCore_exposer.def( 
                "subCoreByObj"
                , subCoreByObj_function_type( &::OSG::MultiCore::subCoreByObj )
                , ( bp::arg("value") ) );
        
        }
        MultiCore_exposer.def("getMFCores",MultiCore_getMFCores);
        pyopensg::register_transit< OSG::MultiCore >::execute();
        bp::implicitly_convertible< OSG::MultiCore::ObjRecPtr, OSG::MultiCore* >();
        bp::implicitly_convertible< OSG::MultiCore::ObjRecPtr, OSG::MultiCore::ObjCPtr >();
        bp::implicitly_convertible< OSG::MultiCore::ObjRecPtr, OSG::Group* >();
        bp::implicitly_convertible< OSG::MultiCore::ObjRecPtr, OSG::Group::ObjRecPtr >();
        bp::implicitly_convertible<OSG::MultiCore::ObjRecPtr, OSG::Group::ObjCPtr>();
        MultiCore_exposer.add_property("cores", getCores);
    }

}