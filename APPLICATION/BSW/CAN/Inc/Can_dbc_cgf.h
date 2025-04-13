/*
 * Can_dbc_cgf.h
 *
 *  Created on: Apr 4, 2025
 *      Author: Rishikesh
 */

#ifndef CAN_INC_CAN_DBC_CGF_H_
#define CAN_INC_CAN_DBC_CGF_H_

#include "Can.h"
/*********** Messages cgf start ****************/
/***********OTA_Resp Messages****************/
#define MSG_OTA_Resp_DLC  			1

#define Signal_Size_Respons			8
#define Signal_pos_Respons

/*********** OTA_Req Messages****************/
#define MSG_OTA_Req_DLC  			8

#define Signal_Size_Target_device 	8
#define Signal_pos_Target_device	0

#define Signal_Size_SW_Major  		8
#define Signal_pos_SW_Major			8

#define Signal_Size_SW_Minor 		8
#define Signal_pos_SW_Minor			16

#define Signal_Size_SW_Patch 		8
#define Signal_pos_SW_Patch			24

#define Signal_Size_File_Size		32
#define Signal_pos_File_Size		56

/*********** Transfer_Data Messages****************/
#define MSG_Transfer_Data_DLC  		64

#define Signal_Size_segment_1    	64
#define Signal_pos_segment_1		56

#define Signal_Size_segment_2  		64
#define Signal_pos_segment_2		120

#define Signal_Size_segment_3  		64
#define Signal_pos_segment_3		184

#define Signal_Size_segment_4  		64
#define Signal_pos_segment_4		248

#define Signal_Size_segment_5  		64
#define Signal_pos_segment_5		312

#define Signal_Size_segment_6 		64
#define Signal_pos_segment_6		376

#define Signal_Size_segment_7  		64
#define Signal_pos_segment_7		440

#define Signal_Size_segment_8 		64
#define Signal_pos_segment_8		504

/*********** Messages cgf end ****************/


enum TX_Msg_name{
	TX_OTA_Resp,
	TX_MAX_Messages,
};

enum RX_Msg_name{
	RX_OTA_Req,
	RX_Transfer_Data,
	RX_MAX_Messages,
};
#endif /* CAN_INC_CAN_DBC_CGF_H_ */
