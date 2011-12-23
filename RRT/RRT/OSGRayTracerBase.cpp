/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class RayTracer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"



#include "OSGNode.h"                    // RayTracingRoot Class

#include "OSGRayTracerBase.h"
#include "OSGRayTracer.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RayTracer
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Node *          RayTracerBase::_sfRayTracingRoot
    
*/

/*! \var Node *          RayTracerBase::_sfBackgroundRoot
    
*/

/*! \var UInt32          RayTracerBase::_sfWidth
    
*/

/*! \var UInt32          RayTracerBase::_sfHeight
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
PointerType FieldTraits<RayTracer *, nsOSG>::_type(
    "RayTracerPtr", 
    "FieldContainerPtr", 
    RayTracer::getClassType(),
    nsOSG);
#endif

OSG_FIELDTRAITS_GETTYPE_NS(RayTracer *, nsOSG)

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RayTracerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFWeakNodePtr::Description(
        SFWeakNodePtr::getClassType(),
        "RayTracingRoot",
        "",
        RayTracingRootFieldId, RayTracingRootFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RayTracer::editHandleRayTracingRoot),
        static_cast<FieldGetMethodSig >(&RayTracer::getHandleRayTracingRoot));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecNodePtr::Description(
        SFUnrecNodePtr::getClassType(),
        "BackgroundRoot",
        "",
        BackgroundRootFieldId, BackgroundRootFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RayTracer::editHandleBackgroundRoot),
        static_cast<FieldGetMethodSig >(&RayTracer::getHandleBackgroundRoot));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RayTracer::editHandleWidth),
        static_cast<FieldGetMethodSig >(&RayTracer::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "height",
        "",
        HeightFieldId, HeightFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RayTracer::editHandleHeight),
        static_cast<FieldGetMethodSig >(&RayTracer::getHandleHeight));

    oType.addInitialDesc(pDesc);
}


RayTracerBase::TypeObject RayTracerBase::_type(
    RayTracerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    nsOSG, //Namespace
    reinterpret_cast<PrototypeCreateF>(&RayTracerBase::createEmptyLocal),
    RayTracer::initMethod,
    RayTracer::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RayTracer::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"RayTracer\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribRRT\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    ">\n"
    "    <Field\n"
    "        name=\"RayTracingRoot\"\n"
    "        type=\"Node\"\n"
    "        category=\"weakpointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"BackgroundRoot\"\n"
    "        type=\"NodePtr\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "\t<Field\n"
    "\t\tname=\"width\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"height\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RayTracerBase::getType(void)
{
    return _type;
}

const FieldContainerType &RayTracerBase::getType(void) const
{
    return _type;
}

UInt32 RayTracerBase::getContainerSize(void) const
{
    return sizeof(RayTracer);
}

/*------------------------- decorator get ------------------------------*/


//! Get the RayTracer::_sfRayTracingRoot field.
const SFWeakNodePtr *RayTracerBase::getSFRayTracingRoot(void) const
{
    return &_sfRayTracingRoot;
}

SFWeakNodePtr       *RayTracerBase::editSFRayTracingRoot (void)
{
    editSField(RayTracingRootFieldMask);

    return &_sfRayTracingRoot;
}

//! Get the RayTracer::_sfBackgroundRoot field.
const SFUnrecNodePtr *RayTracerBase::getSFBackgroundRoot(void) const
{
    return &_sfBackgroundRoot;
}

SFUnrecNodePtr      *RayTracerBase::editSFBackgroundRoot (void)
{
    editSField(BackgroundRootFieldMask);

    return &_sfBackgroundRoot;
}

SFUInt32 *RayTracerBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt32 *RayTracerBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFUInt32 *RayTracerBase::editSFHeight(void)
{
    editSField(HeightFieldMask);

    return &_sfHeight;
}

const SFUInt32 *RayTracerBase::getSFHeight(void) const
{
    return &_sfHeight;
}






/*------------------------------ access -----------------------------------*/

SizeT RayTracerBase::getBinSize(ConstFieldMaskArg whichField)
{
    SizeT returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RayTracingRootFieldMask & whichField))
    {
        returnValue += _sfRayTracingRoot.getBinSize();
    }
    if(FieldBits::NoField != (BackgroundRootFieldMask & whichField))
    {
        returnValue += _sfBackgroundRoot.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }

    return returnValue;
}

void RayTracerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RayTracingRootFieldMask & whichField))
    {
        _sfRayTracingRoot.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundRootFieldMask & whichField))
    {
        _sfBackgroundRoot.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }
}

void RayTracerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RayTracingRootFieldMask & whichField))
    {
        editSField(RayTracingRootFieldMask);
        _sfRayTracingRoot.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackgroundRootFieldMask & whichField))
    {
        editSField(BackgroundRootFieldMask);
        _sfBackgroundRoot.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        editSField(WidthFieldMask);
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        editSField(HeightFieldMask);
        _sfHeight.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RayTracerTransitPtr RayTracerBase::createLocal(BitVector bFlags)
{
    RayTracerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RayTracer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RayTracerTransitPtr RayTracerBase::createDependent(BitVector bFlags)
{
    RayTracerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RayTracer>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RayTracerTransitPtr RayTracerBase::create(void)
{
    RayTracerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RayTracer>(tmpPtr);
    }

    return fc;
}

RayTracer *RayTracerBase::createEmptyLocal(BitVector bFlags)
{
    RayTracer *returnValue;

    newPtr<RayTracer>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RayTracer *RayTracerBase::createEmpty(void)
{
    RayTracer *returnValue;

    newPtr<RayTracer>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RayTracerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RayTracer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RayTracer *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RayTracerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RayTracer *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RayTracer *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RayTracerBase::shallowCopy(void) const
{
    RayTracer *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RayTracer *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RayTracerBase::RayTracerBase(void) :
    Inherited(),
    _sfRayTracingRoot         (NULL),
    _sfBackgroundRoot         (NULL),
    _sfWidth                  (),
    _sfHeight                 ()
{
}

RayTracerBase::RayTracerBase(const RayTracerBase &source) :
    Inherited(source),
    _sfRayTracingRoot         (NULL),
    _sfBackgroundRoot         (NULL),
    _sfWidth                  (source._sfWidth                  ),
    _sfHeight                 (source._sfHeight                 )
{
}


/*-------------------------- destructors ----------------------------------*/

RayTracerBase::~RayTracerBase(void)
{
}

void RayTracerBase::onCreate(const RayTracer *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        RayTracer *pThis = static_cast<RayTracer *>(this);

        pThis->setRayTracingRoot(source->getRayTracingRoot());

        pThis->setBackgroundRoot(source->getBackgroundRoot());
    }
}

GetFieldHandlePtr RayTracerBase::getHandleRayTracingRoot  (void) const
{
    SFWeakNodePtr::GetHandlePtr returnValue(
        new  SFWeakNodePtr::GetHandle(
             &_sfRayTracingRoot,
             this->getType().getFieldDesc(RayTracingRootFieldId),
             const_cast<RayTracerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RayTracerBase::editHandleRayTracingRoot (void)
{
    SFWeakNodePtr::EditHandlePtr returnValue(
        new  SFWeakNodePtr::EditHandle(
             &_sfRayTracingRoot,
             this->getType().getFieldDesc(RayTracingRootFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RayTracer::setRayTracingRoot,
                    static_cast<RayTracer *>(this), _1));

    editSField(RayTracingRootFieldMask);

    return returnValue;
}

GetFieldHandlePtr RayTracerBase::getHandleBackgroundRoot  (void) const
{
    SFUnrecNodePtr::GetHandlePtr returnValue(
        new  SFUnrecNodePtr::GetHandle(
             &_sfBackgroundRoot,
             this->getType().getFieldDesc(BackgroundRootFieldId),
             const_cast<RayTracerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RayTracerBase::editHandleBackgroundRoot (void)
{
    SFUnrecNodePtr::EditHandlePtr returnValue(
        new  SFUnrecNodePtr::EditHandle(
             &_sfBackgroundRoot,
             this->getType().getFieldDesc(BackgroundRootFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RayTracer::setBackgroundRoot,
                    static_cast<RayTracer *>(this), _1));

    editSField(BackgroundRootFieldMask);

    return returnValue;
}

GetFieldHandlePtr RayTracerBase::getHandleWidth           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             const_cast<RayTracerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RayTracerBase::editHandleWidth          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             this));


    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr RayTracerBase::getHandleHeight          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             const_cast<RayTracerBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RayTracerBase::editHandleHeight         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfHeight,
             this->getType().getFieldDesc(HeightFieldId),
             this));


    editSField(HeightFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RayTracerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RayTracer *pThis = static_cast<RayTracer *>(this);

    pThis->execSync(static_cast<RayTracer *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RayTracerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RayTracer *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RayTracer *>(pRefAspect),
                  dynamic_cast<const RayTracer *>(this));

    return returnValue;
}
#endif

void RayTracerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<RayTracer *>(this)->setRayTracingRoot(NULL);

    static_cast<RayTracer *>(this)->setBackgroundRoot(NULL);


}


OSG_END_NAMESPACE
