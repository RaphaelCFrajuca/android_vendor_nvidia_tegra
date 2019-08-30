/*
 * Copyright (c)2013 NVIDIA CORPORATION.  All rights reserved.
 *
 * NVIDIA Corporation and its licensors retain all intellectual property
 * and proprietary rights in and to this software, related documentation
 * and any modifications thereto.  Any use, reproduction, disclosure or
 * distribution of this software and related documentation without an express
 * license agreement from NVIDIA Corporation is strictly prohibited.
 */

#ifndef ___ARSE_H_INC_
#define ___ARSE_H_INC_

#if defined(__cplusplus)
extern "C"
{
#endif

// Packet SE_LINKED_LIST_HEADER
#define SE_LINKED_LIST_HEADER_SIZE 32

#define SE_LINKED_LIST_HEADER_LAST_BUFFER_SHIFT                 _MK_SHIFT_CONST(0)
#define SE_LINKED_LIST_HEADER_LAST_BUFFER_FIELD                 _MK_FIELD_CONST(0xffffffff, SE_LINKED_LIST_HEADER_LAST_BUFFER_SHIFT)
#define SE_LINKED_LIST_HEADER_LAST_BUFFER_RANGE                 _MK_SHIFT_CONST(31):_MK_SHIFT_CONST(0)
#define SE_LINKED_LIST_HEADER_LAST_BUFFER_ROW                   0

#define ARSE_WORDS_PER_BUFF     2

// Packet SE_BUFF_WORD0
#define SE_BUFF_WORD0_SIZE 32

#define SE_BUFF_WORD0_START_ADDR_SHIFT                  _MK_SHIFT_CONST(0)
#define SE_BUFF_WORD0_START_ADDR_FIELD                  _MK_FIELD_CONST(0xffffffff, SE_BUFF_WORD0_START_ADDR_SHIFT)
#define SE_BUFF_WORD0_START_ADDR_RANGE                  _MK_SHIFT_CONST(31):_MK_SHIFT_CONST(0)
#define SE_BUFF_WORD0_START_ADDR_ROW                    0


// Packet SE_BUFF_WORD1
#define SE_BUFF_WORD1_SIZE 32

#define SE_BUFF_WORD1_RESERVED_SHIFT                    _MK_SHIFT_CONST(24)
#define SE_BUFF_WORD1_RESERVED_FIELD                    _MK_FIELD_CONST(0xff, SE_BUFF_WORD1_RESERVED_SHIFT)
#define SE_BUFF_WORD1_RESERVED_RANGE                    _MK_SHIFT_CONST(31):_MK_SHIFT_CONST(24)
#define SE_BUFF_WORD1_RESERVED_ROW                      0

#define SE_BUFF_WORD1_BYTE_SIZE_SHIFT                   _MK_SHIFT_CONST(0)
#define SE_BUFF_WORD1_BYTE_SIZE_FIELD                   _MK_FIELD_CONST(0xffffff, SE_BUFF_WORD1_BYTE_SIZE_SHIFT)
#define SE_BUFF_WORD1_BYTE_SIZE_RANGE                   _MK_SHIFT_CONST(23):_MK_SHIFT_CONST(0)
#define SE_BUFF_WORD1_BYTE_SIZE_ROW                     0

#define ARSE_SECURE     0
#define ARSE_NONSECURE  1
#define ARSE_SHA1_HASH_SIZE     160
#define ARSE_SHA224_HASH_SIZE   224
#define ARSE_SHA256_HASH_SIZE   256
#define ARSE_SHA384_HASH_SIZE   384
#define ARSE_SHA512_HASH_SIZE   512
#define ARSE_SHA_HASH_SIZE      512
#define ARSE_AES_HASH_SIZE      128
#define ARSE_HASH_SIZE  512
#define ARSE_CRYPTO_NUM_KEY_CHUNKS      16
#define ARSE_CRYPTO_KEY_INDEX_WIDTH     4

// Packet SE_MODE_PKT
#define SE_MODE_PKT_SIZE 8

#define SE_MODE_PKT_MODE_SHIFT                  _MK_SHIFT_CONST(0)
#define SE_MODE_PKT_MODE_FIELD                  _MK_FIELD_CONST(0xff, SE_MODE_PKT_MODE_SHIFT)
#define SE_MODE_PKT_MODE_RANGE                  _MK_SHIFT_CONST(7):_MK_SHIFT_CONST(0)
#define SE_MODE_PKT_MODE_ROW                    0

#define SE_MODE_PKT_AESMODE_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_MODE_PKT_AESMODE_FIELD                       _MK_FIELD_CONST(0x3, SE_MODE_PKT_AESMODE_SHIFT)
#define SE_MODE_PKT_AESMODE_RANGE                       _MK_SHIFT_CONST(1):_MK_SHIFT_CONST(0)
#define SE_MODE_PKT_AESMODE_ROW                 0
#define SE_MODE_PKT_AESMODE_KEY128                      _MK_ENUM_CONST(0)
#define SE_MODE_PKT_AESMODE_KEY192                      _MK_ENUM_CONST(1)
#define SE_MODE_PKT_AESMODE_KEY256                      _MK_ENUM_CONST(2)

#define SE_MODE_PKT_SHAMODE_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_MODE_PKT_SHAMODE_FIELD                       _MK_FIELD_CONST(0x7, SE_MODE_PKT_SHAMODE_SHIFT)
#define SE_MODE_PKT_SHAMODE_RANGE                       _MK_SHIFT_CONST(2):_MK_SHIFT_CONST(0)
#define SE_MODE_PKT_SHAMODE_ROW                 0
#define SE_MODE_PKT_SHAMODE_SHA1                        _MK_ENUM_CONST(0)
#define SE_MODE_PKT_SHAMODE_SHA224                      _MK_ENUM_CONST(4)
#define SE_MODE_PKT_SHAMODE_SHA256                      _MK_ENUM_CONST(5)
#define SE_MODE_PKT_SHAMODE_SHA384                      _MK_ENUM_CONST(6)
#define SE_MODE_PKT_SHAMODE_SHA512                      _MK_ENUM_CONST(7)

#define ARSE_TZRAM_BYTE_SIZE    16384
#define ARSE_ENTROPY_RO_INSTANCES       35
#define ARSE_ENTROPY_RO_INV_CNT 27
#define ARSE_ENTROPY_OUTPUT_WIDTH       192
#define ARSE_ENTROPY_ASYNCFIFO_DEPTH    2
#define ARSE_PERSONALIZATION_STRING_WIDTH       64

// Register SE_SE_SECURITY_0
#define SE_SE_SECURITY_0                        _MK_ADDR_CONST(0x0)
#define SE_SE_SECURITY_0_SECURE                         0x0
#define SE_SE_SECURITY_0_WORD_COUNT                     0x1
#define SE_SE_SECURITY_0_RESET_VAL                      _MK_MASK_CONST(0xd)
#define SE_SE_SECURITY_0_RESET_MASK                     _MK_MASK_CONST(0xf)
#define SE_SE_SECURITY_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_SE_SECURITY_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_SE_SECURITY_0_READ_MASK                      _MK_MASK_CONST(0xf)
#define SE_SE_SECURITY_0_WRITE_MASK                     _MK_MASK_CONST(0xf)
#define SE_SE_SECURITY_0_KEY_SCHED_READ_SHIFT                   _MK_SHIFT_CONST(3)
#define SE_SE_SECURITY_0_KEY_SCHED_READ_FIELD                   _MK_FIELD_CONST(0x1, SE_SE_SECURITY_0_KEY_SCHED_READ_SHIFT)
#define SE_SE_SECURITY_0_KEY_SCHED_READ_RANGE                   3:3
#define SE_SE_SECURITY_0_KEY_SCHED_READ_WOFFSET                 0x0
#define SE_SE_SECURITY_0_KEY_SCHED_READ_DEFAULT                 _MK_MASK_CONST(0x1)
#define SE_SE_SECURITY_0_KEY_SCHED_READ_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define SE_SE_SECURITY_0_KEY_SCHED_READ_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_SE_SECURITY_0_KEY_SCHED_READ_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_SE_SECURITY_0_KEY_SCHED_READ_INIT_ENUM                       ENABLE
#define SE_SE_SECURITY_0_KEY_SCHED_READ_DISABLE                 _MK_ENUM_CONST(0)
#define SE_SE_SECURITY_0_KEY_SCHED_READ_ENABLE                  _MK_ENUM_CONST(1)

#define SE_SE_SECURITY_0_PERKEY_SETTING_SHIFT                   _MK_SHIFT_CONST(2)
#define SE_SE_SECURITY_0_PERKEY_SETTING_FIELD                   _MK_FIELD_CONST(0x1, SE_SE_SECURITY_0_PERKEY_SETTING_SHIFT)
#define SE_SE_SECURITY_0_PERKEY_SETTING_RANGE                   2:2
#define SE_SE_SECURITY_0_PERKEY_SETTING_WOFFSET                 0x0
#define SE_SE_SECURITY_0_PERKEY_SETTING_DEFAULT                 _MK_MASK_CONST(0x1)
#define SE_SE_SECURITY_0_PERKEY_SETTING_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define SE_SE_SECURITY_0_PERKEY_SETTING_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_SE_SECURITY_0_PERKEY_SETTING_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)

#define SE_SE_SECURITY_0_SE_ENG_DIS_SHIFT                       _MK_SHIFT_CONST(1)
#define SE_SE_SECURITY_0_SE_ENG_DIS_FIELD                       _MK_FIELD_CONST(0x1, SE_SE_SECURITY_0_SE_ENG_DIS_SHIFT)
#define SE_SE_SECURITY_0_SE_ENG_DIS_RANGE                       1:1
#define SE_SE_SECURITY_0_SE_ENG_DIS_WOFFSET                     0x0
#define SE_SE_SECURITY_0_SE_ENG_DIS_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_SE_SECURITY_0_SE_ENG_DIS_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_SE_SECURITY_0_SE_ENG_DIS_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_SE_SECURITY_0_SE_ENG_DIS_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_SE_SECURITY_0_SE_ENG_DIS_INIT_ENUM                   FALSE
#define SE_SE_SECURITY_0_SE_ENG_DIS_FALSE                       _MK_ENUM_CONST(0)
#define SE_SE_SECURITY_0_SE_ENG_DIS_TRUE                        _MK_ENUM_CONST(1)

#define SE_SE_SECURITY_0_SE_SETTING_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_SE_SECURITY_0_SE_SETTING_FIELD                       _MK_FIELD_CONST(0x1, SE_SE_SECURITY_0_SE_SETTING_SHIFT)
#define SE_SE_SECURITY_0_SE_SETTING_RANGE                       0:0
#define SE_SE_SECURITY_0_SE_SETTING_WOFFSET                     0x0
#define SE_SE_SECURITY_0_SE_SETTING_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_SE_SECURITY_0_SE_SETTING_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_SE_SECURITY_0_SE_SETTING_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_SE_SECURITY_0_SE_SETTING_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_TZRAM_SECURITY_0
#define SE_TZRAM_SECURITY_0                     _MK_ADDR_CONST(0x4)
#define SE_TZRAM_SECURITY_0_SECURE                      0x0
#define SE_TZRAM_SECURITY_0_WORD_COUNT                  0x1
#define SE_TZRAM_SECURITY_0_RESET_VAL                   _MK_MASK_CONST(0x1)
#define SE_TZRAM_SECURITY_0_RESET_MASK                  _MK_MASK_CONST(0x3)
#define SE_TZRAM_SECURITY_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_TZRAM_SECURITY_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_TZRAM_SECURITY_0_READ_MASK                   _MK_MASK_CONST(0x3)
#define SE_TZRAM_SECURITY_0_WRITE_MASK                  _MK_MASK_CONST(0x3)
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_SHIFT                 _MK_SHIFT_CONST(1)
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_FIELD                 _MK_FIELD_CONST(0x1, SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_SHIFT)
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_RANGE                 1:1
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_WOFFSET                       0x0
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_DEFAULT_MASK                  _MK_MASK_CONST(0x1)
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_INIT_ENUM                     FALSE
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_FALSE                 _MK_ENUM_CONST(0)
#define SE_TZRAM_SECURITY_0_TZRAM_ENG_DIS_TRUE                  _MK_ENUM_CONST(1)

#define SE_TZRAM_SECURITY_0_TZRAM_SETTING_SHIFT                 _MK_SHIFT_CONST(0)
#define SE_TZRAM_SECURITY_0_TZRAM_SETTING_FIELD                 _MK_FIELD_CONST(0x1, SE_TZRAM_SECURITY_0_TZRAM_SETTING_SHIFT)
#define SE_TZRAM_SECURITY_0_TZRAM_SETTING_RANGE                 0:0
#define SE_TZRAM_SECURITY_0_TZRAM_SETTING_WOFFSET                       0x0
#define SE_TZRAM_SECURITY_0_TZRAM_SETTING_DEFAULT                       _MK_MASK_CONST(0x1)
#define SE_TZRAM_SECURITY_0_TZRAM_SETTING_DEFAULT_MASK                  _MK_MASK_CONST(0x1)
#define SE_TZRAM_SECURITY_0_TZRAM_SETTING_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_TZRAM_SECURITY_0_TZRAM_SETTING_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)


// Register SE_OPERATION_0
#define SE_OPERATION_0                  _MK_ADDR_CONST(0x8)
#define SE_OPERATION_0_SECURE                   0x0
#define SE_OPERATION_0_WORD_COUNT                       0x1
#define SE_OPERATION_0_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_OPERATION_0_RESET_MASK                       _MK_MASK_CONST(0x7)
#define SE_OPERATION_0_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_OPERATION_0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_OPERATION_0_READ_MASK                        _MK_MASK_CONST(0x7)
#define SE_OPERATION_0_WRITE_MASK                       _MK_MASK_CONST(0x7)
#define SE_OPERATION_0_OP_SHIFT                 _MK_SHIFT_CONST(0)
#define SE_OPERATION_0_OP_FIELD                 _MK_FIELD_CONST(0x7, SE_OPERATION_0_OP_SHIFT)
#define SE_OPERATION_0_OP_RANGE                 2:0
#define SE_OPERATION_0_OP_WOFFSET                       0x0
#define SE_OPERATION_0_OP_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_OPERATION_0_OP_DEFAULT_MASK                  _MK_MASK_CONST(0x7)
#define SE_OPERATION_0_OP_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_OPERATION_0_OP_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_OPERATION_0_OP_INIT_ENUM                     ABORT
#define SE_OPERATION_0_OP_START                 _MK_ENUM_CONST(1)
#define SE_OPERATION_0_OP_RESTART_OUT                   _MK_ENUM_CONST(2)
#define SE_OPERATION_0_OP_RESTART_IN                    _MK_ENUM_CONST(4)
#define SE_OPERATION_0_OP_CTX_SAVE                      _MK_ENUM_CONST(3)
#define SE_OPERATION_0_OP_ABORT                 _MK_ENUM_CONST(0)


// Register SE_INT_ENABLE_0
#define SE_INT_ENABLE_0                 _MK_ADDR_CONST(0xc)
#define SE_INT_ENABLE_0_SECURE                  0x0
#define SE_INT_ENABLE_0_WORD_COUNT                      0x1
#define SE_INT_ENABLE_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_RESET_MASK                      _MK_MASK_CONST(0x1003f)
#define SE_INT_ENABLE_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_READ_MASK                       _MK_MASK_CONST(0x1003f)
#define SE_INT_ENABLE_0_WRITE_MASK                      _MK_MASK_CONST(0x1003f)
#define SE_INT_ENABLE_0_ERR_STAT_SHIFT                  _MK_SHIFT_CONST(16)
#define SE_INT_ENABLE_0_ERR_STAT_FIELD                  _MK_FIELD_CONST(0x1, SE_INT_ENABLE_0_ERR_STAT_SHIFT)
#define SE_INT_ENABLE_0_ERR_STAT_RANGE                  16:16
#define SE_INT_ENABLE_0_ERR_STAT_WOFFSET                        0x0
#define SE_INT_ENABLE_0_ERR_STAT_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_ERR_STAT_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_INT_ENABLE_0_ERR_STAT_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_ERR_STAT_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_ERR_STAT_INIT_ENUM                      DISABLE
#define SE_INT_ENABLE_0_ERR_STAT_DISABLE                        _MK_ENUM_CONST(0)
#define SE_INT_ENABLE_0_ERR_STAT_ENABLE                 _MK_ENUM_CONST(1)

#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_FIELD                     _MK_FIELD_CONST(0x1, SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_SHIFT)
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_RANGE                     5:5
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_WOFFSET                   0x0
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_INIT_ENUM                 DISABLE
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_DISABLE                   _MK_ENUM_CONST(0)
#define SE_INT_ENABLE_0_RESEED_CNTR_EXHAUSTED_ENABLE                    _MK_ENUM_CONST(1)

#define SE_INT_ENABLE_0_SE_OP_DONE_SHIFT                        _MK_SHIFT_CONST(4)
#define SE_INT_ENABLE_0_SE_OP_DONE_FIELD                        _MK_FIELD_CONST(0x1, SE_INT_ENABLE_0_SE_OP_DONE_SHIFT)
#define SE_INT_ENABLE_0_SE_OP_DONE_RANGE                        4:4
#define SE_INT_ENABLE_0_SE_OP_DONE_WOFFSET                      0x0
#define SE_INT_ENABLE_0_SE_OP_DONE_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_SE_OP_DONE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_INT_ENABLE_0_SE_OP_DONE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_SE_OP_DONE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_SE_OP_DONE_INIT_ENUM                    DISABLE
#define SE_INT_ENABLE_0_SE_OP_DONE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_INT_ENABLE_0_SE_OP_DONE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_INT_ENABLE_0_OUT_DONE_SHIFT                  _MK_SHIFT_CONST(3)
#define SE_INT_ENABLE_0_OUT_DONE_FIELD                  _MK_FIELD_CONST(0x1, SE_INT_ENABLE_0_OUT_DONE_SHIFT)
#define SE_INT_ENABLE_0_OUT_DONE_RANGE                  3:3
#define SE_INT_ENABLE_0_OUT_DONE_WOFFSET                        0x0
#define SE_INT_ENABLE_0_OUT_DONE_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_OUT_DONE_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_INT_ENABLE_0_OUT_DONE_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_OUT_DONE_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_OUT_DONE_INIT_ENUM                      DISABLE
#define SE_INT_ENABLE_0_OUT_DONE_DISABLE                        _MK_ENUM_CONST(0)
#define SE_INT_ENABLE_0_OUT_DONE_ENABLE                 _MK_ENUM_CONST(1)

#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_SHIFT                     _MK_SHIFT_CONST(2)
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_FIELD                     _MK_FIELD_CONST(0x1, SE_INT_ENABLE_0_OUT_LL_BUF_WR_SHIFT)
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_RANGE                     2:2
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_WOFFSET                   0x0
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_INIT_ENUM                 DISABLE
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_DISABLE                   _MK_ENUM_CONST(0)
#define SE_INT_ENABLE_0_OUT_LL_BUF_WR_ENABLE                    _MK_ENUM_CONST(1)

#define SE_INT_ENABLE_0_IN_DONE_SHIFT                   _MK_SHIFT_CONST(1)
#define SE_INT_ENABLE_0_IN_DONE_FIELD                   _MK_FIELD_CONST(0x1, SE_INT_ENABLE_0_IN_DONE_SHIFT)
#define SE_INT_ENABLE_0_IN_DONE_RANGE                   1:1
#define SE_INT_ENABLE_0_IN_DONE_WOFFSET                 0x0
#define SE_INT_ENABLE_0_IN_DONE_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_IN_DONE_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define SE_INT_ENABLE_0_IN_DONE_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_IN_DONE_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_IN_DONE_INIT_ENUM                       DISABLE
#define SE_INT_ENABLE_0_IN_DONE_DISABLE                 _MK_ENUM_CONST(0)
#define SE_INT_ENABLE_0_IN_DONE_ENABLE                  _MK_ENUM_CONST(1)

#define SE_INT_ENABLE_0_IN_LL_BUF_RD_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_FIELD                      _MK_FIELD_CONST(0x1, SE_INT_ENABLE_0_IN_LL_BUF_RD_SHIFT)
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_RANGE                      0:0
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_WOFFSET                    0x0
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_INIT_ENUM                  DISABLE
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_INT_ENABLE_0_IN_LL_BUF_RD_ENABLE                     _MK_ENUM_CONST(1)


// Register SE_INT_STATUS_0
#define SE_INT_STATUS_0                 _MK_ADDR_CONST(0x10)
#define SE_INT_STATUS_0_SECURE                  0x0
#define SE_INT_STATUS_0_WORD_COUNT                      0x1
#define SE_INT_STATUS_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_RESET_MASK                      _MK_MASK_CONST(0x1003f)
#define SE_INT_STATUS_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_READ_MASK                       _MK_MASK_CONST(0x1003f)
#define SE_INT_STATUS_0_WRITE_MASK                      _MK_MASK_CONST(0x1003f)
#define SE_INT_STATUS_0_ERR_STAT_SHIFT                  _MK_SHIFT_CONST(16)
#define SE_INT_STATUS_0_ERR_STAT_FIELD                  _MK_FIELD_CONST(0x1, SE_INT_STATUS_0_ERR_STAT_SHIFT)
#define SE_INT_STATUS_0_ERR_STAT_RANGE                  16:16
#define SE_INT_STATUS_0_ERR_STAT_WOFFSET                        0x0
#define SE_INT_STATUS_0_ERR_STAT_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_ERR_STAT_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_INT_STATUS_0_ERR_STAT_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_ERR_STAT_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_ERR_STAT_INIT_ENUM                      CLEAR
#define SE_INT_STATUS_0_ERR_STAT_CLEAR                  _MK_ENUM_CONST(0)
#define SE_INT_STATUS_0_ERR_STAT_ACTIVE                 _MK_ENUM_CONST(1)
#define SE_INT_STATUS_0_ERR_STAT_SW_CLEAR                       _MK_ENUM_CONST(1)

#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_FIELD                     _MK_FIELD_CONST(0x1, SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_SHIFT)
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_RANGE                     5:5
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_WOFFSET                   0x0
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_INIT_ENUM                 CLEAR
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_CLEAR                     _MK_ENUM_CONST(0)
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_ACTIVE                    _MK_ENUM_CONST(1)
#define SE_INT_STATUS_0_RESEED_CNTR_EXHAUSTED_SW_CLEAR                  _MK_ENUM_CONST(1)

#define SE_INT_STATUS_0_SE_OP_DONE_SHIFT                        _MK_SHIFT_CONST(4)
#define SE_INT_STATUS_0_SE_OP_DONE_FIELD                        _MK_FIELD_CONST(0x1, SE_INT_STATUS_0_SE_OP_DONE_SHIFT)
#define SE_INT_STATUS_0_SE_OP_DONE_RANGE                        4:4
#define SE_INT_STATUS_0_SE_OP_DONE_WOFFSET                      0x0
#define SE_INT_STATUS_0_SE_OP_DONE_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_SE_OP_DONE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_INT_STATUS_0_SE_OP_DONE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_SE_OP_DONE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_SE_OP_DONE_INIT_ENUM                    CLEAR
#define SE_INT_STATUS_0_SE_OP_DONE_CLEAR                        _MK_ENUM_CONST(0)
#define SE_INT_STATUS_0_SE_OP_DONE_ACTIVE                       _MK_ENUM_CONST(1)
#define SE_INT_STATUS_0_SE_OP_DONE_SW_CLEAR                     _MK_ENUM_CONST(1)

#define SE_INT_STATUS_0_OUT_DONE_SHIFT                  _MK_SHIFT_CONST(3)
#define SE_INT_STATUS_0_OUT_DONE_FIELD                  _MK_FIELD_CONST(0x1, SE_INT_STATUS_0_OUT_DONE_SHIFT)
#define SE_INT_STATUS_0_OUT_DONE_RANGE                  3:3
#define SE_INT_STATUS_0_OUT_DONE_WOFFSET                        0x0
#define SE_INT_STATUS_0_OUT_DONE_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_OUT_DONE_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_INT_STATUS_0_OUT_DONE_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_OUT_DONE_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_OUT_DONE_INIT_ENUM                      CLEAR
#define SE_INT_STATUS_0_OUT_DONE_CLEAR                  _MK_ENUM_CONST(0)
#define SE_INT_STATUS_0_OUT_DONE_ACTIVE                 _MK_ENUM_CONST(1)
#define SE_INT_STATUS_0_OUT_DONE_SW_CLEAR                       _MK_ENUM_CONST(1)

#define SE_INT_STATUS_0_OUT_LL_BUF_WR_SHIFT                     _MK_SHIFT_CONST(2)
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_FIELD                     _MK_FIELD_CONST(0x1, SE_INT_STATUS_0_OUT_LL_BUF_WR_SHIFT)
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_RANGE                     2:2
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_WOFFSET                   0x0
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_INIT_ENUM                 CLEAR
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_CLEAR                     _MK_ENUM_CONST(0)
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_ACTIVE                    _MK_ENUM_CONST(1)
#define SE_INT_STATUS_0_OUT_LL_BUF_WR_SW_CLEAR                  _MK_ENUM_CONST(1)

#define SE_INT_STATUS_0_IN_DONE_SHIFT                   _MK_SHIFT_CONST(1)
#define SE_INT_STATUS_0_IN_DONE_FIELD                   _MK_FIELD_CONST(0x1, SE_INT_STATUS_0_IN_DONE_SHIFT)
#define SE_INT_STATUS_0_IN_DONE_RANGE                   1:1
#define SE_INT_STATUS_0_IN_DONE_WOFFSET                 0x0
#define SE_INT_STATUS_0_IN_DONE_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_IN_DONE_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define SE_INT_STATUS_0_IN_DONE_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_IN_DONE_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_IN_DONE_INIT_ENUM                       CLEAR
#define SE_INT_STATUS_0_IN_DONE_CLEAR                   _MK_ENUM_CONST(0)
#define SE_INT_STATUS_0_IN_DONE_ACTIVE                  _MK_ENUM_CONST(1)
#define SE_INT_STATUS_0_IN_DONE_SW_CLEAR                        _MK_ENUM_CONST(1)

#define SE_INT_STATUS_0_IN_LL_BUF_RD_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_INT_STATUS_0_IN_LL_BUF_RD_FIELD                      _MK_FIELD_CONST(0x1, SE_INT_STATUS_0_IN_LL_BUF_RD_SHIFT)
#define SE_INT_STATUS_0_IN_LL_BUF_RD_RANGE                      0:0
#define SE_INT_STATUS_0_IN_LL_BUF_RD_WOFFSET                    0x0
#define SE_INT_STATUS_0_IN_LL_BUF_RD_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_IN_LL_BUF_RD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_INT_STATUS_0_IN_LL_BUF_RD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_IN_LL_BUF_RD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_INT_STATUS_0_IN_LL_BUF_RD_INIT_ENUM                  CLEAR
#define SE_INT_STATUS_0_IN_LL_BUF_RD_CLEAR                      _MK_ENUM_CONST(0)
#define SE_INT_STATUS_0_IN_LL_BUF_RD_ACTIVE                     _MK_ENUM_CONST(1)
#define SE_INT_STATUS_0_IN_LL_BUF_RD_SW_CLEAR                   _MK_ENUM_CONST(1)


// Register SE_CONFIG_0
#define SE_CONFIG_0                     _MK_ADDR_CONST(0x14)
#define SE_CONFIG_0_SECURE                      0x0
#define SE_CONFIG_0_WORD_COUNT                  0x1
#define SE_CONFIG_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_RESET_MASK                  _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_READ_MASK                   _MK_MASK_CONST(0xffffff1c)
#define SE_CONFIG_0_WRITE_MASK                  _MK_MASK_CONST(0xffffff1c)
#define SE_CONFIG_0_DST_SHIFT                   _MK_SHIFT_CONST(2)
#define SE_CONFIG_0_DST_FIELD                   _MK_FIELD_CONST(0x7, SE_CONFIG_0_DST_SHIFT)
#define SE_CONFIG_0_DST_RANGE                   4:2
#define SE_CONFIG_0_DST_WOFFSET                 0x0
#define SE_CONFIG_0_DST_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DST_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DST_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DST_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DST_MEMORY                  _MK_ENUM_CONST(0)
#define SE_CONFIG_0_DST_HASH_REG                        _MK_ENUM_CONST(1)
#define SE_CONFIG_0_DST_KEYTABLE                        _MK_ENUM_CONST(2)
#define SE_CONFIG_0_DST_SRK                     _MK_ENUM_CONST(3)
#define SE_CONFIG_0_DST_RSA_REG                 _MK_ENUM_CONST(4)

#define SE_CONFIG_0_DEC_ALG_SHIFT                       _MK_SHIFT_CONST(8)
#define SE_CONFIG_0_DEC_ALG_FIELD                       _MK_FIELD_CONST(0xf, SE_CONFIG_0_DEC_ALG_SHIFT)
#define SE_CONFIG_0_DEC_ALG_RANGE                       11:8
#define SE_CONFIG_0_DEC_ALG_WOFFSET                     0x0
#define SE_CONFIG_0_DEC_ALG_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DEC_ALG_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DEC_ALG_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DEC_ALG_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DEC_ALG_NOP                 _MK_ENUM_CONST(0)
#define SE_CONFIG_0_DEC_ALG_AES_DEC                     _MK_ENUM_CONST(1)

#define SE_CONFIG_0_ENC_ALG_SHIFT                       _MK_SHIFT_CONST(12)
#define SE_CONFIG_0_ENC_ALG_FIELD                       _MK_FIELD_CONST(0xf, SE_CONFIG_0_ENC_ALG_SHIFT)
#define SE_CONFIG_0_ENC_ALG_RANGE                       15:12
#define SE_CONFIG_0_ENC_ALG_WOFFSET                     0x0
#define SE_CONFIG_0_ENC_ALG_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_ENC_ALG_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_ENC_ALG_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_ENC_ALG_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_ENC_ALG_NOP                 _MK_ENUM_CONST(0)
#define SE_CONFIG_0_ENC_ALG_AES_ENC                     _MK_ENUM_CONST(1)
#define SE_CONFIG_0_ENC_ALG_RNG                 _MK_ENUM_CONST(2)
#define SE_CONFIG_0_ENC_ALG_SHA                 _MK_ENUM_CONST(3)
#define SE_CONFIG_0_ENC_ALG_RSA                 _MK_ENUM_CONST(4)

#define SE_CONFIG_0_DEC_MODE_SHIFT                      _MK_SHIFT_CONST(16)
#define SE_CONFIG_0_DEC_MODE_FIELD                      _MK_FIELD_CONST(0xff, SE_CONFIG_0_DEC_MODE_SHIFT)
#define SE_CONFIG_0_DEC_MODE_RANGE                      23:16
#define SE_CONFIG_0_DEC_MODE_WOFFSET                    0x0
#define SE_CONFIG_0_DEC_MODE_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DEC_MODE_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DEC_MODE_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_DEC_MODE_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)

#define SE_CONFIG_0_ENC_MODE_SHIFT                      _MK_SHIFT_CONST(24)
#define SE_CONFIG_0_ENC_MODE_FIELD                      _MK_FIELD_CONST(0xff, SE_CONFIG_0_ENC_MODE_SHIFT)
#define SE_CONFIG_0_ENC_MODE_RANGE                      31:24
#define SE_CONFIG_0_ENC_MODE_WOFFSET                    0x0
#define SE_CONFIG_0_ENC_MODE_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_ENC_MODE_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_ENC_MODE_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CONFIG_0_ENC_MODE_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_IN_LL_ADDR_0
#define SE_IN_LL_ADDR_0                 _MK_ADDR_CONST(0x18)
#define SE_IN_LL_ADDR_0_SECURE                  0x0
#define SE_IN_LL_ADDR_0_WORD_COUNT                      0x1
#define SE_IN_LL_ADDR_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_IN_LL_ADDR_0_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_IN_LL_ADDR_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_IN_LL_ADDR_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_IN_LL_ADDR_0_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_IN_LL_ADDR_0_WRITE_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_IN_LL_ADDR_0_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_IN_LL_ADDR_0_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_IN_LL_ADDR_0_VAL_SHIFT)
#define SE_IN_LL_ADDR_0_VAL_RANGE                       31:0
#define SE_IN_LL_ADDR_0_VAL_WOFFSET                     0x0
#define SE_IN_LL_ADDR_0_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_IN_LL_ADDR_0_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_IN_LL_ADDR_0_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_IN_LL_ADDR_0_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_IN_CUR_BYTE_ADDR_0
#define SE_IN_CUR_BYTE_ADDR_0                   _MK_ADDR_CONST(0x1c)
#define SE_IN_CUR_BYTE_ADDR_0_SECURE                    0x0
#define SE_IN_CUR_BYTE_ADDR_0_WORD_COUNT                        0x1
#define SE_IN_CUR_BYTE_ADDR_0_RESET_VAL                         _MK_MASK_CONST(0x0)
#define SE_IN_CUR_BYTE_ADDR_0_RESET_MASK                        _MK_MASK_CONST(0x0)
#define SE_IN_CUR_BYTE_ADDR_0_SW_DEFAULT_VAL                    _MK_MASK_CONST(0x0)
#define SE_IN_CUR_BYTE_ADDR_0_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_IN_CUR_BYTE_ADDR_0_READ_MASK                         _MK_MASK_CONST(0xffffffff)
#define SE_IN_CUR_BYTE_ADDR_0_WRITE_MASK                        _MK_MASK_CONST(0x0)
#define SE_IN_CUR_BYTE_ADDR_0_VAL_SHIFT                 _MK_SHIFT_CONST(0)
#define SE_IN_CUR_BYTE_ADDR_0_VAL_FIELD                 _MK_FIELD_CONST(0xffffffff, SE_IN_CUR_BYTE_ADDR_0_VAL_SHIFT)
#define SE_IN_CUR_BYTE_ADDR_0_VAL_RANGE                 31:0
#define SE_IN_CUR_BYTE_ADDR_0_VAL_WOFFSET                       0x0
#define SE_IN_CUR_BYTE_ADDR_0_VAL_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_IN_CUR_BYTE_ADDR_0_VAL_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_IN_CUR_BYTE_ADDR_0_VAL_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_IN_CUR_BYTE_ADDR_0_VAL_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)


// Register SE_IN_CUR_LL_ID_0
#define SE_IN_CUR_LL_ID_0                       _MK_ADDR_CONST(0x20)
#define SE_IN_CUR_LL_ID_0_SECURE                        0x0
#define SE_IN_CUR_LL_ID_0_WORD_COUNT                    0x1
#define SE_IN_CUR_LL_ID_0_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_IN_CUR_LL_ID_0_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_IN_CUR_LL_ID_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_IN_CUR_LL_ID_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_IN_CUR_LL_ID_0_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_IN_CUR_LL_ID_0_WRITE_MASK                    _MK_MASK_CONST(0x0)
#define SE_IN_CUR_LL_ID_0_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_IN_CUR_LL_ID_0_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_IN_CUR_LL_ID_0_VAL_SHIFT)
#define SE_IN_CUR_LL_ID_0_VAL_RANGE                     31:0
#define SE_IN_CUR_LL_ID_0_VAL_WOFFSET                   0x0
#define SE_IN_CUR_LL_ID_0_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_IN_CUR_LL_ID_0_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_IN_CUR_LL_ID_0_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_IN_CUR_LL_ID_0_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_OUT_LL_ADDR_0
#define SE_OUT_LL_ADDR_0                        _MK_ADDR_CONST(0x24)
#define SE_OUT_LL_ADDR_0_SECURE                         0x0
#define SE_OUT_LL_ADDR_0_WORD_COUNT                     0x1
#define SE_OUT_LL_ADDR_0_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_OUT_LL_ADDR_0_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_OUT_LL_ADDR_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_OUT_LL_ADDR_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_OUT_LL_ADDR_0_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_OUT_LL_ADDR_0_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_OUT_LL_ADDR_0_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_OUT_LL_ADDR_0_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_OUT_LL_ADDR_0_VAL_SHIFT)
#define SE_OUT_LL_ADDR_0_VAL_RANGE                      31:0
#define SE_OUT_LL_ADDR_0_VAL_WOFFSET                    0x0
#define SE_OUT_LL_ADDR_0_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_OUT_LL_ADDR_0_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_OUT_LL_ADDR_0_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_OUT_LL_ADDR_0_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_OUT_CUR_BYTE_ADDR_0
#define SE_OUT_CUR_BYTE_ADDR_0                  _MK_ADDR_CONST(0x28)
#define SE_OUT_CUR_BYTE_ADDR_0_SECURE                   0x0
#define SE_OUT_CUR_BYTE_ADDR_0_WORD_COUNT                       0x1
#define SE_OUT_CUR_BYTE_ADDR_0_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_BYTE_ADDR_0_RESET_MASK                       _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_BYTE_ADDR_0_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_BYTE_ADDR_0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_BYTE_ADDR_0_READ_MASK                        _MK_MASK_CONST(0xffffffff)
#define SE_OUT_CUR_BYTE_ADDR_0_WRITE_MASK                       _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_BYTE_ADDR_0_VAL_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_OUT_CUR_BYTE_ADDR_0_VAL_FIELD                        _MK_FIELD_CONST(0xffffffff, SE_OUT_CUR_BYTE_ADDR_0_VAL_SHIFT)
#define SE_OUT_CUR_BYTE_ADDR_0_VAL_RANGE                        31:0
#define SE_OUT_CUR_BYTE_ADDR_0_VAL_WOFFSET                      0x0
#define SE_OUT_CUR_BYTE_ADDR_0_VAL_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_BYTE_ADDR_0_VAL_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_BYTE_ADDR_0_VAL_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_BYTE_ADDR_0_VAL_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SE_OUT_CUR_LL_ID_0
#define SE_OUT_CUR_LL_ID_0                      _MK_ADDR_CONST(0x2c)
#define SE_OUT_CUR_LL_ID_0_SECURE                       0x0
#define SE_OUT_CUR_LL_ID_0_WORD_COUNT                   0x1
#define SE_OUT_CUR_LL_ID_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_LL_ID_0_RESET_MASK                   _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_LL_ID_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_LL_ID_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_LL_ID_0_READ_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_OUT_CUR_LL_ID_0_WRITE_MASK                   _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_LL_ID_0_VAL_SHIFT                    _MK_SHIFT_CONST(0)
#define SE_OUT_CUR_LL_ID_0_VAL_FIELD                    _MK_FIELD_CONST(0xffffffff, SE_OUT_CUR_LL_ID_0_VAL_SHIFT)
#define SE_OUT_CUR_LL_ID_0_VAL_RANGE                    31:0
#define SE_OUT_CUR_LL_ID_0_VAL_WOFFSET                  0x0
#define SE_OUT_CUR_LL_ID_0_VAL_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_LL_ID_0_VAL_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_LL_ID_0_VAL_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_OUT_CUR_LL_ID_0_VAL_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_0
#define SE_HASH_RESULT_0                        _MK_ADDR_CONST(0x30)
#define SE_HASH_RESULT_0_SECURE                         0x0
#define SE_HASH_RESULT_0_WORD_COUNT                     0x1
#define SE_HASH_RESULT_0_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_0_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_0_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_0_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_0_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_0_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_0_VAL_SHIFT)
#define SE_HASH_RESULT_0_VAL_RANGE                      31:0
#define SE_HASH_RESULT_0_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_0_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_0_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_0_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_0_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT
#define SE_HASH_RESULT                  _MK_ADDR_CONST(0x30)
#define SE_HASH_RESULT_SECURE                   0x0
#define SE_HASH_RESULT_WORD_COUNT                       0x1
#define SE_HASH_RESULT_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_RESET_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_READ_MASK                        _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_WRITE_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_VAL_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_VAL_FIELD                        _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_VAL_SHIFT)
#define SE_HASH_RESULT_VAL_RANGE                        31:0
#define SE_HASH_RESULT_VAL_WOFFSET                      0x0
#define SE_HASH_RESULT_VAL_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_VAL_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_VAL_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_VAL_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_1
#define SE_HASH_RESULT_1                        _MK_ADDR_CONST(0x34)
#define SE_HASH_RESULT_1_SECURE                         0x0
#define SE_HASH_RESULT_1_WORD_COUNT                     0x1
#define SE_HASH_RESULT_1_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_1_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_1_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_1_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_1_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_1_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_1_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_1_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_1_VAL_SHIFT)
#define SE_HASH_RESULT_1_VAL_RANGE                      31:0
#define SE_HASH_RESULT_1_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_1_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_1_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_1_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_1_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_2
#define SE_HASH_RESULT_2                        _MK_ADDR_CONST(0x38)
#define SE_HASH_RESULT_2_SECURE                         0x0
#define SE_HASH_RESULT_2_WORD_COUNT                     0x1
#define SE_HASH_RESULT_2_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_2_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_2_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_2_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_2_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_2_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_2_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_2_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_2_VAL_SHIFT)
#define SE_HASH_RESULT_2_VAL_RANGE                      31:0
#define SE_HASH_RESULT_2_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_2_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_2_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_2_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_2_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_3
#define SE_HASH_RESULT_3                        _MK_ADDR_CONST(0x3c)
#define SE_HASH_RESULT_3_SECURE                         0x0
#define SE_HASH_RESULT_3_WORD_COUNT                     0x1
#define SE_HASH_RESULT_3_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_3_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_3_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_3_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_3_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_3_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_3_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_3_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_3_VAL_SHIFT)
#define SE_HASH_RESULT_3_VAL_RANGE                      31:0
#define SE_HASH_RESULT_3_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_3_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_3_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_3_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_3_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_4
#define SE_HASH_RESULT_4                        _MK_ADDR_CONST(0x40)
#define SE_HASH_RESULT_4_SECURE                         0x0
#define SE_HASH_RESULT_4_WORD_COUNT                     0x1
#define SE_HASH_RESULT_4_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_4_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_4_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_4_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_4_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_4_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_4_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_4_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_4_VAL_SHIFT)
#define SE_HASH_RESULT_4_VAL_RANGE                      31:0
#define SE_HASH_RESULT_4_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_4_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_4_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_4_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_4_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_5
#define SE_HASH_RESULT_5                        _MK_ADDR_CONST(0x44)
#define SE_HASH_RESULT_5_SECURE                         0x0
#define SE_HASH_RESULT_5_WORD_COUNT                     0x1
#define SE_HASH_RESULT_5_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_5_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_5_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_5_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_5_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_5_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_5_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_5_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_5_VAL_SHIFT)
#define SE_HASH_RESULT_5_VAL_RANGE                      31:0
#define SE_HASH_RESULT_5_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_5_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_5_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_5_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_5_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_6
#define SE_HASH_RESULT_6                        _MK_ADDR_CONST(0x48)
#define SE_HASH_RESULT_6_SECURE                         0x0
#define SE_HASH_RESULT_6_WORD_COUNT                     0x1
#define SE_HASH_RESULT_6_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_6_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_6_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_6_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_6_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_6_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_6_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_6_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_6_VAL_SHIFT)
#define SE_HASH_RESULT_6_VAL_RANGE                      31:0
#define SE_HASH_RESULT_6_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_6_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_6_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_6_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_6_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_7
#define SE_HASH_RESULT_7                        _MK_ADDR_CONST(0x4c)
#define SE_HASH_RESULT_7_SECURE                         0x0
#define SE_HASH_RESULT_7_WORD_COUNT                     0x1
#define SE_HASH_RESULT_7_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_7_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_7_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_7_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_7_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_7_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_7_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_7_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_7_VAL_SHIFT)
#define SE_HASH_RESULT_7_VAL_RANGE                      31:0
#define SE_HASH_RESULT_7_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_7_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_7_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_7_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_7_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_8
#define SE_HASH_RESULT_8                        _MK_ADDR_CONST(0x50)
#define SE_HASH_RESULT_8_SECURE                         0x0
#define SE_HASH_RESULT_8_WORD_COUNT                     0x1
#define SE_HASH_RESULT_8_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_8_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_8_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_8_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_8_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_8_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_8_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_8_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_8_VAL_SHIFT)
#define SE_HASH_RESULT_8_VAL_RANGE                      31:0
#define SE_HASH_RESULT_8_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_8_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_8_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_8_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_8_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_9
#define SE_HASH_RESULT_9                        _MK_ADDR_CONST(0x54)
#define SE_HASH_RESULT_9_SECURE                         0x0
#define SE_HASH_RESULT_9_WORD_COUNT                     0x1
#define SE_HASH_RESULT_9_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_9_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_9_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_9_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_9_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_9_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_9_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_9_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_9_VAL_SHIFT)
#define SE_HASH_RESULT_9_VAL_RANGE                      31:0
#define SE_HASH_RESULT_9_VAL_WOFFSET                    0x0
#define SE_HASH_RESULT_9_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_9_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_9_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_9_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_10
#define SE_HASH_RESULT_10                       _MK_ADDR_CONST(0x58)
#define SE_HASH_RESULT_10_SECURE                        0x0
#define SE_HASH_RESULT_10_WORD_COUNT                    0x1
#define SE_HASH_RESULT_10_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_10_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_10_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_10_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_10_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_10_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_10_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_10_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_10_VAL_SHIFT)
#define SE_HASH_RESULT_10_VAL_RANGE                     31:0
#define SE_HASH_RESULT_10_VAL_WOFFSET                   0x0
#define SE_HASH_RESULT_10_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_10_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_10_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_10_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_11
#define SE_HASH_RESULT_11                       _MK_ADDR_CONST(0x5c)
#define SE_HASH_RESULT_11_SECURE                        0x0
#define SE_HASH_RESULT_11_WORD_COUNT                    0x1
#define SE_HASH_RESULT_11_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_11_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_11_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_11_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_11_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_11_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_11_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_11_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_11_VAL_SHIFT)
#define SE_HASH_RESULT_11_VAL_RANGE                     31:0
#define SE_HASH_RESULT_11_VAL_WOFFSET                   0x0
#define SE_HASH_RESULT_11_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_11_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_11_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_11_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_12
#define SE_HASH_RESULT_12                       _MK_ADDR_CONST(0x60)
#define SE_HASH_RESULT_12_SECURE                        0x0
#define SE_HASH_RESULT_12_WORD_COUNT                    0x1
#define SE_HASH_RESULT_12_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_12_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_12_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_12_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_12_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_12_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_12_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_12_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_12_VAL_SHIFT)
#define SE_HASH_RESULT_12_VAL_RANGE                     31:0
#define SE_HASH_RESULT_12_VAL_WOFFSET                   0x0
#define SE_HASH_RESULT_12_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_12_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_12_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_12_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_13
#define SE_HASH_RESULT_13                       _MK_ADDR_CONST(0x64)
#define SE_HASH_RESULT_13_SECURE                        0x0
#define SE_HASH_RESULT_13_WORD_COUNT                    0x1
#define SE_HASH_RESULT_13_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_13_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_13_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_13_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_13_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_13_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_13_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_13_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_13_VAL_SHIFT)
#define SE_HASH_RESULT_13_VAL_RANGE                     31:0
#define SE_HASH_RESULT_13_VAL_WOFFSET                   0x0
#define SE_HASH_RESULT_13_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_13_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_13_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_13_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_14
#define SE_HASH_RESULT_14                       _MK_ADDR_CONST(0x68)
#define SE_HASH_RESULT_14_SECURE                        0x0
#define SE_HASH_RESULT_14_WORD_COUNT                    0x1
#define SE_HASH_RESULT_14_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_14_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_14_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_14_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_14_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_14_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_14_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_14_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_14_VAL_SHIFT)
#define SE_HASH_RESULT_14_VAL_RANGE                     31:0
#define SE_HASH_RESULT_14_VAL_WOFFSET                   0x0
#define SE_HASH_RESULT_14_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_14_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_14_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_14_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_HASH_RESULT_15
#define SE_HASH_RESULT_15                       _MK_ADDR_CONST(0x6c)
#define SE_HASH_RESULT_15_SECURE                        0x0
#define SE_HASH_RESULT_15_WORD_COUNT                    0x1
#define SE_HASH_RESULT_15_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_15_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_15_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_15_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_15_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_15_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_HASH_RESULT_15_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_HASH_RESULT_15_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_HASH_RESULT_15_VAL_SHIFT)
#define SE_HASH_RESULT_15_VAL_RANGE                     31:0
#define SE_HASH_RESULT_15_VAL_WOFFSET                   0x0
#define SE_HASH_RESULT_15_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_15_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_15_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_HASH_RESULT_15_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_CTX_SAVE_CONFIG_0
#define SE_CTX_SAVE_CONFIG_0                    _MK_ADDR_CONST(0x70)
#define SE_CTX_SAVE_CONFIG_0_SECURE                     0x0
#define SE_CTX_SAVE_CONFIG_0_WORD_COUNT                         0x1
#define SE_CTX_SAVE_CONFIG_0_RESET_VAL                  _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_RESET_MASK                         _MK_MASK_CONST(0x30000)
#define SE_CTX_SAVE_CONFIG_0_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_READ_MASK                  _MK_MASK_CONST(0xe103ff03)
#define SE_CTX_SAVE_CONFIG_0_WRITE_MASK                         _MK_MASK_CONST(0xe103ff03)
#define SE_CTX_SAVE_CONFIG_0_SRC_SHIFT                  _MK_SHIFT_CONST(29)
#define SE_CTX_SAVE_CONFIG_0_SRC_FIELD                  _MK_FIELD_CONST(0x7, SE_CTX_SAVE_CONFIG_0_SRC_SHIFT)
#define SE_CTX_SAVE_CONFIG_0_SRC_RANGE                  31:29
#define SE_CTX_SAVE_CONFIG_0_SRC_WOFFSET                        0x0
#define SE_CTX_SAVE_CONFIG_0_SRC_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_SRC_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_SRC_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_SRC_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_SRC_STICKY_BITS                    _MK_ENUM_CONST(0)
#define SE_CTX_SAVE_CONFIG_0_SRC_AES_KEYTABLE                   _MK_ENUM_CONST(2)
#define SE_CTX_SAVE_CONFIG_0_SRC_MEM                    _MK_ENUM_CONST(4)
#define SE_CTX_SAVE_CONFIG_0_SRC_SRK                    _MK_ENUM_CONST(6)
#define SE_CTX_SAVE_CONFIG_0_SRC_RSA_KEYTABLE                   _MK_ENUM_CONST(1)

#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_SHIFT                     _MK_SHIFT_CONST(24)
#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_FIELD                     _MK_FIELD_CONST(0x1, SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_SHIFT)
#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_RANGE                     24:24
#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_WOFFSET                   0x0
#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_WORDS_0_3                 _MK_ENUM_CONST(0)
#define SE_CTX_SAVE_CONFIG_0_STICKY_WORD_QUAD_WORDS_4_7                 _MK_ENUM_CONST(1)

#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_SHIFT                        _MK_SHIFT_CONST(16)
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_FIELD                        _MK_FIELD_CONST(0x3, SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_SHIFT)
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_RANGE                        17:16
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_WOFFSET                      0x0
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_DEFAULT_MASK                 _MK_MASK_CONST(0x3)
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_INIT_ENUM                    SLOT0_EXPONENT
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_SLOT0_EXPONENT                       _MK_ENUM_CONST(0)
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_SLOT0_MODULUS                        _MK_ENUM_CONST(1)
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_SLOT1_EXPONENT                       _MK_ENUM_CONST(2)
#define SE_CTX_SAVE_CONFIG_0_RSA_KEY_INDEX_SLOT1_MODULUS                        _MK_ENUM_CONST(3)

#define SE_CTX_SAVE_CONFIG_0_RSA_WORD_QUAD_SHIFT                        _MK_SHIFT_CONST(12)
#define SE_CTX_SAVE_CONFIG_0_RSA_WORD_QUAD_FIELD                        _MK_FIELD_CONST(0xf, SE_CTX_SAVE_CONFIG_0_RSA_WORD_QUAD_SHIFT)
#define SE_CTX_SAVE_CONFIG_0_RSA_WORD_QUAD_RANGE                        15:12
#define SE_CTX_SAVE_CONFIG_0_RSA_WORD_QUAD_WOFFSET                      0x0
#define SE_CTX_SAVE_CONFIG_0_RSA_WORD_QUAD_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_RSA_WORD_QUAD_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_RSA_WORD_QUAD_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_RSA_WORD_QUAD_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)

#define SE_CTX_SAVE_CONFIG_0_AES_KEY_INDEX_SHIFT                        _MK_SHIFT_CONST(8)
#define SE_CTX_SAVE_CONFIG_0_AES_KEY_INDEX_FIELD                        _MK_FIELD_CONST(0xf, SE_CTX_SAVE_CONFIG_0_AES_KEY_INDEX_SHIFT)
#define SE_CTX_SAVE_CONFIG_0_AES_KEY_INDEX_RANGE                        11:8
#define SE_CTX_SAVE_CONFIG_0_AES_KEY_INDEX_WOFFSET                      0x0
#define SE_CTX_SAVE_CONFIG_0_AES_KEY_INDEX_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_AES_KEY_INDEX_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_AES_KEY_INDEX_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_AES_KEY_INDEX_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)

#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_FIELD                        _MK_FIELD_CONST(0x3, SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_SHIFT)
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_RANGE                        1:0
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_WOFFSET                      0x0
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_KEYS_0_3                     _MK_ENUM_CONST(0)
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_KEYS_4_7                     _MK_ENUM_CONST(1)
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_ORIGINAL_IVS                 _MK_ENUM_CONST(2)
#define SE_CTX_SAVE_CONFIG_0_AES_WORD_QUAD_UPDATED_IVS                  _MK_ENUM_CONST(3)

#define ARSE_SHA_MSG_LENGTH_SIZE        128

// Register SE_SHA_CONFIG_0
#define SE_SHA_CONFIG_0                 _MK_ADDR_CONST(0x200)
#define SE_SHA_CONFIG_0_SECURE                  0x0
#define SE_SHA_CONFIG_0_WORD_COUNT                      0x1
#define SE_SHA_CONFIG_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_SHA_CONFIG_0_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_SHA_CONFIG_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_SHA_CONFIG_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_SHA_CONFIG_0_READ_MASK                       _MK_MASK_CONST(0x1)
#define SE_SHA_CONFIG_0_WRITE_MASK                      _MK_MASK_CONST(0x1)
#define SE_SHA_CONFIG_0_HW_INIT_HASH_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_SHA_CONFIG_0_HW_INIT_HASH_FIELD                      _MK_FIELD_CONST(0x1, SE_SHA_CONFIG_0_HW_INIT_HASH_SHIFT)
#define SE_SHA_CONFIG_0_HW_INIT_HASH_RANGE                      0:0
#define SE_SHA_CONFIG_0_HW_INIT_HASH_WOFFSET                    0x0
#define SE_SHA_CONFIG_0_HW_INIT_HASH_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_SHA_CONFIG_0_HW_INIT_HASH_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_SHA_CONFIG_0_HW_INIT_HASH_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_SHA_CONFIG_0_HW_INIT_HASH_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_CONFIG_0_HW_INIT_HASH_DISABLE                    _MK_ENUM_CONST(0)
#define SE_SHA_CONFIG_0_HW_INIT_HASH_ENABLE                     _MK_ENUM_CONST(1)


// Register SE_SHA_MSG_LENGTH_0
#define SE_SHA_MSG_LENGTH_0                     _MK_ADDR_CONST(0x204)
#define SE_SHA_MSG_LENGTH_0_SECURE                      0x0
#define SE_SHA_MSG_LENGTH_0_WORD_COUNT                  0x1
#define SE_SHA_MSG_LENGTH_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_0_RESET_MASK                  _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_0_READ_MASK                   _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_0_WRITE_MASK                  _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_0_VAL_SHIFT                   _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LENGTH_0_VAL_FIELD                   _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LENGTH_0_VAL_SHIFT)
#define SE_SHA_MSG_LENGTH_0_VAL_RANGE                   31:0
#define SE_SHA_MSG_LENGTH_0_VAL_WOFFSET                 0x0
#define SE_SHA_MSG_LENGTH_0_VAL_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_0_VAL_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_0_VAL_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_0_VAL_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register SE_SHA_MSG_LENGTH
#define SE_SHA_MSG_LENGTH                       _MK_ADDR_CONST(0x204)
#define SE_SHA_MSG_LENGTH_SECURE                        0x0
#define SE_SHA_MSG_LENGTH_WORD_COUNT                    0x1
#define SE_SHA_MSG_LENGTH_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LENGTH_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LENGTH_VAL_SHIFT)
#define SE_SHA_MSG_LENGTH_VAL_RANGE                     31:0
#define SE_SHA_MSG_LENGTH_VAL_WOFFSET                   0x0
#define SE_SHA_MSG_LENGTH_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_SHA_MSG_LENGTH_1
#define SE_SHA_MSG_LENGTH_1                     _MK_ADDR_CONST(0x208)
#define SE_SHA_MSG_LENGTH_1_SECURE                      0x0
#define SE_SHA_MSG_LENGTH_1_WORD_COUNT                  0x1
#define SE_SHA_MSG_LENGTH_1_RESET_VAL                   _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_1_RESET_MASK                  _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_1_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_1_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_1_READ_MASK                   _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_1_WRITE_MASK                  _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_1_VAL_SHIFT                   _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LENGTH_1_VAL_FIELD                   _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LENGTH_1_VAL_SHIFT)
#define SE_SHA_MSG_LENGTH_1_VAL_RANGE                   31:0
#define SE_SHA_MSG_LENGTH_1_VAL_WOFFSET                 0x0
#define SE_SHA_MSG_LENGTH_1_VAL_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_1_VAL_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_1_VAL_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_1_VAL_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register SE_SHA_MSG_LENGTH_2
#define SE_SHA_MSG_LENGTH_2                     _MK_ADDR_CONST(0x20c)
#define SE_SHA_MSG_LENGTH_2_SECURE                      0x0
#define SE_SHA_MSG_LENGTH_2_WORD_COUNT                  0x1
#define SE_SHA_MSG_LENGTH_2_RESET_VAL                   _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_2_RESET_MASK                  _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_2_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_2_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_2_READ_MASK                   _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_2_WRITE_MASK                  _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_2_VAL_SHIFT                   _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LENGTH_2_VAL_FIELD                   _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LENGTH_2_VAL_SHIFT)
#define SE_SHA_MSG_LENGTH_2_VAL_RANGE                   31:0
#define SE_SHA_MSG_LENGTH_2_VAL_WOFFSET                 0x0
#define SE_SHA_MSG_LENGTH_2_VAL_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_2_VAL_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_2_VAL_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_2_VAL_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register SE_SHA_MSG_LENGTH_3
#define SE_SHA_MSG_LENGTH_3                     _MK_ADDR_CONST(0x210)
#define SE_SHA_MSG_LENGTH_3_SECURE                      0x0
#define SE_SHA_MSG_LENGTH_3_WORD_COUNT                  0x1
#define SE_SHA_MSG_LENGTH_3_RESET_VAL                   _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_3_RESET_MASK                  _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_3_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_3_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_3_READ_MASK                   _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_3_WRITE_MASK                  _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LENGTH_3_VAL_SHIFT                   _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LENGTH_3_VAL_FIELD                   _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LENGTH_3_VAL_SHIFT)
#define SE_SHA_MSG_LENGTH_3_VAL_RANGE                   31:0
#define SE_SHA_MSG_LENGTH_3_VAL_WOFFSET                 0x0
#define SE_SHA_MSG_LENGTH_3_VAL_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_3_VAL_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_3_VAL_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LENGTH_3_VAL_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)


// Register SE_SHA_MSG_LEFT_0
#define SE_SHA_MSG_LEFT_0                       _MK_ADDR_CONST(0x214)
#define SE_SHA_MSG_LEFT_0_SECURE                        0x0
#define SE_SHA_MSG_LEFT_0_WORD_COUNT                    0x1
#define SE_SHA_MSG_LEFT_0_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_0_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_0_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_0_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_0_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LEFT_0_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LEFT_0_VAL_SHIFT)
#define SE_SHA_MSG_LEFT_0_VAL_RANGE                     31:0
#define SE_SHA_MSG_LEFT_0_VAL_WOFFSET                   0x0
#define SE_SHA_MSG_LEFT_0_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_0_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_0_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_0_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_SHA_MSG_LEFT
#define SE_SHA_MSG_LEFT                 _MK_ADDR_CONST(0x214)
#define SE_SHA_MSG_LEFT_SECURE                  0x0
#define SE_SHA_MSG_LEFT_WORD_COUNT                      0x1
#define SE_SHA_MSG_LEFT_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_WRITE_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LEFT_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LEFT_VAL_SHIFT)
#define SE_SHA_MSG_LEFT_VAL_RANGE                       31:0
#define SE_SHA_MSG_LEFT_VAL_WOFFSET                     0x0
#define SE_SHA_MSG_LEFT_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_SHA_MSG_LEFT_1
#define SE_SHA_MSG_LEFT_1                       _MK_ADDR_CONST(0x218)
#define SE_SHA_MSG_LEFT_1_SECURE                        0x0
#define SE_SHA_MSG_LEFT_1_WORD_COUNT                    0x1
#define SE_SHA_MSG_LEFT_1_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_1_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_1_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_1_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_1_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_1_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_1_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LEFT_1_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LEFT_1_VAL_SHIFT)
#define SE_SHA_MSG_LEFT_1_VAL_RANGE                     31:0
#define SE_SHA_MSG_LEFT_1_VAL_WOFFSET                   0x0
#define SE_SHA_MSG_LEFT_1_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_1_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_1_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_1_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_SHA_MSG_LEFT_2
#define SE_SHA_MSG_LEFT_2                       _MK_ADDR_CONST(0x21c)
#define SE_SHA_MSG_LEFT_2_SECURE                        0x0
#define SE_SHA_MSG_LEFT_2_WORD_COUNT                    0x1
#define SE_SHA_MSG_LEFT_2_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_2_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_2_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_2_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_2_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_2_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_2_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LEFT_2_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LEFT_2_VAL_SHIFT)
#define SE_SHA_MSG_LEFT_2_VAL_RANGE                     31:0
#define SE_SHA_MSG_LEFT_2_VAL_WOFFSET                   0x0
#define SE_SHA_MSG_LEFT_2_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_2_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_2_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_2_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_SHA_MSG_LEFT_3
#define SE_SHA_MSG_LEFT_3                       _MK_ADDR_CONST(0x220)
#define SE_SHA_MSG_LEFT_3_SECURE                        0x0
#define SE_SHA_MSG_LEFT_3_WORD_COUNT                    0x1
#define SE_SHA_MSG_LEFT_3_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_3_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_3_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_3_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_3_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_3_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_SHA_MSG_LEFT_3_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_SHA_MSG_LEFT_3_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_SHA_MSG_LEFT_3_VAL_SHIFT)
#define SE_SHA_MSG_LEFT_3_VAL_RANGE                     31:0
#define SE_SHA_MSG_LEFT_3_VAL_WOFFSET                   0x0
#define SE_SHA_MSG_LEFT_3_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_3_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_3_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_SHA_MSG_LEFT_3_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define ARSE_CRYPTO_KEYS_PER_KEYCHUNK   8
#define ARSE_CRYPTO_IVS_PER_KEYCHUNK    4
#define ARSE_CRYPTO_WORDS_PER_KEYCHUNK  16
#define ARSE_CRYPTO_KEYTABLE_KEYIV_WORDS        256
#define ARSE_CRYPTO_KEYTABLE_SCHEDULE_WORDS     64
#define ARSE_CRYPTO_LINEAR_CTR_WIDTH    128
#define ARSE_CRYPTO_LFSR_WIDTH  128
#define ARSE_CRYPTO_SRK_WIDTH   128
#define ARSE_SRK_MAX_BLOCKS     1024

// Packet SE_CRYPTO_KEYIV_PKT
#define SE_CRYPTO_KEYIV_PKT_SIZE 8

#define SE_CRYPTO_KEYIV_PKT_WORD_SHIFT                  _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_WORD_FIELD                  _MK_FIELD_CONST(0x3, SE_CRYPTO_KEYIV_PKT_WORD_SHIFT)
#define SE_CRYPTO_KEYIV_PKT_WORD_RANGE                  _MK_SHIFT_CONST(1):_MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_WORD_ROW                    0

#define SE_CRYPTO_KEYIV_PKT_KEYIV_WORD_SHIFT                    _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_KEYIV_WORD_FIELD                    _MK_FIELD_CONST(0xf, SE_CRYPTO_KEYIV_PKT_KEYIV_WORD_SHIFT)
#define SE_CRYPTO_KEYIV_PKT_KEYIV_WORD_RANGE                    _MK_SHIFT_CONST(3):_MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_KEYIV_WORD_ROW                      0

#define SE_CRYPTO_KEYIV_PKT_KEYIV_SEL_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYIV_PKT_KEYIV_SEL_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYIV_PKT_KEYIV_SEL_SHIFT)
#define SE_CRYPTO_KEYIV_PKT_KEYIV_SEL_RANGE                     _MK_SHIFT_CONST(3):_MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYIV_PKT_KEYIV_SEL_ROW                       0
#define SE_CRYPTO_KEYIV_PKT_KEYIV_SEL_KEY                       _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_KEYIV_SEL_IV                        _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYIV_PKT_IV_SEL_SHIFT                        _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYIV_PKT_IV_SEL_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYIV_PKT_IV_SEL_SHIFT)
#define SE_CRYPTO_KEYIV_PKT_IV_SEL_RANGE                        _MK_SHIFT_CONST(2):_MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYIV_PKT_IV_SEL_ROW                  0
#define SE_CRYPTO_KEYIV_PKT_IV_SEL_ORIGINAL                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_IV_SEL_UPDATED                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYIV_PKT_WORD_QUAD_SHIFT                     _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYIV_PKT_WORD_QUAD_FIELD                     _MK_FIELD_CONST(0x3, SE_CRYPTO_KEYIV_PKT_WORD_QUAD_SHIFT)
#define SE_CRYPTO_KEYIV_PKT_WORD_QUAD_RANGE                     _MK_SHIFT_CONST(3):_MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYIV_PKT_WORD_QUAD_ROW                       0
#define SE_CRYPTO_KEYIV_PKT_WORD_QUAD_KEYS_0_3                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_WORD_QUAD_KEYS_4_7                  _MK_ENUM_CONST(1)
#define SE_CRYPTO_KEYIV_PKT_WORD_QUAD_ORIGINAL_IVS                      _MK_ENUM_CONST(2)
#define SE_CRYPTO_KEYIV_PKT_WORD_QUAD_UPDATED_IVS                       _MK_ENUM_CONST(3)

#define SE_CRYPTO_KEYIV_PKT_KEY_WORD_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_KEY_WORD_FIELD                      _MK_FIELD_CONST(0x7, SE_CRYPTO_KEYIV_PKT_KEY_WORD_SHIFT)
#define SE_CRYPTO_KEYIV_PKT_KEY_WORD_RANGE                      _MK_SHIFT_CONST(2):_MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_KEY_WORD_ROW                        0

#define SE_CRYPTO_KEYIV_PKT_IV_WORD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_IV_WORD_FIELD                       _MK_FIELD_CONST(0x3, SE_CRYPTO_KEYIV_PKT_IV_WORD_SHIFT)
#define SE_CRYPTO_KEYIV_PKT_IV_WORD_RANGE                       _MK_SHIFT_CONST(1):_MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_IV_WORD_ROW                 0

#define SE_CRYPTO_KEYIV_PKT_KEY_INDEX_SHIFT                     _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYIV_PKT_KEY_INDEX_FIELD                     _MK_FIELD_CONST(0xf, SE_CRYPTO_KEYIV_PKT_KEY_INDEX_SHIFT)
#define SE_CRYPTO_KEYIV_PKT_KEY_INDEX_RANGE                     _MK_SHIFT_CONST(7):_MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYIV_PKT_KEY_INDEX_ROW                       0

#define SE_CRYPTO_KEYIV_PKT_ADDR_SHIFT                  _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_ADDR_FIELD                  _MK_FIELD_CONST(0xff, SE_CRYPTO_KEYIV_PKT_ADDR_SHIFT)
#define SE_CRYPTO_KEYIV_PKT_ADDR_RANGE                  _MK_SHIFT_CONST(7):_MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYIV_PKT_ADDR_ROW                    0


// Packet SE_CRYPTO_SCHEDULE_PKT
#define SE_CRYPTO_SCHEDULE_PKT_SIZE 6

#define SE_CRYPTO_SCHEDULE_PKT_ADDR_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_SCHEDULE_PKT_ADDR_FIELD                       _MK_FIELD_CONST(0x3f, SE_CRYPTO_SCHEDULE_PKT_ADDR_SHIFT)
#define SE_CRYPTO_SCHEDULE_PKT_ADDR_RANGE                       _MK_SHIFT_CONST(5):_MK_SHIFT_CONST(0)
#define SE_CRYPTO_SCHEDULE_PKT_ADDR_ROW                 0


// Packet SRK_PKT
#define SRK_PKT_SIZE 34

#define SRK_PKT_DATA_SHIFT                      _MK_SHIFT_CONST(0)
#define SRK_PKT_DATA_FIELD                      _MK_FIELD_CONST(0xffffffff, SRK_PKT_DATA_SHIFT)
#define SRK_PKT_DATA_RANGE                      _MK_SHIFT_CONST(31):_MK_SHIFT_CONST(0)
#define SRK_PKT_DATA_ROW                        0

#define SRK_PKT_ADDR_SHIFT                      _MK_SHIFT_CONST(32)
#define SRK_PKT_ADDR_FIELD                      _MK_FIELD_CONST(0x3, SRK_PKT_ADDR_SHIFT)
#define SRK_PKT_ADDR_RANGE                      _MK_SHIFT_CONST(33):_MK_SHIFT_CONST(32)
#define SRK_PKT_ADDR_ROW                        0


// Register SE_CRYPTO_SECURITY_PERKEY_0
#define SE_CRYPTO_SECURITY_PERKEY_0                     _MK_ADDR_CONST(0x280)
#define SE_CRYPTO_SECURITY_PERKEY_0_SECURE                      0x0
#define SE_CRYPTO_SECURITY_PERKEY_0_WORD_COUNT                  0x1
#define SE_CRYPTO_SECURITY_PERKEY_0_RESET_VAL                   _MK_MASK_CONST(0xffff)
#define SE_CRYPTO_SECURITY_PERKEY_0_RESET_MASK                  _MK_MASK_CONST(0xffff)
#define SE_CRYPTO_SECURITY_PERKEY_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_SECURITY_PERKEY_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_SECURITY_PERKEY_0_READ_MASK                   _MK_MASK_CONST(0xffff)
#define SE_CRYPTO_SECURITY_PERKEY_0_WRITE_MASK                  _MK_MASK_CONST(0xffff)
#define SE_CRYPTO_SECURITY_PERKEY_0_SETTING_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_SECURITY_PERKEY_0_SETTING_FIELD                       _MK_FIELD_CONST(0xffff, SE_CRYPTO_SECURITY_PERKEY_0_SETTING_SHIFT)
#define SE_CRYPTO_SECURITY_PERKEY_0_SETTING_RANGE                       15:0
#define SE_CRYPTO_SECURITY_PERKEY_0_SETTING_WOFFSET                     0x0
#define SE_CRYPTO_SECURITY_PERKEY_0_SETTING_DEFAULT                     _MK_MASK_CONST(0xffff)
#define SE_CRYPTO_SECURITY_PERKEY_0_SETTING_DEFAULT_MASK                        _MK_MASK_CONST(0xffff)
#define SE_CRYPTO_SECURITY_PERKEY_0_SETTING_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_SECURITY_PERKEY_0_SETTING_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_KEYTABLE_ACCESS_0
#define SE_CRYPTO_KEYTABLE_ACCESS_0                     _MK_ADDR_CONST(0x284)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_0_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_0_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_0_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS
#define SE_CRYPTO_KEYTABLE_ACCESS                       _MK_ADDR_CONST(0x284)
#define SE_CRYPTO_KEYTABLE_ACCESS_SECURE                        0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_WORD_COUNT                    0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_RESET_VAL                     _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_RESET_MASK                    _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_READ_MASK                     _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_WRITE_MASK                    _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_SHIFT                  _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_FIELD                  _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_RANGE                  6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_WOFFSET                        0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_DEFAULT                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_INIT_ENUM                      ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_DISABLE                        _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUSE_ENABLE                 _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_SHIFT                       _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_RANGE                       5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVUPDATE_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_SHIFT                 _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_FIELD                 _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_RANGE                 4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_WOFFSET                       0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_DEFAULT                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_DEFAULT_MASK                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_INIT_ENUM                     ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_DISABLE                       _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_UIVREAD_ENABLE                        _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_SHIFT                       _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_RANGE                       3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVUPDATE_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_SHIFT                 _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_FIELD                 _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_RANGE                 2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_WOFFSET                       0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_DEFAULT                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_DEFAULT_MASK                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_INIT_ENUM                     ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_DISABLE                       _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_OIVREAD_ENABLE                        _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_SHIFT                       _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_RANGE                       1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYUPDATE_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_SHIFT                 _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_FIELD                 _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_RANGE                 0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_WOFFSET                       0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_DEFAULT                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_DEFAULT_MASK                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_INIT_ENUM                     ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_DISABLE                       _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_KEYREAD_ENABLE                        _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_1
#define SE_CRYPTO_KEYTABLE_ACCESS_1                     _MK_ADDR_CONST(0x288)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_1_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_1_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_1_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_2
#define SE_CRYPTO_KEYTABLE_ACCESS_2                     _MK_ADDR_CONST(0x28c)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_2_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_2_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_2_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_3
#define SE_CRYPTO_KEYTABLE_ACCESS_3                     _MK_ADDR_CONST(0x290)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_3_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_3_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_3_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_4
#define SE_CRYPTO_KEYTABLE_ACCESS_4                     _MK_ADDR_CONST(0x294)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_4_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_4_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_4_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_5
#define SE_CRYPTO_KEYTABLE_ACCESS_5                     _MK_ADDR_CONST(0x298)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_5_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_5_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_5_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_6
#define SE_CRYPTO_KEYTABLE_ACCESS_6                     _MK_ADDR_CONST(0x29c)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_6_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_6_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_6_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_7
#define SE_CRYPTO_KEYTABLE_ACCESS_7                     _MK_ADDR_CONST(0x2a0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_7_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_7_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_7_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_8
#define SE_CRYPTO_KEYTABLE_ACCESS_8                     _MK_ADDR_CONST(0x2a4)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_8_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_8_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_8_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_9
#define SE_CRYPTO_KEYTABLE_ACCESS_9                     _MK_ADDR_CONST(0x2a8)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_SECURE                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_9_WORD_COUNT                  0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_9_RESET_VAL                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_RESET_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_READ_MASK                   _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_WRITE_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_SHIFT                        _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_FIELD                        _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_RANGE                        6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_INIT_ENUM                    ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUSE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_RANGE                     5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_SHIFT                       _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_RANGE                       4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_UIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_SHIFT                     _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_RANGE                     3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_RANGE                       2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_OIVREAD_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_FIELD                     _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_RANGE                     1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_INIT_ENUM                 ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYUPDATE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_RANGE                       0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_9_KEYREAD_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_10
#define SE_CRYPTO_KEYTABLE_ACCESS_10                    _MK_ADDR_CONST(0x2ac)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_SECURE                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_10_WORD_COUNT                         0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_10_RESET_VAL                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_RESET_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_READ_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_WRITE_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_SHIFT                       _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_RANGE                       6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUSE_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_SHIFT                    _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_RANGE                    5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_SHIFT                      _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_RANGE                      4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_UIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_SHIFT                    _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_RANGE                    3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_SHIFT                      _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_RANGE                      2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_OIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_SHIFT                    _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_RANGE                    1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_RANGE                      0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_10_KEYREAD_ENABLE                     _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_11
#define SE_CRYPTO_KEYTABLE_ACCESS_11                    _MK_ADDR_CONST(0x2b0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_SECURE                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_11_WORD_COUNT                         0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_11_RESET_VAL                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_RESET_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_READ_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_WRITE_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_SHIFT                       _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_RANGE                       6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUSE_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_SHIFT                    _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_RANGE                    5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_SHIFT                      _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_RANGE                      4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_UIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_SHIFT                    _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_RANGE                    3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_SHIFT                      _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_RANGE                      2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_OIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_SHIFT                    _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_RANGE                    1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_RANGE                      0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_11_KEYREAD_ENABLE                     _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_12
#define SE_CRYPTO_KEYTABLE_ACCESS_12                    _MK_ADDR_CONST(0x2b4)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_SECURE                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_12_WORD_COUNT                         0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_12_RESET_VAL                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_RESET_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_READ_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_WRITE_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_SHIFT                       _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_RANGE                       6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUSE_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_SHIFT                    _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_RANGE                    5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_SHIFT                      _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_RANGE                      4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_UIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_SHIFT                    _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_RANGE                    3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_SHIFT                      _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_RANGE                      2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_OIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_SHIFT                    _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_RANGE                    1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_RANGE                      0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_12_KEYREAD_ENABLE                     _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_13
#define SE_CRYPTO_KEYTABLE_ACCESS_13                    _MK_ADDR_CONST(0x2b8)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_SECURE                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_13_WORD_COUNT                         0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_13_RESET_VAL                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_RESET_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_READ_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_WRITE_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_SHIFT                       _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_RANGE                       6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUSE_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_SHIFT                    _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_RANGE                    5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_SHIFT                      _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_RANGE                      4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_UIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_SHIFT                    _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_RANGE                    3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_SHIFT                      _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_RANGE                      2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_OIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_SHIFT                    _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_RANGE                    1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_RANGE                      0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_13_KEYREAD_ENABLE                     _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_14
#define SE_CRYPTO_KEYTABLE_ACCESS_14                    _MK_ADDR_CONST(0x2bc)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_SECURE                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_14_WORD_COUNT                         0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_14_RESET_VAL                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_RESET_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_READ_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_WRITE_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_SHIFT                       _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_RANGE                       6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUSE_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_SHIFT                    _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_RANGE                    5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_SHIFT                      _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_RANGE                      4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_UIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_SHIFT                    _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_RANGE                    3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_SHIFT                      _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_RANGE                      2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_OIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_SHIFT                    _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_RANGE                    1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_RANGE                      0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_14_KEYREAD_ENABLE                     _MK_ENUM_CONST(1)


// Register SE_CRYPTO_KEYTABLE_ACCESS_15
#define SE_CRYPTO_KEYTABLE_ACCESS_15                    _MK_ADDR_CONST(0x2c0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_SECURE                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_15_WORD_COUNT                         0x1
#define SE_CRYPTO_KEYTABLE_ACCESS_15_RESET_VAL                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_RESET_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_READ_MASK                  _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_WRITE_MASK                         _MK_MASK_CONST(0x7f)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_SHIFT                       _MK_SHIFT_CONST(6)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_RANGE                       6:6
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_DEFAULT                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_INIT_ENUM                   ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUSE_ENABLE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_SHIFT                    _MK_SHIFT_CONST(5)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_RANGE                    5:5
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_SHIFT                      _MK_SHIFT_CONST(4)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_RANGE                      4:4
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_UIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_SHIFT                    _MK_SHIFT_CONST(3)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_RANGE                    3:3
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_SHIFT                      _MK_SHIFT_CONST(2)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_RANGE                      2:2
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_OIVREAD_ENABLE                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_SHIFT                    _MK_SHIFT_CONST(1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_FIELD                    _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_RANGE                    1:1
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_WOFFSET                  0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_INIT_ENUM                        ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_DISABLE                  _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYUPDATE_ENABLE                   _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_RANGE                      0:0
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_DEFAULT                    _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_INIT_ENUM                  ENABLE
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_DISABLE                    _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ACCESS_15_KEYREAD_ENABLE                     _MK_ENUM_CONST(1)


// Reserved address 708 [0x2c4]

// Reserved address 712 [0x2c8]

// Reserved address 716 [0x2cc]

// Reserved address 720 [0x2d0]

// Reserved address 724 [0x2d4]

// Reserved address 728 [0x2d8]

// Reserved address 732 [0x2dc]

// Reserved address 736 [0x2e0]

// Reserved address 740 [0x2e4]

// Reserved address 744 [0x2e8]

// Reserved address 748 [0x2ec]

// Reserved address 752 [0x2f0]

// Reserved address 756 [0x2f4]

// Reserved address 760 [0x2f8]

// Reserved address 764 [0x2fc]

// Reserved address 768 [0x300]

// Register SE_CRYPTO_CONFIG_0
#define SE_CRYPTO_CONFIG_0                      _MK_ADDR_CONST(0x304)
#define SE_CRYPTO_CONFIG_0_SECURE                       0x0
#define SE_CRYPTO_CONFIG_0_WORD_COUNT                   0x1
#define SE_CRYPTO_CONFIG_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_RESET_MASK                   _MK_MASK_CONST(0x400)
#define SE_CRYPTO_CONFIG_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_READ_MASK                    _MK_MASK_CONST(0xf07fdff)
#define SE_CRYPTO_CONFIG_0_WRITE_MASK                   _MK_MASK_CONST(0xf07fdff)
#define SE_CRYPTO_CONFIG_0_KEY_INDEX_SHIFT                      _MK_SHIFT_CONST(24)
#define SE_CRYPTO_CONFIG_0_KEY_INDEX_FIELD                      _MK_FIELD_CONST(0xf, SE_CRYPTO_CONFIG_0_KEY_INDEX_SHIFT)
#define SE_CRYPTO_CONFIG_0_KEY_INDEX_RANGE                      27:24
#define SE_CRYPTO_CONFIG_0_KEY_INDEX_WOFFSET                    0x0
#define SE_CRYPTO_CONFIG_0_KEY_INDEX_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_KEY_INDEX_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_KEY_INDEX_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_KEY_INDEX_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)

#define SE_CRYPTO_CONFIG_0_CTR_CNTN_SHIFT                       _MK_SHIFT_CONST(11)
#define SE_CRYPTO_CONFIG_0_CTR_CNTN_FIELD                       _MK_FIELD_CONST(0xff, SE_CRYPTO_CONFIG_0_CTR_CNTN_SHIFT)
#define SE_CRYPTO_CONFIG_0_CTR_CNTN_RANGE                       18:11
#define SE_CRYPTO_CONFIG_0_CTR_CNTN_WOFFSET                     0x0
#define SE_CRYPTO_CONFIG_0_CTR_CNTN_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_CTR_CNTN_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_CTR_CNTN_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_CTR_CNTN_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)

#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_SHIFT                  _MK_SHIFT_CONST(10)
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_FIELD                  _MK_FIELD_CONST(0x1, SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_SHIFT)
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_RANGE                  10:10
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_WOFFSET                        0x0
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_INIT_ENUM                      DISABLE
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_DISABLE                        _MK_ENUM_CONST(0)
#define SE_CRYPTO_CONFIG_0_KEYSCH_BYPASS_ENABLE                 _MK_ENUM_CONST(1)

#define SE_CRYPTO_CONFIG_0_CORE_SEL_SHIFT                       _MK_SHIFT_CONST(8)
#define SE_CRYPTO_CONFIG_0_CORE_SEL_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_CONFIG_0_CORE_SEL_SHIFT)
#define SE_CRYPTO_CONFIG_0_CORE_SEL_RANGE                       8:8
#define SE_CRYPTO_CONFIG_0_CORE_SEL_WOFFSET                     0x0
#define SE_CRYPTO_CONFIG_0_CORE_SEL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_CORE_SEL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_CORE_SEL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_CORE_SEL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_CORE_SEL_DECRYPT                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_CONFIG_0_CORE_SEL_ENCRYPT                     _MK_ENUM_CONST(1)

#define SE_CRYPTO_CONFIG_0_IV_SELECT_SHIFT                      _MK_SHIFT_CONST(7)
#define SE_CRYPTO_CONFIG_0_IV_SELECT_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_CONFIG_0_IV_SELECT_SHIFT)
#define SE_CRYPTO_CONFIG_0_IV_SELECT_RANGE                      7:7
#define SE_CRYPTO_CONFIG_0_IV_SELECT_WOFFSET                    0x0
#define SE_CRYPTO_CONFIG_0_IV_SELECT_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_IV_SELECT_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_IV_SELECT_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_IV_SELECT_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_IV_SELECT_ORIGINAL                   _MK_ENUM_CONST(0)
#define SE_CRYPTO_CONFIG_0_IV_SELECT_UPDATED                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_SHIFT                     _MK_SHIFT_CONST(5)
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_FIELD                     _MK_FIELD_CONST(0x3, SE_CRYPTO_CONFIG_0_VCTRAM_SEL_SHIFT)
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_RANGE                     6:5
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_WOFFSET                   0x0
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_AHB                       _MK_ENUM_CONST(0)
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_INIT_AESOUT                       _MK_ENUM_CONST(2)
#define SE_CRYPTO_CONFIG_0_VCTRAM_SEL_INIT_PREVAHB                      _MK_ENUM_CONST(3)

#define SE_CRYPTO_CONFIG_0_INPUT_SEL_SHIFT                      _MK_SHIFT_CONST(3)
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_FIELD                      _MK_FIELD_CONST(0x3, SE_CRYPTO_CONFIG_0_INPUT_SEL_SHIFT)
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_RANGE                      4:3
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_WOFFSET                    0x0
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_AHB                        _MK_ENUM_CONST(0)
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_RANDOM                     _MK_ENUM_CONST(1)
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_INIT_AESOUT                        _MK_ENUM_CONST(2)
#define SE_CRYPTO_CONFIG_0_INPUT_SEL_LINEAR_CTR                 _MK_ENUM_CONST(3)

#define SE_CRYPTO_CONFIG_0_XOR_POS_SHIFT                        _MK_SHIFT_CONST(1)
#define SE_CRYPTO_CONFIG_0_XOR_POS_FIELD                        _MK_FIELD_CONST(0x3, SE_CRYPTO_CONFIG_0_XOR_POS_SHIFT)
#define SE_CRYPTO_CONFIG_0_XOR_POS_RANGE                        2:1
#define SE_CRYPTO_CONFIG_0_XOR_POS_WOFFSET                      0x0
#define SE_CRYPTO_CONFIG_0_XOR_POS_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_XOR_POS_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_XOR_POS_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_XOR_POS_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_XOR_POS_BYPASS                       _MK_ENUM_CONST(0)
#define SE_CRYPTO_CONFIG_0_XOR_POS_TOP                  _MK_ENUM_CONST(2)
#define SE_CRYPTO_CONFIG_0_XOR_POS_BOTTOM                       _MK_ENUM_CONST(3)

#define SE_CRYPTO_CONFIG_0_HASH_ENB_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_CONFIG_0_HASH_ENB_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_CONFIG_0_HASH_ENB_SHIFT)
#define SE_CRYPTO_CONFIG_0_HASH_ENB_RANGE                       0:0
#define SE_CRYPTO_CONFIG_0_HASH_ENB_WOFFSET                     0x0
#define SE_CRYPTO_CONFIG_0_HASH_ENB_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_HASH_ENB_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_HASH_ENB_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_HASH_ENB_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_CONFIG_0_HASH_ENB_DISABLE                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_CONFIG_0_HASH_ENB_ENABLE                      _MK_ENUM_CONST(1)


// Register SE_CRYPTO_LINEAR_CTR_0
#define SE_CRYPTO_LINEAR_CTR_0                  _MK_ADDR_CONST(0x308)
#define SE_CRYPTO_LINEAR_CTR_0_SECURE                   0x0
#define SE_CRYPTO_LINEAR_CTR_0_WORD_COUNT                       0x1
#define SE_CRYPTO_LINEAR_CTR_0_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_0_RESET_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_0_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_0_READ_MASK                        _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_0_WRITE_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_0_VAL_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_CRYPTO_LINEAR_CTR_0_VAL_FIELD                        _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_LINEAR_CTR_0_VAL_SHIFT)
#define SE_CRYPTO_LINEAR_CTR_0_VAL_RANGE                        31:0
#define SE_CRYPTO_LINEAR_CTR_0_VAL_WOFFSET                      0x0
#define SE_CRYPTO_LINEAR_CTR_0_VAL_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_0_VAL_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_0_VAL_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_0_VAL_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_LINEAR_CTR
#define SE_CRYPTO_LINEAR_CTR                    _MK_ADDR_CONST(0x308)
#define SE_CRYPTO_LINEAR_CTR_SECURE                     0x0
#define SE_CRYPTO_LINEAR_CTR_WORD_COUNT                         0x1
#define SE_CRYPTO_LINEAR_CTR_RESET_VAL                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_RESET_MASK                         _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_SW_DEFAULT_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_READ_MASK                  _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_WRITE_MASK                         _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_VAL_SHIFT                  _MK_SHIFT_CONST(0)
#define SE_CRYPTO_LINEAR_CTR_VAL_FIELD                  _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_LINEAR_CTR_VAL_SHIFT)
#define SE_CRYPTO_LINEAR_CTR_VAL_RANGE                  31:0
#define SE_CRYPTO_LINEAR_CTR_VAL_WOFFSET                        0x0
#define SE_CRYPTO_LINEAR_CTR_VAL_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_VAL_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_VAL_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_VAL_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_LINEAR_CTR_1
#define SE_CRYPTO_LINEAR_CTR_1                  _MK_ADDR_CONST(0x30c)
#define SE_CRYPTO_LINEAR_CTR_1_SECURE                   0x0
#define SE_CRYPTO_LINEAR_CTR_1_WORD_COUNT                       0x1
#define SE_CRYPTO_LINEAR_CTR_1_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_1_RESET_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_1_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_1_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_1_READ_MASK                        _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_1_WRITE_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_1_VAL_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_CRYPTO_LINEAR_CTR_1_VAL_FIELD                        _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_LINEAR_CTR_1_VAL_SHIFT)
#define SE_CRYPTO_LINEAR_CTR_1_VAL_RANGE                        31:0
#define SE_CRYPTO_LINEAR_CTR_1_VAL_WOFFSET                      0x0
#define SE_CRYPTO_LINEAR_CTR_1_VAL_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_1_VAL_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_1_VAL_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_1_VAL_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_LINEAR_CTR_2
#define SE_CRYPTO_LINEAR_CTR_2                  _MK_ADDR_CONST(0x310)
#define SE_CRYPTO_LINEAR_CTR_2_SECURE                   0x0
#define SE_CRYPTO_LINEAR_CTR_2_WORD_COUNT                       0x1
#define SE_CRYPTO_LINEAR_CTR_2_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_2_RESET_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_2_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_2_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_2_READ_MASK                        _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_2_WRITE_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_2_VAL_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_CRYPTO_LINEAR_CTR_2_VAL_FIELD                        _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_LINEAR_CTR_2_VAL_SHIFT)
#define SE_CRYPTO_LINEAR_CTR_2_VAL_RANGE                        31:0
#define SE_CRYPTO_LINEAR_CTR_2_VAL_WOFFSET                      0x0
#define SE_CRYPTO_LINEAR_CTR_2_VAL_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_2_VAL_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_2_VAL_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_2_VAL_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_LINEAR_CTR_3
#define SE_CRYPTO_LINEAR_CTR_3                  _MK_ADDR_CONST(0x314)
#define SE_CRYPTO_LINEAR_CTR_3_SECURE                   0x0
#define SE_CRYPTO_LINEAR_CTR_3_WORD_COUNT                       0x1
#define SE_CRYPTO_LINEAR_CTR_3_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_3_RESET_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_3_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_3_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_3_READ_MASK                        _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_3_WRITE_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_LINEAR_CTR_3_VAL_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_CRYPTO_LINEAR_CTR_3_VAL_FIELD                        _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_LINEAR_CTR_3_VAL_SHIFT)
#define SE_CRYPTO_LINEAR_CTR_3_VAL_RANGE                        31:0
#define SE_CRYPTO_LINEAR_CTR_3_VAL_WOFFSET                      0x0
#define SE_CRYPTO_LINEAR_CTR_3_VAL_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_3_VAL_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_3_VAL_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LINEAR_CTR_3_VAL_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_LAST_BLOCK_0
#define SE_CRYPTO_LAST_BLOCK_0                  _MK_ADDR_CONST(0x318)
#define SE_CRYPTO_LAST_BLOCK_0_SECURE                   0x0
#define SE_CRYPTO_LAST_BLOCK_0_WORD_COUNT                       0x1
#define SE_CRYPTO_LAST_BLOCK_0_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LAST_BLOCK_0_RESET_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LAST_BLOCK_0_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LAST_BLOCK_0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LAST_BLOCK_0_READ_MASK                        _MK_MASK_CONST(0xfffff)
#define SE_CRYPTO_LAST_BLOCK_0_WRITE_MASK                       _MK_MASK_CONST(0xfffff)
#define SE_CRYPTO_LAST_BLOCK_0_VAL_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_CRYPTO_LAST_BLOCK_0_VAL_FIELD                        _MK_FIELD_CONST(0xfffff, SE_CRYPTO_LAST_BLOCK_0_VAL_SHIFT)
#define SE_CRYPTO_LAST_BLOCK_0_VAL_RANGE                        19:0
#define SE_CRYPTO_LAST_BLOCK_0_VAL_WOFFSET                      0x0
#define SE_CRYPTO_LAST_BLOCK_0_VAL_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LAST_BLOCK_0_VAL_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LAST_BLOCK_0_VAL_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_LAST_BLOCK_0_VAL_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_KEYTABLE_ADDR_0
#define SE_CRYPTO_KEYTABLE_ADDR_0                       _MK_ADDR_CONST(0x31c)
#define SE_CRYPTO_KEYTABLE_ADDR_0_SECURE                        0x0
#define SE_CRYPTO_KEYTABLE_ADDR_0_WORD_COUNT                    0x1
#define SE_CRYPTO_KEYTABLE_ADDR_0_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_READ_MASK                     _MK_MASK_CONST(0x3ff)
#define SE_CRYPTO_KEYTABLE_ADDR_0_WRITE_MASK                    _MK_MASK_CONST(0x3ff)
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_SHIFT                      _MK_SHIFT_CONST(9)
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_FIELD                      _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ADDR_0_OP_SHIFT)
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_RANGE                      9:9
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_WOFFSET                    0x0
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_READ                       _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_OP_WRITE                      _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_SHIFT                       _MK_SHIFT_CONST(8)
#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_FIELD                       _MK_FIELD_CONST(0x1, SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_SHIFT)
#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_RANGE                       8:8
#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_KEYIV                       _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_TABLE_SEL_SCHEDULE                    _MK_ENUM_CONST(1)

#define SE_CRYPTO_KEYTABLE_ADDR_0_PKT_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_PKT_FIELD                     _MK_FIELD_CONST(0xff, SE_CRYPTO_KEYTABLE_ADDR_0_PKT_SHIFT)
#define SE_CRYPTO_KEYTABLE_ADDR_0_PKT_RANGE                     7:0
#define SE_CRYPTO_KEYTABLE_ADDR_0_PKT_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_ADDR_0_PKT_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_PKT_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_PKT_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_ADDR_0_PKT_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define ARSE_CRYPTO_KEYTABLE_DATA_WORDS 4

// Register SE_CRYPTO_KEYTABLE_DATA_0
#define SE_CRYPTO_KEYTABLE_DATA_0                       _MK_ADDR_CONST(0x320)
#define SE_CRYPTO_KEYTABLE_DATA_0_SECURE                        0x0
#define SE_CRYPTO_KEYTABLE_DATA_0_WORD_COUNT                    0x1
#define SE_CRYPTO_KEYTABLE_DATA_0_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_0_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_0_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_0_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_0_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_DATA_0_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_KEYTABLE_DATA_0_VAL_SHIFT)
#define SE_CRYPTO_KEYTABLE_DATA_0_VAL_RANGE                     31:0
#define SE_CRYPTO_KEYTABLE_DATA_0_VAL_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_DATA_0_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_0_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_0_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_0_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_KEYTABLE_DATA
#define SE_CRYPTO_KEYTABLE_DATA                 _MK_ADDR_CONST(0x320)
#define SE_CRYPTO_KEYTABLE_DATA_SECURE                  0x0
#define SE_CRYPTO_KEYTABLE_DATA_WORD_COUNT                      0x1
#define SE_CRYPTO_KEYTABLE_DATA_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_WRITE_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_DATA_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_KEYTABLE_DATA_VAL_SHIFT)
#define SE_CRYPTO_KEYTABLE_DATA_VAL_RANGE                       31:0
#define SE_CRYPTO_KEYTABLE_DATA_VAL_WOFFSET                     0x0
#define SE_CRYPTO_KEYTABLE_DATA_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_KEYTABLE_DATA_1
#define SE_CRYPTO_KEYTABLE_DATA_1                       _MK_ADDR_CONST(0x324)
#define SE_CRYPTO_KEYTABLE_DATA_1_SECURE                        0x0
#define SE_CRYPTO_KEYTABLE_DATA_1_WORD_COUNT                    0x1
#define SE_CRYPTO_KEYTABLE_DATA_1_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_1_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_1_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_1_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_1_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_1_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_1_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_DATA_1_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_KEYTABLE_DATA_1_VAL_SHIFT)
#define SE_CRYPTO_KEYTABLE_DATA_1_VAL_RANGE                     31:0
#define SE_CRYPTO_KEYTABLE_DATA_1_VAL_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_DATA_1_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_1_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_1_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_1_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_KEYTABLE_DATA_2
#define SE_CRYPTO_KEYTABLE_DATA_2                       _MK_ADDR_CONST(0x328)
#define SE_CRYPTO_KEYTABLE_DATA_2_SECURE                        0x0
#define SE_CRYPTO_KEYTABLE_DATA_2_WORD_COUNT                    0x1
#define SE_CRYPTO_KEYTABLE_DATA_2_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_2_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_2_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_2_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_2_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_2_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_2_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_DATA_2_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_KEYTABLE_DATA_2_VAL_SHIFT)
#define SE_CRYPTO_KEYTABLE_DATA_2_VAL_RANGE                     31:0
#define SE_CRYPTO_KEYTABLE_DATA_2_VAL_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_DATA_2_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_2_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_2_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_2_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_KEYTABLE_DATA_3
#define SE_CRYPTO_KEYTABLE_DATA_3                       _MK_ADDR_CONST(0x32c)
#define SE_CRYPTO_KEYTABLE_DATA_3_SECURE                        0x0
#define SE_CRYPTO_KEYTABLE_DATA_3_WORD_COUNT                    0x1
#define SE_CRYPTO_KEYTABLE_DATA_3_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_3_RESET_MASK                    _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_3_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_3_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_3_READ_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_3_WRITE_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_CRYPTO_KEYTABLE_DATA_3_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_DATA_3_VAL_FIELD                     _MK_FIELD_CONST(0xffffffff, SE_CRYPTO_KEYTABLE_DATA_3_VAL_SHIFT)
#define SE_CRYPTO_KEYTABLE_DATA_3_VAL_RANGE                     31:0
#define SE_CRYPTO_KEYTABLE_DATA_3_VAL_WOFFSET                   0x0
#define SE_CRYPTO_KEYTABLE_DATA_3_VAL_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_3_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_3_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DATA_3_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_CRYPTO_KEYTABLE_DST_0
#define SE_CRYPTO_KEYTABLE_DST_0                        _MK_ADDR_CONST(0x330)
#define SE_CRYPTO_KEYTABLE_DST_0_SECURE                         0x0
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_COUNT                     0x1
#define SE_CRYPTO_KEYTABLE_DST_0_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_READ_MASK                      _MK_MASK_CONST(0xf03)
#define SE_CRYPTO_KEYTABLE_DST_0_WRITE_MASK                     _MK_MASK_CONST(0xf03)
#define SE_CRYPTO_KEYTABLE_DST_0_KEY_INDEX_SHIFT                        _MK_SHIFT_CONST(8)
#define SE_CRYPTO_KEYTABLE_DST_0_KEY_INDEX_FIELD                        _MK_FIELD_CONST(0xf, SE_CRYPTO_KEYTABLE_DST_0_KEY_INDEX_SHIFT)
#define SE_CRYPTO_KEYTABLE_DST_0_KEY_INDEX_RANGE                        11:8
#define SE_CRYPTO_KEYTABLE_DST_0_KEY_INDEX_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_DST_0_KEY_INDEX_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_KEY_INDEX_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_KEY_INDEX_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_KEY_INDEX_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)

#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_FIELD                        _MK_FIELD_CONST(0x3, SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_SHIFT)
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_RANGE                        1:0
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_WOFFSET                      0x0
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_KEYS_0_3                     _MK_ENUM_CONST(0)
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_KEYS_4_7                     _MK_ENUM_CONST(1)
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_ORIGINAL_IVS                 _MK_ENUM_CONST(2)
#define SE_CRYPTO_KEYTABLE_DST_0_WORD_QUAD_UPDATED_IVS                  _MK_ENUM_CONST(3)


// Reserved address 820 [0x334]

// Reserved address 824 [0x338]

// Reserved address 828 [0x33c]

// Register SE_RNG_CONFIG_0
#define SE_RNG_CONFIG_0                 _MK_ADDR_CONST(0x340)
#define SE_RNG_CONFIG_0_SECURE                  0x0
#define SE_RNG_CONFIG_0_WORD_COUNT                      0x1
#define SE_RNG_CONFIG_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RNG_CONFIG_0_RESET_MASK                      _MK_MASK_CONST(0xf)
#define SE_RNG_CONFIG_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RNG_CONFIG_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RNG_CONFIG_0_READ_MASK                       _MK_MASK_CONST(0xf)
#define SE_RNG_CONFIG_0_WRITE_MASK                      _MK_MASK_CONST(0xf)
#define SE_RNG_CONFIG_0_SRC_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_RNG_CONFIG_0_SRC_FIELD                       _MK_FIELD_CONST(0x3, SE_RNG_CONFIG_0_SRC_SHIFT)
#define SE_RNG_CONFIG_0_SRC_RANGE                       3:2
#define SE_RNG_CONFIG_0_SRC_WOFFSET                     0x0
#define SE_RNG_CONFIG_0_SRC_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RNG_CONFIG_0_SRC_DEFAULT_MASK                        _MK_MASK_CONST(0x3)
#define SE_RNG_CONFIG_0_SRC_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RNG_CONFIG_0_SRC_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_RNG_CONFIG_0_SRC_INIT_ENUM                   NONE
#define SE_RNG_CONFIG_0_SRC_NONE                        _MK_ENUM_CONST(0)
#define SE_RNG_CONFIG_0_SRC_ENTROPY                     _MK_ENUM_CONST(1)
#define SE_RNG_CONFIG_0_SRC_LFSR                        _MK_ENUM_CONST(2)

#define SE_RNG_CONFIG_0_MODE_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RNG_CONFIG_0_MODE_FIELD                      _MK_FIELD_CONST(0x3, SE_RNG_CONFIG_0_MODE_SHIFT)
#define SE_RNG_CONFIG_0_MODE_RANGE                      1:0
#define SE_RNG_CONFIG_0_MODE_WOFFSET                    0x0
#define SE_RNG_CONFIG_0_MODE_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RNG_CONFIG_0_MODE_DEFAULT_MASK                       _MK_MASK_CONST(0x3)
#define SE_RNG_CONFIG_0_MODE_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RNG_CONFIG_0_MODE_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_RNG_CONFIG_0_MODE_INIT_ENUM                  NORMAL
#define SE_RNG_CONFIG_0_MODE_NORMAL                     _MK_ENUM_CONST(0)
#define SE_RNG_CONFIG_0_MODE_FORCE_INSTANTION                   _MK_ENUM_CONST(1)
#define SE_RNG_CONFIG_0_MODE_FORCE_RESEED                       _MK_ENUM_CONST(2)


// Register SE_RNG_SRC_CONFIG_0
#define SE_RNG_SRC_CONFIG_0                     _MK_ADDR_CONST(0x344)
#define SE_RNG_SRC_CONFIG_0_SECURE                      0x0
#define SE_RNG_SRC_CONFIG_0_WORD_COUNT                  0x1
#define SE_RNG_SRC_CONFIG_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RESET_MASK                  _MK_MASK_CONST(0x177)
#define SE_RNG_SRC_CONFIG_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_READ_MASK                   _MK_MASK_CONST(0x177)
#define SE_RNG_SRC_CONFIG_0_WRITE_MASK                  _MK_MASK_CONST(0x177)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_DATA_FLUSH_SHIFT                 _MK_SHIFT_CONST(8)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_DATA_FLUSH_FIELD                 _MK_FIELD_CONST(0x1, SE_RNG_SRC_CONFIG_0_RO_ENTROPY_DATA_FLUSH_SHIFT)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_DATA_FLUSH_RANGE                 8:8
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_DATA_FLUSH_WOFFSET                       0x0
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_DATA_FLUSH_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_DATA_FLUSH_DEFAULT_MASK                  _MK_MASK_CONST(0x1)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_DATA_FLUSH_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_DATA_FLUSH_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)

#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SUBSAMPLE_SHIFT                  _MK_SHIFT_CONST(4)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SUBSAMPLE_FIELD                  _MK_FIELD_CONST(0x7, SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SUBSAMPLE_SHIFT)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SUBSAMPLE_RANGE                  6:4
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SUBSAMPLE_WOFFSET                        0x0
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SUBSAMPLE_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SUBSAMPLE_DEFAULT_MASK                   _MK_MASK_CONST(0x7)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SUBSAMPLE_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SUBSAMPLE_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)

#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_SHIFT                     _MK_SHIFT_CONST(2)
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_FIELD                     _MK_FIELD_CONST(0x1, SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_SHIFT)
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_RANGE                     2:2
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_WOFFSET                   0x0
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_INIT_ENUM                 DISABLE
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_DISABLE                   _MK_ENUM_CONST(0)
#define SE_RNG_SRC_CONFIG_0_RO_HW_DISABLE_CYA_ENABLE                    _MK_ENUM_CONST(1)

#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_SHIFT                     _MK_SHIFT_CONST(1)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_FIELD                     _MK_FIELD_CONST(0x1, SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_SHIFT)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_RANGE                     1:1
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_WOFFSET                   0x0
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_INIT_ENUM                 ENABLE
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_ENABLE                    _MK_ENUM_CONST(0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_DISABLE                   _MK_ENUM_CONST(1)

#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_FIELD                        _MK_FIELD_CONST(0x1, SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_SHIFT)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_RANGE                        0:0
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_WOFFSET                      0x0
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_INIT_ENUM                    DISABLE
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_DISABLE                      _MK_ENUM_CONST(0)
#define SE_RNG_SRC_CONFIG_0_RO_ENTROPY_SOURCE_LOCK_ENABLE                       _MK_ENUM_CONST(1)


// Register SE_RNG_RESEED_INTERVAL_0
#define SE_RNG_RESEED_INTERVAL_0                        _MK_ADDR_CONST(0x348)
#define SE_RNG_RESEED_INTERVAL_0_SECURE                         0x0
#define SE_RNG_RESEED_INTERVAL_0_WORD_COUNT                     0x1
#define SE_RNG_RESEED_INTERVAL_0_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RNG_RESEED_INTERVAL_0_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RNG_RESEED_INTERVAL_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RNG_RESEED_INTERVAL_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RNG_RESEED_INTERVAL_0_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RNG_RESEED_INTERVAL_0_WRITE_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_RNG_RESEED_INTERVAL_0_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RNG_RESEED_INTERVAL_0_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RNG_RESEED_INTERVAL_0_VAL_SHIFT)
#define SE_RNG_RESEED_INTERVAL_0_VAL_RANGE                      31:0
#define SE_RNG_RESEED_INTERVAL_0_VAL_WOFFSET                    0x0
#define SE_RNG_RESEED_INTERVAL_0_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RNG_RESEED_INTERVAL_0_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RNG_RESEED_INTERVAL_0_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RNG_RESEED_INTERVAL_0_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)

#define ARSE_RSA_MAX_EXPONENT_SIZE      2048
#define ARSE_RSA_MAX_MODULUS_SIZE       2048
#define ARSE_RSA_MAX_INPUT_SIZE 2048
#define ARSE_RSA_MAX_OUTPUT_SIZE        2048
#define ARSE_RSA_MIN_EXPONENT_SIZE      32
#define ARSE_RSA_MIN_MODULUS_SIZE       512
#define ARSE_RSA_MIN_INPUT_SIZE 512
#define ARSE_RSA_MIN_OUTPUT_SIZE        512
#define ARSE_RSA_KEYTABLE_INPUT_MODES   2
#define ARSE_RSA_KEY_PORTIONS_PER_KEYSLOT       2
#define ARSE_RSA_NUM_KEY_SLOTS  2
#define ARSE_RSA_NUM_OUTPUT_REGS        64
#define ARSE_RSA_KEYTABLE_EXPONENT_WORDS        64
#define ARSE_RSA_KEYTABLE_MODULUS_WORDS 64
#define ARSE_RSA_KEYTABLE_EXPONENT_WIDTH        32
#define ARSE_RSA_KEYTABLE_MODULUS_WIDTH 32
#define ARSE_RSA_FIFO_DEPTH     64
#define ARSE_RSA_FIFO_DATA_WIDTH        32
#define ARSE_RSA_FIFO_ADDR_WIDTH        6

// Packet SE_RSA_KEY_PKT
#define SE_RSA_KEY_PKT_SIZE 9

#define SE_RSA_KEY_PKT_INPUT_MODE_SHIFT                 _MK_SHIFT_CONST(8)
#define SE_RSA_KEY_PKT_INPUT_MODE_FIELD                 _MK_FIELD_CONST(0x1, SE_RSA_KEY_PKT_INPUT_MODE_SHIFT)
#define SE_RSA_KEY_PKT_INPUT_MODE_RANGE                 _MK_SHIFT_CONST(8):_MK_SHIFT_CONST(8)
#define SE_RSA_KEY_PKT_INPUT_MODE_ROW                   0
#define SE_RSA_KEY_PKT_INPUT_MODE_REGISTER                      _MK_ENUM_CONST(0)
#define SE_RSA_KEY_PKT_INPUT_MODE_DMA                   _MK_ENUM_CONST(1)

#define SE_RSA_KEY_PKT_KEY_SLOT_SHIFT                   _MK_SHIFT_CONST(7)
#define SE_RSA_KEY_PKT_KEY_SLOT_FIELD                   _MK_FIELD_CONST(0x1, SE_RSA_KEY_PKT_KEY_SLOT_SHIFT)
#define SE_RSA_KEY_PKT_KEY_SLOT_RANGE                   _MK_SHIFT_CONST(7):_MK_SHIFT_CONST(7)
#define SE_RSA_KEY_PKT_KEY_SLOT_ROW                     0
#define SE_RSA_KEY_PKT_KEY_SLOT_ONE                     _MK_ENUM_CONST(0)
#define SE_RSA_KEY_PKT_KEY_SLOT_TWO                     _MK_ENUM_CONST(1)

#define SE_RSA_KEY_PKT_EXPMOD_SEL_SHIFT                 _MK_SHIFT_CONST(6)
#define SE_RSA_KEY_PKT_EXPMOD_SEL_FIELD                 _MK_FIELD_CONST(0x1, SE_RSA_KEY_PKT_EXPMOD_SEL_SHIFT)
#define SE_RSA_KEY_PKT_EXPMOD_SEL_RANGE                 _MK_SHIFT_CONST(6):_MK_SHIFT_CONST(6)
#define SE_RSA_KEY_PKT_EXPMOD_SEL_ROW                   0
#define SE_RSA_KEY_PKT_EXPMOD_SEL_EXPONENT                      _MK_ENUM_CONST(0)
#define SE_RSA_KEY_PKT_EXPMOD_SEL_MODULUS                       _MK_ENUM_CONST(1)

#define SE_RSA_KEY_PKT_WORD_ADDR_SHIFT                  _MK_SHIFT_CONST(0)
#define SE_RSA_KEY_PKT_WORD_ADDR_FIELD                  _MK_FIELD_CONST(0x3f, SE_RSA_KEY_PKT_WORD_ADDR_SHIFT)
#define SE_RSA_KEY_PKT_WORD_ADDR_RANGE                  _MK_SHIFT_CONST(5):_MK_SHIFT_CONST(0)
#define SE_RSA_KEY_PKT_WORD_ADDR_ROW                    0


// Register SE_RSA_CONFIG_0
#define SE_RSA_CONFIG_0                 _MK_ADDR_CONST(0x400)
#define SE_RSA_CONFIG_0_SECURE                  0x0
#define SE_RSA_CONFIG_0_WORD_COUNT                      0x1
#define SE_RSA_CONFIG_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_CONFIG_0_RESET_MASK                      _MK_MASK_CONST(0x1000000)
#define SE_RSA_CONFIG_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_CONFIG_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_CONFIG_0_READ_MASK                       _MK_MASK_CONST(0x1000000)
#define SE_RSA_CONFIG_0_WRITE_MASK                      _MK_MASK_CONST(0x1000000)
#define SE_RSA_CONFIG_0_KEY_SLOT_SHIFT                  _MK_SHIFT_CONST(24)
#define SE_RSA_CONFIG_0_KEY_SLOT_FIELD                  _MK_FIELD_CONST(0x1, SE_RSA_CONFIG_0_KEY_SLOT_SHIFT)
#define SE_RSA_CONFIG_0_KEY_SLOT_RANGE                  24:24
#define SE_RSA_CONFIG_0_KEY_SLOT_WOFFSET                        0x0
#define SE_RSA_CONFIG_0_KEY_SLOT_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_RSA_CONFIG_0_KEY_SLOT_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_RSA_CONFIG_0_KEY_SLOT_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_CONFIG_0_KEY_SLOT_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_CONFIG_0_KEY_SLOT_ONE                    _MK_ENUM_CONST(0)
#define SE_RSA_CONFIG_0_KEY_SLOT_TWO                    _MK_ENUM_CONST(1)


// Register SE_RSA_KEY_SIZE_0
#define SE_RSA_KEY_SIZE_0                       _MK_ADDR_CONST(0x404)
#define SE_RSA_KEY_SIZE_0_SECURE                        0x0
#define SE_RSA_KEY_SIZE_0_WORD_COUNT                    0x1
#define SE_RSA_KEY_SIZE_0_RESET_VAL                     _MK_MASK_CONST(0x3)
#define SE_RSA_KEY_SIZE_0_RESET_MASK                    _MK_MASK_CONST(0x3)
#define SE_RSA_KEY_SIZE_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEY_SIZE_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_KEY_SIZE_0_READ_MASK                     _MK_MASK_CONST(0x3)
#define SE_RSA_KEY_SIZE_0_WRITE_MASK                    _MK_MASK_CONST(0x3)
#define SE_RSA_KEY_SIZE_0_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_RSA_KEY_SIZE_0_VAL_FIELD                     _MK_FIELD_CONST(0x3, SE_RSA_KEY_SIZE_0_VAL_SHIFT)
#define SE_RSA_KEY_SIZE_0_VAL_RANGE                     1:0
#define SE_RSA_KEY_SIZE_0_VAL_WOFFSET                   0x0
#define SE_RSA_KEY_SIZE_0_VAL_DEFAULT                   _MK_MASK_CONST(0x3)
#define SE_RSA_KEY_SIZE_0_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x3)
#define SE_RSA_KEY_SIZE_0_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEY_SIZE_0_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_RSA_KEY_SIZE_0_VAL_INIT_ENUM                 WIDTH_2048
#define SE_RSA_KEY_SIZE_0_VAL_WIDTH_512                 _MK_ENUM_CONST(0)
#define SE_RSA_KEY_SIZE_0_VAL_WIDTH_1024                        _MK_ENUM_CONST(1)
#define SE_RSA_KEY_SIZE_0_VAL_WIDTH_1536                        _MK_ENUM_CONST(2)
#define SE_RSA_KEY_SIZE_0_VAL_WIDTH_2048                        _MK_ENUM_CONST(3)


// Register SE_RSA_EXP_SIZE_0
#define SE_RSA_EXP_SIZE_0                       _MK_ADDR_CONST(0x408)
#define SE_RSA_EXP_SIZE_0_SECURE                        0x0
#define SE_RSA_EXP_SIZE_0_WORD_COUNT                    0x1
#define SE_RSA_EXP_SIZE_0_RESET_VAL                     _MK_MASK_CONST(0x40)
#define SE_RSA_EXP_SIZE_0_RESET_MASK                    _MK_MASK_CONST(0x7f)
#define SE_RSA_EXP_SIZE_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_RSA_EXP_SIZE_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_EXP_SIZE_0_READ_MASK                     _MK_MASK_CONST(0x7f)
#define SE_RSA_EXP_SIZE_0_WRITE_MASK                    _MK_MASK_CONST(0x7f)
#define SE_RSA_EXP_SIZE_0_VAL_SHIFT                     _MK_SHIFT_CONST(0)
#define SE_RSA_EXP_SIZE_0_VAL_FIELD                     _MK_FIELD_CONST(0x7f, SE_RSA_EXP_SIZE_0_VAL_SHIFT)
#define SE_RSA_EXP_SIZE_0_VAL_RANGE                     6:0
#define SE_RSA_EXP_SIZE_0_VAL_WOFFSET                   0x0
#define SE_RSA_EXP_SIZE_0_VAL_DEFAULT                   _MK_MASK_CONST(0x40)
#define SE_RSA_EXP_SIZE_0_VAL_DEFAULT_MASK                      _MK_MASK_CONST(0x7f)
#define SE_RSA_EXP_SIZE_0_VAL_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_RSA_EXP_SIZE_0_VAL_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)


// Register SE_RSA_SECURITY_PERKEY_0
#define SE_RSA_SECURITY_PERKEY_0                        _MK_ADDR_CONST(0x40c)
#define SE_RSA_SECURITY_PERKEY_0_SECURE                         0x0
#define SE_RSA_SECURITY_PERKEY_0_WORD_COUNT                     0x1
#define SE_RSA_SECURITY_PERKEY_0_RESET_VAL                      _MK_MASK_CONST(0x3)
#define SE_RSA_SECURITY_PERKEY_0_RESET_MASK                     _MK_MASK_CONST(0x3)
#define SE_RSA_SECURITY_PERKEY_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_SECURITY_PERKEY_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_SECURITY_PERKEY_0_READ_MASK                      _MK_MASK_CONST(0x3)
#define SE_RSA_SECURITY_PERKEY_0_WRITE_MASK                     _MK_MASK_CONST(0x3)
#define SE_RSA_SECURITY_PERKEY_0_SETTING_SHIFT                  _MK_SHIFT_CONST(0)
#define SE_RSA_SECURITY_PERKEY_0_SETTING_FIELD                  _MK_FIELD_CONST(0x3, SE_RSA_SECURITY_PERKEY_0_SETTING_SHIFT)
#define SE_RSA_SECURITY_PERKEY_0_SETTING_RANGE                  1:0
#define SE_RSA_SECURITY_PERKEY_0_SETTING_WOFFSET                        0x0
#define SE_RSA_SECURITY_PERKEY_0_SETTING_DEFAULT                        _MK_MASK_CONST(0x3)
#define SE_RSA_SECURITY_PERKEY_0_SETTING_DEFAULT_MASK                   _MK_MASK_CONST(0x3)
#define SE_RSA_SECURITY_PERKEY_0_SETTING_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_SECURITY_PERKEY_0_SETTING_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)


// Register SE_RSA_KEYTABLE_ACCESS_0
#define SE_RSA_KEYTABLE_ACCESS_0                        _MK_ADDR_CONST(0x410)
#define SE_RSA_KEYTABLE_ACCESS_0_SECURE                         0x0
#define SE_RSA_KEYTABLE_ACCESS_0_WORD_COUNT                     0x1
#define SE_RSA_KEYTABLE_ACCESS_0_RESET_VAL                      _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_0_RESET_MASK                     _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_0_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_0_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_0_READ_MASK                      _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_0_WRITE_MASK                     _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_SHIFT                   _MK_SHIFT_CONST(2)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_FIELD                   _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_SHIFT)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_RANGE                   2:2
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_WOFFSET                 0x0
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_DEFAULT                 _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_INIT_ENUM                       ENABLE
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_DISABLE                 _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUSE_ENABLE                  _MK_ENUM_CONST(1)

#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_SHIFT                        _MK_SHIFT_CONST(1)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_FIELD                        _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_SHIFT)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_RANGE                        1:1
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_WOFFSET                      0x0
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_INIT_ENUM                    ENABLE
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYUPDATE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_SHIFT                  _MK_SHIFT_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_FIELD                  _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_SHIFT)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_RANGE                  0:0
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_WOFFSET                        0x0
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_DEFAULT                        _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_INIT_ENUM                      ENABLE
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_DISABLE                        _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_0_KEYREAD_ENABLE                 _MK_ENUM_CONST(1)


// Register SE_RSA_KEYTABLE_ACCESS
#define SE_RSA_KEYTABLE_ACCESS                  _MK_ADDR_CONST(0x410)
#define SE_RSA_KEYTABLE_ACCESS_SECURE                   0x0
#define SE_RSA_KEYTABLE_ACCESS_WORD_COUNT                       0x1
#define SE_RSA_KEYTABLE_ACCESS_RESET_VAL                        _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_RESET_MASK                       _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_READ_MASK                        _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_WRITE_MASK                       _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_SHIFT                     _MK_SHIFT_CONST(2)
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_FIELD                     _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ACCESS_KEYUSE_SHIFT)
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_RANGE                     2:2
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_WOFFSET                   0x0
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_DEFAULT                   _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_INIT_ENUM                 ENABLE
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_DISABLE                   _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_KEYUSE_ENABLE                    _MK_ENUM_CONST(1)

#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_SHIFT                  _MK_SHIFT_CONST(1)
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_FIELD                  _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_SHIFT)
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_RANGE                  1:1
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_WOFFSET                        0x0
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_DEFAULT                        _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_INIT_ENUM                      ENABLE
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_DISABLE                        _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_KEYUPDATE_ENABLE                 _MK_ENUM_CONST(1)

#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_SHIFT                    _MK_SHIFT_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_FIELD                    _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ACCESS_KEYREAD_SHIFT)
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_RANGE                    0:0
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_WOFFSET                  0x0
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_DEFAULT                  _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_DEFAULT_MASK                     _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_INIT_ENUM                        ENABLE
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_DISABLE                  _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_KEYREAD_ENABLE                   _MK_ENUM_CONST(1)


// Register SE_RSA_KEYTABLE_ACCESS_1
#define SE_RSA_KEYTABLE_ACCESS_1                        _MK_ADDR_CONST(0x414)
#define SE_RSA_KEYTABLE_ACCESS_1_SECURE                         0x0
#define SE_RSA_KEYTABLE_ACCESS_1_WORD_COUNT                     0x1
#define SE_RSA_KEYTABLE_ACCESS_1_RESET_VAL                      _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_1_RESET_MASK                     _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_1_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_1_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_1_READ_MASK                      _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_1_WRITE_MASK                     _MK_MASK_CONST(0x7)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_SHIFT                   _MK_SHIFT_CONST(2)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_FIELD                   _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_SHIFT)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_RANGE                   2:2
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_WOFFSET                 0x0
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_DEFAULT                 _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_INIT_ENUM                       ENABLE
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_DISABLE                 _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUSE_ENABLE                  _MK_ENUM_CONST(1)

#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_SHIFT                        _MK_SHIFT_CONST(1)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_FIELD                        _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_SHIFT)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_RANGE                        1:1
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_WOFFSET                      0x0
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_DEFAULT                      _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_DEFAULT_MASK                 _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_INIT_ENUM                    ENABLE
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_DISABLE                      _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYUPDATE_ENABLE                       _MK_ENUM_CONST(1)

#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_SHIFT                  _MK_SHIFT_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_FIELD                  _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_SHIFT)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_RANGE                  0:0
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_WOFFSET                        0x0
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_DEFAULT                        _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_DEFAULT_MASK                   _MK_MASK_CONST(0x1)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_SW_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_INIT_ENUM                      ENABLE
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_DISABLE                        _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ACCESS_1_KEYREAD_ENABLE                 _MK_ENUM_CONST(1)


// Reserved address 1048 [0x418]

// Reserved address 1052 [0x41c]

// Register SE_RSA_KEYTABLE_ADDR_0
#define SE_RSA_KEYTABLE_ADDR_0                  _MK_ADDR_CONST(0x420)
#define SE_RSA_KEYTABLE_ADDR_0_SECURE                   0x0
#define SE_RSA_KEYTABLE_ADDR_0_WORD_COUNT                       0x1
#define SE_RSA_KEYTABLE_ADDR_0_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_RESET_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_READ_MASK                        _MK_MASK_CONST(0x5ff)
#define SE_RSA_KEYTABLE_ADDR_0_WRITE_MASK                       _MK_MASK_CONST(0x5ff)
#define SE_RSA_KEYTABLE_ADDR_0_OP_SHIFT                 _MK_SHIFT_CONST(10)
#define SE_RSA_KEYTABLE_ADDR_0_OP_FIELD                 _MK_FIELD_CONST(0x1, SE_RSA_KEYTABLE_ADDR_0_OP_SHIFT)
#define SE_RSA_KEYTABLE_ADDR_0_OP_RANGE                 10:10
#define SE_RSA_KEYTABLE_ADDR_0_OP_WOFFSET                       0x0
#define SE_RSA_KEYTABLE_ADDR_0_OP_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_OP_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_OP_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_OP_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_OP_READ                  _MK_ENUM_CONST(0)
#define SE_RSA_KEYTABLE_ADDR_0_OP_WRITE                 _MK_ENUM_CONST(1)

#define SE_RSA_KEYTABLE_ADDR_0_PKT_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_RSA_KEYTABLE_ADDR_0_PKT_FIELD                        _MK_FIELD_CONST(0x1ff, SE_RSA_KEYTABLE_ADDR_0_PKT_SHIFT)
#define SE_RSA_KEYTABLE_ADDR_0_PKT_RANGE                        8:0
#define SE_RSA_KEYTABLE_ADDR_0_PKT_WOFFSET                      0x0
#define SE_RSA_KEYTABLE_ADDR_0_PKT_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_PKT_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_PKT_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_ADDR_0_PKT_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SE_RSA_KEYTABLE_DATA_0
#define SE_RSA_KEYTABLE_DATA_0                  _MK_ADDR_CONST(0x424)
#define SE_RSA_KEYTABLE_DATA_0_SECURE                   0x0
#define SE_RSA_KEYTABLE_DATA_0_WORD_COUNT                       0x1
#define SE_RSA_KEYTABLE_DATA_0_RESET_VAL                        _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_DATA_0_RESET_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_KEYTABLE_DATA_0_SW_DEFAULT_VAL                   _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_DATA_0_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_DATA_0_READ_MASK                        _MK_MASK_CONST(0xffffffff)
#define SE_RSA_KEYTABLE_DATA_0_WRITE_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_KEYTABLE_DATA_0_VAL_SHIFT                        _MK_SHIFT_CONST(0)
#define SE_RSA_KEYTABLE_DATA_0_VAL_FIELD                        _MK_FIELD_CONST(0xffffffff, SE_RSA_KEYTABLE_DATA_0_VAL_SHIFT)
#define SE_RSA_KEYTABLE_DATA_0_VAL_RANGE                        31:0
#define SE_RSA_KEYTABLE_DATA_0_VAL_WOFFSET                      0x0
#define SE_RSA_KEYTABLE_DATA_0_VAL_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_DATA_0_VAL_DEFAULT_MASK                 _MK_MASK_CONST(0xffffffff)
#define SE_RSA_KEYTABLE_DATA_0_VAL_SW_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_RSA_KEYTABLE_DATA_0_VAL_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_0
#define SE_RSA_OUTPUT_0                 _MK_ADDR_CONST(0x428)
#define SE_RSA_OUTPUT_0_SECURE                  0x0
#define SE_RSA_OUTPUT_0_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_0_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_0_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_0_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_0_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_0_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_0_VAL_SHIFT)
#define SE_RSA_OUTPUT_0_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_0_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_0_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_0_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_0_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_0_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT
#define SE_RSA_OUTPUT                   _MK_ADDR_CONST(0x428)
#define SE_RSA_OUTPUT_SECURE                    0x0
#define SE_RSA_OUTPUT_WORD_COUNT                        0x1
#define SE_RSA_OUTPUT_RESET_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_RESET_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_SW_DEFAULT_VAL                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_READ_MASK                         _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_WRITE_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_VAL_SHIFT                 _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_VAL_FIELD                 _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_VAL_SHIFT)
#define SE_RSA_OUTPUT_VAL_RANGE                 31:0
#define SE_RSA_OUTPUT_VAL_WOFFSET                       0x0
#define SE_RSA_OUTPUT_VAL_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_VAL_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_VAL_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_VAL_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_1
#define SE_RSA_OUTPUT_1                 _MK_ADDR_CONST(0x42c)
#define SE_RSA_OUTPUT_1_SECURE                  0x0
#define SE_RSA_OUTPUT_1_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_1_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_1_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_1_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_1_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_1_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_1_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_1_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_1_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_1_VAL_SHIFT)
#define SE_RSA_OUTPUT_1_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_1_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_1_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_1_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_1_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_1_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_2
#define SE_RSA_OUTPUT_2                 _MK_ADDR_CONST(0x430)
#define SE_RSA_OUTPUT_2_SECURE                  0x0
#define SE_RSA_OUTPUT_2_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_2_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_2_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_2_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_2_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_2_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_2_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_2_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_2_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_2_VAL_SHIFT)
#define SE_RSA_OUTPUT_2_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_2_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_2_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_2_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_2_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_2_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_3
#define SE_RSA_OUTPUT_3                 _MK_ADDR_CONST(0x434)
#define SE_RSA_OUTPUT_3_SECURE                  0x0
#define SE_RSA_OUTPUT_3_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_3_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_3_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_3_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_3_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_3_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_3_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_3_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_3_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_3_VAL_SHIFT)
#define SE_RSA_OUTPUT_3_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_3_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_3_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_3_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_3_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_3_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_4
#define SE_RSA_OUTPUT_4                 _MK_ADDR_CONST(0x438)
#define SE_RSA_OUTPUT_4_SECURE                  0x0
#define SE_RSA_OUTPUT_4_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_4_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_4_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_4_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_4_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_4_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_4_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_4_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_4_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_4_VAL_SHIFT)
#define SE_RSA_OUTPUT_4_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_4_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_4_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_4_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_4_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_4_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_5
#define SE_RSA_OUTPUT_5                 _MK_ADDR_CONST(0x43c)
#define SE_RSA_OUTPUT_5_SECURE                  0x0
#define SE_RSA_OUTPUT_5_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_5_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_5_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_5_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_5_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_5_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_5_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_5_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_5_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_5_VAL_SHIFT)
#define SE_RSA_OUTPUT_5_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_5_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_5_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_5_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_5_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_5_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_6
#define SE_RSA_OUTPUT_6                 _MK_ADDR_CONST(0x440)
#define SE_RSA_OUTPUT_6_SECURE                  0x0
#define SE_RSA_OUTPUT_6_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_6_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_6_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_6_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_6_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_6_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_6_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_6_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_6_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_6_VAL_SHIFT)
#define SE_RSA_OUTPUT_6_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_6_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_6_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_6_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_6_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_6_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_7
#define SE_RSA_OUTPUT_7                 _MK_ADDR_CONST(0x444)
#define SE_RSA_OUTPUT_7_SECURE                  0x0
#define SE_RSA_OUTPUT_7_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_7_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_7_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_7_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_7_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_7_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_7_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_7_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_7_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_7_VAL_SHIFT)
#define SE_RSA_OUTPUT_7_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_7_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_7_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_7_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_7_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_7_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_8
#define SE_RSA_OUTPUT_8                 _MK_ADDR_CONST(0x448)
#define SE_RSA_OUTPUT_8_SECURE                  0x0
#define SE_RSA_OUTPUT_8_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_8_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_8_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_8_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_8_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_8_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_8_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_8_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_8_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_8_VAL_SHIFT)
#define SE_RSA_OUTPUT_8_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_8_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_8_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_8_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_8_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_8_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_9
#define SE_RSA_OUTPUT_9                 _MK_ADDR_CONST(0x44c)
#define SE_RSA_OUTPUT_9_SECURE                  0x0
#define SE_RSA_OUTPUT_9_WORD_COUNT                      0x1
#define SE_RSA_OUTPUT_9_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_9_RESET_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_9_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_9_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_9_READ_MASK                       _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_9_WRITE_MASK                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_9_VAL_SHIFT                       _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_9_VAL_FIELD                       _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_9_VAL_SHIFT)
#define SE_RSA_OUTPUT_9_VAL_RANGE                       31:0
#define SE_RSA_OUTPUT_9_VAL_WOFFSET                     0x0
#define SE_RSA_OUTPUT_9_VAL_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_9_VAL_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_9_VAL_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_9_VAL_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_10
#define SE_RSA_OUTPUT_10                        _MK_ADDR_CONST(0x450)
#define SE_RSA_OUTPUT_10_SECURE                         0x0
#define SE_RSA_OUTPUT_10_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_10_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_10_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_10_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_10_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_10_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_10_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_10_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_10_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_10_VAL_SHIFT)
#define SE_RSA_OUTPUT_10_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_10_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_10_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_10_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_10_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_10_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_11
#define SE_RSA_OUTPUT_11                        _MK_ADDR_CONST(0x454)
#define SE_RSA_OUTPUT_11_SECURE                         0x0
#define SE_RSA_OUTPUT_11_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_11_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_11_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_11_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_11_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_11_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_11_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_11_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_11_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_11_VAL_SHIFT)
#define SE_RSA_OUTPUT_11_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_11_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_11_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_11_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_11_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_11_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_12
#define SE_RSA_OUTPUT_12                        _MK_ADDR_CONST(0x458)
#define SE_RSA_OUTPUT_12_SECURE                         0x0
#define SE_RSA_OUTPUT_12_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_12_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_12_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_12_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_12_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_12_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_12_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_12_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_12_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_12_VAL_SHIFT)
#define SE_RSA_OUTPUT_12_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_12_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_12_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_12_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_12_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_12_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_13
#define SE_RSA_OUTPUT_13                        _MK_ADDR_CONST(0x45c)
#define SE_RSA_OUTPUT_13_SECURE                         0x0
#define SE_RSA_OUTPUT_13_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_13_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_13_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_13_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_13_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_13_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_13_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_13_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_13_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_13_VAL_SHIFT)
#define SE_RSA_OUTPUT_13_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_13_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_13_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_13_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_13_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_13_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_14
#define SE_RSA_OUTPUT_14                        _MK_ADDR_CONST(0x460)
#define SE_RSA_OUTPUT_14_SECURE                         0x0
#define SE_RSA_OUTPUT_14_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_14_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_14_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_14_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_14_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_14_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_14_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_14_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_14_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_14_VAL_SHIFT)
#define SE_RSA_OUTPUT_14_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_14_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_14_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_14_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_14_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_14_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_15
#define SE_RSA_OUTPUT_15                        _MK_ADDR_CONST(0x464)
#define SE_RSA_OUTPUT_15_SECURE                         0x0
#define SE_RSA_OUTPUT_15_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_15_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_15_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_15_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_15_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_15_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_15_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_15_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_15_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_15_VAL_SHIFT)
#define SE_RSA_OUTPUT_15_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_15_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_15_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_15_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_15_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_15_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_16
#define SE_RSA_OUTPUT_16                        _MK_ADDR_CONST(0x468)
#define SE_RSA_OUTPUT_16_SECURE                         0x0
#define SE_RSA_OUTPUT_16_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_16_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_16_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_16_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_16_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_16_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_16_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_16_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_16_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_16_VAL_SHIFT)
#define SE_RSA_OUTPUT_16_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_16_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_16_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_16_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_16_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_16_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_17
#define SE_RSA_OUTPUT_17                        _MK_ADDR_CONST(0x46c)
#define SE_RSA_OUTPUT_17_SECURE                         0x0
#define SE_RSA_OUTPUT_17_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_17_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_17_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_17_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_17_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_17_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_17_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_17_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_17_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_17_VAL_SHIFT)
#define SE_RSA_OUTPUT_17_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_17_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_17_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_17_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_17_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_17_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_18
#define SE_RSA_OUTPUT_18                        _MK_ADDR_CONST(0x470)
#define SE_RSA_OUTPUT_18_SECURE                         0x0
#define SE_RSA_OUTPUT_18_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_18_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_18_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_18_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_18_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_18_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_18_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_18_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_18_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_18_VAL_SHIFT)
#define SE_RSA_OUTPUT_18_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_18_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_18_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_18_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_18_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_18_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_19
#define SE_RSA_OUTPUT_19                        _MK_ADDR_CONST(0x474)
#define SE_RSA_OUTPUT_19_SECURE                         0x0
#define SE_RSA_OUTPUT_19_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_19_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_19_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_19_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_19_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_19_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_19_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_19_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_19_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_19_VAL_SHIFT)
#define SE_RSA_OUTPUT_19_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_19_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_19_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_19_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_19_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_19_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_20
#define SE_RSA_OUTPUT_20                        _MK_ADDR_CONST(0x478)
#define SE_RSA_OUTPUT_20_SECURE                         0x0
#define SE_RSA_OUTPUT_20_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_20_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_20_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_20_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_20_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_20_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_20_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_20_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_20_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_20_VAL_SHIFT)
#define SE_RSA_OUTPUT_20_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_20_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_20_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_20_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_20_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_20_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_21
#define SE_RSA_OUTPUT_21                        _MK_ADDR_CONST(0x47c)
#define SE_RSA_OUTPUT_21_SECURE                         0x0
#define SE_RSA_OUTPUT_21_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_21_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_21_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_21_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_21_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_21_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_21_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_21_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_21_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_21_VAL_SHIFT)
#define SE_RSA_OUTPUT_21_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_21_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_21_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_21_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_21_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_21_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_22
#define SE_RSA_OUTPUT_22                        _MK_ADDR_CONST(0x480)
#define SE_RSA_OUTPUT_22_SECURE                         0x0
#define SE_RSA_OUTPUT_22_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_22_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_22_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_22_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_22_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_22_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_22_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_22_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_22_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_22_VAL_SHIFT)
#define SE_RSA_OUTPUT_22_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_22_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_22_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_22_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_22_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_22_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_23
#define SE_RSA_OUTPUT_23                        _MK_ADDR_CONST(0x484)
#define SE_RSA_OUTPUT_23_SECURE                         0x0
#define SE_RSA_OUTPUT_23_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_23_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_23_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_23_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_23_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_23_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_23_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_23_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_23_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_23_VAL_SHIFT)
#define SE_RSA_OUTPUT_23_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_23_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_23_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_23_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_23_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_23_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_24
#define SE_RSA_OUTPUT_24                        _MK_ADDR_CONST(0x488)
#define SE_RSA_OUTPUT_24_SECURE                         0x0
#define SE_RSA_OUTPUT_24_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_24_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_24_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_24_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_24_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_24_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_24_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_24_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_24_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_24_VAL_SHIFT)
#define SE_RSA_OUTPUT_24_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_24_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_24_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_24_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_24_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_24_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_25
#define SE_RSA_OUTPUT_25                        _MK_ADDR_CONST(0x48c)
#define SE_RSA_OUTPUT_25_SECURE                         0x0
#define SE_RSA_OUTPUT_25_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_25_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_25_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_25_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_25_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_25_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_25_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_25_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_25_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_25_VAL_SHIFT)
#define SE_RSA_OUTPUT_25_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_25_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_25_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_25_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_25_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_25_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_26
#define SE_RSA_OUTPUT_26                        _MK_ADDR_CONST(0x490)
#define SE_RSA_OUTPUT_26_SECURE                         0x0
#define SE_RSA_OUTPUT_26_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_26_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_26_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_26_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_26_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_26_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_26_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_26_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_26_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_26_VAL_SHIFT)
#define SE_RSA_OUTPUT_26_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_26_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_26_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_26_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_26_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_26_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_27
#define SE_RSA_OUTPUT_27                        _MK_ADDR_CONST(0x494)
#define SE_RSA_OUTPUT_27_SECURE                         0x0
#define SE_RSA_OUTPUT_27_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_27_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_27_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_27_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_27_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_27_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_27_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_27_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_27_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_27_VAL_SHIFT)
#define SE_RSA_OUTPUT_27_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_27_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_27_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_27_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_27_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_27_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_28
#define SE_RSA_OUTPUT_28                        _MK_ADDR_CONST(0x498)
#define SE_RSA_OUTPUT_28_SECURE                         0x0
#define SE_RSA_OUTPUT_28_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_28_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_28_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_28_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_28_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_28_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_28_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_28_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_28_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_28_VAL_SHIFT)
#define SE_RSA_OUTPUT_28_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_28_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_28_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_28_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_28_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_28_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_29
#define SE_RSA_OUTPUT_29                        _MK_ADDR_CONST(0x49c)
#define SE_RSA_OUTPUT_29_SECURE                         0x0
#define SE_RSA_OUTPUT_29_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_29_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_29_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_29_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_29_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_29_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_29_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_29_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_29_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_29_VAL_SHIFT)
#define SE_RSA_OUTPUT_29_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_29_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_29_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_29_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_29_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_29_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_30
#define SE_RSA_OUTPUT_30                        _MK_ADDR_CONST(0x4a0)
#define SE_RSA_OUTPUT_30_SECURE                         0x0
#define SE_RSA_OUTPUT_30_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_30_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_30_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_30_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_30_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_30_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_30_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_30_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_30_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_30_VAL_SHIFT)
#define SE_RSA_OUTPUT_30_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_30_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_30_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_30_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_30_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_30_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_31
#define SE_RSA_OUTPUT_31                        _MK_ADDR_CONST(0x4a4)
#define SE_RSA_OUTPUT_31_SECURE                         0x0
#define SE_RSA_OUTPUT_31_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_31_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_31_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_31_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_31_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_31_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_31_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_31_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_31_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_31_VAL_SHIFT)
#define SE_RSA_OUTPUT_31_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_31_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_31_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_31_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_31_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_31_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_32
#define SE_RSA_OUTPUT_32                        _MK_ADDR_CONST(0x4a8)
#define SE_RSA_OUTPUT_32_SECURE                         0x0
#define SE_RSA_OUTPUT_32_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_32_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_32_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_32_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_32_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_32_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_32_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_32_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_32_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_32_VAL_SHIFT)
#define SE_RSA_OUTPUT_32_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_32_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_32_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_32_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_32_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_32_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_33
#define SE_RSA_OUTPUT_33                        _MK_ADDR_CONST(0x4ac)
#define SE_RSA_OUTPUT_33_SECURE                         0x0
#define SE_RSA_OUTPUT_33_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_33_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_33_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_33_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_33_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_33_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_33_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_33_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_33_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_33_VAL_SHIFT)
#define SE_RSA_OUTPUT_33_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_33_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_33_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_33_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_33_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_33_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_34
#define SE_RSA_OUTPUT_34                        _MK_ADDR_CONST(0x4b0)
#define SE_RSA_OUTPUT_34_SECURE                         0x0
#define SE_RSA_OUTPUT_34_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_34_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_34_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_34_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_34_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_34_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_34_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_34_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_34_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_34_VAL_SHIFT)
#define SE_RSA_OUTPUT_34_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_34_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_34_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_34_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_34_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_34_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_35
#define SE_RSA_OUTPUT_35                        _MK_ADDR_CONST(0x4b4)
#define SE_RSA_OUTPUT_35_SECURE                         0x0
#define SE_RSA_OUTPUT_35_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_35_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_35_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_35_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_35_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_35_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_35_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_35_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_35_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_35_VAL_SHIFT)
#define SE_RSA_OUTPUT_35_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_35_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_35_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_35_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_35_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_35_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_36
#define SE_RSA_OUTPUT_36                        _MK_ADDR_CONST(0x4b8)
#define SE_RSA_OUTPUT_36_SECURE                         0x0
#define SE_RSA_OUTPUT_36_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_36_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_36_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_36_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_36_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_36_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_36_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_36_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_36_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_36_VAL_SHIFT)
#define SE_RSA_OUTPUT_36_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_36_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_36_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_36_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_36_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_36_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_37
#define SE_RSA_OUTPUT_37                        _MK_ADDR_CONST(0x4bc)
#define SE_RSA_OUTPUT_37_SECURE                         0x0
#define SE_RSA_OUTPUT_37_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_37_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_37_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_37_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_37_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_37_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_37_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_37_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_37_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_37_VAL_SHIFT)
#define SE_RSA_OUTPUT_37_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_37_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_37_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_37_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_37_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_37_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_38
#define SE_RSA_OUTPUT_38                        _MK_ADDR_CONST(0x4c0)
#define SE_RSA_OUTPUT_38_SECURE                         0x0
#define SE_RSA_OUTPUT_38_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_38_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_38_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_38_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_38_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_38_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_38_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_38_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_38_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_38_VAL_SHIFT)
#define SE_RSA_OUTPUT_38_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_38_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_38_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_38_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_38_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_38_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_39
#define SE_RSA_OUTPUT_39                        _MK_ADDR_CONST(0x4c4)
#define SE_RSA_OUTPUT_39_SECURE                         0x0
#define SE_RSA_OUTPUT_39_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_39_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_39_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_39_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_39_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_39_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_39_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_39_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_39_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_39_VAL_SHIFT)
#define SE_RSA_OUTPUT_39_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_39_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_39_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_39_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_39_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_39_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_40
#define SE_RSA_OUTPUT_40                        _MK_ADDR_CONST(0x4c8)
#define SE_RSA_OUTPUT_40_SECURE                         0x0
#define SE_RSA_OUTPUT_40_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_40_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_40_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_40_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_40_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_40_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_40_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_40_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_40_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_40_VAL_SHIFT)
#define SE_RSA_OUTPUT_40_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_40_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_40_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_40_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_40_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_40_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_41
#define SE_RSA_OUTPUT_41                        _MK_ADDR_CONST(0x4cc)
#define SE_RSA_OUTPUT_41_SECURE                         0x0
#define SE_RSA_OUTPUT_41_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_41_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_41_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_41_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_41_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_41_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_41_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_41_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_41_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_41_VAL_SHIFT)
#define SE_RSA_OUTPUT_41_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_41_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_41_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_41_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_41_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_41_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_42
#define SE_RSA_OUTPUT_42                        _MK_ADDR_CONST(0x4d0)
#define SE_RSA_OUTPUT_42_SECURE                         0x0
#define SE_RSA_OUTPUT_42_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_42_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_42_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_42_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_42_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_42_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_42_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_42_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_42_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_42_VAL_SHIFT)
#define SE_RSA_OUTPUT_42_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_42_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_42_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_42_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_42_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_42_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_43
#define SE_RSA_OUTPUT_43                        _MK_ADDR_CONST(0x4d4)
#define SE_RSA_OUTPUT_43_SECURE                         0x0
#define SE_RSA_OUTPUT_43_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_43_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_43_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_43_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_43_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_43_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_43_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_43_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_43_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_43_VAL_SHIFT)
#define SE_RSA_OUTPUT_43_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_43_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_43_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_43_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_43_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_43_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_44
#define SE_RSA_OUTPUT_44                        _MK_ADDR_CONST(0x4d8)
#define SE_RSA_OUTPUT_44_SECURE                         0x0
#define SE_RSA_OUTPUT_44_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_44_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_44_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_44_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_44_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_44_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_44_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_44_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_44_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_44_VAL_SHIFT)
#define SE_RSA_OUTPUT_44_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_44_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_44_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_44_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_44_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_44_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_45
#define SE_RSA_OUTPUT_45                        _MK_ADDR_CONST(0x4dc)
#define SE_RSA_OUTPUT_45_SECURE                         0x0
#define SE_RSA_OUTPUT_45_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_45_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_45_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_45_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_45_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_45_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_45_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_45_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_45_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_45_VAL_SHIFT)
#define SE_RSA_OUTPUT_45_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_45_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_45_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_45_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_45_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_45_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_46
#define SE_RSA_OUTPUT_46                        _MK_ADDR_CONST(0x4e0)
#define SE_RSA_OUTPUT_46_SECURE                         0x0
#define SE_RSA_OUTPUT_46_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_46_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_46_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_46_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_46_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_46_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_46_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_46_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_46_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_46_VAL_SHIFT)
#define SE_RSA_OUTPUT_46_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_46_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_46_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_46_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_46_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_46_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_47
#define SE_RSA_OUTPUT_47                        _MK_ADDR_CONST(0x4e4)
#define SE_RSA_OUTPUT_47_SECURE                         0x0
#define SE_RSA_OUTPUT_47_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_47_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_47_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_47_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_47_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_47_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_47_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_47_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_47_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_47_VAL_SHIFT)
#define SE_RSA_OUTPUT_47_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_47_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_47_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_47_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_47_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_47_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_48
#define SE_RSA_OUTPUT_48                        _MK_ADDR_CONST(0x4e8)
#define SE_RSA_OUTPUT_48_SECURE                         0x0
#define SE_RSA_OUTPUT_48_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_48_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_48_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_48_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_48_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_48_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_48_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_48_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_48_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_48_VAL_SHIFT)
#define SE_RSA_OUTPUT_48_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_48_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_48_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_48_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_48_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_48_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_49
#define SE_RSA_OUTPUT_49                        _MK_ADDR_CONST(0x4ec)
#define SE_RSA_OUTPUT_49_SECURE                         0x0
#define SE_RSA_OUTPUT_49_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_49_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_49_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_49_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_49_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_49_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_49_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_49_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_49_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_49_VAL_SHIFT)
#define SE_RSA_OUTPUT_49_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_49_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_49_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_49_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_49_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_49_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_50
#define SE_RSA_OUTPUT_50                        _MK_ADDR_CONST(0x4f0)
#define SE_RSA_OUTPUT_50_SECURE                         0x0
#define SE_RSA_OUTPUT_50_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_50_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_50_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_50_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_50_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_50_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_50_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_50_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_50_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_50_VAL_SHIFT)
#define SE_RSA_OUTPUT_50_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_50_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_50_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_50_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_50_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_50_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_51
#define SE_RSA_OUTPUT_51                        _MK_ADDR_CONST(0x4f4)
#define SE_RSA_OUTPUT_51_SECURE                         0x0
#define SE_RSA_OUTPUT_51_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_51_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_51_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_51_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_51_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_51_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_51_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_51_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_51_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_51_VAL_SHIFT)
#define SE_RSA_OUTPUT_51_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_51_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_51_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_51_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_51_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_51_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_52
#define SE_RSA_OUTPUT_52                        _MK_ADDR_CONST(0x4f8)
#define SE_RSA_OUTPUT_52_SECURE                         0x0
#define SE_RSA_OUTPUT_52_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_52_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_52_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_52_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_52_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_52_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_52_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_52_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_52_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_52_VAL_SHIFT)
#define SE_RSA_OUTPUT_52_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_52_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_52_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_52_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_52_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_52_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_53
#define SE_RSA_OUTPUT_53                        _MK_ADDR_CONST(0x4fc)
#define SE_RSA_OUTPUT_53_SECURE                         0x0
#define SE_RSA_OUTPUT_53_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_53_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_53_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_53_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_53_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_53_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_53_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_53_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_53_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_53_VAL_SHIFT)
#define SE_RSA_OUTPUT_53_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_53_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_53_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_53_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_53_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_53_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_54
#define SE_RSA_OUTPUT_54                        _MK_ADDR_CONST(0x500)
#define SE_RSA_OUTPUT_54_SECURE                         0x0
#define SE_RSA_OUTPUT_54_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_54_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_54_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_54_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_54_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_54_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_54_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_54_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_54_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_54_VAL_SHIFT)
#define SE_RSA_OUTPUT_54_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_54_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_54_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_54_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_54_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_54_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_55
#define SE_RSA_OUTPUT_55                        _MK_ADDR_CONST(0x504)
#define SE_RSA_OUTPUT_55_SECURE                         0x0
#define SE_RSA_OUTPUT_55_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_55_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_55_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_55_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_55_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_55_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_55_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_55_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_55_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_55_VAL_SHIFT)
#define SE_RSA_OUTPUT_55_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_55_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_55_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_55_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_55_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_55_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_56
#define SE_RSA_OUTPUT_56                        _MK_ADDR_CONST(0x508)
#define SE_RSA_OUTPUT_56_SECURE                         0x0
#define SE_RSA_OUTPUT_56_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_56_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_56_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_56_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_56_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_56_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_56_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_56_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_56_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_56_VAL_SHIFT)
#define SE_RSA_OUTPUT_56_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_56_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_56_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_56_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_56_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_56_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_57
#define SE_RSA_OUTPUT_57                        _MK_ADDR_CONST(0x50c)
#define SE_RSA_OUTPUT_57_SECURE                         0x0
#define SE_RSA_OUTPUT_57_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_57_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_57_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_57_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_57_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_57_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_57_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_57_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_57_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_57_VAL_SHIFT)
#define SE_RSA_OUTPUT_57_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_57_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_57_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_57_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_57_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_57_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_58
#define SE_RSA_OUTPUT_58                        _MK_ADDR_CONST(0x510)
#define SE_RSA_OUTPUT_58_SECURE                         0x0
#define SE_RSA_OUTPUT_58_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_58_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_58_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_58_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_58_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_58_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_58_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_58_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_58_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_58_VAL_SHIFT)
#define SE_RSA_OUTPUT_58_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_58_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_58_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_58_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_58_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_58_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_59
#define SE_RSA_OUTPUT_59                        _MK_ADDR_CONST(0x514)
#define SE_RSA_OUTPUT_59_SECURE                         0x0
#define SE_RSA_OUTPUT_59_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_59_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_59_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_59_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_59_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_59_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_59_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_59_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_59_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_59_VAL_SHIFT)
#define SE_RSA_OUTPUT_59_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_59_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_59_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_59_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_59_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_59_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_60
#define SE_RSA_OUTPUT_60                        _MK_ADDR_CONST(0x518)
#define SE_RSA_OUTPUT_60_SECURE                         0x0
#define SE_RSA_OUTPUT_60_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_60_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_60_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_60_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_60_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_60_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_60_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_60_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_60_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_60_VAL_SHIFT)
#define SE_RSA_OUTPUT_60_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_60_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_60_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_60_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_60_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_60_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_61
#define SE_RSA_OUTPUT_61                        _MK_ADDR_CONST(0x51c)
#define SE_RSA_OUTPUT_61_SECURE                         0x0
#define SE_RSA_OUTPUT_61_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_61_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_61_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_61_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_61_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_61_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_61_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_61_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_61_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_61_VAL_SHIFT)
#define SE_RSA_OUTPUT_61_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_61_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_61_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_61_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_61_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_61_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_62
#define SE_RSA_OUTPUT_62                        _MK_ADDR_CONST(0x520)
#define SE_RSA_OUTPUT_62_SECURE                         0x0
#define SE_RSA_OUTPUT_62_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_62_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_62_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_62_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_62_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_62_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_62_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_62_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_62_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_62_VAL_SHIFT)
#define SE_RSA_OUTPUT_62_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_62_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_62_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_62_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_62_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_62_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_RSA_OUTPUT_63
#define SE_RSA_OUTPUT_63                        _MK_ADDR_CONST(0x524)
#define SE_RSA_OUTPUT_63_SECURE                         0x0
#define SE_RSA_OUTPUT_63_WORD_COUNT                     0x1
#define SE_RSA_OUTPUT_63_RESET_VAL                      _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_63_RESET_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_63_SW_DEFAULT_VAL                         _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_63_SW_DEFAULT_MASK                        _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_63_READ_MASK                      _MK_MASK_CONST(0xffffffff)
#define SE_RSA_OUTPUT_63_WRITE_MASK                     _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_63_VAL_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_RSA_OUTPUT_63_VAL_FIELD                      _MK_FIELD_CONST(0xffffffff, SE_RSA_OUTPUT_63_VAL_SHIFT)
#define SE_RSA_OUTPUT_63_VAL_RANGE                      31:0
#define SE_RSA_OUTPUT_63_VAL_WOFFSET                    0x0
#define SE_RSA_OUTPUT_63_VAL_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_63_VAL_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_63_VAL_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_RSA_OUTPUT_63_VAL_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_STATUS_0
#define SE_STATUS_0                     _MK_ADDR_CONST(0x800)
#define SE_STATUS_0_SECURE                      0x0
#define SE_STATUS_0_WORD_COUNT                  0x1
#define SE_STATUS_0_RESET_VAL                   _MK_MASK_CONST(0x0)
#define SE_STATUS_0_RESET_MASK                  _MK_MASK_CONST(0x0)
#define SE_STATUS_0_SW_DEFAULT_VAL                      _MK_MASK_CONST(0x0)
#define SE_STATUS_0_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_STATUS_0_READ_MASK                   _MK_MASK_CONST(0x3)
#define SE_STATUS_0_WRITE_MASK                  _MK_MASK_CONST(0x0)
#define SE_STATUS_0_STATE_SHIFT                 _MK_SHIFT_CONST(0)
#define SE_STATUS_0_STATE_FIELD                 _MK_FIELD_CONST(0x3, SE_STATUS_0_STATE_SHIFT)
#define SE_STATUS_0_STATE_RANGE                 1:0
#define SE_STATUS_0_STATE_WOFFSET                       0x0
#define SE_STATUS_0_STATE_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_STATUS_0_STATE_DEFAULT_MASK                  _MK_MASK_CONST(0x0)
#define SE_STATUS_0_STATE_SW_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_STATUS_0_STATE_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_STATUS_0_STATE_IDLE                  _MK_ENUM_CONST(0)
#define SE_STATUS_0_STATE_BUSY                  _MK_ENUM_CONST(1)
#define SE_STATUS_0_STATE_WAIT_OUT                      _MK_ENUM_CONST(2)
#define SE_STATUS_0_STATE_WAIT_IN                       _MK_ENUM_CONST(3)


// Register SE_ERR_STATUS_0
#define SE_ERR_STATUS_0                 _MK_ADDR_CONST(0x804)
#define SE_ERR_STATUS_0_SECURE                  0x0
#define SE_ERR_STATUS_0_WORD_COUNT                      0x1
#define SE_ERR_STATUS_0_RESET_VAL                       _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_RESET_MASK                      _MK_MASK_CONST(0x300000f)
#define SE_ERR_STATUS_0_SW_DEFAULT_VAL                  _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_SW_DEFAULT_MASK                         _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_READ_MASK                       _MK_MASK_CONST(0x300000f)
#define SE_ERR_STATUS_0_WRITE_MASK                      _MK_MASK_CONST(0x300000f)
#define SE_ERR_STATUS_0_SE_NS_ACCESS_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_ERR_STATUS_0_SE_NS_ACCESS_FIELD                      _MK_FIELD_CONST(0x1, SE_ERR_STATUS_0_SE_NS_ACCESS_SHIFT)
#define SE_ERR_STATUS_0_SE_NS_ACCESS_RANGE                      0:0
#define SE_ERR_STATUS_0_SE_NS_ACCESS_WOFFSET                    0x0
#define SE_ERR_STATUS_0_SE_NS_ACCESS_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_SE_NS_ACCESS_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_ERR_STATUS_0_SE_NS_ACCESS_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_SE_NS_ACCESS_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_SE_NS_ACCESS_INIT_ENUM                  CLEAR
#define SE_ERR_STATUS_0_SE_NS_ACCESS_CLEAR                      _MK_ENUM_CONST(0)
#define SE_ERR_STATUS_0_SE_NS_ACCESS_ACTIVE                     _MK_ENUM_CONST(1)
#define SE_ERR_STATUS_0_SE_NS_ACCESS_SW_CLEAR                   _MK_ENUM_CONST(1)

#define SE_ERR_STATUS_0_DST_SHIFT                       _MK_SHIFT_CONST(1)
#define SE_ERR_STATUS_0_DST_FIELD                       _MK_FIELD_CONST(0x1, SE_ERR_STATUS_0_DST_SHIFT)
#define SE_ERR_STATUS_0_DST_RANGE                       1:1
#define SE_ERR_STATUS_0_DST_WOFFSET                     0x0
#define SE_ERR_STATUS_0_DST_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_DST_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_ERR_STATUS_0_DST_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_DST_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_DST_INIT_ENUM                   CLEAR
#define SE_ERR_STATUS_0_DST_CLEAR                       _MK_ENUM_CONST(0)
#define SE_ERR_STATUS_0_DST_ACTIVE                      _MK_ENUM_CONST(1)
#define SE_ERR_STATUS_0_DST_SW_CLEAR                    _MK_ENUM_CONST(1)

#define SE_ERR_STATUS_0_BUSY_REG_WR_SHIFT                       _MK_SHIFT_CONST(2)
#define SE_ERR_STATUS_0_BUSY_REG_WR_FIELD                       _MK_FIELD_CONST(0x1, SE_ERR_STATUS_0_BUSY_REG_WR_SHIFT)
#define SE_ERR_STATUS_0_BUSY_REG_WR_RANGE                       2:2
#define SE_ERR_STATUS_0_BUSY_REG_WR_WOFFSET                     0x0
#define SE_ERR_STATUS_0_BUSY_REG_WR_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_BUSY_REG_WR_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_ERR_STATUS_0_BUSY_REG_WR_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_BUSY_REG_WR_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_BUSY_REG_WR_INIT_ENUM                   CLEAR
#define SE_ERR_STATUS_0_BUSY_REG_WR_CLEAR                       _MK_ENUM_CONST(0)
#define SE_ERR_STATUS_0_BUSY_REG_WR_ACTIVE                      _MK_ENUM_CONST(1)
#define SE_ERR_STATUS_0_BUSY_REG_WR_SW_CLEAR                    _MK_ENUM_CONST(1)

#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_SHIFT                   _MK_SHIFT_CONST(3)
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_FIELD                   _MK_FIELD_CONST(0x1, SE_ERR_STATUS_0_SRK_USAGE_LIMIT_SHIFT)
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_RANGE                   3:3
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_WOFFSET                 0x0
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_INIT_ENUM                       CLEAR
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_CLEAR                   _MK_ENUM_CONST(0)
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_ACTIVE                  _MK_ENUM_CONST(1)
#define SE_ERR_STATUS_0_SRK_USAGE_LIMIT_SW_CLEAR                        _MK_ENUM_CONST(1)

#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_SHIFT                   _MK_SHIFT_CONST(24)
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_FIELD                   _MK_FIELD_CONST(0x1, SE_ERR_STATUS_0_TZRAM_NS_ACCESS_SHIFT)
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_RANGE                   24:24
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_WOFFSET                 0x0
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_DEFAULT_MASK                    _MK_MASK_CONST(0x1)
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_SW_DEFAULT                      _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_SW_DEFAULT_MASK                 _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_INIT_ENUM                       CLEAR
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_CLEAR                   _MK_ENUM_CONST(0)
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_ACTIVE                  _MK_ENUM_CONST(1)
#define SE_ERR_STATUS_0_TZRAM_NS_ACCESS_SW_CLEAR                        _MK_ENUM_CONST(1)

#define SE_ERR_STATUS_0_TZRAM_ADDRESS_SHIFT                     _MK_SHIFT_CONST(25)
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_FIELD                     _MK_FIELD_CONST(0x1, SE_ERR_STATUS_0_TZRAM_ADDRESS_SHIFT)
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_RANGE                     25:25
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_WOFFSET                   0x0
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_INIT_ENUM                 CLEAR
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_CLEAR                     _MK_ENUM_CONST(0)
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_ACTIVE                    _MK_ENUM_CONST(1)
#define SE_ERR_STATUS_0_TZRAM_ADDRESS_SW_CLEAR                  _MK_ENUM_CONST(1)


// Register SE_MISC_0
#define SE_MISC_0                       _MK_ADDR_CONST(0x808)
#define SE_MISC_0_SECURE                        0x0
#define SE_MISC_0_WORD_COUNT                    0x1
#define SE_MISC_0_RESET_VAL                     _MK_MASK_CONST(0x0)
#define SE_MISC_0_RESET_MASK                    _MK_MASK_CONST(0x7)
#define SE_MISC_0_SW_DEFAULT_VAL                        _MK_MASK_CONST(0x0)
#define SE_MISC_0_SW_DEFAULT_MASK                       _MK_MASK_CONST(0x0)
#define SE_MISC_0_READ_MASK                     _MK_MASK_CONST(0x7)
#define SE_MISC_0_WRITE_MASK                    _MK_MASK_CONST(0x7)
#define SE_MISC_0_ENTROPY_NEXT_192BIT_SHIFT                     _MK_SHIFT_CONST(2)
#define SE_MISC_0_ENTROPY_NEXT_192BIT_FIELD                     _MK_FIELD_CONST(0x1, SE_MISC_0_ENTROPY_NEXT_192BIT_SHIFT)
#define SE_MISC_0_ENTROPY_NEXT_192BIT_RANGE                     2:2
#define SE_MISC_0_ENTROPY_NEXT_192BIT_WOFFSET                   0x0
#define SE_MISC_0_ENTROPY_NEXT_192BIT_DEFAULT                   _MK_MASK_CONST(0x0)
#define SE_MISC_0_ENTROPY_NEXT_192BIT_DEFAULT_MASK                      _MK_MASK_CONST(0x1)
#define SE_MISC_0_ENTROPY_NEXT_192BIT_SW_DEFAULT                        _MK_MASK_CONST(0x0)
#define SE_MISC_0_ENTROPY_NEXT_192BIT_SW_DEFAULT_MASK                   _MK_MASK_CONST(0x0)

#define SE_MISC_0_ENTROPY_VN_BYPASS_SHIFT                       _MK_SHIFT_CONST(1)
#define SE_MISC_0_ENTROPY_VN_BYPASS_FIELD                       _MK_FIELD_CONST(0x1, SE_MISC_0_ENTROPY_VN_BYPASS_SHIFT)
#define SE_MISC_0_ENTROPY_VN_BYPASS_RANGE                       1:1
#define SE_MISC_0_ENTROPY_VN_BYPASS_WOFFSET                     0x0
#define SE_MISC_0_ENTROPY_VN_BYPASS_DEFAULT                     _MK_MASK_CONST(0x0)
#define SE_MISC_0_ENTROPY_VN_BYPASS_DEFAULT_MASK                        _MK_MASK_CONST(0x1)
#define SE_MISC_0_ENTROPY_VN_BYPASS_SW_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_MISC_0_ENTROPY_VN_BYPASS_SW_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_MISC_0_ENTROPY_VN_BYPASS_INIT_ENUM                   DISABLE
#define SE_MISC_0_ENTROPY_VN_BYPASS_DISABLE                     _MK_ENUM_CONST(0)
#define SE_MISC_0_ENTROPY_VN_BYPASS_ENABLE                      _MK_ENUM_CONST(1)

#define SE_MISC_0_CLK_OVR_ON_SHIFT                      _MK_SHIFT_CONST(0)
#define SE_MISC_0_CLK_OVR_ON_FIELD                      _MK_FIELD_CONST(0x1, SE_MISC_0_CLK_OVR_ON_SHIFT)
#define SE_MISC_0_CLK_OVR_ON_RANGE                      0:0
#define SE_MISC_0_CLK_OVR_ON_WOFFSET                    0x0
#define SE_MISC_0_CLK_OVR_ON_DEFAULT                    _MK_MASK_CONST(0x0)
#define SE_MISC_0_CLK_OVR_ON_DEFAULT_MASK                       _MK_MASK_CONST(0x1)
#define SE_MISC_0_CLK_OVR_ON_SW_DEFAULT                 _MK_MASK_CONST(0x0)
#define SE_MISC_0_CLK_OVR_ON_SW_DEFAULT_MASK                    _MK_MASK_CONST(0x0)


// Register SE_SPARE_0
#define SE_SPARE_0                      _MK_ADDR_CONST(0x80c)
#define SE_SPARE_0_SECURE                       0x0
#define SE_SPARE_0_WORD_COUNT                   0x1
#define SE_SPARE_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define SE_SPARE_0_RESET_MASK                   _MK_MASK_CONST(0x0)
#define SE_SPARE_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SE_SPARE_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_SPARE_0_READ_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_SPARE_0_WRITE_MASK                   _MK_MASK_CONST(0xffffffff)
#define SE_SPARE_0_VAL_SHIFT                    _MK_SHIFT_CONST(0)
#define SE_SPARE_0_VAL_FIELD                    _MK_FIELD_CONST(0xffffffff, SE_SPARE_0_VAL_SHIFT)
#define SE_SPARE_0_VAL_RANGE                    31:0
#define SE_SPARE_0_VAL_WOFFSET                  0x0
#define SE_SPARE_0_VAL_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_SPARE_0_VAL_DEFAULT_MASK                     _MK_MASK_CONST(0x0)
#define SE_SPARE_0_VAL_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_SPARE_0_VAL_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)


// Register SE_ENTROPY_DEBUG_COUNTER_0
#define SE_ENTROPY_DEBUG_COUNTER_0                      _MK_ADDR_CONST(0x810)
#define SE_ENTROPY_DEBUG_COUNTER_0_SECURE                       0x0
#define SE_ENTROPY_DEBUG_COUNTER_0_WORD_COUNT                   0x1
#define SE_ENTROPY_DEBUG_COUNTER_0_RESET_VAL                    _MK_MASK_CONST(0x0)
#define SE_ENTROPY_DEBUG_COUNTER_0_RESET_MASK                   _MK_MASK_CONST(0xffffffff)
#define SE_ENTROPY_DEBUG_COUNTER_0_SW_DEFAULT_VAL                       _MK_MASK_CONST(0x0)
#define SE_ENTROPY_DEBUG_COUNTER_0_SW_DEFAULT_MASK                      _MK_MASK_CONST(0x0)
#define SE_ENTROPY_DEBUG_COUNTER_0_READ_MASK                    _MK_MASK_CONST(0xffffffff)
#define SE_ENTROPY_DEBUG_COUNTER_0_WRITE_MASK                   _MK_MASK_CONST(0x0)
#define SE_ENTROPY_DEBUG_COUNTER_0_VAL_SHIFT                    _MK_SHIFT_CONST(0)
#define SE_ENTROPY_DEBUG_COUNTER_0_VAL_FIELD                    _MK_FIELD_CONST(0xffffffff, SE_ENTROPY_DEBUG_COUNTER_0_VAL_SHIFT)
#define SE_ENTROPY_DEBUG_COUNTER_0_VAL_RANGE                    31:0
#define SE_ENTROPY_DEBUG_COUNTER_0_VAL_WOFFSET                  0x0
#define SE_ENTROPY_DEBUG_COUNTER_0_VAL_DEFAULT                  _MK_MASK_CONST(0x0)
#define SE_ENTROPY_DEBUG_COUNTER_0_VAL_DEFAULT_MASK                     _MK_MASK_CONST(0xffffffff)
#define SE_ENTROPY_DEBUG_COUNTER_0_VAL_SW_DEFAULT                       _MK_MASK_CONST(0x0)
#define SE_ENTROPY_DEBUG_COUNTER_0_VAL_SW_DEFAULT_MASK                  _MK_MASK_CONST(0x0)


//
// REGISTER LIST
//
#define LIST_ARSE_REGS(_op_) \
_op_(SE_SE_SECURITY_0) \
_op_(SE_TZRAM_SECURITY_0) \
_op_(SE_OPERATION_0) \
_op_(SE_INT_ENABLE_0) \
_op_(SE_INT_STATUS_0) \
_op_(SE_CONFIG_0) \
_op_(SE_IN_LL_ADDR_0) \
_op_(SE_IN_CUR_BYTE_ADDR_0) \
_op_(SE_IN_CUR_LL_ID_0) \
_op_(SE_OUT_LL_ADDR_0) \
_op_(SE_OUT_CUR_BYTE_ADDR_0) \
_op_(SE_OUT_CUR_LL_ID_0) \
_op_(SE_HASH_RESULT_0) \
_op_(SE_HASH_RESULT) \
_op_(SE_HASH_RESULT_1) \
_op_(SE_HASH_RESULT_2) \
_op_(SE_HASH_RESULT_3) \
_op_(SE_HASH_RESULT_4) \
_op_(SE_HASH_RESULT_5) \
_op_(SE_HASH_RESULT_6) \
_op_(SE_HASH_RESULT_7) \
_op_(SE_HASH_RESULT_8) \
_op_(SE_HASH_RESULT_9) \
_op_(SE_HASH_RESULT_10) \
_op_(SE_HASH_RESULT_11) \
_op_(SE_HASH_RESULT_12) \
_op_(SE_HASH_RESULT_13) \
_op_(SE_HASH_RESULT_14) \
_op_(SE_HASH_RESULT_15) \
_op_(SE_CTX_SAVE_CONFIG_0) \
_op_(SE_SHA_CONFIG_0) \
_op_(SE_SHA_MSG_LENGTH_0) \
_op_(SE_SHA_MSG_LENGTH) \
_op_(SE_SHA_MSG_LENGTH_1) \
_op_(SE_SHA_MSG_LENGTH_2) \
_op_(SE_SHA_MSG_LENGTH_3) \
_op_(SE_SHA_MSG_LEFT_0) \
_op_(SE_SHA_MSG_LEFT) \
_op_(SE_SHA_MSG_LEFT_1) \
_op_(SE_SHA_MSG_LEFT_2) \
_op_(SE_SHA_MSG_LEFT_3) \
_op_(SE_CRYPTO_SECURITY_PERKEY_0) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_0) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_1) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_2) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_3) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_4) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_5) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_6) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_7) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_8) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_9) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_10) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_11) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_12) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_13) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_14) \
_op_(SE_CRYPTO_KEYTABLE_ACCESS_15) \
_op_(SE_CRYPTO_CONFIG_0) \
_op_(SE_CRYPTO_LINEAR_CTR_0) \
_op_(SE_CRYPTO_LINEAR_CTR) \
_op_(SE_CRYPTO_LINEAR_CTR_1) \
_op_(SE_CRYPTO_LINEAR_CTR_2) \
_op_(SE_CRYPTO_LINEAR_CTR_3) \
_op_(SE_CRYPTO_LAST_BLOCK_0) \
_op_(SE_CRYPTO_KEYTABLE_ADDR_0) \
_op_(SE_CRYPTO_KEYTABLE_DATA_0) \
_op_(SE_CRYPTO_KEYTABLE_DATA) \
_op_(SE_CRYPTO_KEYTABLE_DATA_1) \
_op_(SE_CRYPTO_KEYTABLE_DATA_2) \
_op_(SE_CRYPTO_KEYTABLE_DATA_3) \
_op_(SE_CRYPTO_KEYTABLE_DST_0) \
_op_(SE_RNG_CONFIG_0) \
_op_(SE_RNG_SRC_CONFIG_0) \
_op_(SE_RNG_RESEED_INTERVAL_0) \
_op_(SE_RSA_CONFIG_0) \
_op_(SE_RSA_KEY_SIZE_0) \
_op_(SE_RSA_EXP_SIZE_0) \
_op_(SE_RSA_SECURITY_PERKEY_0) \
_op_(SE_RSA_KEYTABLE_ACCESS_0) \
_op_(SE_RSA_KEYTABLE_ACCESS) \
_op_(SE_RSA_KEYTABLE_ACCESS_1) \
_op_(SE_RSA_KEYTABLE_ADDR_0) \
_op_(SE_RSA_KEYTABLE_DATA_0) \
_op_(SE_RSA_OUTPUT_0) \
_op_(SE_RSA_OUTPUT) \
_op_(SE_RSA_OUTPUT_1) \
_op_(SE_RSA_OUTPUT_2) \
_op_(SE_RSA_OUTPUT_3) \
_op_(SE_RSA_OUTPUT_4) \
_op_(SE_RSA_OUTPUT_5) \
_op_(SE_RSA_OUTPUT_6) \
_op_(SE_RSA_OUTPUT_7) \
_op_(SE_RSA_OUTPUT_8) \
_op_(SE_RSA_OUTPUT_9) \
_op_(SE_RSA_OUTPUT_10) \
_op_(SE_RSA_OUTPUT_11) \
_op_(SE_RSA_OUTPUT_12) \
_op_(SE_RSA_OUTPUT_13) \
_op_(SE_RSA_OUTPUT_14) \
_op_(SE_RSA_OUTPUT_15) \
_op_(SE_RSA_OUTPUT_16) \
_op_(SE_RSA_OUTPUT_17) \
_op_(SE_RSA_OUTPUT_18) \
_op_(SE_RSA_OUTPUT_19) \
_op_(SE_RSA_OUTPUT_20) \
_op_(SE_RSA_OUTPUT_21) \
_op_(SE_RSA_OUTPUT_22) \
_op_(SE_RSA_OUTPUT_23) \
_op_(SE_RSA_OUTPUT_24) \
_op_(SE_RSA_OUTPUT_25) \
_op_(SE_RSA_OUTPUT_26) \
_op_(SE_RSA_OUTPUT_27) \
_op_(SE_RSA_OUTPUT_28) \
_op_(SE_RSA_OUTPUT_29) \
_op_(SE_RSA_OUTPUT_30) \
_op_(SE_RSA_OUTPUT_31) \
_op_(SE_RSA_OUTPUT_32) \
_op_(SE_RSA_OUTPUT_33) \
_op_(SE_RSA_OUTPUT_34) \
_op_(SE_RSA_OUTPUT_35) \
_op_(SE_RSA_OUTPUT_36) \
_op_(SE_RSA_OUTPUT_37) \
_op_(SE_RSA_OUTPUT_38) \
_op_(SE_RSA_OUTPUT_39) \
_op_(SE_RSA_OUTPUT_40) \
_op_(SE_RSA_OUTPUT_41) \
_op_(SE_RSA_OUTPUT_42) \
_op_(SE_RSA_OUTPUT_43) \
_op_(SE_RSA_OUTPUT_44) \
_op_(SE_RSA_OUTPUT_45) \
_op_(SE_RSA_OUTPUT_46) \
_op_(SE_RSA_OUTPUT_47) \
_op_(SE_RSA_OUTPUT_48) \
_op_(SE_RSA_OUTPUT_49) \
_op_(SE_RSA_OUTPUT_50) \
_op_(SE_RSA_OUTPUT_51) \
_op_(SE_RSA_OUTPUT_52) \
_op_(SE_RSA_OUTPUT_53) \
_op_(SE_RSA_OUTPUT_54) \
_op_(SE_RSA_OUTPUT_55) \
_op_(SE_RSA_OUTPUT_56) \
_op_(SE_RSA_OUTPUT_57) \
_op_(SE_RSA_OUTPUT_58) \
_op_(SE_RSA_OUTPUT_59) \
_op_(SE_RSA_OUTPUT_60) \
_op_(SE_RSA_OUTPUT_61) \
_op_(SE_RSA_OUTPUT_62) \
_op_(SE_RSA_OUTPUT_63) \
_op_(SE_STATUS_0) \
_op_(SE_ERR_STATUS_0) \
_op_(SE_MISC_0) \
_op_(SE_SPARE_0) \
_op_(SE_ENTROPY_DEBUG_COUNTER_0)


//
// ADDRESS SPACES
//

#define BASE_ADDRESS_SE 0x00000000

//
// ARSE REGISTER BANKS
//

#define SE0_FIRST_REG 0x0000 // SE_SE_SECURITY_0
#define SE0_LAST_REG 0x0070 // SE_CTX_SAVE_CONFIG_0
#define SE1_FIRST_REG 0x0200 // SE_SHA_CONFIG_0
#define SE1_LAST_REG 0x0220 // SE_SHA_MSG_LEFT_3
#define SE2_FIRST_REG 0x0280 // SE_CRYPTO_SECURITY_PERKEY_0
#define SE2_LAST_REG 0x02c0 // SE_CRYPTO_KEYTABLE_ACCESS_15
#define SE3_FIRST_REG 0x0304 // SE_CRYPTO_CONFIG_0
#define SE3_LAST_REG 0x0330 // SE_CRYPTO_KEYTABLE_DST_0
#define SE4_FIRST_REG 0x0340 // SE_RNG_CONFIG_0
#define SE4_LAST_REG 0x0348 // SE_RNG_RESEED_INTERVAL_0
#define SE5_FIRST_REG 0x0400 // SE_RSA_CONFIG_0
#define SE5_LAST_REG 0x0414 // SE_RSA_KEYTABLE_ACCESS_1
#define SE6_FIRST_REG 0x0420 // SE_RSA_KEYTABLE_ADDR_0
#define SE6_LAST_REG 0x0524 // SE_RSA_OUTPUT_63
#define SE7_FIRST_REG 0x0800 // SE_STATUS_0
#define SE7_LAST_REG 0x0810 // SE_ENTROPY_DEBUG_COUNTER_0

// To satisfy various compilers and platforms,
// we let users control the types and syntax of certain constants, using macros.
#ifndef _MK_SHIFT_CONST
  #define _MK_SHIFT_CONST(_constant_) _constant_
#endif
#ifndef _MK_MASK_CONST
  #define _MK_MASK_CONST(_constant_) _constant_
#endif
#ifndef _MK_ENUM_CONST
  #define _MK_ENUM_CONST(_constant_) (_constant_ ## UL)
#endif
#ifndef _MK_ADDR_CONST
  #define _MK_ADDR_CONST(_constant_) _constant_
#endif
#ifndef _MK_FIELD_CONST
  #define _MK_FIELD_CONST(_mask_, _shift_) (_MK_MASK_CONST(_mask_) << _MK_SHIFT_CONST(_shift_))
#endif

#if defined(__cplusplus)
}
#endif

#endif // ifndef ___ARSE_H_INC_
