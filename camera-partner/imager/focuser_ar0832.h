/**
** Copyright (c) 2011 NVIDIA Corporation.  All rights reserved.
**
** NVIDIA Corporation and its licensors retain all intellectual property
** and proprietary rights in and to this software, related documentation
** and any modifications thereto.  Any use, reproduction, disclosure or
**distribution of this software and related documentation without an express
** license agreement from NVIDIA Corporation is strictly prohibited.
**/

#ifndef INCLUDED_FOCUSER_AR0832_H
#define INCLUDED_FOCUSER_AR0832_H

#include "nvodm_imager.h"

#if defined(__cplusplus)
extern "C"
{
#endif

NvBool FocuserAR0832_GetHal(NvOdmImagerHandle hImager);

#if defined(__cplusplus)
}
#endif

#endif // INCLUDED_FOCUSER_AR0832_H