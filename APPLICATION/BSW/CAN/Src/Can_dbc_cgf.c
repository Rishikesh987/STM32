/*
 * Can_dbc_cgf.c
 *
 *  Created on: Apr 4, 2025
 *      Author: Rishikesh
 */
#include "Can_dbc_cgf.h"

uint8_t TX_Messages[10];

CAN_Messages_cgf_TX V_Messages_cgf_TX[]=
{
		{
				0X300,				/*ID messages*/
				FDCAN_STANDARD_ID,  /*ID TYPE*/
				8,					/*DLC*/
				&TX_Messages[TX_OTA_Resp] /*pDATA*/
		},
};

CAN_Messages_info_TX V_Messages_info_TX[]=
{
		{
				TX_OTA_Resp,		/*name of messages*/
				0,					/*cycle city of messages*/
				EVENT,				/*type of messages*/
				MSG_SNED,			/*send or stop message*/
		},
};



CAN_Messages V_CAN_Messages =
{
		V_Messages_cgf_TX,
		V_Messages_info_TX,

};
