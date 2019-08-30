/*
 * Copyright (c) 2007 NVIDIA Corporation.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#ifndef INCLUDED_NVMM_AMRNBENC_H
#define INCLUDED_NVMM_AMRNBENC_H

#include "nvmm.h"
#include "nvmm_event.h"
#include "nvos.h"
#include "nvrm_transport.h"

NvError
NvMMAmrNBEncOpen(
    NvMMBlockHandle *phBlock,
    NvMMInternalCreationParameters *pParams,
    NvOsSemaphoreHandle semaphore,
    NvMMDoWorkFunction *pDoWorkFunction);

void
NvMMAmrNBEncClose(
    NvMMBlockHandle hBlock,
    NvMMInternalDestructionParameters *pParams);

#endif  // INCLUDED_NVMM_AMRNBENC_H
