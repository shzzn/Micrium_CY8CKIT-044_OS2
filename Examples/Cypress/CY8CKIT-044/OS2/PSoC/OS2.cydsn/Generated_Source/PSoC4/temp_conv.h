/*******************************************************************************
* File Name: temp_conv.h  
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

#if !defined(CY_PINS_temp_conv_H) /* Pins temp_conv_H */
#define CY_PINS_temp_conv_H

#include "cytypes.h"
#include "cyfitter.h"
#include "temp_conv_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    temp_conv_Write(uint8 value) ;
void    temp_conv_SetDriveMode(uint8 mode) ;
uint8   temp_conv_ReadDataReg(void) ;
uint8   temp_conv_Read(void) ;
uint8   temp_conv_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define temp_conv_DRIVE_MODE_BITS        (3)
#define temp_conv_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - temp_conv_DRIVE_MODE_BITS))

#define temp_conv_DM_ALG_HIZ         (0x00u)
#define temp_conv_DM_DIG_HIZ         (0x01u)
#define temp_conv_DM_RES_UP          (0x02u)
#define temp_conv_DM_RES_DWN         (0x03u)
#define temp_conv_DM_OD_LO           (0x04u)
#define temp_conv_DM_OD_HI           (0x05u)
#define temp_conv_DM_STRONG          (0x06u)
#define temp_conv_DM_RES_UPDWN       (0x07u)

/* Digital Port Constants */
#define temp_conv_MASK               temp_conv__MASK
#define temp_conv_SHIFT              temp_conv__SHIFT
#define temp_conv_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define temp_conv_PS                     (* (reg32 *) temp_conv__PS)
/* Port Configuration */
#define temp_conv_PC                     (* (reg32 *) temp_conv__PC)
/* Data Register */
#define temp_conv_DR                     (* (reg32 *) temp_conv__DR)
/* Input Buffer Disable Override */
#define temp_conv_INP_DIS                (* (reg32 *) temp_conv__PC2)


#if defined(temp_conv__INTSTAT)  /* Interrupt Registers */

    #define temp_conv_INTSTAT                (* (reg32 *) temp_conv__INTSTAT)

#endif /* Interrupt Registers */


/***************************************
* The following code is DEPRECATED and 
* must not be used.
***************************************/

#define temp_conv_DRIVE_MODE_SHIFT       (0x00u)
#define temp_conv_DRIVE_MODE_MASK        (0x07u << temp_conv_DRIVE_MODE_SHIFT)


#endif /* End Pins temp_conv_H */


/* [] END OF FILE */
