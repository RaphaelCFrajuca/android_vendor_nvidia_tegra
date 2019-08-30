/**
 * Copyright (c) 2011-2012, NVIDIA CORPORATION. All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software and related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#ifndef NVC_BAYER_IMX091_H
#define NVC_BAYER_IMX091_H

#include "imager_hal.h"

#if defined(__cplusplus)
extern "C"
{
#endif

NvBool NvcIMX091_GetHal(pNvcImagerHal hNvcHal, NvU32 DevIdMinor);

#if defined(__cplusplus)
}
#endif

#endif  //NVC_BAYER_IMX091_H
