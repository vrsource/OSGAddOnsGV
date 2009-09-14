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
 **     class RTTextureTarget!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGTextureObjChunk.h> // TexObjChunk Class

#include "OSGRTTextureTargetBase.h"
#include "OSGRTTextureTarget.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RTTextureTarget
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var TextureObjChunk * RTTextureTargetBase::_sfTexObjChunk
    
*/


void RTTextureTargetBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecTextureObjChunkPtr::Description(
        SFUnrecTextureObjChunkPtr::getClassType(),
        "TexObjChunk",
        "",
        TexObjChunkFieldId, TexObjChunkFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RTTextureTarget::editHandleTexObjChunk),
        static_cast<FieldGetMethodSig >(&RTTextureTarget::getHandleTexObjChunk));

    oType.addInitialDesc(pDesc);
}


RTTextureTargetBase::TypeObject RTTextureTargetBase::_type(
    RTTextureTargetBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RTTextureTargetBase::createEmptyLocal),
    RTTextureTarget::initMethod,
    RTTextureTarget::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RTTextureTargetBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"RTTextureTarget\"\n"
    "    parent=\"RTTarget\"\n"
    "    library=\"ContribRRT\"\n"
    "    pointerfieldtypes=\"single\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    libnamespace=\"OSG\"\n"
    ">\n"
    "    <Field\n"
    "        name=\"TexObjChunk\"\n"
    "        type=\"TextureObjChunkPtr\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "    >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RTTextureTargetBase::getType(void)
{
    return _type;
}

const FieldContainerType &RTTextureTargetBase::getType(void) const
{
    return _type;
}

UInt32 RTTextureTargetBase::getContainerSize(void) const
{
    return sizeof(RTTextureTarget);
}

/*------------------------- decorator get ------------------------------*/


//! Get the RTTextureTarget::_sfTexObjChunk field.
const SFUnrecTextureObjChunkPtr *RTTextureTargetBase::getSFTexObjChunk(void) const
{
    return &_sfTexObjChunk;
}

SFUnrecTextureObjChunkPtr *RTTextureTargetBase::editSFTexObjChunk    (void)
{
    editSField(TexObjChunkFieldMask);

    return &_sfTexObjChunk;
}





/*------------------------------ access -----------------------------------*/

UInt32 RTTextureTargetBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TexObjChunkFieldMask & whichField))
    {
        returnValue += _sfTexObjChunk.getBinSize();
    }

    return returnValue;
}

void RTTextureTargetBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TexObjChunkFieldMask & whichField))
    {
        _sfTexObjChunk.copyToBin(pMem);
    }
}

void RTTextureTargetBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TexObjChunkFieldMask & whichField))
    {
        _sfTexObjChunk.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RTTextureTargetTransitPtr RTTextureTargetBase::createLocal(BitVector bFlags)
{
    RTTextureTargetTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RTTextureTarget>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RTTextureTargetTransitPtr RTTextureTargetBase::create(void)
{
    RTTextureTargetTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RTTextureTarget>(tmpPtr);
    }

    return fc;
}

RTTextureTarget *RTTextureTargetBase::createEmptyLocal(BitVector bFlags)
{
    RTTextureTarget *returnValue;

    newPtr<RTTextureTarget>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RTTextureTarget *RTTextureTargetBase::createEmpty(void)
{
    RTTextureTarget *returnValue;

    newPtr<RTTextureTarget>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RTTextureTargetBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RTTextureTarget *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RTTextureTarget *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RTTextureTargetBase::shallowCopy(void) const
{
    RTTextureTarget *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RTTextureTarget *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RTTextureTargetBase::RTTextureTargetBase(void) :
    Inherited(),
    _sfTexObjChunk            (NULL)
{
}

RTTextureTargetBase::RTTextureTargetBase(const RTTextureTargetBase &source) :
    Inherited(source),
    _sfTexObjChunk            (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

RTTextureTargetBase::~RTTextureTargetBase(void)
{
}

void RTTextureTargetBase::onCreate(const RTTextureTarget *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        RTTextureTarget *pThis = static_cast<RTTextureTarget *>(this);

        pThis->setTexObjChunk(source->getTexObjChunk());
    }
}

GetFieldHandlePtr RTTextureTargetBase::getHandleTexObjChunk     (void) const
{
    SFUnrecTextureObjChunkPtr::GetHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::GetHandle(
             &_sfTexObjChunk,
             this->getType().getFieldDesc(TexObjChunkFieldId)));

    return returnValue;
}

EditFieldHandlePtr RTTextureTargetBase::editHandleTexObjChunk    (void)
{
    SFUnrecTextureObjChunkPtr::EditHandlePtr returnValue(
        new  SFUnrecTextureObjChunkPtr::EditHandle(
             &_sfTexObjChunk,
             this->getType().getFieldDesc(TexObjChunkFieldId)));

    returnValue->setSetMethod(
        boost::bind(&RTTextureTarget::setTexObjChunk,
                    static_cast<RTTextureTarget *>(this), _1));

    editSField(TexObjChunkFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RTTextureTargetBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<RTTextureTargetBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RTTextureTargetBase::createAspectCopy(void) const
{
    RTTextureTarget *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RTTextureTarget *>(this));

    return returnValue;
}
#endif

void RTTextureTargetBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<RTTextureTarget *>(this)->setTexObjChunk(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RTTextureTarget *>::_type("RTTextureTargetPtr", "RTTargetPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RTTextureTarget *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RTTextureTarget *,
                           0);


OSG_END_NAMESPACE
