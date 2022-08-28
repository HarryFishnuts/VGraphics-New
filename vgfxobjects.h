
/* ========== <vgfxobjects.h>					==========	*/
/* Bailey Jia-Tao Brown							2022		*/
/* User-side GFX object manipulation functions				*/

#ifndef _VGFX_RENDER_OBJECT_INCLUDE_
#define _VGFX_RENDER_OBJECT_INCLUDE_

/* ========== INCLUDES							==========	*/
#include "vgfx.h"


/* ========== LOGICAL OBJECTS					==========	*/
VGFXAPI v2V vGFXCreateVector2(float x, float y);
VGFXAPI vT2 vGFXCreateTransformF(float x, float y, float r, float s);
VGFXAPI vT2 vGFXCreateTransformV(v2V position, float r, float s);


/* ========== RENDER OBJECTS					==========	*/
VGFXAPI vPRenderObject vGFXCreateRenderObject(void);
VGFXAPI vPRenderObject vGFXCreateRenderObjectR(vRect rect);
VGFXAPI vPRenderObject vGFXCreateRenderObjectT(vRect rect, vPT2 transform);
VGFXAPI vPRenderObject vGFXCreateRenderObjectEx(vRect rect, vPT2 transform, vPTexture texture);
VGFXAPI void vGFXDestroyRenderObject(vPRenderObject object);


/* ========== TEXTURES							==========	*/
VGFXAPI void vGFXCreateTexture(vPTexture outTexture, vUI32 width, vUI32 height, 
	vPBYTE byteData);
VGFXAPI void vGFXCreateTextureSkinned(vPTexture outTexture, vUI32 tWidth, vUI32 tHeight,
	vUI16 skinCount, vPBYTE byteData);
VGFXAPI void vGFXCreateTexturePNG(vPTexture outTexture, vUI32 width, vUI32 height,
	vUI16 skinCount, PCHAR filePath);
VGFXAPI void vGFXDestroyTexture(vPTexture inTexture);


/* ========== RENDER JOBS						==========	*/
VGFXAPI void vGFXCreateRenderJob(vGFXPFRenderJob job, vPTR persistentData);

#endif
