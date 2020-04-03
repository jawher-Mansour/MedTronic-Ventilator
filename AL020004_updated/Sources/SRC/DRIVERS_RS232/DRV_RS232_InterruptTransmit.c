/******************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505                                                      */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : DRV_RS232_Interrupt_Transmit.c                                 */
/*                                                                            */
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C        			  Transmission Interrupt routine      					      */
/*%C          																					   */
/******************************************************************************/
/*%I Input Parameter :  NONE                                                  */
/*%IO Input/Output :    NONE	                                                */
/*%O Output Parameter : NONE                                                  */
/******************************************************************************/

/******************************************************************************/
/*                                INCLUDE FILES		                           */
/******************************************************************************/
#include "p18f6622.h"
#include "typedef.h"
#include "enum.h"
#include "DRV_RS232_Data.h"


/******************************************************************************/
/*                            FUNCTION BODY                                   */
/******************************************************************************/
void DRV_RS232_InterruptTransmit(void) 
{ 
	/*%C If the frame is tranfered on RS232												*/
	if(ArrayTxDataId == EndOfTableTx)
	{
		/*%C Disabled transmission interrupt												*/
		PIE3bits.TX2IE = 0;
		EndOfTransmit = TRUE;
	}
	/*%C Else next transmission 																*/
	else
	{
		/*%C Increment table 																	*/
		TXREG2 = ArrayTxData[ArrayTxDataId++];
	}
}
