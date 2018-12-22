/*******************************************************************************
* File Name: temp_raw.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "temp_raw.h"

#define SetP4PinDriveMode(shift, mode)  \
    do { \
        temp_raw_PC =   (temp_raw_PC & \
                                (uint32)(~(uint32)(temp_raw_DRIVE_MODE_IND_MASK << (temp_raw_DRIVE_MODE_BITS * (shift))))) | \
                                (uint32)((uint32)(mode) << (temp_raw_DRIVE_MODE_BITS * (shift))); \
    } while (0)


/*******************************************************************************
* Function Name: temp_raw_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None 
*  
*******************************************************************************/
void temp_raw_Write(uint8 value) 
{
    uint8 drVal = (uint8)(temp_raw_DR & (uint8)(~temp_raw_MASK));
    drVal = (drVal | ((uint8)(value << temp_raw_SHIFT) & temp_raw_MASK));
    temp_raw_DR = (uint32)drVal;
}


/*******************************************************************************
* Function Name: temp_raw_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  temp_raw_DM_STRONG     Strong Drive 
*  temp_raw_DM_OD_HI      Open Drain, Drives High 
*  temp_raw_DM_OD_LO      Open Drain, Drives Low 
*  temp_raw_DM_RES_UP     Resistive Pull Up 
*  temp_raw_DM_RES_DWN    Resistive Pull Down 
*  temp_raw_DM_RES_UPDWN  Resistive Pull Up/Down 
*  temp_raw_DM_DIG_HIZ    High Impedance Digital 
*  temp_raw_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void temp_raw_SetDriveMode(uint8 mode) 
{
	SetP4PinDriveMode(temp_raw__0__SHIFT, mode);
}


/*******************************************************************************
* Function Name: temp_raw_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro temp_raw_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 temp_raw_Read(void) 
{
    return (uint8)((temp_raw_PS & temp_raw_MASK) >> temp_raw_SHIFT);
}


/*******************************************************************************
* Function Name: temp_raw_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 temp_raw_ReadDataReg(void) 
{
    return (uint8)((temp_raw_DR & temp_raw_MASK) >> temp_raw_SHIFT);
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(temp_raw_INTSTAT) 

    /*******************************************************************************
    * Function Name: temp_raw_ClearInterrupt
    ********************************************************************************
    *
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 temp_raw_ClearInterrupt(void) 
    {
		uint8 maskedStatus = (uint8)(temp_raw_INTSTAT & temp_raw_MASK);
		temp_raw_INTSTAT = maskedStatus;
        return maskedStatus >> temp_raw_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 


/* [] END OF FILE */
