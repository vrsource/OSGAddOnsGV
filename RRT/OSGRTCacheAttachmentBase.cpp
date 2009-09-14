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
 **     class RTCacheAttachment!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILERTCACHEATTACHMENTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGRTCacheAttachmentBase.h"
#include "OSGRTCacheAttachment.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RTCacheAttachment
    rt cache attachment
 */


RTCacheAttachmentBase::TypeObject RTCacheAttachmentBase::_type(
    RTCacheAttachmentBase::getClassname(),
    Inherited::getClassname(),
    "RTCacheAttachment",
    0,
    (PrototypeCreateF) &RTCacheAttachmentBase::createEmptyLocal,
    RTCacheAttachment::initMethod,
    RTCacheAttachment::exitMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RTCacheAttachment\"\n"
    "\tparent=\"Attachment\"\n"
    "\tlibrary=\"ContribRRT\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "rt cache attachment\n"
    "</FieldContainer>\n",
    "rt cache attachment\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RTCacheAttachmentBase::getType(void)
{
    return _type;
}

const FieldContainerType &RTCacheAttachmentBase::getType(void) const
{
    return _type;
}

UInt32 RTCacheAttachmentBase::getContainerSize(void) const
{
    return sizeof(RTCacheAttachment);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 RTCacheAttachmentBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void RTCacheAttachmentBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void RTCacheAttachmentBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
RTCacheAttachmentTransitPtr RTCacheAttachmentBase::create(void)
{
    RTCacheAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RTCacheAttachment>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RTCacheAttachmentTransitPtr RTCacheAttachmentBase::createLocal(BitVector bFlags)
{
    RTCacheAttachmentTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RTCacheAttachment>(tmpPtr);
    }

    return fc;
}

//! create an empty new instance of the class, do not copy the prototype
RTCacheAttachment *RTCacheAttachmentBase::createEmpty(void)
{
    RTCacheAttachment *returnValue;

    newPtr<RTCacheAttachment>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &= 
        ~Thread::getCurrentLocalFlags(); 

    return returnValue;
}

RTCacheAttachment *RTCacheAttachmentBase::createEmptyLocal(BitVector bFlags)
{
    RTCacheAttachment *returnValue;

    newPtr<RTCacheAttachment>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RTCacheAttachmentBase::shallowCopy(void) const
{
    RTCacheAttachment *tmpPtr;

    newPtr(tmpPtr, 
           dynamic_cast<const RTCacheAttachment *>(this), 
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}

FieldContainerTransitPtr RTCacheAttachmentBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RTCacheAttachment *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RTCacheAttachment *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

RTCacheAttachmentBase::RTCacheAttachmentBase(void) :
    Inherited()
{
}

RTCacheAttachmentBase::RTCacheAttachmentBase(const RTCacheAttachmentBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

RTCacheAttachmentBase::~RTCacheAttachmentBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void RTCacheAttachmentBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<RTCacheAttachmentBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RTCacheAttachmentBase::createAspectCopy(void) const
{
    RTCacheAttachment *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RTCacheAttachment *>(this));

    return returnValue;
}
#endif

void RTCacheAttachmentBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RTCacheAttachment *>::_type("RTCacheAttachmentPtr", "AttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RTCacheAttachment *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField, 
                           RTCacheAttachment *, 
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField, 
                           RTCacheAttachment *, 
                           0);

OSG_END_NAMESPACE
