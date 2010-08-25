////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <tinyhal.h>

//--//
struct I2C_CONFIGURATION; 

BOOL I2C_Internal_Initialize()
{
    return FALSE;
}

BOOL I2C_Internal_Uninitialize()
{
    return FALSE;
}

void I2C_Internal_XActionStart( I2C_HAL_XACTION* xAction, bool repeatedStart )
{
}

void I2C_Internal_XActionStop()
{
}

UINT8 I2C_Internal_GetClockRate( UINT32 rateKhz )
{
    return 0;
}

void I2C_Internal_GetPins( GPIO_PIN& scl, GPIO_PIN& sda )
{
    scl = GPIO_PIN_NONE;
    sda = GPIO_PIN_NONE;
}

