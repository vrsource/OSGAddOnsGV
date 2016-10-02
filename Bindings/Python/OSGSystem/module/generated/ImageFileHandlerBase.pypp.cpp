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
#include "OSGSystem_mainheader.h"
#include "OsgPtrHelpers.h"
#include "boost/python/suite/indexing/map_indexing_suite.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "ImageFileHandlerBase.pypp.hpp"

using namespace std;
namespace bp = boost::python;

namespace
{

bp::list wrapGetSuffixList(OSG::ImageFileHandlerBase& ifh,
                           const OSG::UInt32 flags)
{
   std::list<const OSG::Char8*> list;
   ifh.getSuffixList(list, flags);
   bp::list python_list;

   typedef std::list<const OSG::Char8*>::iterator iter_type;
   for ( iter_type i = list.begin(); i != list.end(); ++i )
   {
      python_list.append(*i);
   }

   return python_list;
}

bp::dict wrapGetMimeTypeMap(OSG::ImageFileHandlerBase& ifh)
{
   bp::dict python_dict;

   const OSG::ImageFileHandlerBase::TypeMap& mime_type_map = ifh.getMimeTypeMap();
   typedef OSG::ImageFileHandlerBase::TypeMap::const_iterator iter_type;
   for (iter_type itr = mime_type_map.begin(); itr != mime_type_map.end(); itr++)
   {
      python_dict[(*itr).first] = bp::ptr((*itr).second);
   }

   return python_dict;
}

bp::dict wrapGetSuffixTypeMap(OSG::ImageFileHandlerBase& ifh)
{
   bp::dict python_dict;

   const OSG::ImageFileHandlerBase::TypeMap& mime_type_map = ifh.getSuffixTypeMap();
   typedef OSG::ImageFileHandlerBase::TypeMap::const_iterator iter_type;
   for (iter_type itr = mime_type_map.begin(); itr != mime_type_map.end(); itr++)
   {
      python_dict[(*itr).first] = bp::ptr((*itr).second);
   }

   return python_dict;
}

}

void register_ImageFileHandlerBase_class(){

    { //::OSG::ImageFileHandlerBase
        typedef bp::class_< OSG::ImageFileHandlerBase, boost::noncopyable > ImageFileHandlerBase_exposer_t;
        ImageFileHandlerBase_exposer_t ImageFileHandlerBase_exposer = ImageFileHandlerBase_exposer_t( "ImageFileHandlerBase", bp::no_init );
        bp::scope ImageFileHandlerBase_scope( ImageFileHandlerBase_exposer );
        { //::OSG::ImageFileHandlerBase::determineMimetypeFromName
        
            typedef ::std::string ( ::OSG::ImageFileHandlerBase::*determineMimetypeFromName_function_type )( ::std::string const & ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "determineMimetypeFromName"
                , determineMimetypeFromName_function_type( &::OSG::ImageFileHandlerBase::determineMimetypeFromName )
                , ( bp::arg("fileName") ) );
        
        }
        { //::OSG::ImageFileHandlerBase::determineMimetypeFromStream
        
            typedef ::std::string ( ::OSG::ImageFileHandlerBase::*determineMimetypeFromStream_function_type )( ::std::istream & ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "determineMimetypeFromStream"
                , determineMimetypeFromStream_function_type( &::OSG::ImageFileHandlerBase::determineMimetypeFromStream )
                , ( bp::arg("is") ) );
        
        }
        { //::OSG::ImageFileHandlerBase::determineMimetypeFromSuffix
        
            typedef ::std::string ( ::OSG::ImageFileHandlerBase::*determineMimetypeFromSuffix_function_type )( ::std::string const & ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "determineMimetypeFromSuffix"
                , determineMimetypeFromSuffix_function_type( &::OSG::ImageFileHandlerBase::determineMimetypeFromSuffix )
                , ( bp::arg("suffix") ) );
        
        }
        { //::OSG::ImageFileHandlerBase::dump
        
            typedef void ( ::OSG::ImageFileHandlerBase::*dump_function_type )(  ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "dump"
                , dump_function_type( &::OSG::ImageFileHandlerBase::dump ) );
        
        }
        { //::OSG::ImageFileHandlerBase::getDefaultType
        
            typedef ::OSG::ImageFileType * ( ::OSG::ImageFileHandlerBase::*getDefaultType_function_type )(  ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "getDefaultType"
                , getDefaultType_function_type( &::OSG::ImageFileHandlerBase::getDefaultType )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ImageFileHandlerBase::getFileType
        
            typedef ::OSG::ImageFileType * ( ::OSG::ImageFileHandlerBase::*getFileType_function_type )( ::OSG::Char8 const *,::OSG::Char8 const *,bool ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "getFileType"
                , getFileType_function_type( &::OSG::ImageFileHandlerBase::getFileType )
                , ( bp::arg("mimeType"), bp::arg("fileName")=bp::object(), bp::arg("validateHeader")=(bool)(false) )
                , bp::return_internal_reference< >() );
        
        }
        { //::OSG::ImageFileHandlerBase::getOption
        
            typedef bool ( ::OSG::ImageFileHandlerBase::*getOption_function_type )( ::std::string const &,::std::string const &,::std::string & ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "getOption"
                , getOption_function_type( &::OSG::ImageFileHandlerBase::getOption )
                , ( bp::arg("suffix"), bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ImageFileHandlerBase::open
        
            typedef ::boost::shared_ptr< OSG::ImageBlockAccessor > ( ::OSG::ImageFileHandlerBase::*open_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "open"
                , open_function_type( &::OSG::ImageFileHandlerBase::open )
                , ( bp::arg("fileName"), bp::arg("mimeType")=bp::object() ) );
        
        }
        { //::OSG::ImageFileHandlerBase::read
        
            typedef ::OSG::ImageTransitPtr ( ::OSG::ImageFileHandlerBase::*read_function_type )( ::OSG::Char8 const *,::OSG::Char8 const * ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "read"
                , read_function_type( &::OSG::ImageFileHandlerBase::read )
                , ( bp::arg("fileName"), bp::arg("mimeType")=bp::object() ) );
        
        }
        { //::OSG::ImageFileHandlerBase::read
        
            typedef bool ( ::OSG::ImageFileHandlerBase::*read_function_type )( ::OSG::Image *,::OSG::Char8 const *,::OSG::Char8 const * ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "read"
                , read_function_type( &::OSG::ImageFileHandlerBase::read )
                , ( bp::arg("pImage"), bp::arg("fileName"), bp::arg("mimeType")=bp::object() ) );
        
        }
        { //::OSG::ImageFileHandlerBase::read
        
            typedef ::OSG::ImageTransitPtr ( ::OSG::ImageFileHandlerBase::*read_function_type )( ::std::istream &,::std::string const & ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "read"
                , read_function_type( &::OSG::ImageFileHandlerBase::read )
                , ( bp::arg("is"), bp::arg("mimeType") ) );
        
        }
        { //::OSG::ImageFileHandlerBase::read
        
            typedef bool ( ::OSG::ImageFileHandlerBase::*read_function_type )( ::OSG::Image *,::std::istream &,::std::string const & ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "read"
                , read_function_type( &::OSG::ImageFileHandlerBase::read )
                , ( bp::arg("pImage"), bp::arg("is"), bp::arg("mimeType") ) );
        
        }
        { //::OSG::ImageFileHandlerBase::restore
        
            typedef ::OSG::UInt64 ( ::OSG::ImageFileHandlerBase::*restore_function_type )( ::OSG::Image *,::OSG::UChar8 const *,::OSG::Int32 ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "restore"
                , restore_function_type( &::OSG::ImageFileHandlerBase::restore )
                , ( bp::arg("pImage"), bp::arg("buffer"), bp::arg("memSize")=(::OSG::Int32)(-0x00000000000000001) ) );
        
        }
        { //::OSG::ImageFileHandlerBase::setOption
        
            typedef bool ( ::OSG::ImageFileHandlerBase::*setOption_function_type )( ::std::string const &,::std::string const &,::std::string const & ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "setOption"
                , setOption_function_type( &::OSG::ImageFileHandlerBase::setOption )
                , ( bp::arg("suffix"), bp::arg("name"), bp::arg("value") ) );
        
        }
        { //::OSG::ImageFileHandlerBase::setPathHandler
        
            typedef void ( ::OSG::ImageFileHandlerBase::*setPathHandler_function_type )( ::OSG::PathHandler * ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "setPathHandler"
                , setPathHandler_function_type( &::OSG::ImageFileHandlerBase::setPathHandler )
                , ( bp::arg("pPathHandler") ) );
        
        }
        { //::OSG::ImageFileHandlerBase::unsetOption
        
            typedef bool ( ::OSG::ImageFileHandlerBase::*unsetOption_function_type )( ::std::string const &,::std::string const & ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "unsetOption"
                , unsetOption_function_type( &::OSG::ImageFileHandlerBase::unsetOption )
                , ( bp::arg("suffix"), bp::arg("name") ) );
        
        }
        { //::OSG::ImageFileHandlerBase::write
        
            typedef bool ( ::OSG::ImageFileHandlerBase::*write_function_type )( ::OSG::Image const *,::OSG::Char8 const *,::OSG::Char8 const * ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "write"
                , write_function_type( &::OSG::ImageFileHandlerBase::write )
                , ( bp::arg("pImage"), bp::arg("fileName"), bp::arg("mimeType")=bp::object() ) );
        
        }
        { //::OSG::ImageFileHandlerBase::write
        
            typedef bool ( ::OSG::ImageFileHandlerBase::*write_function_type )( ::OSG::Image const *,::std::ostream &,::std::string const & ) ;
            
            ImageFileHandlerBase_exposer.def( 
                "write"
                , write_function_type( &::OSG::ImageFileHandlerBase::write )
                , ( bp::arg("pImage"), bp::arg("os"), bp::arg("mimeType") ) );
        
        }
        ImageFileHandlerBase_exposer.def("getSuffixList", wrapGetSuffixList,
                  (bp::arg("flags") = OSG::ImageFileType::OSG_READ_SUPPORTED |
                                      OSG::ImageFileType::OSG_WRITE_SUPPORTED));
        ImageFileHandlerBase_exposer.def("getMimeTypeMap", wrapGetMimeTypeMap);
        ImageFileHandlerBase_exposer.def("getSuffixTypeMap", wrapGetSuffixTypeMap);
    }

}
