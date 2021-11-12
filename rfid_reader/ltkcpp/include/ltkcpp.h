
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
 ** @file ltkcpp.h 
 **
 ** @brief  File that includes all LLRP classes and types
 **
 ** This file includes all the LLRP types and classes that are generated
 ** by the LLRP automated build process. 
 **
 *****************************************************************************/


#ifndef _LTKCPP_H
#define _LTKCPP_H

#include "ltkcpp_platform.h"
#include "ltkcpp_base.h"
#include "ltkcpp_frame.h"
#include "ltkcpp_xmltext.h"
#include "ltkcpp_connection.h"

/* for passing version information as a define */
#define STRINGIFY(x) XSTRINGIFY(x)
#define XSTRINGIFY(x) #x

#include "version.inc"

/*
** @brief The Namespace for the LLRP LTK Library */
namespace LLRP
{
#include "out_ltkcpp.h"

/* @brief Gets a new type registry and enrolls the core LLRP types
**
** Convenience function to get a new type registry, and enroll the
** core LLRP types
**
** @return CTypeRegistry The type registry created 
**
** @ingroup LTKCoreElement
*/
extern CTypeRegistry *
getTheTypeRegistry (void);

}; /* namespace LLRP */

#endif /* !_LTKCPP_H */

