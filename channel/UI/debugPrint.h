/*---------------------------------------------------------------------------*
 * Author  : Star
 * Date    : 18 Jul 2021
 * File    : debugPrint.h
 * Version : 1.0.0.0
 *---------------------------------------------------------------------------*/

#ifndef __DEBUGPRINT_H__
#define __DEBUGPRINT_H__

#ifdef __cplusplus
extern "C"
{
#endif

//! Typedefs
typedef struct GXColor_t
{
    unsigned char r; // The red   component of the colour
    unsigned char g; // The green component of the colour
    unsigned char b; // The blue  component of the colour
    unsigned char a; // The alpha component of the colour
} GXColor;

//! Definitions
#define FOREGROUND_COLOUR 0xEB7FEB7F // White
#define BACKGROUND_COLOUR 0x10801080 // Black

//! Function Prototype Declarations

//! Public Functions
void DebugPrint_Init(void* xfb, unsigned short xfbWidth, unsigned short xfbHeight);
int  DebugPrint_Printf(int iCurrentRow, int iCurrentColumn, const char* pFormatString, ...);

void DebugPrint_SetForegroundColour(GXColor gxColor);
void DebugPrint_SetBackgroundColour(GXColor gxColor);

#ifdef __cplusplus
}
#endif

#endif // __DEBUGPRINT_H__