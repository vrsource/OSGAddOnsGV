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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include <OSGConfig.h>

#include "OSGBbqDataSource.h"
#include "OSGBbqTerrainNode.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBbqDataSourceBase.cpp file.
// To modify it, please change the .fcd file (OSGBbqDataSource.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BbqDataSource::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

BbqDataSource::BbqDataSource(void) :
    Inherited()
{
}

BbqDataSource::BbqDataSource(const BbqDataSource &source) :
    Inherited(source)
{
}

BbqDataSource::~BbqDataSource(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BbqDataSource::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BbqDataSource::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BbqDataSource NI" << std::endl;
}

const BbqDataSourceInformation &BbqDataSource::getInformation(void) const
{
    return _oInformation;
}

bool BbqDataSource::loadNodeData(BbqTerrainNode &oNode)
{
    return onLoadNodeData(oNode);
}

void BbqDataSource::computeBoundingBox(BbqTerrainNode &oNode, 
                                       Real32          fMinHeightSample, 
                                       Real32          fMaxHeightSample)
{
    const Real32 blockDimension = (Real32)(_oInformation.heightTileSize - 1);

    const Vec2f objectBlockScale = 
        Vec2f(_oInformation.sampleSpacing * oNode.blockScale, 
              _oInformation.sampleSpacing * oNode.blockScale);

    const Vec2f objectBlockOffset = 
        _oInformation.sampleSpacing * oNode.blockOrigin;

    
    const Vec2f objectBlockSize(blockDimension * objectBlockScale.x(), 
                                blockDimension * objectBlockScale.y());
    
    const Vec3f boxMin( 
        objectBlockOffset.x(), 
        fMinHeightSample * _oInformation.heightScale + 
                           _oInformation.heightOffset, 
        objectBlockOffset.y() );

    const Vec3f boxMax(objectBlockOffset.x() + objectBlockSize.x(), 
                       fMaxHeightSample * _oInformation.heightScale + 
                                          _oInformation.heightOffset,
                       objectBlockOffset.y() + objectBlockSize.y() );
    
    oNode.boundingBox.setBounds(boxMin, boxMax);
}


OSG_END_NAMESPACE
