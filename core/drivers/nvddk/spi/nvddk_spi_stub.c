/*
 * Copyright (c) 2013, NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#include "nvddk_spi.h"

NvDdkSpiHandle NvDdkSpiOpen(NvU32 Instance)
{
    return NULL;
}

void NvDdkSpiClose(NvDdkSpiHandle hDdkSpi)
{
}

void
NvDdkSpiTransaction(
    NvDdkSpiHandle hDdkSpi,
    NvU32 ChipSelect,
    NvU32 ClockSpeedInKHz,
    NvU8 *ReadBuf,
    const NvU8 *WriteBuf,
    NvU32 BytesRequested,
    NvU32 PacketSizeInBits)
{
}

