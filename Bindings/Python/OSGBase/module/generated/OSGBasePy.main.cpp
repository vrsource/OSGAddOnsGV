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

#include "__convenience.pypp.hpp"

#include "__call_policies.pypp.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "OSGBase_mainheader.h"

#include "OsgPtrHelpers.h"

#include "boost/python/suite/indexing/map_indexing_suite.hpp"

#include "boost/python/suite/indexing/vector_indexing_suite.hpp"

#include "generated/AspectOffsetStore.pypp.hpp"

#include "generated/Attachment.pypp.hpp"

#include "generated/AttachmentBase.pypp.hpp"

#include "generated/AttachmentContainer.pypp.hpp"

#include "generated/BoxVolume.pypp.hpp"

#include "generated/ChangeList.pypp.hpp"

#include "generated/Color3f.pypp.hpp"

#include "generated/Color3ub.pypp.hpp"

#include "generated/Color4f.pypp.hpp"

#include "generated/Color4ub.pypp.hpp"

#include "generated/ConnectionFactory.pypp.hpp"

#include "generated/ConnectionFactoryBase.pypp.hpp"

#include "generated/ConnectorAttachment.pypp.hpp"

#include "generated/ConnectorAttachmentBase.pypp.hpp"

#include "generated/ContainerMixinHardwareContextDataSlotDesc.pypp.hpp"

#include "generated/CylinderVolume.pypp.hpp"

#include "generated/DataType.pypp.hpp"

#include "generated/Exception.pypp.hpp"

#include "generated/ExceptionBinaryDataHandler.pypp.hpp"

#include "generated/ExternalThread.pypp.hpp"

#include "generated/FieldContainer.pypp.hpp"

#include "generated/FieldContainerFactory.pypp.hpp"

#include "generated/FieldContainerFactoryBase.pypp.hpp"

#include "generated/FieldContainerType.pypp.hpp"

#include "generated/FieldDescriptionBase.pypp.hpp"

#include "generated/FieldType.pypp.hpp"

#include "generated/FrustumVolume.pypp.hpp"

#include "generated/GlobalsAttachment.pypp.hpp"

#include "generated/GlobalsAttachmentBase.pypp.hpp"

#include "generated/HardwareContext.pypp.hpp"

#include "generated/HardwareContextBase.pypp.hpp"

#include "generated/HardwareContextParent.pypp.hpp"

#include "generated/Line.pypp.hpp"

#include "generated/MapHelper.pypp.hpp"

#include "generated/MapHelperBase.pypp.hpp"

#include "generated/Matrix.pypp.hpp"

#include "generated/Matrix4d.pypp.hpp"

#include "generated/MemoryObject.pypp.hpp"

#include "generated/NestedSampleInfo.pypp.hpp"

#include "generated/Node.pypp.hpp"

#include "generated/NodeCore.pypp.hpp"

#include "generated/NodeCoreBase.pypp.hpp"

#include "generated/OSGBasePy_free_functions.pypp.hpp"

#include "generated/PerfMonitor.pypp.hpp"

#include "generated/PerfMonitorBase.pypp.hpp"

#include "generated/Plane.pypp.hpp"

#include "generated/Pnt2d.pypp.hpp"

#include "generated/Pnt2f.pypp.hpp"

#include "generated/Pnt3d.pypp.hpp"

#include "generated/Pnt3f.pypp.hpp"

#include "generated/Pnt4d.pypp.hpp"

#include "generated/Pnt4f.pypp.hpp"

#include "generated/PolytopeVolume.pypp.hpp"

#include "generated/Quaternion.pypp.hpp"

#include "generated/Quaterniond.pypp.hpp"

#include "generated/ReflexiveContainer.pypp.hpp"

#include "generated/ReflexiveContainerType.pypp.hpp"

#include "generated/SocketException.pypp.hpp"

#include "generated/SphereVolume.pypp.hpp"

#include "generated/StatCollector.pypp.hpp"

#include "generated/StatElemDescBase.pypp.hpp"

#include "generated/StatElemDesc_StatIntElem.pypp.hpp"

#include "generated/StatElemDesc_StatIntOnceElem.pypp.hpp"

#include "generated/StatElemDesc_StatRealElem.pypp.hpp"

#include "generated/StatElemDesc_StatTimeElem.pypp.hpp"

#include "generated/Thread.pypp.hpp"

#include "generated/TypeBase.pypp.hpp"

#include "generated/TypePtrVector.pypp.hpp"

#include "generated/Vec2d.pypp.hpp"

#include "generated/Vec2f.pypp.hpp"

#include "generated/Vec2ub.pypp.hpp"

#include "generated/Vec3d.pypp.hpp"

#include "generated/Vec3f.pypp.hpp"

#include "generated/Vec3ub.pypp.hpp"

#include "generated/Vec4d.pypp.hpp"

#include "generated/Vec4f.pypp.hpp"

#include "generated/Vec4ub.pypp.hpp"

#include "generated/VecStorage2d.pypp.hpp"

#include "generated/VecStorage2f.pypp.hpp"

#include "generated/VecStorage2ub.pypp.hpp"

#include "generated/VecStorage3d.pypp.hpp"

#include "generated/VecStorage3f.pypp.hpp"

#include "generated/VecStorage3ub.pypp.hpp"

#include "generated/VecStorage4d.pypp.hpp"

#include "generated/VecStorage4f.pypp.hpp"

#include "generated/VecStorage4ub.pypp.hpp"

#include "generated/Volume.pypp.hpp"

#include "generated/float_vector_t.pypp.hpp"

#include "generated/sample_data_list_t.pypp.hpp"

#include "generated/string_vector_t.pypp.hpp"

#include "generated/ushort_vector_t.pypp.hpp"

using namespace std;

namespace bp = boost::python;

BOOST_PYTHON_MODULE(OSGBasePy){
    register_ushort_vector_t_class();

    register_string_vector_t_class();

    register_AspectOffsetStore_class();

    register_float_vector_t_class();

    register_TypePtrVector_class();

    register_sample_data_list_t_class();

    register_TypeBase_class();

    register_ReflexiveContainer_class();

    register_FieldContainer_class();

    register_AttachmentContainer_class();

    register_AttachmentBase_class();

    register_Attachment_class();

    register_Volume_class();

    register_BoxVolume_class();

    register_MemoryObject_class();

    register_ChangeList_class();

    register_VecStorage3f_class();

    register_Pnt3f_class();

    register_Vec3f_class();

    register_Color3f_class();

    register_Vec3ub_class();

    register_Color3ub_class();

    register_VecStorage4f_class();

    register_Pnt4f_class();

    register_Vec4f_class();

    register_Color4f_class();

    register_Vec4ub_class();

    register_Color4ub_class();

    register_ConnectionFactoryBase_class();

    register_ConnectorAttachmentBase_class();

    register_ConnectorAttachment_class();

    register_ContainerMixinHardwareContextDataSlotDesc_class();

    register_CylinderVolume_class();

    register_HardwareContextParent_class();

    register_DataType_class();

    register_Exception_class();

    register_ExceptionBinaryDataHandler_class();

    register_ExternalThread_class();

    register_FieldContainerFactoryBase_class();

    register_ReflexiveContainerType_class();

    register_FieldContainerType_class();

    register_FieldDescriptionBase_class();

    register_FieldType_class();

    register_FrustumVolume_class();

    register_GlobalsAttachmentBase_class();

    register_GlobalsAttachment_class();

    register_HardwareContextBase_class();

    register_HardwareContext_class();

    register_Line_class();

    register_MapHelperBase_class();

    register_MapHelper_class();

    register_NestedSampleInfo_class();

    register_Node_class();

    register_NodeCoreBase_class();

    register_NodeCore_class();

    register_PerfMonitorBase_class();

    register_Plane_class();

    register_VecStorage2d_class();

    register_Pnt2d_class();

    register_VecStorage3d_class();

    register_Pnt3d_class();

    register_VecStorage4d_class();

    register_Pnt4d_class();

    register_VecStorage2f_class();

    register_Pnt2f_class();

    register_PolytopeVolume_class();

    register_Quaterniond_class();

    register_Quaternion_class();

    register_ConnectionFactory_class();

    register_FieldContainerFactory_class();

    register_PerfMonitor_class();

    register_SocketException_class();

    register_SphereVolume_class();

    register_StatElemDescBase_class();

    register_StatCollector_class();

    register_StatElemDesc_StatIntElem_class();

    register_StatElemDesc_StatIntOnceElem_class();

    register_StatElemDesc_StatRealElem_class();

    register_StatElemDesc_StatTimeElem_class();

    register_Thread_class();

    register_Matrix4d_class();

    register_Matrix_class();

    register_VecStorage2ub_class();

    register_VecStorage3ub_class();

    register_VecStorage4ub_class();

    register_Vec2d_class();

    register_Vec3d_class();

    register_Vec4d_class();

    register_Vec2f_class();

    register_Vec2ub_class();

    boost::python::def("osgInit",&osgwrap::osgInitWrapper);

    /** Helpers for OSG::FieldContainer */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::FieldContainer, OSG::FieldContainer::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::FieldContainer::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Node */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Node, OSG::Node::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Node::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::GlobalsAttachment */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::GlobalsAttachment, OSG::GlobalsAttachment::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::GlobalsAttachment::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::AttachmentContainer */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::AttachmentContainer, OSG::AttachmentContainer::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::AttachmentContainer::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::HardwareContext */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::HardwareContext, OSG::HardwareContext::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::HardwareContext::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::ConnectorAttachment */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::ConnectorAttachment, OSG::ConnectorAttachment::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::ConnectorAttachment::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::MapHelper */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::MapHelper, OSG::MapHelper::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::MapHelper::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::NodeCore */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::NodeCore, OSG::NodeCore::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::NodeCore::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    /** Helpers for OSG::Attachment */

    bp::def("RecPtr", &pyopensg::ToRefCountPtr<OSG::Attachment, OSG::Attachment::ObjRecPtr>);

    bp::def("CPtr", &pyopensg::ToCPtr<OSG::Attachment::ObjRecPtr >, bp::return_value_policy<bp::reference_existing_object>());

    register_free_functions();
}

