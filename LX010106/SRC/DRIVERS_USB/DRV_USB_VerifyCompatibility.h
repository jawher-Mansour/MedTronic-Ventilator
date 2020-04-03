/******************************************************************************/
/*                                                                            */
/* Project N�  :  RB0505 				                                          */
/*                                                                            */
/*----------------------------------------------------------------------------*/
/*                                                                            */
/* Filename  : DRV_USB_VerifyCompatibility.h 											*/
/*																										*/
/*----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------*/


/******************************************************************************/
/*%C                     Functionnal description :                            */
/*%C         																						*/
/******************************************************************************/
/*%I Input Parameter :  NONE                                                  */
/*%IO Input/Output :    NONE	                                                */
/*%O Output Parameter : NONE                                                  */
/******************************************************************************/

#ifndef DRV_USB_VERIFYCOMPATIBILITY_H
#define DRV_USB_VERIFYCOMPATIBILITY_H


/******************************************************************************/
/*                   EXTERNAL FUNCTION DECLARATION	                    			*/
/******************************************************************************/



	/*%C Acces to DataBase */
	extern UWORD16 DB_ConfigRead(e_DB_CONFIG Id);
	extern UWORD16 DB_ConfigWrite(e_DB_CONFIG Id , UWORD16 Value);


 #endif