#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "../object_link_child.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

u64 gLinkChildSpookyMaskTex[] = {
#include "assets/objects/object_link_child/common/spooky_mask.ia16.inc.c"
};

u64 gLinkChildKeatonMaskEyeBrowTex[] = {
#include "assets/objects/object_link_child/common/keaton_mask_eye_brow.rgba16.inc.c"
};

u64 gLinkChildKeatonMaskEarTex[] = {
#include "assets/objects/object_link_child/common/keaton_mask_ear.rgba16.inc.c"
};

u64 gLinkChildSkullMaskEyeTex[] = {
#include "assets/objects/object_link_child/common/skull_mask_eye.rgba16.inc.c"
};

u64 gLinkChildMaskOfTruthTex[] = {
#include "assets/objects/object_link_child/common/mask_of_truth.rgba16.inc.c"
};

u64 gLinkChildMaskOfTruthCurveTex[] = {
#include "assets/objects/object_link_child/common/mask_of_truth_curves.rgba16.inc.c"
};

u64 gLinkChildGoronMaskMouthTex[] = {
#include "assets/objects/object_link_child/common/goron_mask_mouth.rgba16.inc.c"
};

u64 gLinkChildGoronMaskEyeTex[] = {
#include "assets/objects/object_link_child/common/goron_mask_eye.rgba16.inc.c"
};

u64 gLinkChildGoronMaskNoseTex[] = {
#include "assets/objects/object_link_child/common/goron_mask_nose.rgba16.inc.c"
};

u64 gLinkChildGoronMaskHairTex[] = {
#include "assets/objects/object_link_child/common/goron_mask_hair.rgba16.inc.c"
};

u64 gLinkChildSkullMaskTeethTex[] = {
#include "assets/objects/object_link_child/common/skull_mask_teeth.rgba16.inc.c"
};

u64 gLinkChildGoronMaskEarTex[] = {
#include "assets/objects/object_link_child/common/goron_mask_ear.rgba16.inc.c"
};

u64 gLinkChildZoraMaskEyeBoarderTex[] = {
#include "assets/objects/object_link_child/common/zora_mask_eye_boarder.rgba16.inc.c"
};

u64 gLinkChildZoraMaskEarTex[] = {
#include "assets/objects/object_link_child/common/zora_mask_ear.rgba16.inc.c"
};

u64 gLinkChildSkullMaskNoseTex[] = {
#include "assets/objects/object_link_child/common/skull_mask_nose.rgba16.inc.c"
};

u64 gLinkChildZoraMaskEyeTex[] = {
#include "assets/objects/object_link_child/common/zora_mask_eye.rgba16.inc.c"
};

u64 gLinkChildZoraMaskMouthTex[] = {
#include "assets/objects/object_link_child/common/zora_mask_mouth.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskEyeTex[] = {
#include "assets/objects/object_link_child/common/gerudo_mask_eye.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskMouthTex[] = {
#include "assets/objects/object_link_child/common/gerudo_mask_mouth.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskHairTex[] = {
#include "assets/objects/object_link_child/common/gerudo_mask_hair.rgba16.inc.c"
};

u64 gLinkChildGerudoMaskNoseTex[] = {
#include "assets/objects/object_link_child/common/gerudo_mask_nose.rgba16.inc.c"
};

Vtx object_link_childVtx_029220[] = {
#include "assets/objects/object_link_child/common/object_link_childVtx_029220.vtx.inc"
};

Gfx gLinkChildSkullMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSkullMaskTeethTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_029220, 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(1, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 5, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP1Triangle(14, 13, 12, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_link_childVtx_029220[15], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 4, 9, 0),
    gsSP2Triangles(5, 9, 10, 0, 3, 5, 11, 0),
    gsSP2Triangles(3, 11, 12, 0, 13, 4, 3, 0),
    gsSP2Triangles(13, 3, 14, 0, 15, 1, 0, 0),
    gsSP2Triangles(15, 0, 16, 0, 17, 0, 2, 0),
    gsSP2Triangles(17, 2, 18, 0, 2, 1, 19, 0),
    gsSP1Triangle(2, 19, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildSkullMaskNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[36], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&object_link_childVtx_029220[43], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSkullMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_childVtx_029220[46], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 4, 0, 8, 10, 9, 0),
    gsSP2Triangles(6, 11, 4, 0, 4, 12, 8, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(14, 17, 16, 0, 14, 13, 18, 0),
    gsSP2Triangles(13, 19, 18, 0, 20, 2, 1, 0),
    gsSP2Triangles(20, 21, 2, 0, 21, 22, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildSpookyMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildSpookyMaskTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 127, 127, 0, 255),
    gsSPVertex(&object_link_childVtx_029220[69], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(0, 16, 1, 0, 16, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 127, 64, 0, 255),
    gsSPVertex(&object_link_childVtx_029220[86], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 5, 8, 0),
    gsSP2Triangles(8, 5, 6, 0, 9, 0, 2, 0),
    gsSP2Triangles(2, 7, 10, 0, 2, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildKeatonMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildKeatonMaskEyeBrowTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[97], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 12, 1, 0, 0),
    gsSP2Triangles(20, 16, 21, 0, 3, 22, 23, 0),
    gsSP2Triangles(19, 24, 6, 0, 25, 1, 12, 0),
    gsSP2Triangles(24, 19, 11, 0, 13, 26, 11, 0),
    gsSP2Triangles(11, 26, 24, 0, 6, 17, 19, 0),
    gsSP2Triangles(0, 13, 12, 0, 2, 1, 25, 0),
    gsSP2Triangles(18, 17, 8, 0, 2, 27, 0, 0),
    gsSP2Triangles(8, 17, 6, 0, 23, 9, 3, 0),
    gsSP2Triangles(4, 3, 10, 0, 20, 28, 14, 0),
    gsSP2Triangles(14, 16, 20, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_029220[129], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildKeatonMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[135], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 7, 3, 8, 0),
    gsSP2Triangles(9, 10, 4, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 11, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 10, 18, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 0, 19, 1, 0),
    gsSP2Triangles(2, 20, 6, 0, 4, 18, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildMaskOfTruthDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildMaskOfTruthCurveTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 235, 255, 205, 255),
    gsSPVertex(&object_link_childVtx_029220[156], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildMaskOfTruthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_link_childVtx_029220[168], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(2, 14, 15, 0, 3, 2, 16, 0),
    gsSP2Triangles(1, 10, 14, 0, 14, 2, 1, 0),
    gsSP2Triangles(15, 16, 2, 0, 13, 17, 11, 0),
    gsSP2Triangles(10, 1, 8, 0, 8, 1, 0, 0),
    gsSP2Triangles(6, 18, 4, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 19, 21, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 28, 19, 0),
    gsSP2Triangles(29, 19, 22, 0, 28, 25, 20, 0),
    gsSP2Triangles(20, 19, 28, 0, 19, 29, 27, 0),
    gsSP2Triangles(23, 20, 25, 0, 21, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildGoronMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGoronMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[198], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 6, 0, 0),
    gsSP2Triangles(0, 3, 5, 0, 7, 6, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[206], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 3, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[212], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(2, 10, 11, 0, 12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[227], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 5, 4, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGoronMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[236], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 6, 5, 0, 11, 12, 10, 0),
    gsSP2Triangles(13, 10, 5, 0, 10, 13, 11, 0),
    gsSP2Triangles(11, 14, 15, 0, 4, 15, 14, 0),
    gsSP2Triangles(15, 12, 11, 0, 4, 3, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildZoraMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEyeBoarderTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR |
                         G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[252], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 0, 0),
    gsSP2Triangles(8, 1, 0, 0, 0, 9, 7, 0),
    gsSP2Triangles(10, 8, 7, 0, 8, 10, 5, 0),
    gsSP2Triangles(11, 12, 13, 0, 3, 13, 12, 0),
    gsSP2Triangles(14, 10, 15, 0, 2, 16, 0, 0),
    gsSP2Triangles(16, 9, 0, 0, 15, 17, 18, 0),
    gsSP2Triangles(12, 19, 3, 0, 19, 12, 11, 0),
    gsSP2Triangles(20, 17, 21, 0, 22, 21, 17, 0),
    gsSP2Triangles(22, 9, 16, 0, 16, 23, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 24, 20, 4, 0),
    gsSP2Triangles(3, 23, 2, 0, 2, 23, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[277], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[287], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(0, 7, 5, 0, 0, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildZoraMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[296], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 3, 4, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkChildGerudoMaskDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_link_childVtx_029220[302], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 5, 4, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 9, 8, 0, 9, 6, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[314], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 3, 0, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 7, 10, 11, 0),
    gsSP1Triangle(12, 9, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[327], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 17, 16, 0, 10, 19, 11, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_029220[359], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 10, 9, 0),
    gsSP2Triangles(5, 22, 3, 0, 23, 24, 25, 0),
    gsSP1Triangle(26, 27, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildGerudoMaskNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_029220[388], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 11, 0, 12, 10, 13, 0),
    gsSP2Triangles(7, 14, 8, 0, 14, 10, 12, 0),
    gsSP2Triangles(11, 15, 10, 0, 16, 17, 18, 0),
    gsSP2Triangles(7, 10, 14, 0, 16, 19, 20, 0),
    gsSP2Triangles(19, 12, 20, 0, 14, 21, 8, 0),
    gsSP2Triangles(8, 21, 22, 0, 22, 21, 18, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 24, 26, 0),
    gsSP2Triangles(26, 24, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_029220[420], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 8, 1, 0, 0),
    gsSP2Triangles(9, 0, 2, 0, 10, 1, 8, 0),
    gsSP2Triangles(6, 11, 12, 0, 7, 2, 1, 0),
    gsSP1Triangle(13, 9, 2, 0),
    gsSPEndDisplayList(),
};

u64 gLinkChildBunnyHoodEyeTex[] = {
#include "assets/objects/object_link_child/common/bunny_hood_eye.rgba16.inc.c"
};

u64 gLinkChildBunnyHoodTex[] = {
#include "assets/objects/object_link_child/common/bunny_hood.rgba16.inc.c"
};

u64 gLinkChildBunnyHoodEarTex[] = {
#include "assets/objects/object_link_child/common/bunny_hood_ear.rgba16.inc.c"
};

Vtx object_link_childVtx_02C428[] = {
#include "assets/objects/object_link_child/common/object_link_childVtx_02C428.vtx.inc"
};

Gfx gLinkChildBunnyHoodDL[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_link_childVtx_02C428, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 2, 13, 0, 12, 4, 3, 0),
    gsSP2Triangles(8, 7, 5, 0, 10, 9, 7, 0),
    gsSP2Triangles(14, 15, 3, 0, 13, 2, 1, 0),
    gsSP2Triangles(2, 16, 0, 0, 7, 6, 10, 0),
    gsSP2Triangles(11, 0, 16, 0, 14, 9, 11, 0),
    gsSP2Triangles(11, 16, 15, 0, 15, 14, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 20, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 24, 21, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[25], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(0, 2, 3, 0, 9, 7, 6, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[35], 5, 0),
    gsSPMatrix(0x0B000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[40], 26, 5),
    gsSP2Triangles(5, 6, 1, 0, 1, 4, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 0, 10, 11, 0),
    gsSP2Triangles(3, 2, 12, 0, 13, 2, 0, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 20, 16, 0, 19, 16, 17, 0),
    gsSP1Triangle(16, 20, 14, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(23, 22, 26, 0, 23, 25, 21, 0),
    gsSP2Triangles(23, 27, 24, 0, 25, 24, 28, 0),
    gsSP2Triangles(25, 29, 30, 0, 26, 27, 23, 0),
    gsSP2Triangles(28, 29, 25, 0, 30, 21, 25, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[66], 5, 0),
    gsSPMatrix(0x0B000040, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkChildBunnyHoodEarTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_link_childVtx_02C428[71], 26, 5),
    gsSP2Triangles(1, 5, 6, 0, 7, 4, 1, 0),
    gsSP2Triangles(3, 8, 9, 0, 0, 2, 10, 0),
    gsSP2Triangles(11, 12, 0, 0, 13, 2, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(16, 20, 14, 0, 19, 16, 15, 0),
    gsSP1Triangle(19, 15, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(23, 22, 26, 0, 26, 27, 23, 0),
    gsSP2Triangles(28, 21, 25, 0, 29, 30, 25, 0),
    gsSP2Triangles(23, 25, 21, 0, 23, 27, 24, 0),
    gsSP2Triangles(25, 24, 29, 0, 25, 30, 28, 0),
    gsSPEndDisplayList(),
};
