/*
 * can.h
 *
 *  Created on: Apr 5, 2025
 *      Author: Rishikesh
 */

#ifndef CAN_INC_CAN_H_
#define CAN_INC_CAN_H_

#include <stdint.h>
#include "stm32h7xx_hal.h"
enum
{
	FIX_CYCLE,
	EVENT_CYCLE,
	EVENT,
	NON
};

enum{
	MSG_STOP,
	MSG_SNED,
};

typedef struct __CAN_Messages_cgf_TX
{
	uint16_t Msg_ID;
	uint8_t  ID_Type;
	uint8_t  DLC;
	uint8_t  *pData;
}CAN_Messages_cgf_TX;


typedef struct __CAN_Messages_info_TX
{
	uint8_t  Msg_name;
	uint16_t Cycle_Time;
	uint8_t  Msg_Type;
	uint8_t  Status;
}CAN_Messages_info_TX;


typedef struct __CAN_Messages_cgf_RX
{
	uint16_t Msg_ID;
	uint8_t  DLC;
	uint8_t  ID_Type;
	uint8_t  *pData;
}CAN_Messages_cgf_RX;


typedef struct __CAN_Messages_info_RX
{
	uint8_t  Msg_name;
	uint8_t  Indicator;
}CAN_Messages_info_RX;

typedef struct __CAN_Messages
{
	CAN_Messages_cgf_TX  *pMSG_cgf_TX;
	CAN_Messages_info_TX *pMSG_info_TX;
	CAN_Messages_cgf_RX  *pMSG_cgf_RX;
	CAN_Messages_info_RX *pMSG_info_RX;
}CAN_Messages;

extern CAN_Messages V_CAN_Messages;

#endif /* CAN_INC_CAN_H_ */
