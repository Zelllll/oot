#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "../object_link_child.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

u64 gLinkChildGoronBraceletTex[] = {
#include "assets/objects/object_link_child/common/goron_bracelet.rgba16.inc.c"
};

u64 gLinkChildGoronSymbolTex[] = {
#include "assets/objects/object_link_child/common/goron_symbol.ia16.inc.c"
};

Vtx gLinkChildGoronBraceletVtx0[41] = {
	VTX(442, -80, -91, -3398, -2327, 32, 165, 173, 255),
	VTX(454, -118, 42, -3431, -2311, 33, 140, 41, 255),
	VTX(293, -163, 47, -3526, -2433, 33, 144, 50, 255),
	VTX(442, -80, -91, -3398, -2327, 32, 165, 173, 255),
	VTX(293, -163, 47, -3526, -2433, 33, 144, 50, 255),
	VTX(303, -85, -126, -3448, -2437, 31, 211, 141, 255),
	VTX(293, 183, 47, -3194, -2488, 34, 99, 72, 255),
	VTX(229, 168, 79, -3228, -2537, 30, 78, 95, 255),
	VTX(263, 82, 140, -3300, -2496, 31, 73, 99, 255),
	VTX(442, 100, -91, -3226, -2355, 31, 49, 143, 255),
	VTX(442, -80, -91, -3398, -2327, 32, 165, 173, 255),
	VTX(303, -85, -126, -3448, -2437, 31, 211, 141, 255),
	VTX(442, 100, -91, -3226, -2355, 31, 49, 143, 255),
	VTX(303, -85, -126, -3448, -2437, 31, 211, 141, 255),
	VTX(303, 105, -126, -3265, -2467, 30, 92, 174, 255),
	VTX(263, -62, 140, -3438, -2473, 31, 183, 99, 255),
	VTX(229, -148, 79, -3532, -2486, 30, 178, 95, 255),
	VTX(293, -163, 47, -3526, -2433, 33, 144, 50, 255),
	VTX(454, 138, 42, -3185, -2352, 26, 124, 7, 255),
	VTX(442, 100, -91, -3226, -2355, 31, 49, 143, 255),
	VTX(454, 138, 42, -3185, -2352, 26, 124, 7, 255),
	VTX(303, 105, -126, -3265, -2467, 30, 92, 174, 255),
	VTX(293, 183, 47, -3194, -2488, 34, 99, 72, 255),
	VTX(459, 10, 127, -3306, -2327, 35, 0, 122, 255),
	VTX(222, 10, 195, -3382, -2517, 35, 0, 122, 255),
	VTX(263, -62, 140, -3438, -2473, 31, 183, 99, 255),
	VTX(263, 82, 140, -3300, -2496, 31, 73, 99, 255),
	VTX(222, 10, 195, -3382, -2517, 35, 0, 122, 255),
	VTX(459, 10, 127, -3306, -2327, 35, 0, 122, 255),
	VTX(459, 10, 127, -3306, -2327, 35, 0, 122, 255),
	VTX(454, 138, 42, -3185, -2352, 26, 124, 7, 255),
	VTX(293, 183, 47, -3194, -2488, 34, 99, 72, 255),
	VTX(459, 10, 127, -3306, -2327, 35, 0, 122, 255),
	VTX(293, 183, 47, -3194, -2488, 34, 99, 72, 255),
	VTX(263, 82, 140, -3300, -2496, 31, 73, 99, 255),
	VTX(454, -118, 42, -3431, -2311, 33, 140, 41, 255),
	VTX(459, 10, 127, -3306, -2327, 35, 0, 122, 255),
	VTX(293, -163, 47, -3526, -2433, 33, 144, 50, 255),
	VTX(293, -163, 47, -3526, -2433, 33, 144, 50, 255),
	VTX(459, 10, 127, -3306, -2327, 35, 0, 122, 255),
	VTX(263, -62, 140, -3438, -2473, 31, 183, 99, 255),
};

Vtx gLinkChildGoronBraceletVtx1[12] = {
	VTX(459, 10, 127, 512, 1024, 35, 0, 122, 255),
	VTX(293, 183, 47, -467, 234, 34, 99, 72, 255),
	VTX(263, 82, 140, 128, 140, 31, 73, 99, 255),
	VTX(263, 82, 140, 128, 140, 31, 73, 99, 255),
	VTX(222, 10, 195, 512, 0, 35, 0, 122, 255),
	VTX(459, 10, 127, 512, 1024, 35, 0, 122, 255),
	VTX(459, 10, 127, 512, 1024, 35, 0, 122, 255),
	VTX(222, 10, 195, 516, -2, 35, 0, 122, 255),
	VTX(263, -62, 140, 129, 146, 31, 183, 99, 255),
	VTX(293, -163, 47, -470, 252, 33, 144, 50, 255),
	VTX(459, 10, 127, 512, 1024, 35, 0, 122, 255),
	VTX(263, -62, 140, 129, 146, 31, 183, 99, 255),
};

Gfx gLinkChildGoronBraceletDL[] = {
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(300, 400, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gLinkChildGoronBraceletTex),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 63, 1024),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, G_TX_WRAP | G_TX_MIRROR, 3, 15, G_TX_WRAP | G_TX_MIRROR, 3, 0),
	gsDPSetTileSize(0, 0, 0, 28, 28),
	gsSPVertex(gLinkChildGoronBraceletVtx0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 19, 14, 0, 20, 21, 22, 0),
	gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
	gsSP1Triangle(29, 30, 31, 0),
	gsSPVertex(gLinkChildGoronBraceletVtx0 + 32, 9, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_XLU_DECAL2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gLinkChildGoronSymbolTex),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsSPVertex(gLinkChildGoronBraceletVtx1 + 0, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSPEndDisplayList(),
};
