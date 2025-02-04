#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "../object_link_child.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

u64 gLinkChildDekuShieldBackTex[] = {
#include "assets/objects/object_link_child/deku_shield_back.rgba16.inc.c"
};

u64 gLinkChildDekuShieldFrontTex[] = {
#include "assets/objects/object_link_child/deku_shield_front.rgba16.inc.c"
};

Vtx object_link_childVtx_022208[] = {
#include "assets/objects/object_link_child/oot_link/object_link_childVtx_022208.vtx.inc"
};

Gfx gLinkChildDekuShieldDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gLinkChildDekuShieldFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x0C000000),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_link_childVtx_022208, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 11, 10, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 23, 22, 24, 0),
    gsSP2Triangles(25, 26, 20, 0, 20, 10, 25, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_022208[30], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gLinkChildDekuShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_022208[39], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 1, 0, 6, 0),
    gsSP2Triangles(4, 1, 6, 0, 7, 4, 3, 0),
    gsSPEndDisplayList(),
};

Mtx gLinkChildDekuShieldMtx = { 
    65535      , 0          , -1         , -65536     , 
    0          , -65536     , 39387036   , 3276801    , 
    565445181  , 0          , -248054262 , 7405568    , 
    -44818011  , -250347520 , 0          , 0          , 
};

Gfx gLinkChildDekuShieldWithMatrixDL[] = {
    gsSPMatrix(&gLinkChildDekuShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gLinkChildDekuShieldDL),
    gsSPEndDisplayList(),
};
