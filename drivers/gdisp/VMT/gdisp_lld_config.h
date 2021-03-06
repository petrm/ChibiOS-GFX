/*
    ChibiOS/RT - Copyright (C) 2012
                 Joel Bodenmann aka Tectu <joel@unormal.org>

    This file is part of ChibiOS-LCD-Driver.

    ChibiOS-LCD-Driver is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS-LCD-Driver is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @file    gdispVMT/gdisp_lld_config.h
 * @brief   GDISP Graphic Driver subsystem low level driver header template.
 *
 * @addtogroup GDISP
 * @{
 */

#ifndef _GDISP_LLD_CONFIG_H
#define _GDISP_LLD_CONFIG_H

#if HAL_USE_GDISP

/*===========================================================================*/
/* Driver hardware support.                                                  */
/*===========================================================================*/

#define GDISP_DRIVER_NAME				"VMT"
#define GDISP_LLD(x)					gdisp_lld_##x##_VMT
#define GDISP_LLD_VMT(x)				(*GDISP_LLD(x))

#define GDISP_HARDWARE_LINES			TRUE
#define GDISP_HARDWARE_CLEARS			TRUE
#define GDISP_HARDWARE_FILLS			TRUE
#define GDISP_HARDWARE_BITFILLS			TRUE
#define GDISP_HARDWARE_CIRCLES			TRUE
#define GDISP_HARDWARE_CIRCLEFILLS		TRUE
#define GDISP_HARDWARE_ELLIPSES			TRUE
#define GDISP_HARDWARE_ELLIPSEFILLS		TRUE
#define GDISP_HARDWARE_ARCS				TRUE
#define GDISP_HARDWARE_ARCFILLS			TRUE
#define GDISP_HARDWARE_TEXT				TRUE
#define GDISP_HARDWARE_TEXTFILLS		TRUE
#define GDISP_HARDWARE_SCROLL			TRUE
#define GDISP_HARDWARE_PIXELREAD		TRUE
#define GDISP_HARDWARE_CONTROL			TRUE
#define GDISP_HARDWARE_QUERY			TRUE
#define GDISP_HARDWARE_CLIP				TRUE

#define GDISP_SOFTWARE_TEXTFILLDRAW		FALSE
#define GDISP_SOFTWARE_TEXTBLITCOLUMN	FALSE

#define GDISP_PIXELFORMAT				GDISP_PIXELFORMAT_RGB565
#define GDISP_PACKED_PIXELS				FALSE
#define GDISP_PACKED_LINES				FALSE

#endif	/* HAL_USE_GDISP */

#endif	/* _GDISP_LLD_CONFIG_H */
/** @} */
