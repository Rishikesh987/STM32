/*
 * CanDriver.c
 *
 *  Created on: Apr 4, 2025
 *      Author: Rishikesh
 */
#include "fdcan.h"
char TxData[8];
void fun(){

	FDCAN_TxHeaderTypeDef TxHeader;
	TxHeader.DataLength=8;
	TxHeader.Identifier=101;
	HAL_FDCAN_AddMessageToTxFifoQ(&hfdcan1,&TxHeader,TxData);
}
