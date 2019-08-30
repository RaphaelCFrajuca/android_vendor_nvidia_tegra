##
 # Copyright (c) 2012-2013, NVIDIA CORPORATION.  All rights reserved.
 #
 # NVIDIA Corporation and its licensors retain all intellectual property
 # and proprietary rights in and to this software and related documentation
 # and any modifications thereto.  Any use, reproduction, disclosure or
 # distribution of this software and related documentation without an express
 # license agreement from NVIDIA Corporation is strictly prohibited.
# #

LOCAL_PATH := $(call my-dir)
include $(NVIDIA_DEFAULTS)

LOCAL_MODULE := libnvodm_disp

LOCAL_SRC_FILES += dsi_to_lvds_converter.c
LOCAL_SRC_FILES += panels.c
LOCAL_SRC_FILES += panel_lg_dsi.c
LOCAL_SRC_FILES += panel_jdi.c

LOCAL_NVIDIA_NO_WARNINGS_AS_ERRORS := 1
include $(NVIDIA_STATIC_LIBRARY)
