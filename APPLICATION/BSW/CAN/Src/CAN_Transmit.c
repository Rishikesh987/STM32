/*
 * CAN_Transmit.c
 *
 *  Created on: Apr 8, 2025
 *      Author: Rishikesh
 */
#include "Can_dbc_cgf.h"

void can_transmit(){

	CAN_Messages_info_TX *p_msginfo =  V_CAN_Messages.pMSG_info_TX;
	CAN_Messages_cgf_TX *p_msgcgf = V_CAN_Messages.pMSG_cgf_TX;
	p_msginfo->Cycle_Time;
	p_msgcgf->Msg_ID;


	static uint16_t trasmition_time=0;

	if(p_msginfo->Msg_Type == FIX_CYCLE)
	{
		if(trasmition_time%p_msginfo->Cycle_Time == 0)
		{

		}
	}
	if(trasmition_time>=1000)
	{
		trasmition_time = 0;
	}
}
