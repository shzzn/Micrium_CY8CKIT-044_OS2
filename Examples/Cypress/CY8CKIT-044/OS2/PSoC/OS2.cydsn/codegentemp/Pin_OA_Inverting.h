/*******************************************************************************
* File Name: Pin_OA_Inverting.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Pin_OA_Inverting_H) /* Pins Pin_OA_Inverting_H */
#define CY_PINS_Pin_OA_Inverting_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Pin_OA_Inverting_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Pin_OA_Inverting_Write(uint8 value) ;
void    Pin_OA_Inverting_SetDriveMode(uint8 mode) ;
uint8   Pin_OA_Inverting_ReadDataReg(void) ;
uint8   Pin_OA_Inverting_Read(void) ;
uint8   Pin_OA_Inverting_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Pin_OA_Inverting_DRIVE_MODE_BITS        (3)
#define Pin_OA_Inverting_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Pin_OA_Inverting_DRIVE_MODE_BITS))

#define Pin_OA_Inverting_DM_ALG_HIZ         (0x00u)
#define Pin_OA_Inverting_DM_DIG_HIZ         (0x01u)
#define Pin_OA_Inverting_DM_RES_UP          (0x02u)
#define Pin_OA_Inverting_DM_RES_DWN         (0x03u)
#define Pin_OA_Inverting_DM_OD_LO           (0x04u)
#define Pin_OA_Inverting_DM_OD_HI           (0x05u)
#define Pin_OA_Inverting_DM_STRONG          (0x06u)
#define Pin_OA_Inverting_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define Pin_OA_Inverting_MASK               Pin_OA_Inverting__MASK
#define Pin_OA_Inverting_SHIFT              Pin_OA_Inverting__SHIFT
#define Pin_OA_Inverting_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Pin_OA_Inverting_PS                     (* (reg32 *) Pin_OA_Inverting__PS)
/* Port Configuration */
#define Pin_OA_Inverting_PC                     (* (reg32 *) Pin_OA_Inverting__PC)
/* Data Register */
#define Pin_OA_Inverting_DR                     (* (reg32 *) Pin_OA_Inverting__DR)
/* Input Buffer Disable Override */
#define Pin_OA_Inverting_INP_DIS                (* (reg32 *) Pin_OA_Inverting__PC2)


#if defined(Pin_OA_Inverting__INTSTAT)  /* Interrupt Registers */

    #define Pin_OA_Inverting_INTSTAT                (* (reg32 *) Pin_OA_Inverting__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define Pin_OA_Inverting_DRIVE_MODE_SHIFT       (0x00u)
#define Pin_OA_Inverting_DRIVE_MODE_MASK        (0x07u << Pin_OA_Inverting_DRIVE_MODE_SHIFT)


#endif /* End Pins Pin_OA_Inverting_H */


/* [] END OF FILE */
