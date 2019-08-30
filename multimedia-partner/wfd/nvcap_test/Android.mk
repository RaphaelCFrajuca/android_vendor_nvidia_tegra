LOCAL_PATH:= $(call my-dir)

#
# NvCap Test App
#
include $(NVIDIA_DEFAULTS)

LOCAL_SHARED_LIBRARIES += libcutils
LOCAL_SHARED_LIBRARIES += libnvcap
LOCAL_SHARED_LIBRARIES += libutils

ifeq ($(NV_ANDROID_FRAMEWORK_ENHANCEMENTS),TRUE)
LOCAL_SHARED_LIBRARIES += libpowerservice_client
LOCAL_SHARED_LIBRARIES += libnvos
endif

LOCAL_C_INCLUDES += $(TEGRA_TOP)/core/include

LOCAL_SRC_FILES:=        \
 nvcap_test.cpp

LOCAL_MODULE := nvcap_test
LOCAL_MODULE_TAGS := samples

LOCAL_CFLAGS += -DLOG_TAG=\"NvCapTest\"

ifeq ($(NV_ANDROID_FRAMEWORK_ENHANCEMENTS),TRUE)
LOCAL_CFLAGS += -DUSE_NV_ANDROID_FRAMEWORK_ENHANCEMENTS=1
else
LOCAL_CFLAGS += -DUSE_NV_ANDROID_FRAMEWORK_ENHANCEMENTS=0
endif

include $(NVIDIA_EXECUTABLE)
