////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <tinyhal.h>

//--//

BOOL LCD_Controller_Initialize( DISPLAY_CONTROLLER_CONFIG& config )
{
    return FALSE;
}

BOOL LCD_Controller_Uninitialize()
{
    return TRUE;
}

BOOL LCD_Controller_Enable( BOOL fEnable )
{
    return TRUE;
}

// this is used in Touch Panel PAL driver
UINT32* LCD_GetFrameBuffer()
{
    return NULL;
}


