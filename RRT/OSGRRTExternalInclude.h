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

#ifndef _OSGRRTEXTERNALINCLUDE_H_
#define _OSGRRTEXTERNALINCLUDE_H_
#ifdef __sgi
#pragma once
#endif

// Just if you want to use some pieces outside this dir use this include.
// As there are a lot of forward declaration it can be hard to guess the
// correct include order from scratch ;-)

#include "OSGContribRRTDef.h"

#include "OSGRTCameraDecorator.h"
#include "OSGTriangleIterator.h"
#include "OSGOSGWriter.h"
#include "OSGRTTarget.h"
#include "OSGRTRaySIMDPacket.h"
#include "OSGRTHitSIMDPacket.h"
#include "OSGRTTriangleAccel.h"
#include "OSGCellRT.h"
#ifdef OSG_CACHE_KD
#ifndef OSG_XCACHEKD
#include "OSGRTCacheKD.h"
#else
#include "OSGRTXCacheKD.h"
#endif
#endif
#ifdef OSG_CACHE_BIH
#include "OSGRTCacheBIH.h"
#endif
#include "OSGRTInitAction.h"
#include "OSGRTUpdateAction.h"
#include "OSGRRTStage.h"
#include "OSGRTCacheAttachmentInst.h"
#include "OSGRTInfoAttachment.h"
#include "OSGRTImageTarget.h"
#include "OSGRTScene.h"
#include "OSGRTHitTile.h"
#include "OSGRTPrimaryRayStore.h"
#include "OSGRTPrimaryRayTiledStore.h"
#include "OSGRTHitStore.h"
#include "OSGRTHitTiledStore.h"
#include "OSGRTFourRaySIMDPacket.h"
#include "OSGRTFourHitSIMDPacket.h"
#include "OSGRTSingleRayPacket.h"
#include "OSGRTSingleHitPacket.h"
#include "OSGRTCombinedThread.h"
#include "OSGRTPrimaryRayThread.h"
#include "OSGRTShadingThread.h"
#include "OSGRTLocalPacketManager.h"
#include "OSGRayTracerInst.h"

#endif
