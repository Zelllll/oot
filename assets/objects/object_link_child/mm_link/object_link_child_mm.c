#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_link_child_mm.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

// @TODO: Zel
#if 1
Gfx gLinkHumanSheathedKokiriSwordDL[] = {
    gsSPEndDisplayList(),
};
#endif

u64 gLinkHumanSkinTLUT[] = {
#include "assets/objects/object_link_child/mm_link/skin_tlut.rgba16.inc.c"
};

u64 gLinkHumanMouthTLUT[] = {
#include "assets/objects/object_link_child/mm_link/mouth_tlut.rgba16.inc.c"
};

u64 object_link_child_Tex_005400[] = {
#include "assets/objects/object_link_child/mm_link/tex_005400.rgba16.inc.c"
};

u64 object_link_child_Tex_005500[] = {
#include "assets/objects/object_link_child/mm_link/tex_005500.ci8.inc.c"
};

u64 object_link_child_Tex_005540[] = {
#include "assets/objects/object_link_child/mm_link/tex_005540.ci8.inc.c"
};

u64 gLinkHumanEarTex[] = {
#include "assets/objects/object_link_child/mm_link/ear.ci8.inc.c"
};

u64 gLinkHumanBeltClaspTex[] = {
#include "assets/objects/object_link_child/mm_link/belt_clasp.rgba16.inc.c"
};

u64 gLinkHumanBeltTex[] = {
#include "assets/objects/object_link_child/mm_link/belt.rgba16.inc.c"
};

u64 object_link_child_Tex_005C40[] = {
#include "assets/objects/object_link_child/mm_link/tex_005C40.i8.inc.c"
};

u64 object_link_child_Tex_005D40[] = {
#include "assets/objects/object_link_child/mm_link/tex_005D40.i8.inc.c"
};

u64 object_link_child_Tex_005D80[] = {
#include "assets/objects/object_link_child/mm_link/tex_005D80.i8.inc.c"
};

u64 object_link_child_Tex_005E00[] = {
#include "assets/objects/object_link_child/mm_link/tex_005E00.rgba16.inc.c"
};

u64 object_link_child_Tex_006200[] = {
#include "assets/objects/object_link_child/mm_link/tex_006200.rgba16.inc.c"
};

u64 object_link_child_Tex_006A00[] = {
#include "assets/objects/object_link_child/mm_link/tex_006A00.ci8.inc.c"
};

u64 object_link_child_Tex_006B00[] = {
#include "assets/objects/object_link_child/mm_link/tex_006B00.rgba16.inc.c"
};

u64 object_link_child_Tex_007700[] = {
#include "assets/objects/object_link_child/mm_link/tex_007700.rgba16.inc.c"
};

Vtx object_link_childVtx_007900[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_007900.vtx.inc"
};

Gfx gLinkHumanRightThighDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[80], 10, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[90], 21, 10),
    gsSP2Triangles(2, 3, 10, 0, 11, 4, 5, 0),
    gsSP2Triangles(12, 13, 6, 0, 14, 15, 7, 0),
    gsSP2Triangles(16, 8, 6, 0, 17, 3, 0, 0),
    gsSP2Triangles(4, 18, 19, 0, 6, 20, 21, 0),
    gsSP2Triangles(6, 7, 22, 0, 23, 9, 4, 0),
    gsSP2Triangles(5, 24, 25, 0, 26, 5, 2, 0),
    gsSP2Triangles(7, 9, 27, 0, 8, 28, 1, 0),
    gsSP1Triangle(0, 29, 30, 0),
    gsSPVertex(&object_link_childVtx_007900[111], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 3, 0, 3, 7, 5, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 7, 3, 0),
    gsSP1Triangle(6, 5, 8, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[120], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 1, 7, 3, 0),
    gsSP2Triangles(7, 8, 3, 0, 7, 6, 8, 0),
    gsSP2Triangles(6, 9, 8, 0, 5, 9, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanRightShinDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[35], 5, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[40], 15, 5),
    gsSP2Triangles(0, 1, 5, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 2, 0, 0, 9, 3, 2, 0),
    gsSP2Triangles(2, 10, 11, 0, 12, 1, 4, 0),
    gsSP2Triangles(13, 2, 14, 0, 3, 15, 16, 0),
    gsSP2Triangles(4, 3, 17, 0, 1, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005E00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[55], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 1, 0, 0, 4, 3, 6, 0),
    gsSP2Triangles(5, 7, 1, 0, 2, 8, 3, 0),
    gsSP2Triangles(9, 10, 3, 0, 11, 2, 4, 0),
    gsSP2Triangles(0, 2, 11, 0, 12, 7, 10, 0),
    gsSP2Triangles(10, 9, 12, 0, 12, 13, 7, 0),
    gsSP2Triangles(10, 6, 3, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 5, 10, 0, 5, 6, 10, 0),
    gsSP2Triangles(1, 14, 2, 0, 2, 14, 8, 0),
    gsSP2Triangles(7, 13, 1, 0, 14, 1, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[70], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 2, 4, 0, 3, 5, 6, 0),
    gsSP2Triangles(5, 3, 1, 0, 7, 4, 2, 0),
    gsSP2Triangles(8, 4, 7, 0, 6, 5, 8, 0),
    gsSP2Triangles(8, 9, 6, 0, 7, 9, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanRightFootDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_link_childVtx_007900, 5, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_006200, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[5], 19, 5),
    gsSP2Triangles(5, 0, 1, 0, 6, 7, 2, 0),
    gsSP2Triangles(2, 0, 8, 0, 1, 3, 9, 0),
    gsSP2Triangles(0, 10, 11, 0, 4, 2, 12, 0),
    gsSP2Triangles(13, 3, 4, 0, 14, 15, 2, 0),
    gsSP2Triangles(16, 17, 4, 0, 1, 18, 19, 0),
    gsSP2Triangles(4, 20, 21, 0, 22, 23, 1, 0),
    gsSPVertex(&object_link_childVtx_007900[24], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 6, 8, 0, 4, 3, 7, 0),
    gsSP2Triangles(3, 2, 7, 0, 9, 10, 6, 0),
    gsSP2Triangles(10, 9, 5, 0, 5, 4, 10, 0),
    gsSP2Triangles(6, 10, 4, 0, 7, 6, 4, 0),
    gsSP1Triangle(8, 7, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanLeftThighDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[210], 10, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[220], 21, 10),
    gsSP2Triangles(10, 5, 4, 0, 1, 0, 11, 0),
    gsSP2Triangles(3, 12, 13, 0, 6, 14, 15, 0),
    gsSP2Triangles(3, 2, 16, 0, 8, 5, 17, 0),
    gsSP2Triangles(18, 19, 0, 0, 20, 21, 3, 0),
    gsSP2Triangles(22, 6, 3, 0, 0, 7, 23, 0),
    gsSP2Triangles(24, 25, 1, 0, 4, 1, 26, 0),
    gsSP2Triangles(27, 7, 6, 0, 9, 28, 2, 0),
    gsSP1Triangle(29, 30, 8, 0),
    gsSPVertex(&object_link_childVtx_007900[241], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(2, 3, 0, 0, 4, 7, 3, 0),
    gsSP1Triangle(8, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[250], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 2, 5, 0, 4, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 7, 1, 0),
    gsSP2Triangles(3, 8, 7, 0, 8, 6, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 6, 9, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanLeftShinDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[165], 5, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[170], 15, 5),
    gsSP2Triangles(5, 0, 1, 0, 0, 6, 7, 0),
    gsSP2Triangles(1, 2, 8, 0, 2, 3, 9, 0),
    gsSP2Triangles(10, 11, 2, 0, 4, 0, 12, 0),
    gsSP2Triangles(13, 2, 14, 0, 15, 16, 3, 0),
    gsSP2Triangles(17, 3, 4, 0, 18, 19, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005E00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[185], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(2, 1, 5, 0, 6, 4, 3, 0),
    gsSP2Triangles(1, 7, 5, 0, 4, 8, 0, 0),
    gsSP2Triangles(4, 9, 10, 0, 3, 0, 11, 0),
    gsSP2Triangles(11, 0, 2, 0, 9, 7, 12, 0),
    gsSP2Triangles(12, 10, 9, 0, 7, 13, 12, 0),
    gsSP2Triangles(4, 6, 9, 0, 10, 8, 4, 0),
    gsSP2Triangles(9, 5, 7, 0, 9, 6, 5, 0),
    gsSP2Triangles(0, 14, 1, 0, 8, 14, 0, 0),
    gsSP2Triangles(1, 13, 7, 0, 13, 1, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[200], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 6, 3, 0),
    gsSP2Triangles(1, 3, 6, 0, 0, 4, 7, 0),
    gsSP2Triangles(7, 4, 8, 0, 8, 6, 5, 0),
    gsSP2Triangles(5, 9, 8, 0, 8, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanLeftFootDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[130], 5, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_006200, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[135], 19, 5),
    gsSP2Triangles(0, 5, 6, 0, 7, 8, 1, 0),
    gsSP2Triangles(9, 10, 0, 0, 1, 11, 12, 0),
    gsSP2Triangles(2, 13, 14, 0, 1, 3, 15, 0),
    gsSP2Triangles(16, 2, 1, 0, 17, 18, 4, 0),
    gsSP2Triangles(19, 3, 0, 0, 20, 4, 2, 0),
    gsSP2Triangles(2, 21, 22, 0, 0, 4, 23, 0),
    gsSPVertex(&object_link_childVtx_007900[154], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 5, 4, 0, 5, 3, 6, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 5, 7, 0),
    gsSP2Triangles(1, 0, 8, 0, 1, 8, 3, 0),
    gsSP2Triangles(2, 4, 7, 0, 2, 1, 4, 0),
    gsSP2Triangles(6, 3, 8, 0, 0, 9, 8, 0),
    gsSP1Triangle(0, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanWaistDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[260], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(2, 9, 12, 0, 9, 13, 12, 0),
    gsSP2Triangles(10, 14, 11, 0, 4, 15, 7, 0),
    gsSP2Triangles(6, 16, 3, 0, 17, 1, 0, 0),
    gsSP2Triangles(15, 17, 0, 0, 2, 12, 0, 0),
    gsSP2Triangles(0, 7, 15, 0, 11, 13, 9, 0),
    gsSP2Triangles(12, 13, 18, 0, 19, 8, 20, 0),
    gsSP2Triangles(20, 12, 18, 0, 20, 21, 19, 0),
    gsSP2Triangles(20, 22, 21, 0, 8, 19, 5, 0),
    gsSP1Triangle(18, 22, 20, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanBeltClaspTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[283], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 0, 0, 4, 5, 2, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanBeltTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[290], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(1, 4, 5, 0, 5, 2, 1, 0),
    gsSP2Triangles(5, 4, 6, 0, 6, 7, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 8, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanCollarDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D40, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[551], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 6, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 8, 10, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 13, 12, 0),
    gsSP2Triangles(12, 14, 16, 0, 4, 5, 17, 0),
    gsSP2Triangles(18, 19, 17, 0, 17, 19, 4, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanTorsoDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005C40, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[819], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 1, 14, 7, 0),
    gsSP2Triangles(4, 3, 15, 0, 10, 13, 8, 0),
    gsSP2Triangles(14, 9, 7, 0, 16, 6, 17, 0),
    gsSP2Triangles(16, 2, 6, 0, 18, 8, 19, 0),
    gsSP2Triangles(18, 5, 8, 0, 20, 21, 3, 0),
    gsSP2Triangles(20, 22, 21, 0, 0, 20, 3, 0),
    gsSP2Triangles(2, 7, 6, 0, 5, 18, 23, 0),
    gsSP2Triangles(2, 20, 0, 0, 2, 22, 20, 0),
    gsSP2Triangles(2, 16, 22, 0, 17, 6, 23, 0),
    gsSP2Triangles(6, 5, 23, 0, 7, 9, 5, 0),
    gsSP2Triangles(11, 15, 12, 0, 15, 11, 4, 0),
    gsSP2Triangles(8, 5, 9, 0, 10, 9, 14, 0),
    gsSP2Triangles(7, 2, 1, 0, 19, 8, 13, 0),
    gsSP2Triangles(13, 10, 11, 0, 24, 25, 13, 0),
    gsSP2Triangles(26, 16, 27, 0, 28, 29, 25, 0),
    gsSP2Triangles(29, 18, 19, 0, 30, 24, 31, 0),
    gsSP2Triangles(12, 31, 24, 0, 18, 29, 27, 0),
    gsSP1Triangle(23, 18, 17, 0),
    gsSPVertex(&object_link_childVtx_007900[851], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 1, 0, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 5, 12, 0),
    gsSP2Triangles(4, 7, 13, 0, 9, 14, 15, 0),
    gsSP2Triangles(10, 6, 8, 0, 4, 3, 16, 0),
    gsSP2Triangles(0, 12, 5, 0, 2, 13, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[868], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 1, 8, 0),
    gsSP2Triangles(2, 1, 7, 0, 2, 9, 0, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
    gsSP2Triangles(7, 13, 12, 0, 8, 13, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanBeltClaspTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[882], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(1, 4, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_006B00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[887], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanBeltTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[895], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 6, 1, 0, 0, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(8, 12, 13, 0, 8, 13, 14, 0),
    gsSP2Triangles(8, 14, 15, 0, 8, 10, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 19, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&object_link_childVtx_007900[926], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanHeadDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[338], 7, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[345], 15, 7),
    gsSP2Triangles(7, 3, 5, 0, 5, 8, 9, 0),
    gsSP2Triangles(3, 10, 11, 0, 12, 0, 1, 0),
    gsSP2Triangles(1, 13, 14, 0, 15, 16, 5, 0),
    gsSP2Triangles(6, 0, 17, 0, 18, 2, 4, 0),
    gsSP2Triangles(19, 20, 1, 0, 1, 2, 21, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[360], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 0, 5, 0, 5, 0, 6, 0),
    gsSP2Triangles(6, 0, 7, 0, 4, 1, 0, 0),
    gsSP2Triangles(8, 1, 4, 0, 6, 9, 5, 0),
    gsSP2Triangles(7, 10, 6, 0, 7, 0, 11, 0),
    gsSP2Triangles(0, 3, 11, 0, 4, 5, 12, 0),
    gsSP2Triangles(13, 12, 5, 0, 13, 5, 14, 0),
    gsSP2Triangles(5, 9, 14, 0, 15, 10, 7, 0),
    gsSP2Triangles(15, 7, 16, 0, 7, 17, 16, 0),
    gsSP2Triangles(17, 7, 11, 0, 11, 3, 18, 0),
    gsSP2Triangles(17, 11, 18, 0, 8, 4, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanMouthTLUT),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[379], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 1, 5, 3, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 6, 4, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[387], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(3, 1, 7, 0, 7, 8, 3, 0),
    gsSP2Triangles(8, 7, 5, 0, 9, 8, 5, 0),
    gsSP2Triangles(9, 5, 4, 0, 4, 10, 9, 0),
    gsSP2Triangles(4, 11, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 11, 13, 0, 13, 14, 10, 0),
    gsSP2Triangles(14, 9, 10, 0, 14, 8, 9, 0),
    gsSP2Triangles(15, 16, 12, 0, 11, 15, 12, 0),
    gsSP2Triangles(15, 11, 4, 0, 4, 17, 15, 0),
    gsSP2Triangles(17, 16, 15, 0, 17, 18, 16, 0),
    gsSP2Triangles(19, 16, 18, 0, 18, 20, 19, 0),
    gsSP2Triangles(6, 18, 17, 0, 6, 17, 4, 0),
    gsSP2Triangles(19, 20, 21, 0, 21, 20, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[409], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 8, 15, 6, 0),
    gsSP2Triangles(8, 16, 17, 0, 18, 16, 8, 0),
    gsSP2Triangles(16, 18, 19, 0, 8, 17, 20, 0),
    gsSP2Triangles(18, 8, 7, 0, 8, 20, 15, 0),
    gsSP2Triangles(15, 20, 21, 0, 22, 21, 23, 0),
    gsSP2Triangles(20, 24, 21, 0, 25, 23, 26, 0),
    gsSP2Triangles(21, 26, 23, 0, 24, 26, 21, 0),
    gsSP2Triangles(27, 15, 21, 0, 21, 22, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 2, 31, 0, 0),
    gsSPVertex(&object_link_childVtx_007900[441], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005400, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[447], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 10, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 16, 17, 15, 0),
    gsSP2Triangles(17, 16, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(25, 24, 17, 0, 24, 26, 17, 0),
    gsSP2Triangles(17, 26, 15, 0, 26, 27, 15, 0),
    gsSP2Triangles(27, 13, 15, 0, 13, 27, 28, 0),
    gsSP2Triangles(27, 26, 29, 0, 29, 28, 27, 0),
    gsSP2Triangles(30, 28, 31, 0, 29, 31, 28, 0),
    gsSPVertex(&object_link_childVtx_007900[479], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 8, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 14, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 21, 24, 0),
    gsSP2Triangles(25, 21, 23, 0, 23, 26, 25, 0),
    gsSP2Triangles(21, 25, 27, 0, 28, 27, 25, 0),
    gsSP2Triangles(28, 25, 26, 0, 28, 26, 29, 0),
    gsSP2Triangles(29, 26, 30, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_007900[511], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 4, 3, 0, 3, 6, 5, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 10, 9, 0, 12, 10, 11, 0),
    gsSP2Triangles(13, 12, 11, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 16, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP1Triangle(25, 26, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005540, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[538], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(gLinkHumanEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[541], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 7, 9, 8, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanHatDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[300], 6, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D80, G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[306], 20, 6),
    gsSP2Triangles(6, 7, 0, 0, 8, 3, 1, 0),
    gsSP2Triangles(9, 1, 0, 0, 10, 11, 2, 0),
    gsSP2Triangles(2, 3, 12, 0, 1, 13, 14, 0),
    gsSP2Triangles(15, 16, 3, 0, 4, 17, 18, 0),
    gsSP2Triangles(19, 20, 5, 0, 21, 4, 2, 0),
    gsSP2Triangles(2, 22, 23, 0, 0, 5, 24, 0),
    gsSP1Triangle(5, 4, 25, 0),
    gsSPVertex(&object_link_childVtx_007900[326], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 2, 0),
    gsSP2Triangles(4, 6, 0, 0, 8, 3, 0, 0),
    gsSP2Triangles(6, 1, 0, 0, 2, 8, 0, 0),
    gsSP2Triangles(9, 8, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 3, 8, 0, 9, 11, 4, 0),
    gsSP2Triangles(11, 5, 4, 0, 4, 3, 9, 0),
    gsSP1Triangle(7, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanRightShoulderDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[745], 6, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005C40, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[751], 18, 6),
    gsSP2Triangles(0, 1, 6, 0, 7, 2, 8, 0),
    gsSP2Triangles(9, 2, 0, 0, 3, 10, 11, 0),
    gsSP2Triangles(3, 12, 13, 0, 4, 14, 1, 0),
    gsSP2Triangles(15, 4, 3, 0, 16, 0, 17, 0),
    gsSP2Triangles(5, 2, 18, 0, 0, 19, 20, 0),
    gsSP2Triangles(21, 3, 5, 0, 22, 1, 23, 0),
    gsSPVertex(&object_link_childVtx_007900[769], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(2, 5, 6, 0, 1, 3, 7, 0),
    gsSP2Triangles(7, 5, 2, 0, 7, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[777], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 7, 0, 8, 9, 1, 0),
    gsSP2Triangles(9, 8, 4, 0, 3, 9, 4, 0),
    gsSP2Triangles(7, 5, 6, 0, 1, 0, 8, 0),
    gsSP2Triangles(5, 7, 3, 0, 2, 6, 0, 0),
    gsSP2Triangles(6, 5, 10, 0, 10, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D40, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[788], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanRightForearmDL[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[712], 5, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[717], 15, 5),
    gsSP2Triangles(5, 6, 0, 0, 7, 1, 8, 0),
    gsSP2Triangles(9, 2, 10, 0, 11, 12, 2, 0),
    gsSP2Triangles(1, 13, 14, 0, 0, 3, 15, 0),
    gsSP2Triangles(16, 3, 2, 0, 2, 4, 17, 0),
    gsSP2Triangles(1, 0, 18, 0, 19, 4, 1, 0),
    gsSPVertex(&object_link_childVtx_007900[732], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 2, 0, 2, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 10, 4, 0),
    gsSP2Triangles(11, 2, 1, 0, 2, 9, 0, 0),
    gsSP2Triangles(0, 9, 8, 0, 4, 3, 8, 0),
    gsSP2Triangles(6, 5, 12, 0, 12, 4, 10, 0),
    gsSP2Triangles(10, 7, 12, 0, 12, 5, 4, 0),
    gsSP2Triangles(12, 7, 6, 0, 5, 11, 3, 0),
    gsSP2Triangles(7, 10, 8, 0, 2, 11, 5, 0),
    gsSP1Triangle(7, 9, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanRightHandOpenDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_006A00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[681], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 0, 2, 0, 9, 6, 1, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 2, 6, 0),
    gsSP2Triangles(14, 10, 12, 0, 15, 10, 16, 0),
    gsSP2Triangles(17, 9, 18, 0, 19, 17, 18, 0),
    gsSP2Triangles(19, 13, 20, 0, 15, 11, 10, 0),
    gsSP2Triangles(13, 6, 20, 0, 19, 20, 5, 0),
    gsSP2Triangles(5, 7, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(20, 6, 9, 0, 0, 24, 9, 0),
    gsSP2Triangles(9, 24, 18, 0, 17, 3, 9, 0),
    gsSP2Triangles(19, 7, 25, 0, 20, 9, 3, 0),
    gsSP2Triangles(5, 20, 3, 0, 23, 26, 21, 0),
    gsSP2Triangles(4, 25, 7, 0, 27, 10, 14, 0),
    gsSP2Triangles(14, 16, 28, 0, 29, 28, 16, 0),
    gsSP2Triangles(27, 30, 29, 0, 28, 29, 30, 0),
    gsSP2Triangles(30, 27, 14, 0, 14, 28, 30, 0),
    gsSP2Triangles(29, 16, 10, 0, 10, 27, 29, 0),
    gsSP2Triangles(2, 13, 18, 0, 18, 13, 19, 0),
    gsSP2Triangles(25, 17, 19, 0, 1, 0, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanLeftShoulderDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[635], 6, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005C40, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[641], 18, 6),
    gsSP2Triangles(6, 4, 3, 0, 7, 5, 8, 0),
    gsSP2Triangles(3, 5, 9, 0, 10, 11, 0, 0),
    gsSP2Triangles(12, 13, 0, 0, 4, 14, 2, 0),
    gsSP2Triangles(0, 2, 15, 0, 16, 3, 17, 0),
    gsSP2Triangles(18, 5, 1, 0, 19, 20, 3, 0),
    gsSP2Triangles(1, 0, 21, 0, 22, 4, 23, 0),
    gsSPVertex(&object_link_childVtx_007900[659], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 0, 0, 7, 4, 1, 0),
    gsSP2Triangles(0, 6, 7, 0, 1, 0, 7, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[667], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 7, 0, 1, 8, 9, 0),
    gsSP2Triangles(4, 9, 8, 0, 4, 8, 5, 0),
    gsSP2Triangles(7, 3, 6, 0, 9, 2, 1, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsSP2Triangles(10, 3, 7, 0, 4, 3, 10, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 30, 105, 27, 255),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_005D40, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_007900[678], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanLeftForearmDL[] = {
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[602], 5, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_005500, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_007900[607], 15, 5),
    gsSP2Triangles(0, 5, 6, 0, 7, 1, 8, 0),
    gsSP2Triangles(9, 2, 10, 0, 2, 11, 12, 0),
    gsSP2Triangles(13, 14, 1, 0, 15, 3, 0, 0),
    gsSP2Triangles(2, 3, 16, 0, 17, 4, 2, 0),
    gsSP2Triangles(18, 0, 1, 0, 1, 4, 19, 0),
    gsSPVertex(&object_link_childVtx_007900[622], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 3, 0, 7, 6, 0, 0),
    gsSP2Triangles(7, 8, 9, 0, 4, 10, 9, 0),
    gsSP2Triangles(1, 0, 11, 0, 2, 8, 0, 0),
    gsSP2Triangles(9, 8, 2, 0, 9, 5, 4, 0),
    gsSP2Triangles(12, 3, 6, 0, 10, 4, 12, 0),
    gsSP2Triangles(12, 7, 10, 0, 4, 3, 12, 0),
    gsSP2Triangles(6, 7, 12, 0, 5, 11, 3, 0),
    gsSP2Triangles(9, 10, 7, 0, 3, 11, 0, 0),
    gsSP1Triangle(0, 8, 7, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanLeftHandOpenDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanSkinTLUT),
    gsDPLoadTextureBlock(object_link_child_Tex_006A00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[571], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 9, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 10, 13, 0),
    gsSP2Triangles(13, 9, 14, 0, 9, 13, 10, 0),
    gsSP2Triangles(12, 14, 9, 0, 14, 12, 15, 0),
    gsSP2Triangles(15, 11, 10, 0, 16, 5, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 0, 22, 0, 5, 16, 3, 0),
    gsSP2Triangles(0, 21, 4, 0, 7, 24, 0, 0),
    gsSP2Triangles(0, 24, 1, 0, 0, 25, 22, 0),
    gsSP2Triangles(20, 26, 18, 0, 3, 16, 23, 0),
    gsSP2Triangles(23, 22, 3, 0, 22, 25, 6, 0),
    gsSP2Triangles(11, 27, 28, 0, 22, 6, 3, 0),
    gsSP2Triangles(7, 4, 3, 0, 7, 0, 4, 0),
    gsSP2Triangles(12, 11, 28, 0, 29, 11, 15, 0),
    gsSP2Triangles(25, 8, 6, 0, 29, 27, 11, 0),
    gsSP2Triangles(2, 25, 0, 0, 8, 1, 30, 0),
    gsSP2Triangles(17, 23, 16, 0, 25, 2, 8, 0),
    gsSP2Triangles(23, 17, 21, 0, 8, 2, 1, 0),
    gsSPEndDisplayList(),
};

u64 object_link_child_TLUT_00DA80[] = {
#include "assets/objects/object_link_child/mm_link/tlut_00DA80.rgba16.inc.c"
};

u64 object_link_child_Tex_00DB08[] = {
#include "assets/objects/object_link_child/mm_link/tex_00DB08.ci8.inc.c"
};

Vtx object_link_childVtx_00DF68[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_00DF68.vtx.inc"
};

Gfx gLinkHumanLeftHandClosedDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_00DA80),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_00DF68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 10, 17, 18, 0),
    gsSP2Triangles(2, 19, 0, 0, 20, 12, 13, 0),
    gsSP2Triangles(17, 12, 21, 0, 22, 17, 23, 0),
    gsSP2Triangles(23, 17, 21, 0, 24, 25, 6, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(20, 21, 12, 0, 12, 30, 10, 0),
    gsSP2Triangles(30, 17, 10, 0, 12, 17, 30, 0),
    gsSP2Triangles(8, 24, 6, 0, 31, 24, 8, 0),
    gsSPVertex(&object_link_childVtx_00DF68[32], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_00E4D8[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_00E4D8.vtx.inc"
};

Gfx gLinkHumanRightHandClosedDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_link_child_Tex_00DB08, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_00DA80),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_00E4D8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 12, 0),
    gsSP2Triangles(2, 19, 0, 0, 13, 10, 20, 0),
    gsSP2Triangles(21, 10, 18, 0, 22, 18, 23, 0),
    gsSP2Triangles(21, 18, 22, 0, 8, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 26, 28, 0),
    gsSP2Triangles(10, 21, 20, 0, 12, 30, 10, 0),
    gsSP2Triangles(12, 18, 30, 0, 30, 18, 10, 0),
    gsSP2Triangles(8, 25, 6, 0, 6, 25, 31, 0),
    gsSPVertex(&object_link_childVtx_00E4D8[32], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_00E858[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_00E858.vtx.inc"
};

LodLimb gLinkHumanRootLimb = { 
    { 0, 2376, 0 }, LINK_HUMAN_LIMB_WAIST - 1, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkHumanWaistLimb = { 
    { -4, -104, 0 }, LINK_HUMAN_LIMB_LOWER_ROOT - 1, LINK_HUMAN_LIMB_UPPER_ROOT - 1,
    { gLinkHumanWaistDL, gLinkHumanWaistDL }
};

LodLimb gLinkHumanLowerRootLimb = { 
    { 607, 0, 0 }, LINK_HUMAN_LIMB_RIGHT_THIGH - 1, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkHumanRightThighLimb = { 
    { -172, 50, -190 }, LINK_HUMAN_LIMB_RIGHT_SHIN - 1, LINK_HUMAN_LIMB_LEFT_THIGH - 1,
    { gLinkHumanRightThighDL, gLinkHumanRightThighDL }
};

LodLimb gLinkHumanRightShinLimb = { 
    { 697, 0, 0 }, LINK_HUMAN_LIMB_RIGHT_FOOT - 1, LIMB_DONE,
    { gLinkHumanRightShinDL, gLinkHumanRightShinDL }
};

LodLimb gLinkHumanRightFootLimb = { 
    { 825, 5, 11 }, LIMB_DONE, LIMB_DONE,
    { gLinkHumanRightFootDL, gLinkHumanRightFootDL }
};

LodLimb gLinkHumanLeftThighLimb = { 
    { -170, 57, 192 }, LINK_HUMAN_LIMB_LEFT_SHIN - 1, LIMB_DONE,
    { gLinkHumanLeftThighDL, gLinkHumanLeftThighDL }
};

LodLimb gLinkHumanLeftShinLimb = { 
    { 695, 0, 0 }, LINK_HUMAN_LIMB_LEFT_FOOT - 1, LIMB_DONE,
    { gLinkHumanLeftShinDL, gLinkHumanLeftShinDL }
};

LodLimb gLinkHumanLeftFootLimb = { 
    { 817, 8, 4 }, LIMB_DONE, LIMB_DONE,
    { gLinkHumanLeftFootDL, gLinkHumanLeftFootDL }
};

LodLimb gLinkHumanUpperRootLimb = { 
    { 0, -103, -7 }, LINK_HUMAN_LIMB_HEAD - 1, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkHumanHeadLimb = { 
    { 996, -201, -1 }, LINK_HUMAN_LIMB_HAT - 1, LINK_HUMAN_LIMB_COLLAR - 1,
    { gLinkHumanHeadDL, gLinkHumanHeadDL }
};

LodLimb gLinkHumanHatLimb = { 
    { -365, -670, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkHumanHatDL, gLinkHumanHatDL }
};

LodLimb gLinkHumanCollarLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LINK_HUMAN_LIMB_LEFT_SHOULDER - 1,
    { gLinkHumanCollarDL, gLinkHumanCollarDL }
};

LodLimb gLinkHumanLeftShoulderLimb = { 
    { 696, -175, 466 }, LINK_HUMAN_LIMB_LEFT_FOREARM - 1, LINK_HUMAN_LIMB_RIGHT_SHOULDER - 1,
    { gLinkHumanLeftShoulderDL, gLinkHumanLeftShoulderDL }
};

LodLimb gLinkHumanLeftForearmLimb = { 
    { 581, 0, 0 }, LINK_HUMAN_LIMB_LEFT_HAND - 1, LIMB_DONE,
    { gLinkHumanLeftForearmDL, gLinkHumanLeftForearmDL }
};

LodLimb gLinkHumanLeftHandLimb = { 
    { 514, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkHumanLeftHandOpenDL, gLinkHumanLeftHandOpenDL }
};

LodLimb gLinkHumanRightShoulderLimb = { 
    { 696, -175, -466 }, LINK_HUMAN_LIMB_RIGHT_FOREARM - 1, LINK_HUMAN_LIMB_SHEATH - 1,
    { gLinkHumanRightShoulderDL, gLinkHumanRightShoulderDL }
};

LodLimb gLinkHumanRightForearmLimb = { 
    { 577, 0, 0 }, LINK_HUMAN_LIMB_RIGHT_HAND - 1, LIMB_DONE,
    { gLinkHumanRightForearmDL, gLinkHumanRightForearmDL }
};

LodLimb gLinkHumanRightHandLimb = { 
    { 525, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkHumanRightHandOpenDL, gLinkHumanRightHandOpenDL }
};

LodLimb gLinkHumanSheathLimb = { 
    { 657, -550, 367 }, LIMB_DONE, LINK_HUMAN_LIMB_TORSO - 1,
    { gLinkHumanSheathedKokiriSwordDL, gLinkHumanSheathedKokiriSwordDL }
};

LodLimb gLinkHumanTorsoLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkHumanTorsoDL, gLinkHumanTorsoDL }
};

void* gLinkHumanSkelLimbs[] = {
    &gLinkHumanRootLimb, /* LINK_HUMAN_LIMB_ROOT */
    &gLinkHumanWaistLimb, /* LINK_HUMAN_LIMB_WAIST */
    &gLinkHumanLowerRootLimb, /* LINK_HUMAN_LIMB_LOWER_ROOT */
    &gLinkHumanRightThighLimb, /* LINK_HUMAN_LIMB_RIGHT_THIGH */
    &gLinkHumanRightShinLimb, /* LINK_HUMAN_LIMB_RIGHT_SHIN */
    &gLinkHumanRightFootLimb, /* LINK_HUMAN_LIMB_RIGHT_FOOT */
    &gLinkHumanLeftThighLimb, /* LINK_HUMAN_LIMB_LEFT_THIGH */
    &gLinkHumanLeftShinLimb, /* LINK_HUMAN_LIMB_LEFT_SHIN */
    &gLinkHumanLeftFootLimb, /* LINK_HUMAN_LIMB_LEFT_FOOT */
    &gLinkHumanUpperRootLimb, /* LINK_HUMAN_LIMB_UPPER_ROOT */
    &gLinkHumanHeadLimb, /* LINK_HUMAN_LIMB_HEAD */
    &gLinkHumanHatLimb, /* LINK_HUMAN_LIMB_HAT */
    &gLinkHumanCollarLimb, /* LINK_HUMAN_LIMB_COLLAR */
    &gLinkHumanLeftShoulderLimb, /* LINK_HUMAN_LIMB_LEFT_SHOULDER */
    &gLinkHumanLeftForearmLimb, /* LINK_HUMAN_LIMB_LEFT_FOREARM */
    &gLinkHumanLeftHandLimb, /* LINK_HUMAN_LIMB_LEFT_HAND */
    &gLinkHumanRightShoulderLimb, /* LINK_HUMAN_LIMB_RIGHT_SHOULDER */
    &gLinkHumanRightForearmLimb, /* LINK_HUMAN_LIMB_RIGHT_FOREARM */
    &gLinkHumanRightHandLimb, /* LINK_HUMAN_LIMB_RIGHT_HAND */
    &gLinkHumanSheathLimb, /* LINK_HUMAN_LIMB_SHEATH */
    &gLinkHumanTorsoLimb, /* LINK_HUMAN_LIMB_TORSO */
};

FlexSkeletonHeader gLinkHumanSkel = { 
    { gLinkHumanSkelLimbs, ARRAY_COUNT(gLinkHumanSkelLimbs) }, 18
};

