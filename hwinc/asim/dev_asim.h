/* _NVRM_COPYRIGHT_BEGIN_
 *
 * Copyright 2008-2012 by NVIDIA Corporation.  All rights reserved.  All
 * information contained herein is proprietary and confidential to NVIDIA
 * Corporation.  Any use, reproduction, or disclosure without the written
 * permission of NVIDIA Corporation is prohibited.
 *
 * _NVRM_COPYRIGHT_END_
 */

#ifndef __dev_asim_h__
#define __dev_asim_h__
/* This file will be autogenerated.  Do not edit */

#define NV_ASIM_BASE_ADDRESS 0x538F0000 /*tbd: get from iomap.h should get this or replacement */


/* send and receive ring control registers */
#define NV_ASIM                               0x538F0FFF:0x538F0000 /* RW--D */
#define NV_ASIM_SEND_RING                                0x00000000 /* RW-4R */
#define NV_ASIM_SEND_RING_TARGET                                1:0 /* RWIVF */
#define NV_ASIM_SEND_RING_TARGET_PHYS_INIT               0x00000001 /* RWI-V */
#define NV_ASIM_SEND_RING_TARGET_PHYS__INIT              0x00000001 /* RWI-V */
#define NV_ASIM_SEND_RING_TARGET_PHYS__PROD              0x00000001 /* RW--V */
#define NV_ASIM_SEND_RING_TARGET_PHYS_NVM                0x00000001 /* RW--V */
#define NV_ASIM_SEND_RING_TARGET_PHYS_PCI                0x00000002 /* RW--V */
#define NV_ASIM_SEND_RING_TARGET_PHYS_PCI_COHERENT       0x00000003 /* RW--V */
#define NV_ASIM_SEND_RING_STATUS                                3:3 /* RWIVF */
#define NV_ASIM_SEND_RING_STATUS_INIT                    0x00000000 /* RWI-V */
#define NV_ASIM_SEND_RING_STATUS__INIT                   0x00000000 /* RWI-V */
#define NV_ASIM_SEND_RING_STATUS__PROD                   0x00000000 /* RW--V */
#define NV_ASIM_SEND_RING_STATUS_INVALID                 0x00000000 /* RW--V */
#define NV_ASIM_SEND_RING_STATUS_VALID                   0x00000001 /* RW--V */
#define NV_ASIM_SEND_RING_SIZE                                  5:4 /* RWIVF */
#define NV_ASIM_SEND_RING_SIZE_INIT                      0x00000000 /* RWI-V */
#define NV_ASIM_SEND_RING_SIZE__INIT                     0x00000000 /* RWI-V */
#define NV_ASIM_SEND_RING_SIZE__PROD                     0x00000000 /* RW--V */
#define NV_ASIM_SEND_RING_SIZE_4KB                       0x00000000 /* RW--V */
#define NV_ASIM_SEND_RING_SIZE_8KB                       0x00000001 /* RW--V */
#define NV_ASIM_SEND_RING_SIZE_12KB                      0x00000002 /* RW--V */
#define NV_ASIM_SEND_RING_SIZE_16KB                      0x00000003 /* RW--V */
#define NV_ASIM_SEND_RING_GP_IN_RING                          11:11 /* RWIVF */
#define NV_ASIM_SEND_RING_GP_IN_RING__INIT               0x00000000 /* RWI-V */
#define NV_ASIM_SEND_RING_GP_IN_RING__PROD               0x00000000 /* RW--V */
#define NV_ASIM_SEND_RING_GP_IN_RING_NO                  0x00000000 /* RW--V */
#define NV_ASIM_SEND_RING_GP_IN_RING_YES                 0x00000001 /* RW--V */
#define NV_ASIM_SEND_RING_ADDR_LO                             31:12 /* RWIVF */
#define NV_ASIM_SEND_RING_ADDR_LO__INIT                  0x00000000 /* RWI-V */
#define NV_ASIM_SEND_RING_ADDR_LO__PROD                  0x00000000 /* RW--V */
#define NV_ASIM_SEND_RING_HI                             0x00000004 /* RW-4R */
#define NV_ASIM_SEND_RING_HI_ADDR                              19:0 /* RWIVF */
#define NV_ASIM_SEND_RING_HI_ADDR__INIT                  0x00000000 /* RWI-V */
#define NV_ASIM_SEND_RING_HI_ADDR__PROD                  0x00000000 /* RW--V */
#define NV_ASIM_SEND_PUT                                 0x00000008 /* RW-4A */
#define NV_ASIM_SEND_PUT_POINTER                               31:3 /* RW-VF */
#define NV_ASIM_SEND_GET                                 0x0000000c /* R--4A */
#define NV_ASIM_SEND_GET_POINTER                               31:3 /* R--VF */

#define NV_ASIM_RECV_RING                                0x00000010 /* RW-4R */
#define NV_ASIM_RECV_RING_TARGET                                1:0 /* RWIVF */
#define NV_ASIM_RECV_RING_TARGET_PHYS_INIT               0x00000001 /* RWI-V */
#define NV_ASIM_RECV_RING_TARGET_PHYS__INIT              0x00000001 /* RWI-V */
#define NV_ASIM_RECV_RING_TARGET_PHYS__PROD              0x00000001 /* RW--V */
#define NV_ASIM_RECV_RING_TARGET_PHYS_NVM                0x00000001 /* RW--V */
#define NV_ASIM_RECV_RING_TARGET_PHYS_PCI                0x00000002 /* RW--V */
#define NV_ASIM_RECV_RING_TARGET_PHYS_PCI_COHERENT       0x00000003 /* RW--V */
#define NV_ASIM_RECV_RING_STATUS                                3:3 /* RWIVF */
#define NV_ASIM_RECV_RING_STATUS_INIT                    0x00000000 /* RWI-V */
#define NV_ASIM_RECV_RING_STATUS__INIT                   0x00000000 /* RWI-V */
#define NV_ASIM_RECV_RING_STATUS__PROD                   0x00000000 /* RW--V */
#define NV_ASIM_RECV_RING_STATUS_INVALID                 0x00000000 /* RW--V */
#define NV_ASIM_RECV_RING_STATUS_VALID                   0x00000001 /* RW--V */
#define NV_ASIM_RECV_RING_SIZE                                  5:4 /* RWIVF */
#define NV_ASIM_RECV_RING_SIZE_INIT                      0x00000000 /* RWI-V */
#define NV_ASIM_RECV_RING_SIZE__INIT                     0x00000000 /* RWI-V */
#define NV_ASIM_RECV_RING_SIZE__PROD                     0x00000000 /* RW--V */
#define NV_ASIM_RECV_RING_SIZE_4KB                       0x00000000 /* RW--V */
#define NV_ASIM_RECV_RING_SIZE_8KB                       0x00000001 /* RW--V */
#define NV_ASIM_RECV_RING_SIZE_12KB                      0x00000002 /* RW--V */
#define NV_ASIM_RECV_RING_SIZE_16KB                      0x00000003 /* RW--V */
#define NV_ASIM_RECV_RING_GP_IN_RING                          11:11 /* RWIVF */
#define NV_ASIM_RECV_RING_GP_IN_RING__INIT               0x00000000 /* RWI-V */
#define NV_ASIM_RECV_RING_GP_IN_RING__PROD               0x00000000 /* RW--V */
#define NV_ASIM_RECV_RING_GP_IN_RING_NO                  0x00000000 /* RW--V */
#define NV_ASIM_RECV_RING_GP_IN_RING_YES                 0x00000001 /* RW--V */
#define NV_ASIM_RECV_RING_ADDR_LO                             31:12 /* RWIVF */
#define NV_ASIM_RECV_RING_ADDR_LO__INIT                  0x00000000 /* RWI-V */
#define NV_ASIM_RECV_RING_ADDR_LO__PROD                  0x00000000 /* RW--V */
#define NV_ASIM_RECV_RING_HI                             0x00000014 /* RW-4R */
#define NV_ASIM_RECV_RING_HI_ADDR                              19:0 /* RWIVF */
#define NV_ASIM_RECV_RING_HI_ADDR__INIT                  0x00000000 /* RWI-V */
#define NV_ASIM_RECV_RING_HI_ADDR__PROD                  0x00000000 /* RW--V */
#define NV_ASIM_RECV_PUT                                 0x00000018 /* R--4A */
#define NV_ASIM_RECV_PUT_POINTER                               13:3 /* R---F */
#define NV_ASIM_RECV_GET                                 0x0000001c /* RW-4A */
#define NV_ASIM_RECV_GET_POINTER                               13:3 /* RW--F */

/* configuration registers */

/* ASIM presence register */
#define NV_ASIM_CONFIG                                   0x00000020 /* R--4R */
#define NV_ASIM_CONFIG_MODE                                     0:0 /* R-XVF */
#define NV_ASIM_CONFIG_MODE_DISABLED                     0x00000000 /* R---V */
#define NV_ASIM_CONFIG_MODE_ENABLED                      0x00000001 /* R---V */
/* total number of graphics channels available to guest */
#define NV_ASIM_CONFIG_CHANNELS                                 7:1 /* R-XVF */
#define NV_ASIM_CONFIG_CHANNELS_NONE                     0x00000000 /* R---V */
/* flag to specify use of only cached system memory in guest */
#define NV_ASIM_CONFIG_CACHED_ONLY                              8:8 /* R-XVF */
#define NV_ASIM_CONFIG_CACHED_ONLY_DISABLED              0x00000000 /* R---V */
#define NV_ASIM_CONFIG_CACHED_ONLY_ENABLED               0x00000001 /* R---V */
/* validity check field */
#define NV_ASIM_CONFIG_VALIDITY                                10:9 /* R-XVF */
#define NV_ASIM_CONFIG_VALIDITY__INIT                    0x00000001 /* R---V */
#define NV_ASIM_CONFIG_VALIDITY_VALID                    0x00000001 /* R---V */
/* simulation mode */
#define NV_ASIM_CONFIG_SIMULATION                             13:12 /* R-XVF */
#define NV_ASIM_CONFIG_SIMULATION_DISABLED               0x00000000 /* R-XVF */
#define NV_ASIM_CONFIG_SIMULATION_FMODEL                 0x00000001 /* R-XVF */
#define NV_ASIM_CONFIG_SIMULATION_RTLSIM                 0x00000002 /* R-XVF */
/* primary/secondary vga status */
#define NV_ASIM_CONFIG_SECONDARY_DISPLAY                      14:14 /* R-XVF */
#define NV_ASIM_CONFIG_SECONDARY_DISPLAY_DISABLED        0x00000000 /* R-XVF */
#define NV_ASIM_CONFIG_SECONDARY_DISPLAY_ENABLED         0x00000001 /* R-XVF */
/* number of available heads */
#define NV_ASIM_CONFIG_NUM_HEADS                              24:17 /* R-XVF */

/* limit of guest FB in 4 KB units */
#define NV_ASIM_FB_LIMIT                                 0x00000024 /* R--4R */

/* event ring control registers */
#define NV_ASIM_EVENT_RING                               0x00000030 /* RW-4R */
#define NV_ASIM_EVENT_RING_TARGET                               1:0 /* RWIVF */
#define NV_ASIM_EVENT_RING_TARGET_PHYS_INIT              0x00000001 /* RWI-V */
#define NV_ASIM_EVENT_RING_TARGET_PHYS__INIT             0x00000001 /* RWI-V */
#define NV_ASIM_EVENT_RING_TARGET_PHYS__PROD             0x00000001 /* RW--V */
#define NV_ASIM_EVENT_RING_TARGET_PHYS_NVM               0x00000001 /* RW--V */
#define NV_ASIM_EVENT_RING_TARGET_PHYS_PCI               0x00000002 /* RW--V */
#define NV_ASIM_EVENT_RING_TARGET_PHYS_PCI_COHERENT      0x00000003 /* RW--V */
#define NV_ASIM_EVENT_RING_STATUS                               3:3 /* RWIVF */
#define NV_ASIM_EVENT_RING_STATUS_INIT                   0x00000000 /* RWI-V */
#define NV_ASIM_EVENT_RING_STATUS__INIT                  0x00000000 /* RWI-V */
#define NV_ASIM_EVENT_RING_STATUS__PROD                  0x00000000 /* RW--V */
#define NV_ASIM_EVENT_RING_STATUS_INVALID                0x00000000 /* RW--V */
#define NV_ASIM_EVENT_RING_STATUS_VALID                  0x00000001 /* RW--V */
#define NV_ASIM_EVENT_RING_SIZE                                 5:4 /* RWIVF */
#define NV_ASIM_EVENT_RING_SIZE_INIT                     0x00000000 /* RWI-V */
#define NV_ASIM_EVENT_RING_SIZE__INIT                    0x00000000 /* RWI-V */
#define NV_ASIM_EVENT_RING_SIZE__PROD                    0x00000000 /* RW--V */
#define NV_ASIM_EVENT_RING_SIZE_4KB                      0x00000000 /* RW--V */
#define NV_ASIM_EVENT_RING_SIZE_8KB                      0x00000001 /* RW--V */
#define NV_ASIM_EVENT_RING_SIZE_12KB                     0x00000002 /* RW--V */
#define NV_ASIM_EVENT_RING_SIZE_16KB                     0x00000003 /* RW--V */
#define NV_ASIM_EVENT_RING_GP_IN_RING                         11:11 /* RWIVF */
#define NV_ASIM_EVENT_RING_GP_IN_RING__INIT              0x00000000 /* RWI-V */
#define NV_ASIM_EVENT_RING_GP_IN_RING__PROD              0x00000000 /* RW--V */
#define NV_ASIM_EVENT_RING_GP_IN_RING_NO                 0x00000000 /* RW--V */
#define NV_ASIM_EVENT_RING_GP_IN_RING_YES                0x00000001 /* RW--V */
#define NV_ASIM_EVENT_RING_ADDR_LO                            31:12 /* RWIVF */
#define NV_ASIM_EVENT_RING_ADDR_LO__INIT                 0x00000000 /* RWI-V */
#define NV_ASIM_EVENT_RING_ADDR_LO__PROD                 0x00000000 /* RW--V */
#define NV_ASIM_EVENT_RING_HI                            0x00000034 /* RW-4R */
#define NV_ASIM_EVENT_RING_HI_ADDR                             19:0 /* RWIVF */
#define NV_ASIM_EVENT_RING_HI_ADDR__INIT                 0x00000000 /* RWI-V */
#define NV_ASIM_EVENT_RING_HI_ADDR__PROD                 0x00000000 /* RW--V */
#define NV_ASIM_EVENT_PUT                                0x00000038 /* R--4A */
#define NV_ASIM_EVENT_PUT_POINTER                              31:2 /* R--VF */
#define NV_ASIM_EVENT_GET                                0x0000003c /* RW-4A */
#define NV_ASIM_EVENT_GET_POINTER                              31:2 /* RW-VF */

/*
 * When NV_ASIM_*_RING_GP_IN_RING is NV_ASIM_*_RING_GP_IN_RING_YES,
 * the first ring entry (two words for send and receive rings, four
 * words for the event ring) holds an in-memory pair of get and put
 * pointers, and entry 0 is skipped when advancing the get or put
 * pointer.   It is acceptable for put to be 0, in which case get may
 * also be 0, but, when putting an entry, put should then first be
 * advanced 1, the entry stored, and put advanced to 2.   If get is 0
 * and not equal to put, then it should be advanced without examining
 * entry 0 as a regular ring entry.
 *
 * When using "GP_IN_RING" mode, after updating one or more pointers,
 * the RM should update the appropriate bits in NV_ASIM_STATUS.
 * A "_CLEAR" value in NV_ASIM_STATUS, when written by RM, clears the
 * corresponding field which is itself set non-zero by the host.
 * Fields without a "_CLEAR" value are read-write by the RM, and the
 * host only clears them.
 *
 * The fields in NV_ASIM_CONTROL enable or disable signalling of an
 * interrupt when the host makes the corresponding NV_ASIM_STATUS field
 * non-zero.   Interrupts are level-triggered, and the host drops
 * its interrupt request only after all non-zero fields are zero or
 * disabled for interrupt purposes.
 *
 * RM sets NV_ASIM_STATUS_SEND_PUT to tell the host that it has made
 * the send ring not empty (get != put).
 *
 * The host sets NV_ASIM_STATUS_SEND_GET to tell the RM that it has made
 * the send ring not full (((get + 1) mod ring_size) != put).
 *
 * The host sets NV_ASIM_STATUS_RECV_PUT to tell the RM that it has made
 * the recv ring not empty (get != put).
 *
 * RM sets NV_ASIM_STATUS_RECV_GET to tell the host that it has made
 * the recv ring not full (((get + 1) mod ring_size) != put).
 *
 * The host sets NV_ASIM_STATUS_EVENT_PUT to tell the RM that it has made
 * the event ring not empty (get != put).
 *
 * RM sets NV_ASIM_STATUS_EVENT_GET to tell the host that it has made
 * the event ring not full (((get + 1) mod ring_size) != put).
 *
 *
 */

#define NV_ASIM_STATUS                                   0x00000028 /* RW-4R */
#define NV_ASIM_STATUS_SEND_PUT                                 0:0 /* RW-VF */
#define NV_ASIM_STATUS_SEND_PUT__INIT                    0x00000000 /* RWI-V */
#define NV_ASIM_STATUS_SEND_PUT_IDLE                     0x00000000 /* RW--V */
#define NV_ASIM_STATUS_SEND_PUT_PENDING                  0x00000001 /* RW--V */
#define NV_ASIM_STATUS_SEND_GET                                 1:1 /* RW-VF */
#define NV_ASIM_STATUS_SEND_GET__INIT                    0x00000000 /* RWI-V */
#define NV_ASIM_STATUS_SEND_GET_IDLE                     0x00000000 /* RW--V */
#define NV_ASIM_STATUS_SEND_GET_PENDING                  0x00000001 /* RW--V */
#define NV_ASIM_STATUS_SEND_GET_CLEAR                    0x00000001 /* RWI-V */
#define NV_ASIM_STATUS_RECV_PUT                                 2:2 /* RW-VF */
#define NV_ASIM_STATUS_RECV_PUT__INIT                    0x00000000 /* RWI-V */
#define NV_ASIM_STATUS_RECV_PUT_IDLE                     0x00000000 /* RW--V */
#define NV_ASIM_STATUS_RECV_PUT_PENDING                  0x00000001 /* RW--V */
#define NV_ASIM_STATUS_RECV_PUT_CLEAR                    0x00000001 /* RW--V */
#define NV_ASIM_STATUS_RECV_GET                                 3:3 /* RW-VF */
#define NV_ASIM_STATUS_RECV_GET__INIT                    0x00000000 /* RWI-V */
#define NV_ASIM_STATUS_RECV_GET_IDLE                     0x00000000 /* RW--V */
#define NV_ASIM_STATUS_RECV_GET_PENDING                  0x00000001 /* RW--V */
#define NV_ASIM_STATUS_EVENT_PUT                                4:4 /* RW-VF */
#define NV_ASIM_STATUS_EVENT_PUT__INIT                   0x00000000 /* RWI-V */
#define NV_ASIM_STATUS_EVENT_PUT_IDLE                    0x00000000 /* RW--V */
#define NV_ASIM_STATUS_EVENT_PUT_PENDING                 0x00000001 /* RW--V */
#define NV_ASIM_STATUS_EVENT_PUT_CLEAR                   0x00000001 /* RW--V */
#define NV_ASIM_STATUS_EVENT_GET                                5:5 /* RW-VF */
#define NV_ASIM_STATUS_EVENT_GET__INIT                   0x00000000 /* RWI-V */
#define NV_ASIM_STATUS_EVENT_GET_IDLE                    0x00000000 /* RW--V */
#define NV_ASIM_STATUS_EVENT_GET_PENDING                 0x00000001 /* RW--V */

#define NV_ASIM_CONTROL                                  0x0000002c /* RW-4R */
#define NV_ASIM_CONTROL_SEND_PUT                                0:0 /* RW-VF */
#define NV_ASIM_CONTROL_SEND_PUT__INIT                   0x00000000 /* RWI-V */
#define NV_ASIM_CONTROL_SEND_PUT_DISABLED                0x00000000 /* RW--V */
#define NV_ASIM_CONTROL_SEND_PUT_ENABLED                 0x00000001 /* RW--V */
#define NV_ASIM_CONTROL_SEND_GET                                1:1 /* RW-VF */
#define NV_ASIM_CONTROL_SEND_GET__INIT                   0x00000000 /* RWI-V */
#define NV_ASIM_CONTROL_SEND_GET_DISABLED                0x00000000 /* RW--V */
#define NV_ASIM_CONTROL_SEND_GET_ENABLED                 0x00000001 /* RW--V */
#define NV_ASIM_CONTROL_RECV_PUT                                2:2 /* RW-VF */
#define NV_ASIM_CONTROL_RECV_PUT__INIT                   0x00000000 /* RWI-V */
#define NV_ASIM_CONTROL_RECV_PUT_DISABLED                0x00000000 /* RW--V */
#define NV_ASIM_CONTROL_RECV_PUT_ENABLED                 0x00000001 /* RW--V */
#define NV_ASIM_CONTROL_RECV_GET                                3:3 /* RW-VF */
#define NV_ASIM_CONTROL_RECV_GET__INIT                   0x00000000 /* RWI-V */
#define NV_ASIM_CONTROL_RECV_GET_DISABLED                0x00000000 /* RW--V */
#define NV_ASIM_CONTROL_RECV_GET_ENABLED                 0x00000001 /* RW--V */
#define NV_ASIM_CONTROL_EVENT_PUT                               4:4 /* RW-VF */
#define NV_ASIM_CONTROL_EVENT_PUT__INIT                  0x00000000 /* RWI-V */
#define NV_ASIM_CONTROL_EVENT_PUT_DISABLED               0x00000000 /* RW--V */
#define NV_ASIM_CONTROL_EVENT_PUT_ENABLED                0x00000001 /* RW--V */
#define NV_ASIM_CONTROL_EVENT_GET                               5:5 /* RW-VF */
#define NV_ASIM_CONTROL_EVENT_GET__INIT                  0x00000000 /* RWI-V */
#define NV_ASIM_CONTROL_EVENT_GET_DISABLED               0x00000000 /* RW--V */
#define NV_ASIM_CONTROL_EVENT_GET_ENABLED                0x00000001 /* RW--V */

/* ASIM back door shutdown interface */
#define NV_ASIM_SHUTDOWN                                 0x00000ffc /* RW-4R */
#define NV_ASIM_SHUTDOWN_SHUTDOWN                               0:0 /* RW-VF */
#define NV_ASIM_SHUTDOWN_SHUTDOWN_ENABLE                          1 /* RW--V */


#define NV_ASIM_DMA_SEND_PUT                             0x00000000 /* RW-4A */
#define NV_ASIM_DMA_SEND_PUT_POINTER                           31:3 /* RW-VF */
#define NV_ASIM_DMA_SEND_GET                             0x00000004 /* R--4A */
#define NV_ASIM_DMA_SEND_GET_POINTER                           31:3 /* R--VF */

#define NV_ASIM_DMA_RECV_PUT                             0x00000000 /* R--4A */
#define NV_ASIM_DMA_RECV_PUT_POINTER                           13:3 /* R---F */
#define NV_ASIM_DMA_RECV_GET                             0x00000004 /* RW-4A */
#define NV_ASIM_DMA_RECV_GET_POINTER                           13:3 /* RW--F */

#define NV_ASIM_DMA_EVENT_PUT                            0x00000000 /* R--4A */
#define NV_ASIM_DMA_EVENT_PUT_POINTER                          31:4 /* R--VF */
#define NV_ASIM_DMA_EVENT_GET                            0x00000004 /* RW-4A */
#define NV_ASIM_DMA_EVENT_GET_POINTER                          31:4 /* RW-VF */

/* pair of words forming a send or receive ring entry */
#define NV_ASIM_DMA                                      0x00000000 /* RW-4R */
#define NV_ASIM_DMA_TARGET                                      1:0 /* RWIVF */
#define NV_ASIM_DMA_TARGET_PHYS_INIT                     0x00000001 /* RWI-V */
#define NV_ASIM_DMA_TARGET_PHYS__INIT                    0x00000001 /* RWI-V */
#define NV_ASIM_DMA_TARGET_PHYS__PROD                    0x00000001 /* RW--V */
#define NV_ASIM_DMA_TARGET_PHYS_NVM                      0x00000001 /* RW--V */
#define NV_ASIM_DMA_TARGET_PHYS_PCI                      0x00000002 /* RW--V */
#define NV_ASIM_DMA_TARGET_PHYS_PCI_COHERENT             0x00000003 /* RW--V */
#define NV_ASIM_DMA_STATUS                                      3:3 /* RWIVF */
#define NV_ASIM_DMA_STATUS_INIT                          0x00000000 /* RWI-V */
#define NV_ASIM_DMA_STATUS__INIT                         0x00000000 /* RWI-V */
#define NV_ASIM_DMA_STATUS__PROD                         0x00000000 /* RW--V */
#define NV_ASIM_DMA_STATUS_INVALID                       0x00000000 /* RW--V */
#define NV_ASIM_DMA_STATUS_VALID                         0x00000001 /* RW--V */
#define NV_ASIM_DMA_SIZE                                        5:4 /* RWIVF */
#define NV_ASIM_DMA_SIZE_INIT                            0x00000000 /* RWI-V */
#define NV_ASIM_DMA_SIZE__INIT                           0x00000000 /* RWI-V */
#define NV_ASIM_DMA_SIZE__PROD                           0x00000000 /* RW--V */
#define NV_ASIM_DMA_SIZE_4KB                             0x00000000 /* RW--V */
#define NV_ASIM_DMA_SIZE_8KB                             0x00000001 /* RW--V */
#define NV_ASIM_DMA_SIZE_12KB                            0x00000002 /* RW--V */
#define NV_ASIM_DMA_SIZE_16KB                            0x00000003 /* RW--V */
#define NV_ASIM_DMA_ADDR_LO                                   31:12 /* RWIVF */
#define NV_ASIM_DMA_ADDR_LO__INIT                        0x00000000 /* RWI-V */
#define NV_ASIM_DMA_ADDR_LO__PROD                        0x00000000 /* RW--V */
#define NV_ASIM_DMA_HI                                   0x00000004 /* RW-4R */
#define NV_ASIM_DMA_HI_ADDR                                    19:0 /* RWIVF */
#define NV_ASIM_DMA_HI_ADDR__INIT                        0x00000000 /* RWI-V */

#define NV_ASIM_DMA_HI_ADDR__PROD                        0x00000000 /* RW--V */

/* Event ring entry (9 words) */
#define NV_ASIM_EV__SIZE_1                               0x0000000a /*       */
#define NV_ASIM_EV_HCLIENT                               0x00000000 /* RW-4R */
#define NV_ASIM_EV_HOBJECT                               0x00000004 /* RW-4R */
#define NV_ASIM_EV_NOTIFY_INDEX                          0x00000008 /* RW-4R */
#define NV_ASIM_EV_FLAGS                                 0x0000000c /* RW-4R */
#define NV_ASIM_EV_FLAGS_ALLOCATED                              3:0 /* RW-4R */
#define NV_ASIM_EV_FLAGS_ALLOCATED_GUEST                 0x00000000 /* RW--V */
#define NV_ASIM_EV_FLAGS_ALLOCATED_PLUGIN                0x00000001 /* RW--V */
#define NV_ASIM_EV_FLAGS_HAS_NOTIFIER_DATA                      4:4 /* RW-4R */
#define NV_ASIM_EV_FLAGS_HAS_NOTIFIER_DATA_FALSE         0x00000000 /* RW--V */
#define NV_ASIM_EV_FLAGS_HAS_NOTIFIER_DATA_TRUE          0x00000001 /* RW--V */
#define NV_ASIM_EV_FLAGS_TYPE                                 31:16 /* RW-4R */
#define NV_ASIM_EV_FLAGS_TYPE_ROBUST_CHANNEL_ERROR       0x00000000 /* RW--V */
#define NV_ASIM_EV_FLAGS_TYPE_EVENT_INTR_MTHD            0x00000001 /* RW--V */
#define NV_ASIM_EV_FLAGS_TYPE_VBLANK_INTR                0x00000002 /* RW--V */
#define NV_ASIM_EV_NOTIFIER_TIMESTAMP                    0x00000010 /* RW-4R */
#define NV_ASIM_EV_NOTIFIER_TIMESTAMP_HI                 0x00000014 /* RW-4R */
#define NV_ASIM_EV_NOTIFIER_INFO32                       0x00000018 /* RW-4R */
#define NV_ASIM_EV_NOTIFIER_INFO16                       0x0000001c /* RW-4R */
#define NV_ASIM_EV_NOTIFIER_STATUS                       0x00000020 /* RW-4R */
#define NV_ASIM_EV_ROBUST_CHANNEL_ERROR_CHID             0x00000024 /* RW-4R */


/*
 * Message header (in buffer addressed by ring entry)
 *
 * If message is invalid (bad length or signature), signature and length
 * are forced to be valid (if in range of descriptor) and result is set to
 * NV_ASIM_RESULT_INVALID_MESSAGE_FORMAT.  Otherwise, signature, length, and
 * function are always unchanged and result is always set.
 *
 * The function message header, if defined, immediately follows the main message
 * header.
 */

#define NV_ASIM_MSG_HEADER                           0x00000017:0x00000000 /* RW--D */
/* signature must equal valid value */
#define NV_ASIM_MSG_SIGNATURE                                   0x00000000 /* RW-4R */
#define NV_ASIM_MSG_SIGNATURE_VALID                             0x43505256 /* RW--V */
/* length must be less than or equal to length in ring descriptor and includes header */
#define NV_ASIM_MSG_LENGTH                                      0x00000004 /* RW-4R */
/* function code must be a defined value */
#define NV_ASIM_MSG_FUNCTION                                    0x00000008 /* RW-4R */
#define NV_ASIM_MSG_FUNCTION_SIM_ESCAPE_READ                    0x00000023 /* RW--V */
#define NV_ASIM_MSG_FUNCTION_SIM_ESCAPE_WRITE                   0x00000024 /* RW--V */

/* result code */
#define NV_ASIM_MSG_RESULT                               0x0000000c /* RW-4R */
#define NV_ASIM_MSG_RESULT_SUCCESS                       0x00000000 /* RW--V */
#define NV_ASIM_MSG_RESULT_RPC_PENDING                   0xFFFFFFFF /* RW--V */

/* sequence number */
#define NV_ASIM_MSG_SEQUENCE                             0x00000010 /* RW-4R */

/* spare field */
#define NV_ASIM_MSG_SPARE                                0x00000014 /* RW-4R */
#define NV_ASIM_MSG_SPARE__INIT                          0x00000000 /* RW--V */

/*
 * SIM_ESCAPE_READ message header
 *
 * RPC used to READ values from the simulation environment. Only generated
 * from a guest RM that's built for simulation (not used with silicon based
 * guests):
 *
 *  PATHSTR char string follows header at a fixed offset.
 *  DATAOFF holds message buffer offset, where READ data should be stored.
 *
 * Return value is Success/Failure
 */
#define NV_ASIM_SIM_ESCAPE_READ_HEADER     0x0000000b:0x00000000 /* RW--D */
#define NV_ASIM_SIM_ESCAPE_READ_DATAIDX               0x00000000 /* RW-4R */
#define NV_ASIM_SIM_ESCAPE_READ_DATALEN               0x00000004 /* RW-4R */
#define NV_ASIM_SIM_ESCAPE_READ_DATAOFF               0x00000008 /* RW-4R */
#define NV_ASIM_SIM_ESCAPE_READ_PATHSTR               0x0000000c /* RW-4R */


/*
 * SIM_ESCAPE_WRITE message header
 *
 * RPC used to WRITE values from the simulation environment. Only generated
 * from a guest RM that's built for simulation (not used with silicon based
 * guests).
 *
 *  PATHSTR char string follows header at a fixed offset.
 *  DATAOFF holds message buffer offset, where WRITE data exists.
 *
 * Return value is Success/Failure
 */
#define NV_ASIM_SIM_ESCAPE_WRITE_HEADER     0x0000000b:0x00000000 /* RW--D */
#define NV_ASIM_SIM_ESCAPE_WRITE_DATAIDX               0x00000000 /* RW-4R */
#define NV_ASIM_SIM_ESCAPE_WRITE_DATALEN               0x00000004 /* RW-4R */
#define NV_ASIM_SIM_ESCAPE_WRITE_DATAOFF               0x00000008 /* RW-4R */
#define NV_ASIM_SIM_ESCAPE_WRITE_PATHSTR               0x0000000c /* RW-4R */

#endif // __dev_asim_h__
