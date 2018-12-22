/*******************************************************************************
* File Name: temp_raw.h  
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

#if !defined(CY_PINS_temp_raw_H) /* Pins temp_raw_H */
#define CY_PINS_temp_raw_H

#include "cytypes.h"
#include "cyfitter.h"
#include "temp_raw_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    temp_raw_Write(uint8 value) ;
void    temp_raw_SetDriveMode(uint8 mode) ;
uint8   temp_raw_ReadDataReg(void) ;
uint8   temp_raw_Read(void) ;
uint8   temp_raw_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define temp_raw_DRIVE_MODE_BITS        (3)
#define temp_raw_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - temp_raw_DRIVE_MODE_BITS))

#define temp_raw_DM_ALG_HIZ         (0x00u)
#define temp_raw_DM_DIG_HIZ         (0x01u)
#define temp_raw_DM_RES_UP          (0x02u)
#define temp_raw_DM_RES_DWN         (0x03u)
#define temp_raw_DM_OD_LO           (0x04u)
#define temp_raw_DM_OD_HI           (0x05u)
#define temp_raw_DM_STRONG          (0x06u)
#define temp_raw_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define temp_raw_MASK               temp_raw__MASK
#define temp_raw_SHIFT              temp_raw__SHIFT
#define temp_raw_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define temp_raw_PS                     (* (reg32 *) temp_raw__PS)
/* Port Configuration */
#define temp_raw_PC                     (* (reg32 *) temp_raw__PC)
/* Data Register */
#define temp_raw_DR                     (* (reg32 *) temp_raw__DR)
/* Input Buffer Disable Override */
#define temp_raw_INP_DIS                (* (reg32 *) temp_raw__PC2)


#if defined(temp_raw__INTSTAT)  /* Interrupt Registers */

    #define temp_raw_INTSTAT                (* (reg32 *) temp_raw__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define temp_raw_DRIVE_MODE_SHIFT       (0x00u)
#define temp_raw_DRIVE_MODE_MASK        (0x07u << temp_raw_DRIVE_MODE_SHIFT)


#endif /* End Pins temp_raw_H */


/* [] END OF FILE */
