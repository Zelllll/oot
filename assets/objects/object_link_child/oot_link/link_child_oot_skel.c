#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "../object_link_child.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

u64 gLinkChildNoseTex[] = {
#include "assets/objects/object_link_child/nose.ci8.inc.c"
};

u64 gLinkChildEarTex[] = {
#include "assets/objects/object_link_child/ear.ci8.inc.c"
};

u64 gLinkChildBeltTLUT[] = {
#include "assets/objects/object_link_child/belt_tlut.rgba16.inc.c"
};

u64 gLinkChildSkinTLUT[] = {
#include "assets/objects/object_link_child/skin_tlut.rgba16.inc.c"
};

u64 gLinkChildLowerBootTex[] = {
#include "assets/objects/object_link_child/lower_boot.ci8.inc.c"
};

u64 gLinkChildBootTex[] = {
#include "assets/objects/object_link_child/boot.ci8.inc.c"
};

u64 gLinkChildWaistTex[] = {
#include "assets/objects/object_link_child/waist.i8.inc.c"
};

u64 gLinkChildBeltTex[] = {
#include "assets/objects/object_link_child/belt.ci8.inc.c"
};

u64 gLinkChildBeltClaspTex[] = {
#include "assets/objects/object_link_child/belt_clasp.ci8.inc.c"
};

Vtx object_link_childVtx_01F528[] = {
#include "assets/objects/object_link_child/oot_link/object_link_childVtx_01F528.vtx.inc"
};

Vtx object_link_childVtx_01EDA8[] = {
#include "assets/objects/object_link_child/oot_link/object_link_childVtx_01EDA8.vtx.inc"
};

Vtx object_link_childVtx_01C978[] = {
#include "assets/objects/object_link_child/oot_link/object_link_childVtx_01C978.vtx.inc"
};

Vtx object_link_childVtx_01FE08[] = {
#include "assets/objects/object_link_child/oot_link/object_link_childVtx_01FE08.vtx.inc"
};

Gfx gLinkChildWaistNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildWaistTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[267], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 8, 9, 6, 0),
    gsSP2Triangles(1, 10, 6, 0, 5, 11, 3, 0),
    gsSP2Triangles(11, 7, 3, 0, 12, 13, 14, 0),
    gsSP2Triangles(9, 15, 16, 0, 17, 5, 4, 0),
    gsSP2Triangles(18, 19, 0, 0, 2, 1, 6, 0),
    gsSP2Triangles(20, 2, 6, 0, 16, 21, 22, 0),
    gsSP2Triangles(16, 22, 9, 0, 8, 15, 9, 0),
    gsSP2Triangles(2, 18, 0, 0, 17, 4, 22, 0),
    gsSP2Triangles(17, 22, 21, 0, 14, 17, 21, 0),
    gsSP2Triangles(14, 21, 12, 0, 6, 10, 8, 0),
    gsSPVertex(&object_link_childVtx_01C978[290], 19, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBeltTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(4, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(8, 4, 3, 0, 5, 13, 3, 0),
    gsSP2Triangles(11, 10, 3, 0, 9, 5, 4, 0),
    gsSP2Triangles(12, 14, 10, 0, 3, 10, 14, 0),
    gsSP1Triangle(3, 13, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBeltClaspTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[84], 10, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildWaistTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[94], 19, 10),
    gsSP2Triangles(9, 10, 11, 0, 5, 12, 8, 0),
    gsSP2Triangles(13, 3, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(16, 1, 2, 0, 17, 2, 7, 0),
    gsSP2Triangles(0, 1, 18, 0, 0, 19, 20, 0),
    gsSP2Triangles(21, 4, 0, 0, 6, 3, 22, 0),
    gsSP2Triangles(6, 23, 24, 0, 25, 5, 6, 0),
    gsSP2Triangles(0, 26, 27, 0, 28, 7, 9, 0),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[113], 2, 10),
    gsSP1Triangle(6, 10, 11, 0),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[115], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 3, 0, 6, 5, 1, 0),
    gsSP1Triangle(6, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 9, 12, 0, 10, 14, 15, 0),
    gsSP2Triangles(15, 16, 10, 0, 10, 16, 11, 0),
    gsSP2Triangles(17, 18, 15, 0, 14, 17, 15, 0),
    gsSP2Triangles(13, 12, 18, 0, 17, 13, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightShinNearDL[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[36], 5, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[41], 15, 5),
    gsSP2Triangles(5, 0, 6, 0, 7, 1, 3, 0),
    gsSP2Triangles(0, 8, 9, 0, 0, 10, 2, 0),
    gsSP2Triangles(1, 11, 12, 0, 3, 2, 13, 0),
    gsSP2Triangles(2, 14, 15, 0, 16, 0, 4, 0),
    gsSP2Triangles(17, 18, 1, 0, 4, 1, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_link_childVtx_01C978[56], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 0, 5, 0, 1, 0, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 8, 7, 9, 0),
    gsSP2Triangles(12, 2, 3, 0, 8, 11, 12, 0),
    gsSP2Triangles(12, 3, 8, 0, 13, 4, 14, 0),
    gsSP2Triangles(14, 4, 15, 0, 11, 8, 9, 0),
    gsSP2Triangles(4, 5, 16, 0, 6, 3, 1, 0),
    gsSP2Triangles(17, 9, 7, 0, 6, 1, 13, 0),
    gsSP2Triangles(4, 16, 15, 0, 13, 1, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 22, 0),
    gsSP2Triangles(24, 27, 22, 0, 26, 19, 18, 0),
    gsSP2Triangles(19, 26, 25, 0, 24, 23, 20, 0),
    gsSP2Triangles(22, 27, 25, 0, 21, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightFootNearDL[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01C978, 5, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildLowerBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[5], 19, 5),
    gsSP2Triangles(5, 0, 4, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 1, 0, 0, 4, 3, 9, 0),
    gsSP2Triangles(4, 10, 11, 0, 0, 12, 13, 0),
    gsSP2Triangles(2, 1, 14, 0, 15, 16, 1, 0),
    gsSP2Triangles(17, 18, 3, 0, 19, 3, 2, 0),
    gsSP2Triangles(20, 21, 2, 0, 4, 22, 23, 0),
    gsSPVertex(&object_link_childVtx_01C978[24], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 6, 8, 0, 9, 10, 5, 0),
    gsSP2Triangles(4, 3, 7, 0, 3, 2, 7, 0),
    gsSP2Triangles(9, 11, 6, 0, 11, 9, 5, 0),
    gsSP2Triangles(5, 4, 11, 0, 8, 10, 9, 0),
    gsSP2Triangles(6, 11, 4, 0, 7, 6, 4, 0),
    gsSP1Triangle(8, 7, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftThighNearDL[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[218], 10, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildWaistTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[228], 19, 10),
    gsSP2Triangles(10, 11, 8, 0, 0, 12, 6, 0),
    gsSP2Triangles(13, 5, 4, 0, 14, 4, 15, 0),
    gsSP2Triangles(9, 3, 2, 0, 9, 2, 16, 0),
    gsSP2Triangles(17, 18, 2, 0, 19, 2, 1, 0),
    gsSP2Triangles(1, 5, 20, 0, 21, 22, 4, 0),
    gsSP2Triangles(23, 4, 7, 0, 24, 25, 7, 0),
    gsSP2Triangles(26, 27, 1, 0, 8, 9, 28, 0),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[247], 1, 10),
    gsSP1Triangle(7, 6, 10, 0),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPVertex(&object_link_childVtx_01C978[248], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 1, 4, 0),
    gsSP1Triangle(2, 4, 3, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(12, 11, 13, 0, 14, 15, 10, 0),
    gsSP2Triangles(10, 16, 14, 0, 9, 16, 10, 0),
    gsSP2Triangles(14, 17, 18, 0, 14, 18, 15, 0),
    gsSP2Triangles(17, 12, 13, 0, 17, 13, 18, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftShinNearDL[] = {
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[170], 5, 0),
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[175], 15, 5),
    gsSP2Triangles(5, 0, 6, 0, 3, 1, 7, 0),
    gsSP2Triangles(2, 8, 9, 0, 2, 10, 0, 0),
    gsSP2Triangles(11, 12, 1, 0, 13, 2, 3, 0),
    gsSP2Triangles(14, 15, 2, 0, 4, 0, 16, 0),
    gsSP2Triangles(1, 17, 18, 0, 19, 1, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_link_childVtx_01C978[190], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 2, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 3, 0),
    gsSP2Triangles(11, 4, 12, 0, 12, 9, 8, 0),
    gsSP2Triangles(3, 0, 13, 0, 13, 11, 8, 0),
    gsSP2Triangles(8, 3, 13, 0, 14, 7, 15, 0),
    gsSP2Triangles(16, 6, 17, 0, 12, 8, 11, 0),
    gsSP2Triangles(12, 4, 6, 0, 1, 3, 10, 0),
    gsSP2Triangles(9, 12, 16, 0, 15, 1, 10, 0),
    gsSP2Triangles(16, 12, 6, 0, 7, 1, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 22, 0, 20, 19, 25, 0),
    gsSP2Triangles(26, 25, 19, 0, 18, 23, 22, 0),
    gsSP2Triangles(26, 27, 24, 0, 23, 18, 21, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftFootNearDL[] = {
    gsSPMatrix(0x0D000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[134], 5, 0),
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildBeltTLUT),
    gsDPLoadTextureBlock(gLinkChildLowerBootTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[139], 19, 5),
    gsSP2Triangles(4, 0, 5, 0, 0, 1, 6, 0),
    gsSP2Triangles(0, 7, 8, 0, 9, 10, 3, 0),
    gsSP2Triangles(11, 3, 4, 0, 12, 13, 0, 0),
    gsSP2Triangles(14, 1, 2, 0, 1, 15, 16, 0),
    gsSP2Triangles(2, 3, 17, 0, 2, 18, 19, 0),
    gsSP2Triangles(2, 20, 21, 0, 22, 23, 4, 0),
    gsSPVertex(&object_link_childVtx_01C978[158], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 4, 10, 9, 0),
    gsSP2Triangles(7, 3, 5, 0, 7, 0, 3, 0),
    gsSP2Triangles(8, 11, 9, 0, 4, 9, 11, 0),
    gsSP2Triangles(11, 5, 4, 0, 9, 10, 6, 0),
    gsSP2Triangles(5, 11, 8, 0, 5, 8, 7, 0),
    gsSP1Triangle(0, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildCollarNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPClearGeometryMode(G_CULL_BOTH),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[530], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 2, 4, 6, 0),
    gsSP2Triangles(7, 5, 4, 0, 8, 5, 7, 0),
    gsSP2Triangles(0, 9, 1, 0, 0, 2, 6, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildTorsoNearDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01FE08, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 8, 9, 0, 9, 8, 5, 0),
    gsSP2Triangles(2, 7, 0, 0, 1, 3, 2, 0),
    gsSP2Triangles(5, 4, 9, 0, 6, 3, 1, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic2Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPVertex(&object_link_childVtx_01FE08[10], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(4, 12, 0, 0, 13, 14, 15, 0),
    gsSP2Triangles(7, 16, 14, 0, 17, 18, 6, 0),
    gsSP2Triangles(8, 13, 19, 0, 8, 20, 21, 0),
    gsSP2Triangles(22, 17, 21, 0, 1, 17, 22, 0),
    gsSP2Triangles(23, 19, 24, 0, 19, 23, 25, 0),
    gsSP2Triangles(25, 26, 20, 0, 20, 8, 25, 0),
    gsSP2Triangles(9, 14, 16, 0, 27, 16, 28, 0),
    gsSP2Triangles(29, 27, 28, 0, 10, 0, 12, 0),
    gsSP2Triangles(10, 12, 30, 0, 29, 28, 18, 0),
    gsSP2Triangles(18, 17, 1, 0, 10, 30, 31, 0),
    gsSP2Triangles(16, 18, 28, 0, 0, 29, 1, 0),
    gsSP2Triangles(10, 9, 27, 0, 3, 12, 4, 0),
    gsSPVertex(&object_link_childVtx_01FE08[42], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 7, 0, 18, 2, 19, 0),
    gsSP2Triangles(20, 13, 15, 0, 21, 22, 4, 0),
    gsSP2Triangles(21, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 9, 0, 28, 29, 17, 0),
    gsSP2Triangles(30, 31, 8, 0, 7, 14, 16, 0),
    gsSP2Triangles(8, 17, 30, 0, 25, 12, 5, 0),
    gsSP2Triangles(6, 11, 15, 0, 2, 18, 0, 0),
    gsSP1Triangle(0, 20, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHeadNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[347], 5, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[352], 24, 5),
    gsSP2Triangles(5, 0, 1, 0, 6, 7, 3, 0),
    gsSP2Triangles(8, 9, 2, 0, 10, 11, 1, 0),
    gsSP2Triangles(12, 1, 3, 0, 13, 4, 2, 0),
    gsSP2Triangles(2, 14, 15, 0, 2, 0, 16, 0),
    gsSP2Triangles(1, 17, 18, 0, 3, 4, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSP2Triangles(20, 21, 22, 0, 23, 21, 20, 0),
    gsSP2Triangles(24, 22, 21, 0, 25, 26, 27, 0),
    gsSP2Triangles(23, 20, 28, 0, 28, 25, 27, 0),
    gsSP1Triangle(28, 27, 23, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPVertex(&object_link_childVtx_01C978[376], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 1, 0, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 6, 9, 0),
    gsSP2Triangles(4, 2, 9, 0, 8, 4, 9, 0),
    gsSP2Triangles(2, 1, 9, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 3, 4, 0, 3, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 13, 0, 16, 14, 17, 0),
    gsSP2Triangles(17, 8, 7, 0, 7, 16, 17, 0),
    gsSP2Triangles(3, 11, 0, 0, 13, 15, 12, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_01C978[394], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 6, 9, 0, 8, 9, 6, 0),
    gsSP2Triangles(12, 7, 6, 0, 13, 1, 6, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 10, 14, 0),
    gsSP2Triangles(17, 15, 14, 0, 16, 18, 10, 0),
    gsSP2Triangles(18, 19, 10, 0, 15, 17, 20, 0),
    gsSP2Triangles(21, 15, 22, 0, 0, 23, 12, 0),
    gsSP2Triangles(24, 25, 26, 0, 16, 15, 25, 0),
    gsSP2Triangles(25, 24, 16, 0, 27, 21, 28, 0),
    gsSP2Triangles(25, 29, 30, 0, 29, 31, 30, 0),
    gsSP1Triangle(24, 18, 16, 0),
    gsSPVertex(&object_link_childVtx_01C978[426], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 2, 5, 0, 0),
    gsSP2Triangles(1, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(2, 1, 9, 0, 10, 7, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(8, 2, 9, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(7, 24, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 28, 7, 0),
    gsSP2Triangles(26, 22, 21, 0, 19, 20, 30, 0),
    gsSPVertex(&object_link_childVtx_01C978[457], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 9, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(&object_link_childVtx_01C978[467], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 2, 0, 6, 7, 8, 0),
    gsSP2Triangles(5, 3, 2, 0, 5, 4, 9, 0),
    gsSP2Triangles(10, 5, 9, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(17, 6, 18, 0, 19, 9, 12, 0),
    gsSP2Triangles(20, 21, 18, 0, 5, 10, 3, 0),
    gsSP2Triangles(6, 20, 18, 0, 19, 10, 9, 0),
    gsSP2Triangles(7, 6, 17, 0, 4, 11, 9, 0),
    gsSP1Triangle(22, 6, 8, 0),
    gsSPVertex(&object_link_childVtx_01C978[490], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 0, 2, 0, 11, 12, 13, 0),
    gsSP2Triangles(7, 14, 15, 0, 7, 15, 9, 0),
    gsSP2Triangles(16, 13, 12, 0, 6, 8, 17, 0),
    gsSP2Triangles(18, 19, 0, 0, 10, 18, 0, 0),
    gsSP2Triangles(16, 19, 13, 0, 19, 18, 13, 0),
    gsSP2Triangles(19, 1, 0, 0, 20, 6, 17, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 26, 25, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&object_link_childVtx_01C978[519], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 3, 2, 5, 0),
    gsSP2Triangles(5, 2, 6, 0, 1, 7, 6, 0),
    gsSP1Triangle(2, 1, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildNoseTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP1Triangle(8, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildHatNearDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01C978[309], 6, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01C978[315], 20, 6),
    gsSP2Triangles(6, 7, 4, 0, 2, 1, 8, 0),
    gsSP2Triangles(9, 10, 1, 0, 3, 11, 12, 0),
    gsSP2Triangles(0, 4, 13, 0, 14, 1, 0, 0),
    gsSP2Triangles(15, 16, 0, 0, 17, 3, 5, 0),
    gsSP2Triangles(0, 18, 19, 0, 20, 21, 2, 0),
    gsSP2Triangles(22, 4, 3, 0, 5, 2, 23, 0),
    gsSP1Triangle(24, 25, 5, 0),
    gsSPVertex(&object_link_childVtx_01C978[335], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(0, 5, 6, 0, 1, 0, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 4, 0),
    gsSP2Triangles(1, 7, 4, 0, 6, 9, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 6, 7, 0, 0),
    gsSP2Triangles(0, 11, 5, 0, 6, 8, 9, 0),
    gsSP2Triangles(4, 7, 6, 0, 4, 10, 3, 0),
    gsSP1Triangle(2, 11, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01F528[34], 6, 0),
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01F528[40], 18, 6),
    gsSP2Triangles(6, 1, 7, 0, 8, 3, 5, 0),
    gsSP2Triangles(2, 9, 10, 0, 5, 4, 11, 0),
    gsSP2Triangles(2, 1, 12, 0, 13, 0, 3, 0),
    gsSP2Triangles(0, 14, 1, 0, 3, 15, 16, 0),
    gsSP2Triangles(3, 17, 18, 0, 19, 4, 2, 0),
    gsSP2Triangles(20, 4, 21, 0, 22, 23, 2, 0),
    gsSPVertex(&object_link_childVtx_01F528[58], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(4, 2, 8, 0, 9, 2, 1, 0),
    gsSP1Triangle(1, 3, 10, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 16, 0, 17, 15, 18, 0),
    gsSP2Triangles(13, 19, 11, 0, 14, 16, 12, 0),
    gsSP2Triangles(20, 18, 19, 0, 13, 12, 21, 0),
    gsSP2Triangles(21, 12, 16, 0, 19, 13, 20, 0),
    gsSP2Triangles(12, 11, 14, 0, 18, 20, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildRightForearmNearDL[] = {
    gsSPMatrix(0x0D000340, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01F528, 5, 0),
    gsSPMatrix(0x0D000380, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01F528[5], 17, 5),
    gsSP2Triangles(5, 4, 1, 0, 1, 2, 6, 0),
    gsSP2Triangles(7, 8, 0, 0, 1, 9, 10, 0),
    gsSP2Triangles(0, 11, 12, 0, 0, 13, 14, 0),
    gsSP2Triangles(15, 2, 3, 0, 16, 3, 17, 0),
    gsSP2Triangles(0, 4, 18, 0, 19, 3, 0, 0),
    gsSP1Triangle(20, 21, 1, 0),
    gsSPVertex(&object_link_childVtx_01F528[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 3, 2, 0, 10, 2, 11, 0),
    gsSP2Triangles(6, 9, 8, 0, 6, 8, 7, 0),
    gsSP2Triangles(11, 2, 7, 0, 6, 1, 0, 0),
    gsSP2Triangles(6, 0, 5, 0, 6, 5, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftShoulderNearDL[] = {
    gsSPMatrix(0x0D000440, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_01EDA8[34], 6, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, ENVIRONMENT, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkTunic1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 80, 188, 8, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01EDA8[40], 20, 6),
    gsSP2Triangles(6, 1, 7, 0, 5, 3, 8, 0),
    gsSP2Triangles(9, 10, 2, 0, 11, 4, 5, 0),
    gsSP2Triangles(2, 12, 13, 0, 2, 14, 15, 0),
    gsSP2Triangles(3, 0, 16, 0, 1, 17, 0, 0),
    gsSP2Triangles(18, 19, 3, 0, 20, 21, 3, 0),
    gsSP2Triangles(2, 4, 22, 0, 23, 4, 24, 0),
    gsSP1Triangle(25, 1, 2, 0),
    gsSPVertex(&object_link_childVtx_01EDA8[60], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 0, 4, 0, 1, 0, 9, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 10, 17, 0),
    gsSP2Triangles(12, 17, 10, 0, 15, 19, 13, 0),
    gsSP2Triangles(14, 16, 18, 0, 19, 12, 11, 0),
    gsSP2Triangles(16, 14, 20, 0, 20, 14, 13, 0),
    gsSP2Triangles(11, 13, 19, 0, 18, 15, 14, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildLeftForearmNearDL[] = {
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_01EDA8, 5, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkChildSkinTLUT),
    gsDPLoadTextureBlock(gLinkChildEarTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x0C000000),
    gsSPVertex(&object_link_childVtx_01EDA8[5], 17, 5),
    gsSP2Triangles(1, 4, 5, 0, 6, 2, 1, 0),
    gsSP2Triangles(0, 7, 8, 0, 9, 10, 1, 0),
    gsSP2Triangles(11, 12, 0, 0, 13, 3, 2, 0),
    gsSP2Triangles(14, 2, 15, 0, 16, 4, 0, 0),
    gsSP2Triangles(0, 3, 17, 0, 1, 18, 19, 0),
    gsSP1Triangle(1, 20, 21, 0),
    gsSPVertex(&object_link_childVtx_01EDA8[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 6, 2, 1, 0),
    gsSP2Triangles(5, 4, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 0, 5, 0, 11, 1, 0, 0),
    gsSP2Triangles(11, 0, 10, 0, 6, 9, 8, 0),
    gsSP2Triangles(6, 8, 7, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 3, 0, 7, 3, 2, 0),
    gsSPEndDisplayList(),
};

LodLimb gLinkChildRootLimb = { 
    { 0, 2376, 0 }, 0x01, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkChildWaistLimb = { 
    { -4, -104, 0 }, 0x02, 0x09,
    { gLinkChildWaistNearDL, gLinkChildWaistNearDL }
};

LodLimb gLinkChildLowerControlLimb = { 
    { 607, 0, 0 }, 0x03, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkChildRightThighLimb = { 
    { -172, 50, -190 }, 0x04, 0x06,
    { gLinkChildRightThighNearDL, gLinkChildRightThighNearDL }
};

LodLimb gLinkChildRightShinLimb = { 
    { 697, 0, 0 }, 0x05, LIMB_DONE,
    { gLinkChildRightShinNearDL, gLinkChildRightShinNearDL }
};

LodLimb gLinkChildRightFootLimb = { 
    { 825, 5, 11 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildRightFootNearDL, gLinkChildRightFootNearDL }
};

LodLimb gLinkChildLeftThighLimb = { 
    { -170, 57, 192 }, 0x07, LIMB_DONE,
    { gLinkChildLeftThighNearDL, gLinkChildLeftThighNearDL }
};

LodLimb gLinkChildLeftShinLimb = { 
    { 695, 0, 0 }, 0x08, LIMB_DONE,
    { gLinkChildLeftShinNearDL, gLinkChildLeftShinNearDL }
};

LodLimb gLinkChildLeftFootLimb = { 
    { 817, 8, 4 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildLeftFootNearDL, gLinkChildLeftFootNearDL }
};

LodLimb gLinkChildUpperControlLimb = { 
    { 0, -103, -7 }, 0x0A, LIMB_DONE,
    { NULL, NULL }
};

LodLimb gLinkChildHeadLimb = { 
    { 996, -201, -1 }, 0x0B, 0x0C,
    { gLinkChildHeadNearDL, gLinkChildHeadNearDL }
};

LodLimb gLinkChildHatLimb = { 
    { -365, -670, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildHatNearDL, gLinkChildHatNearDL }
};

LodLimb gLinkChildCollarLimb = { 
    { 0, 0, 0 }, LIMB_DONE, 0x0D,
    { gLinkChildCollarNearDL, gLinkChildCollarNearDL }
};

LodLimb gLinkChildLeftshoulderLimb = { 
    { 696, -175, 466 }, 0x0E, 0x10,
    { gLinkChildLeftShoulderNearDL, gLinkChildLeftShoulderNearDL }
};

LodLimb gLinkChildLeftForearmLimb = { 
    { 581, 0, 0 }, 0x0F, LIMB_DONE,
    { gLinkChildLeftForearmNearDL, gLinkChildLeftForearmNearDL }
};

LodLimb gLinkChildLeftHandLimb = { 
    { 514, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildLeftHandNearDL, gLinkChildLeftHandNearDL }
};

LodLimb gLinkChildRightshoulderLimb = { 
    { 696, -175, -466 }, 0x11, 0x13,
    { gLinkChildRightShoulderNearDL, gLinkChildRightShoulderNearDL }
};

LodLimb gLinkChildRightForearmLimb = { 
    { 577, 0, 0 }, 0x12, LIMB_DONE,
    { gLinkChildRightForearmNearDL, gLinkChildRightForearmNearDL }
};

LodLimb gLinkChildRightHandLimb = { 
    { 525, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildRightHandNearDL, gLinkChildRightHandNearDL }
};

LodLimb gLinkChildSwordAndSheathLimb = { 
    { 657, -523, 367 }, LIMB_DONE, 0x14,
    { gLinkChildSwordAndSheathNearDL, gLinkChildSwordAndSheathNearDL }
};

LodLimb gLinkChildTorsoLimb = { 
    { 0, 0, 0 }, LIMB_DONE, LIMB_DONE,
    { gLinkChildTorsoNearDL, gLinkChildTorsoNearDL }
};

void* gLinkChildSkelLimbs[] = {
    &gLinkChildRootLimb,
    &gLinkChildWaistLimb,
    &gLinkChildLowerControlLimb,
    &gLinkChildRightThighLimb,
    &gLinkChildRightShinLimb,
    &gLinkChildRightFootLimb,
    &gLinkChildLeftThighLimb,
    &gLinkChildLeftShinLimb,
    &gLinkChildLeftFootLimb,
    &gLinkChildUpperControlLimb,
    &gLinkChildHeadLimb,
    &gLinkChildHatLimb,
    &gLinkChildCollarLimb,
    &gLinkChildLeftshoulderLimb,
    &gLinkChildLeftForearmLimb,
    &gLinkChildLeftHandLimb,
    &gLinkChildRightshoulderLimb,
    &gLinkChildRightForearmLimb,
    &gLinkChildRightHandLimb,
    &gLinkChildSwordAndSheathLimb,
    &gLinkChildTorsoLimb,
};

FlexSkeletonHeader gLinkChildSkel = { 
    { gLinkChildSkelLimbs, ARRAY_COUNT(gLinkChildSkelLimbs) }, 18
};
