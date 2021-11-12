
/*
 *****************************************************************************
 *                                                                           *
 *                 IMPINJ CONFIDENTIAL AND PROPRIETARY                       *
 *                                                                           *
 * This source code is the sole property of Impinj, Inc.  Reproduction or    *
 * utilization of this source code in whole or in part is forbidden without  *
 * the prior written consent of Impinj, Inc.                                 *
 *                                                                           *
 * (c) Copyright Impinj, Inc. 2007,2008. All rights reserved.                *
 *                                                                           *
 *****************************************************************************/

/** 
 *****************************************************************************
 **
 ** @file ltkcpp_platform.h
 **
 ** @brief Based types for the LKTCPP library
 ** 
 ** Contains the platform dependent basic types for the LTKCPP library
 **
 *****************************************************************************/

/*
 * Include file to establish context
 * for the LLRP Tool Kit (LTK) C++ platform.
 */

#include <list>
#include <string.h>         /* memcpy() */
#include <time.h>
#include <stdlib.h>
#include <stdint.h>

#define FALSE       0
#define TRUE        1

namespace LLRP
{

/*
 * Typedefs of simple types.
 * The LTK/C++ uses these types extensively.
 * To retarget to another C++ platform change
 * these typedefs. Everything else should be
 * good to go.
 */

#ifdef linux
#include <stdint.h>
/** Basic type for LLRP 8-bit unsigned data values*/
typedef uint8_t                 llrp_u8_t;
/** Basic type for LLRP 8-bit signed data values*/
typedef int8_t                  llrp_s8_t;
/** Basic type for LLRP 16-bit unsigned data values*/
typedef uint16_t                llrp_u16_t;
/** Basic type for LLRP 16-bit signed data values*/
typedef int16_t                 llrp_s16_t;
/** Basic type for LLRP 32-bit unsigned data values*/
typedef uint32_t                llrp_u32_t;
/** Basic type for LLRP 32-bit signed data values*/
typedef int32_t                 llrp_s32_t;
/** Basic type for LLRP 64-bit unsigned data values*/
typedef uint64_t                llrp_u64_t;
/** Basic type for LLRP 64-bit signed data values*/
typedef int64_t                 llrp_s64_t;
/** Basic type for LLRP 1-bit unsigned data values*/
typedef uint8_t                 llrp_u1_t;
/** Basic type for LLRP 2-bit unsigned data values*/
typedef uint8_t                 llrp_u2_t;
/** Basic type for LLRP utf8 character values*/
typedef uint8_t                 llrp_utf8_t;
/** Basic type for LLRP boolean values*/
typedef bool                    llrp_bool_t;
/** Basic type for LLRP byte encoded values */
typedef uint8_t                 llrp_byte_t;
#endif /* linux */

#ifdef WIN32
typedef unsigned char           llrp_u8_t;
typedef signed char             llrp_s8_t;
typedef unsigned short          llrp_u16_t;
typedef signed short            llrp_s16_t;
typedef unsigned int            llrp_u32_t;
typedef signed int              llrp_s32_t;
typedef unsigned long long      llrp_u64_t;
typedef signed long long        llrp_s64_t;
typedef unsigned char           llrp_u1_t;
typedef unsigned char           llrp_u2_t;
typedef unsigned char           llrp_utf8_t;
typedef bool                    llrp_bool_t;
typedef unsigned char           llrp_byte_t;
#endif /* WIN32 */

};  /* namespace LLRP */
