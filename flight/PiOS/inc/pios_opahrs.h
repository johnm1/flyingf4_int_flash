/**
 ******************************************************************************
 * @addtogroup PIOS PIOS Core hardware abstraction layer
 * @{
 * @addtogroup PIOS_OPAHRS OPAHRS Functions
 * @{
 *
 * @file       pios_opahrs.h  
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      OpenPilot AHRS functions header.
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef PIOS_OPAHRS_H
#define PIOS_OPAHRS_H

#include "pios_opahrs_proto.h"	/* opahrs message structs */

enum opahrs_result {
  OPAHRS_RESULT_OK = 0,
  OPAHRS_RESULT_TIMEOUT,
  OPAHRS_RESULT_FAILED,
};

extern void PIOS_OPAHRS_Init(void);
extern enum opahrs_result PIOS_OPAHRS_Sync(struct opahrs_msg_v1 *rsp);
extern enum opahrs_result PIOS_OPAHRS_GetSerial(struct opahrs_msg_v1 *rsp);
extern enum opahrs_result PIOS_OPAHRS_GetAttitude(struct opahrs_msg_v1 *rsp);
extern enum opahrs_result PIOS_OPAHRS_GetAttitudeRaw(struct opahrs_msg_v1 *rsp);
extern enum opahrs_result PIOS_OPAHRS_resync(void);

#endif /* PIOS_OPAHRS_H */

/**
  * @}
  * @}
  */
