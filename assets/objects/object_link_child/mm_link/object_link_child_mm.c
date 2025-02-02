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

u64 gLinkHumanEyesOpenTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_open.ci8.inc.c"
};

u64 gLinkHumanEyesHalfTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_half.ci8.inc.c"
};

u64 gLinkHumanEyesClosedTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_closed.ci8.inc.c"
};

u64 gLinkHumanEyesRollRightTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_roll_right.ci8.inc.c"
};

u64 gLinkHumanEyesRollLeftTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_roll_left.ci8.inc.c"
};

u64 gLinkHumanEyesRollUpTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_roll_up.ci8.inc.c"
};

u64 gLinkHumanEyesRollDownTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_roll_down.ci8.inc.c"
};

u64 object_link_child_Tex_003800[] = {
#include "assets/objects/object_link_child/mm_link/tex_003800.ci8.inc.c"
};

u64 gLinkHumanMouthClosedTex[] = {
#include "assets/objects/object_link_child/mm_link/mouth_closed.ci8.inc.c"
};

u64 gLinkHumanMouthTeethTex[] = {
#include "assets/objects/object_link_child/mm_link/mouth_teeth.ci8.inc.c"
};

u64 gLinkHumanMouthAngryTex[] = {
#include "assets/objects/object_link_child/mm_link/mouth_angry.ci8.inc.c"
};

u64 gLinkHumanMouthHappyTex[] = {
#include "assets/objects/object_link_child/mm_link/mouth_happy.ci8.inc.c"
};

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

u8 object_link_child_unaccounted_006D00[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x19, 0x25, 0x00, 0x28, 0x00, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x17, 0x03, 0x26, 0x47, 0x4A, 0x3A, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 
    0x09, 0x09, 0x09, 0x1F, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x04, 0x17, 0x11, 0x03, 0x03, 0x03, 0x03, 0x03, 0x15, 0x2A, 0x1A, 0x11, 0x08, 0x0A, 
    0x1D, 0x19, 0x3A, 0x0B, 0x1F, 0x1F, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x04, 0x17, 0x08, 0x1A, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
    0x03, 0x0C, 0x2A, 0x26, 0x08, 0x19, 0x1F, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x04, 0x17, 0x2D, 0x2D, 0x0A, 0x08, 0x37, 0x11, 0x1A, 0x2A, 0x2A, 0x15, 0x03, 0x03, 
    0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x08, 0x12, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x04, 0x42, 0x39, 0x17, 0x17, 0x50, 0x19, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x12, 
    0x34, 0x22, 0x26, 0x1A, 0x15, 0x03, 0x03, 0x11, 0x0A, 0x09, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x04, 0x19, 0x41, 0x41, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
    0x0D, 0x0D, 0x0D, 0x41, 0x34, 0x24, 0x2A, 0x03, 0x03, 0x0A, 0x09, 0x0F, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x05, 0x49, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
    0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x34, 0x21, 0x03, 0x25, 0x09, 0x0F, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x49, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
    0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0A, 0x03, 0x09, 0x09, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x49, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
    0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0B, 0x09, 0x09, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x04, 0x49, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 
    0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x09, 0x2E, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x2E, 0x49, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x05, 
    0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x51, 0x09, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x1B, 0x49, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x09, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x1B, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x05, 0x07, 0x07, 
    0x05, 0x05, 0x05, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x09, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x1B, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x05, 0x07, 0x0E, 0x0E, 
    0x0E, 0x07, 0x05, 0x05, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x09, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x2E, 0x05, 0x3B, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x05, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x07, 0x05, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x01, 0x51, 0x09, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x0F, 0x4B, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x07, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x07, 0x05, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x12, 0x0D, 0x43, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x32, 0x46, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x07, 0x0E, 0x0E, 0x0E, 
    0x0E, 0x0E, 0x07, 0x05, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x34, 0x0D, 0x4F, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x2E, 0x12, 0x12, 0x49, 0x49, 0x49, 0x0D, 0x01, 0x46, 0x05, 0x07, 0x07, 0x07, 
    0x07, 0x07, 0x05, 0x05, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x29, 0x0D, 0x4F, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x04, 0x42, 0x0A, 0x34, 0x34, 0x12, 0x01, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x0D, 0x0D, 0x0D, 0x0D, 0x34, 0x29, 0x08, 0x05, 0x09, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x1E, 0x08, 0x21, 0x24, 0x08, 0x22, 0x34, 0x12, 0x12, 0x12, 0x12, 0x12, 
    0x12, 0x12, 0x12, 0x12, 0x12, 0x34, 0x0A, 0x29, 0x21, 0x15, 0x25, 0x32, 0x0F, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x2E, 0x3C, 0x08, 0x11, 0x1A, 0x1A, 0x11, 0x26, 0x24, 0x08, 0x08, 0x22, 
    0x22, 0x2D, 0x08, 0x29, 0x24, 0x21, 0x2A, 0x15, 0x0C, 0x08, 0x35, 0x0F, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x4A, 0x0A, 0x37, 0x11, 0x1A, 0x2A, 0x2A, 0x15, 0x15, 0x15, 
    0x15, 0x15, 0x15, 0x15, 0x15, 0x15, 0x0C, 0x11, 0x0A, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x45, 0x47, 0x0A, 0x08, 0x11, 0x1A, 0x2A, 0x2A, 0x2A, 
    0x2A, 0x2A, 0x1A, 0x1A, 0x11, 0x48, 0x25, 0x4A, 0x0F, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0x4A, 0x39, 0x44, 0x44, 0x1D, 0x1D, 
    0x1D, 0x1D, 0x1D, 0x1D, 0x39, 0x45, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x0F, 
    0x04, 0x04, 0x04, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x3B, 0x22, 
    0x22, 0x3B, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x09, 0x09, 0x1C, 0x14, 0x05, 0x03, 0x14, 
    0x14, 0x03, 0x05, 0x14, 0x1C, 0x09, 0x09, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x08, 0x09, 0x38, 0x0D, 0x3B, 0x3B, 0x3B, 0x09, 0x14, 0x08, 
    0x08, 0x14, 0x09, 0x3B, 0x3B, 0x3B, 0x0D, 0x38, 0x09, 0x08, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x05, 0x24, 0x38, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x38, 0x09, 0x09, 
    0x09, 0x09, 0x38, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x38, 0x24, 0x05, 0x00, 0x00, 0x00, 
    0x00, 0x05, 0x04, 0x0B, 0x1A, 0x1A, 0x3D, 0x33, 0x13, 0x13, 0x13, 0x13, 0x35, 0x39, 0x2F, 0x30, 
    0x30, 0x2F, 0x39, 0x35, 0x13, 0x13, 0x13, 0x13, 0x33, 0x3D, 0x1A, 0x1A, 0x0B, 0x04, 0x05, 0x00, 
    0x00, 0x03, 0x0D, 0x31, 0x13, 0x0C, 0x1D, 0x1D, 0x1D, 0x40, 0x0C, 0x0C, 0x3F, 0x20, 0x41, 0x21, 
    0x21, 0x41, 0x20, 0x3F, 0x0C, 0x0C, 0x40, 0x1D, 0x1D, 0x1D, 0x0C, 0x13, 0x31, 0x0D, 0x03, 0x00, 
    0x00, 0x00, 0x26, 0x33, 0x3D, 0x42, 0x1A, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x37, 0x29, 0x33, 0x36, 
    0x36, 0x33, 0x29, 0x37, 0x3B, 0x3B, 0x3B, 0x3B, 0x3B, 0x1A, 0x42, 0x3D, 0x33, 0x26, 0x00, 0x00, 
    0x00, 0x00, 0x02, 0x0E, 0x0B, 0x08, 0x05, 0x05, 0x05, 0x05, 0x03, 0x08, 0x10, 0x44, 0x11, 0x11, 
    0x11, 0x11, 0x44, 0x10, 0x08, 0x03, 0x05, 0x05, 0x05, 0x05, 0x08, 0x0B, 0x0E, 0x02, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x05, 0x04, 0x08, 0x44, 0x2D, 0x24, 0x08, 0x14, 0x03, 0x05, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x05, 0x03, 0x14, 0x08, 0x24, 0x2D, 0x44, 0x08, 0x04, 0x05, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x23, 0x11, 0x44, 0x0B, 0x08, 0x14, 0x05, 0x05, 0x05, 
    0x05, 0x05, 0x05, 0x14, 0x08, 0x0B, 0x44, 0x11, 0x23, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0E, 0x23, 0x17, 0x17, 0x42, 0x1A, 0x3B, 0x2D, 
    0x2D, 0x3B, 0x1A, 0x42, 0x17, 0x17, 0x23, 0x0E, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x04, 0x04, 0x27, 0x45, 0x0B, 0x01, 0x30, 0x30, 
    0x30, 0x30, 0x01, 0x0B, 0x45, 0x27, 0x04, 0x04, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x02, 0x02, 0x02, 0x04, 0x02, 0x00, 0x00, 0x1C, 
    0x1C, 0x00, 0x00, 0x02, 0x04, 0x02, 0x02, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x08, 0x3A, 
    0x3A, 0x08, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x07, 0x07, 0x0C, 0x44, 0x33, 0x02, 0x44, 
    0x44, 0x02, 0x33, 0x44, 0x0C, 0x07, 0x07, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x07, 0x31, 0x44, 0x44, 0x0C, 0x07, 0x0D, 0x01, 0x01, 0x0D, 0x07, 0x07, 0x07, 0x44, 0x31, 
    0x31, 0x44, 0x07, 0x07, 0x07, 0x0D, 0x01, 0x01, 0x0D, 0x07, 0x0C, 0x44, 0x44, 0x31, 0x07, 0x00, 
    0x00, 0x1B, 0x04, 0x04, 0x08, 0x01, 0x08, 0x1C, 0x0F, 0x04, 0x08, 0x01, 0x01, 0x0D, 0x07, 0x07, 
    0x07, 0x07, 0x0D, 0x01, 0x01, 0x08, 0x04, 0x0F, 0x1C, 0x08, 0x01, 0x08, 0x04, 0x04, 0x1B, 0x00, 
    0x00, 0x15, 0x2D, 0x36, 0x28, 0x28, 0x3C, 0x3C, 0x1D, 0x1F, 0x1D, 0x3E, 0x39, 0x21, 0x18, 0x3D, 
    0x3D, 0x18, 0x21, 0x39, 0x3E, 0x1D, 0x1F, 0x1D, 0x3C, 0x3C, 0x28, 0x28, 0x36, 0x2D, 0x15, 0x00, 
    0x00, 0x02, 0x1A, 0x34, 0x1D, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x1F, 0x36, 0x22, 0x43, 0x24, 
    0x24, 0x43, 0x22, 0x36, 0x1F, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x1D, 0x34, 0x1A, 0x02, 0x00, 
    0x00, 0x00, 0x07, 0x0D, 0x0F, 0x18, 0x2D, 0x2D, 0x2D, 0x2D, 0x38, 0x15, 0x35, 0x2E, 0x34, 0x2C, 
    0x2C, 0x34, 0x2E, 0x35, 0x15, 0x38, 0x2D, 0x2D, 0x2D, 0x2D, 0x18, 0x0F, 0x0D, 0x07, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x33, 0x3F, 0x2D, 0x08, 0x0D, 0x0D, 0x0D, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
    0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x0D, 0x0D, 0x0D, 0x08, 0x2D, 0x3F, 0x33, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x05, 0x45, 0x20, 0x04, 0x45, 0x31, 0x31, 0x44, 0x33, 0x33, 0x33, 0x33, 
    0x33, 0x33, 0x33, 0x33, 0x44, 0x31, 0x31, 0x45, 0x04, 0x20, 0x45, 0x05, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x42, 0x15, 0x45, 0x2F, 0x31, 0x44, 0x33, 0x33, 0x33, 
    0x33, 0x33, 0x33, 0x44, 0x31, 0x2F, 0x45, 0x15, 0x42, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x19, 0x42, 0x29, 0x20, 0x3F, 0x04, 0x08, 0x07, 
    0x07, 0x08, 0x04, 0x3F, 0x20, 0x29, 0x42, 0x19, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x05, 0x05, 0x19, 0x37, 0x2F, 0x09, 0x2B, 0x2B, 
    0x2B, 0x2B, 0x09, 0x2F, 0x37, 0x19, 0x05, 0x05, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x11, 0x11, 0x11, 0x05, 0x11, 0x00, 0x00, 0x0C, 
    0x0C, 0x00, 0x00, 0x11, 0x05, 0x11, 0x11, 0x11, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x02, 0x37, 
    0x37, 0x02, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x0D, 0x20, 0x05, 0x2C, 0x05, 0x05, 
    0x05, 0x05, 0x2C, 0x05, 0x20, 0x0D, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C, 0x02, 0x02, 0x02, 0x0D, 0x05, 0x09, 
    0x09, 0x05, 0x0D, 0x02, 0x02, 0x02, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x0C, 0x0C, 0x0C, 0x0C, 0x34, 0x34, 0x0D, 0x0D, 
    0x0D, 0x0D, 0x34, 0x34, 0x0C, 0x0C, 0x0C, 0x0C, 0x34, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1B, 0x02, 0x01, 0x0B, 0x0B, 0x07, 0x26, 0x26, 0x25, 0x25, 
    0x25, 0x25, 0x26, 0x26, 0x07, 0x0B, 0x0B, 0x01, 0x02, 0x1B, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x0B, 0x12, 0x19, 0x15, 0x29, 0x33, 0x16, 0x3A, 
    0x3A, 0x16, 0x33, 0x29, 0x15, 0x19, 0x12, 0x0B, 0x06, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x12, 0x11, 0x10, 0x15, 0x3A, 0x23, 0x32, 0x04, 0x36, 0x36, 
    0x36, 0x36, 0x04, 0x32, 0x23, 0x3A, 0x15, 0x10, 0x11, 0x12, 0x2D, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x07, 0x10, 0x15, 0x16, 0x39, 0x32, 0x32, 0x32, 0x32, 0x32, 
    0x32, 0x32, 0x32, 0x32, 0x32, 0x39, 0x16, 0x15, 0x10, 0x07, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x1F, 0x17, 0x0E, 0x0E, 0x07, 0x0B, 0x02, 0x07, 0x10, 0x0E, 0x19, 0x18, 0x18, 
    0x18, 0x18, 0x19, 0x0E, 0x10, 0x07, 0x02, 0x0B, 0x07, 0x0E, 0x0E, 0x17, 0x1F, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x1C, 0x02, 0x02, 0x08, 0x05, 0x05, 0x08, 0x09, 0x14, 0x1E, 0x0B, 0x0B, 
    0x0B, 0x0B, 0x1E, 0x14, 0x09, 0x08, 0x05, 0x05, 0x08, 0x02, 0x02, 0x1C, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x2C, 0x14, 0x17, 0x14, 0x0D, 0x09, 0x05, 0x05, 0x2C, 0x2C, 0x2C, 0x2C, 
    0x2C, 0x2C, 0x2C, 0x2C, 0x05, 0x05, 0x09, 0x0D, 0x14, 0x17, 0x14, 0x2C, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x2F, 0x17, 0x2D, 0x1E, 0x1E, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x2C, 
    0x2C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x1E, 0x2D, 0x17, 0x2F, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x2D, 0x06, 0x06, 0x12, 0x0B, 0x02, 0x0D, 
    0x0D, 0x02, 0x0B, 0x12, 0x06, 0x06, 0x2D, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
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

Gfx gLinkHumanSwordScabbardDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_006200, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_007900[791], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(6, 10, 4, 0, 6, 11, 10, 0),
    gsSP2Triangles(3, 12, 6, 0, 6, 12, 11, 0),
    gsSP2Triangles(10, 13, 4, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 17, 15, 0, 18, 17, 14, 0),
    gsSP2Triangles(16, 19, 14, 0, 20, 7, 21, 0),
    gsSP2Triangles(20, 8, 7, 0, 10, 22, 23, 0),
    gsSP2Triangles(11, 22, 10, 0, 12, 22, 11, 0),
    gsSP2Triangles(12, 3, 22, 0, 3, 5, 23, 0),
    gsSP2Triangles(10, 23, 13, 0, 3, 23, 22, 0),
    gsSP2Triangles(20, 24, 8, 0, 17, 25, 26, 0),
    gsSP2Triangles(25, 16, 26, 0, 19, 16, 25, 0),
    gsSP2Triangles(17, 18, 25, 0, 15, 26, 16, 0),
    gsSP2Triangles(15, 17, 26, 0, 20, 27, 24, 0),
    gsSP2Triangles(21, 27, 20, 0, 9, 24, 27, 0),
    gsSP2Triangles(9, 8, 24, 0, 21, 9, 27, 0),
    gsSP1Triangle(7, 9, 21, 0),
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

u64 gLinkHumanOcarinaTex[] = {
#include "assets/objects/object_link_child/mm_link/ocarina.rgba16.inc.c"
};

u64 object_link_child_TLUT_00DA80[] = {
#include "assets/objects/object_link_child/mm_link/tlut_00DA80.rgba16.inc.c"
};

u64 object_link_child_Tex_00DB08[] = {
#include "assets/objects/object_link_child/mm_link/tex_00DB08.ci8.inc.c"
};

u8 object_link_child_unaccounted_00DC08[] = {
    0x01, 0x03, 0x01, 0x95, 0xFF, 0xD1, 0x00, 0x00, 0x01, 0x37, 0x02, 0x6E, 0x51, 0x43, 0x38, 0xFF, 
    0x00, 0xDB, 0x01, 0x9F, 0xFF, 0xB1, 0x00, 0x00, 0x01, 0x7B, 0x02, 0x6F, 0x18, 0x5D, 0xB8, 0xFF, 
    0x00, 0xB0, 0x01, 0x9D, 0xFF, 0xD6, 0x00, 0x00, 0x01, 0xBD, 0x02, 0x85, 0xB9, 0x57, 0x29, 0xFF, 
    0x00, 0xD2, 0x01, 0x06, 0xFF, 0xE4, 0x00, 0x00, 0x01, 0x27, 0x03, 0x7D, 0x64, 0x0B, 0x40, 0xFF, 
    0x00, 0x8F, 0x01, 0x03, 0xFF, 0x44, 0x00, 0x00, 0x01, 0x8B, 0x03, 0xA1, 0xEF, 0x29, 0x91, 0xFF, 
    0x01, 0x19, 0x00, 0xF0, 0xFF, 0x7E, 0x00, 0x00, 0x00, 0xAB, 0x03, 0x85, 0x6D, 0x01, 0xCF, 0xFF, 
    0x00, 0xB7, 0x00, 0x5B, 0xFF, 0x5B, 0x00, 0x00, 0x00, 0xE3, 0x04, 0xB4, 0x44, 0xB9, 0xBD, 0xFF, 
    0x00, 0x38, 0x00, 0x87, 0xFF, 0x58, 0x00, 0x00, 0x01, 0xC2, 0x04, 0xA0, 0xAF, 0x1C, 0xAD, 0xFF, 
    0x00, 0x27, 0x02, 0x1C, 0x00, 0x3E, 0x00, 0x00, 0x01, 0x52, 0x00, 0x98, 0x23, 0x6F, 0x1D, 0xFF, 
    0x00, 0x2C, 0x02, 0x24, 0xFF, 0xFE, 0x00, 0x00, 0x01, 0x59, 0x00, 0x8D, 0x0E, 0x38, 0x97, 0xFF, 
    0xFF, 0x6B, 0x02, 0x04, 0x00, 0x39, 0x00, 0x00, 0x00, 0x97, 0x00, 0xBC, 0xBF, 0x61, 0xE6, 0xFF, 
    0x00, 0xC7, 0x01, 0x7D, 0x00, 0x33, 0x00, 0x00, 0x01, 0xDA, 0x01, 0x4A, 0x3C, 0x3E, 0xAD, 0xFF, 
    0xFF, 0x3C, 0x01, 0x70, 0x00, 0x8D, 0x00, 0x00, 0x00, 0x54, 0x01, 0x6A, 0x98, 0x08, 0xC5, 0xFF, 
    0xFF, 0x55, 0x01, 0x6E, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x6D, 0x01, 0x6B, 0xC5, 0x10, 0x67, 0xFF, 
    0xFF, 0x79, 0x02, 0x07, 0x00, 0x67, 0x00, 0x00, 0x00, 0xA5, 0x00, 0xB7, 0xCF, 0x5A, 0x3D, 0xFF, 
    0x00, 0xB9, 0x01, 0x88, 0x00, 0x9D, 0x00, 0x00, 0x01, 0xCE, 0x01, 0x3D, 0x50, 0x2E, 0x4B, 0xFF, 
    0xFF, 0x3C, 0x01, 0x70, 0x00, 0x8D, 0x00, 0x00, 0x00, 0x43, 0x01, 0xA6, 0x98, 0x08, 0xC5, 0xFF, 
    0xFF, 0x27, 0x00, 0xC3, 0x00, 0x61, 0x00, 0x00, 0x00, 0x41, 0x01, 0xE1, 0x96, 0x1E, 0xD0, 0xFF, 
    0xFF, 0x55, 0x01, 0x6E, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x5A, 0x01, 0xAB, 0xC5, 0x10, 0x67, 0xFF, 
    0xFF, 0x27, 0x00, 0xC3, 0x00, 0x61, 0x00, 0x00, 0x00, 0x28, 0x02, 0x35, 0x96, 0x1E, 0xD0, 0xFF, 
    0x00, 0xD2, 0x01, 0x06, 0xFF, 0xE4, 0x00, 0x00, 0x00, 0x3D, 0x02, 0x2D, 0x64, 0x0B, 0x40, 0xFF, 
    0x00, 0x38, 0x00, 0x87, 0xFF, 0x58, 0x00, 0x00, 0x00, 0xBC, 0x03, 0x7D, 0xAF, 0x1C, 0xAD, 0xFF, 
    0xFF, 0x27, 0x00, 0xC3, 0x00, 0x61, 0x00, 0x00, 0x01, 0xD6, 0x02, 0x53, 0x96, 0x1E, 0xD0, 0xFF, 
    0xFF, 0x27, 0x00, 0xC3, 0x00, 0x61, 0x00, 0x00, 0x01, 0x71, 0x02, 0x55, 0x96, 0x1E, 0xD0, 0xFF, 
    0x00, 0x38, 0x00, 0x87, 0xFF, 0x58, 0x00, 0x00, 0x00, 0x4E, 0x02, 0x92, 0xAF, 0x1C, 0xAD, 0xFF, 
    0xFF, 0x86, 0x00, 0x06, 0xFF, 0xC8, 0x00, 0x00, 0x01, 0x0D, 0x03, 0x4D, 0xC2, 0xA5, 0xD2, 0xFF, 
    0xFF, 0x6A, 0x00, 0x9B, 0x00, 0xB5, 0x00, 0x00, 0x00, 0x83, 0x01, 0xFB, 0xD0, 0xC5, 0x5C, 0xFF, 
    0xFF, 0x86, 0x00, 0x06, 0xFF, 0xC8, 0x00, 0x00, 0x01, 0x87, 0x03, 0xEF, 0xC2, 0xA5, 0xD2, 0xFF, 
    0xFF, 0x6A, 0x00, 0x9B, 0x00, 0xB5, 0x00, 0x00, 0x01, 0xB6, 0x02, 0x3B, 0xD0, 0xC5, 0x5C, 0xFF, 
    0xFF, 0x6A, 0x00, 0x9B, 0x00, 0xB5, 0x00, 0x00, 0x00, 0x65, 0x02, 0x60, 0xD0, 0xC5, 0x5C, 0xFF, 
    0x00, 0xA6, 0x00, 0x8D, 0x00, 0x8E, 0x00, 0x00, 0x01, 0x99, 0x02, 0x63, 0x50, 0xD9, 0x50, 0xFF, 
    0x00, 0xA6, 0x00, 0x8D, 0x00, 0x8E, 0x00, 0x00, 0x00, 0x9F, 0x02, 0x4E, 0x50, 0xD9, 0x50, 0xFF, 
    0x00, 0xB7, 0x00, 0x5B, 0xFF, 0x5B, 0x00, 0x00, 0x00, 0x58, 0x03, 0xAD, 0x44, 0xB9, 0xBD, 0xFF, 
    0x00, 0xD2, 0x01, 0x06, 0xFF, 0xE4, 0x00, 0x00, 0x00, 0x3D, 0x02, 0x2D, 0x64, 0x0B, 0x40, 0xFF, 
    0x00, 0xB7, 0x00, 0x5B, 0xFF, 0x5B, 0x00, 0x00, 0x00, 0x42, 0x02, 0xB5, 0x44, 0xB9, 0xBD, 0xFF, 
    0x00, 0x46, 0x00, 0x03, 0xFF, 0x9E, 0x00, 0x00, 0x00, 0xBC, 0x03, 0x35, 0x11, 0x94, 0xCF, 0xFF, 
    0xFF, 0x86, 0x00, 0x06, 0xFF, 0xC8, 0x00, 0x00, 0x01, 0x87, 0x03, 0x40, 0xC2, 0xA5, 0xD2, 0xFF, 
    0x00, 0xB9, 0x01, 0x88, 0x00, 0x9D, 0x00, 0x00, 0x01, 0xCE, 0x01, 0x3D, 0x50, 0x2E, 0x4B, 0xFF, 
    0x00, 0xA6, 0x00, 0x8D, 0x00, 0x8E, 0x00, 0x00, 0x01, 0x99, 0x02, 0x63, 0x50, 0xD9, 0x50, 0xFF, 
    0x00, 0xD2, 0x01, 0x06, 0xFF, 0xE4, 0x00, 0x00, 0x01, 0xD5, 0x01, 0xD4, 0x64, 0x0B, 0x40, 0xFF, 
    0xFF, 0x55, 0x01, 0x6E, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x6D, 0x01, 0x6B, 0xC5, 0x10, 0x67, 0xFF, 
    0x00, 0xC7, 0x01, 0x7D, 0x00, 0x33, 0x00, 0x00, 0x01, 0xDA, 0x01, 0x4A, 0x3C, 0x3E, 0xAD, 0xFF, 
    0xFF, 0x27, 0x00, 0xC3, 0x00, 0x61, 0x00, 0x00, 0x00, 0x28, 0x02, 0x35, 0x96, 0x1E, 0xD0, 0xFF, 
    0x00, 0x38, 0x00, 0x87, 0xFF, 0x58, 0x00, 0x00, 0x00, 0xC9, 0x02, 0x84, 0xAF, 0x1C, 0xAD, 0xFF, 
    0x00, 0x66, 0x00, 0x01, 0x00, 0x3F, 0x00, 0x00, 0x00, 0xE0, 0x03, 0x6F, 0x29, 0x98, 0x2B, 0xFF, 
    0xFF, 0x6A, 0x00, 0x9B, 0x00, 0xB5, 0x00, 0x00, 0x01, 0xB6, 0x02, 0x3B, 0xD0, 0xC5, 0x5C, 0xFF, 
    0x00, 0x66, 0x00, 0x01, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x99, 0x03, 0x34, 0x29, 0x98, 0x2B, 0xFF, 
    0xFF, 0x86, 0x00, 0x06, 0xFF, 0xC8, 0x00, 0x00, 0x01, 0x87, 0x03, 0xEF, 0xC2, 0xA5, 0xD2, 0xFF, 
    0xFF, 0xB1, 0x00, 0x05, 0x00, 0x63, 0x00, 0x00, 0x01, 0x84, 0x03, 0x5F, 0xDD, 0x9D, 0x3A, 0xFF, 
    0xFF, 0x6B, 0x02, 0x04, 0x00, 0x39, 0x00, 0x00, 0x00, 0x97, 0x00, 0xBC, 0xBF, 0x61, 0xE6, 0xFF, 
    0xFF, 0x79, 0x02, 0x07, 0x00, 0x67, 0x00, 0x00, 0x00, 0xA5, 0x00, 0xB7, 0xCF, 0x5A, 0x3D, 0xFF, 
    0x00, 0x27, 0x02, 0x1C, 0x00, 0x3E, 0x00, 0x00, 0x01, 0x52, 0x00, 0x98, 0x23, 0x6F, 0x1D, 0xFF, 
    0xFF, 0x3C, 0x01, 0x70, 0x00, 0x8D, 0x00, 0x00, 0x00, 0x54, 0x01, 0x6A, 0x98, 0x08, 0xC5, 0xFF, 
    0xFF, 0xB1, 0x00, 0x05, 0x00, 0x63, 0x00, 0x00, 0x01, 0x5A, 0x03, 0x3E, 0xDD, 0x9D, 0x3A, 0xFF, 
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

u8 object_link_child_unaccounted_00E2E8[] = {
    0xFF, 0x86, 0xFF, 0xFE, 0x00, 0x38, 0x00, 0x00, 0x01, 0x87, 0x03, 0x40, 0xC2, 0xA5, 0x2E, 0xFF, 
    0xFF, 0xB1, 0xFF, 0xFD, 0xFF, 0x9D, 0x00, 0x00, 0x01, 0x5A, 0x03, 0x3E, 0xDD, 0x9D, 0xC6, 0xFF, 
    0x00, 0x66, 0xFF, 0xF9, 0xFF, 0xC1, 0x00, 0x00, 0x00, 0x99, 0x03, 0x34, 0x29, 0x98, 0xD5, 0xFF, 
    0xFF, 0x3C, 0x01, 0x68, 0xFF, 0x73, 0x00, 0x00, 0x00, 0x60, 0x01, 0x8F, 0x98, 0x08, 0x3B, 0xFF, 
    0xFF, 0x6B, 0x01, 0xFC, 0xFF, 0xC7, 0x00, 0x00, 0x00, 0x9B, 0x01, 0x27, 0xBF, 0x61, 0x1A, 0xFF, 
    0xFF, 0x79, 0x01, 0xFF, 0xFF, 0x99, 0x00, 0x00, 0x00, 0xAB, 0x01, 0x23, 0xCF, 0x5A, 0xC3, 0xFF, 
    0x00, 0x66, 0xFF, 0xF9, 0xFF, 0xC1, 0x00, 0x00, 0x01, 0x44, 0x02, 0xA3, 0x29, 0x98, 0xD5, 0xFF, 
    0xFF, 0xB1, 0xFF, 0xFD, 0xFF, 0x9D, 0x00, 0x00, 0x00, 0x9E, 0x02, 0x9D, 0xDD, 0x9D, 0xC6, 0xFF, 
    0xFF, 0x6A, 0x00, 0x93, 0xFF, 0x4B, 0x00, 0x00, 0x00, 0x73, 0x02, 0x2A, 0xD0, 0xC5, 0xA4, 0xFF, 
    0x00, 0x27, 0x02, 0x14, 0xFF, 0xC2, 0x00, 0x00, 0x01, 0x4C, 0x01, 0x18, 0x23, 0x6F, 0xE3, 0xFF, 
    0x00, 0x46, 0xFF, 0xFB, 0x00, 0x62, 0x00, 0x00, 0x00, 0xBC, 0x03, 0x35, 0x11, 0x94, 0x31, 0xFF, 
    0xFF, 0x86, 0xFF, 0xFE, 0x00, 0x38, 0x00, 0x00, 0x00, 0x70, 0x02, 0xA2, 0xC2, 0xA5, 0x2E, 0xFF, 
    0x00, 0xB7, 0x00, 0x53, 0x00, 0xA5, 0x00, 0x00, 0x00, 0x42, 0x02, 0xB5, 0x44, 0xB9, 0x43, 0xFF, 
    0x00, 0xA6, 0x00, 0x85, 0xFF, 0x72, 0x00, 0x00, 0x01, 0x94, 0x02, 0x3A, 0x50, 0xD9, 0xB0, 0xFF, 
    0x00, 0xB7, 0x00, 0x53, 0x00, 0xA5, 0x00, 0x00, 0x01, 0x90, 0x02, 0x6C, 0x44, 0xB9, 0x43, 0xFF, 
    0x00, 0x38, 0x00, 0x7F, 0x00, 0xA8, 0x00, 0x00, 0x00, 0xC9, 0x02, 0x84, 0xAF, 0x1C, 0x53, 0xFF, 
    0x00, 0xC7, 0x01, 0x75, 0xFF, 0xCD, 0x00, 0x00, 0x01, 0xCD, 0x01, 0x8F, 0x3C, 0x3E, 0x53, 0xFF, 
    0xFF, 0x27, 0x00, 0xBB, 0xFF, 0x9F, 0x00, 0x00, 0x00, 0x35, 0x02, 0x0F, 0x96, 0x1E, 0x30, 0xFF, 
    0x00, 0xD2, 0x00, 0xFE, 0x00, 0x1C, 0x00, 0x00, 0x01, 0xC5, 0x01, 0xE9, 0x64, 0x0B, 0xC0, 0xFF, 
    0x00, 0xB9, 0x01, 0x80, 0xFF, 0x63, 0x00, 0x00, 0x01, 0xC6, 0x01, 0x82, 0x50, 0x2E, 0xB5, 0xFF, 
    0xFF, 0x55, 0x01, 0x66, 0xFF, 0x20, 0x00, 0x00, 0x00, 0x7B, 0x01, 0x8D, 0xC5, 0x10, 0x99, 0xFF, 
    0x00, 0x2C, 0x02, 0x1C, 0x00, 0x02, 0x00, 0x00, 0x01, 0x4F, 0x01, 0x14, 0x0E, 0x38, 0x69, 0xFF, 
    0x00, 0x38, 0x00, 0x7F, 0x00, 0xA8, 0x00, 0x00, 0x01, 0x20, 0x02, 0x4B, 0xAF, 0x1C, 0x53, 0xFF, 
    0x01, 0x03, 0x01, 0x8D, 0x00, 0x2F, 0x00, 0x00, 0x01, 0x37, 0x02, 0x6E, 0x51, 0x43, 0xC8, 0xFF, 
    0x01, 0x19, 0x00, 0xE8, 0x00, 0x82, 0x00, 0x00, 0x00, 0xAB, 0x03, 0x85, 0x6D, 0x01, 0x31, 0xFF, 
    0x00, 0xD2, 0x00, 0xFE, 0x00, 0x1C, 0x00, 0x00, 0x01, 0x27, 0x03, 0x7D, 0x64, 0x0B, 0xC0, 0xFF, 
    0x00, 0xB0, 0x01, 0x95, 0x00, 0x2A, 0x00, 0x00, 0x01, 0xBD, 0x02, 0x85, 0xB9, 0x57, 0xD7, 0xFF, 
    0x00, 0x38, 0x00, 0x7F, 0x00, 0xA8, 0x00, 0x00, 0x01, 0xC2, 0x04, 0xA0, 0xAF, 0x1C, 0x53, 0xFF, 
    0x00, 0x8F, 0x00, 0xFB, 0x00, 0xBC, 0x00, 0x00, 0x01, 0x8B, 0x03, 0xA1, 0xEF, 0x29, 0x6F, 0xFF, 
    0x00, 0xB7, 0x00, 0x53, 0x00, 0xA5, 0x00, 0x00, 0x00, 0xE3, 0x04, 0xB4, 0x44, 0xB9, 0x43, 0xFF, 
    0x00, 0xDB, 0x01, 0x97, 0x00, 0x4F, 0x00, 0x00, 0x01, 0x7B, 0x02, 0x6F, 0x18, 0x5D, 0x48, 0xFF, 
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

Gfx gLinkHumanRightHandHoldingOcarinaDL[] = {
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
    gsSPVertex(object_link_childVtx_00E858, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 0, 2, 0, 6, 1, 0, 0),
    gsSP2Triangles(9, 8, 2, 0, 10, 2, 6, 0),
    gsSP2Triangles(2, 10, 9, 0, 0, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 14, 16, 15, 0),
    gsSP2Triangles(0, 8, 9, 0, 14, 18, 16, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 5, 0),
    gsSP2Triangles(5, 7, 20, 0, 22, 4, 3, 0),
    gsSP2Triangles(23, 24, 25, 0, 17, 19, 13, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00E858[30], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(12, 14, 10, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 12, 11, 0, 18, 11, 10, 0),
    gsSP2Triangles(19, 3, 20, 0, 20, 1, 0, 0),
    gsSP2Triangles(3, 19, 2, 0, 19, 21, 22, 0),
    gsSP2Triangles(22, 2, 19, 0, 2, 22, 0, 0),
    gsSP2Triangles(20, 0, 21, 0, 0, 22, 21, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanOcarinaTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00E858[53], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 6, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(11, 9, 0, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 1, 13, 0, 11, 3, 14, 0),
    gsSP2Triangles(11, 0, 3, 0, 0, 9, 1, 0),
    gsSP2Triangles(12, 4, 1, 0, 1, 9, 8, 0),
    gsSP2Triangles(1, 8, 5, 0, 14, 10, 11, 0),
    gsSP2Triangles(1, 5, 13, 0, 15, 13, 5, 0),
    gsSP2Triangles(15, 5, 7, 0, 7, 14, 15, 0),
    gsSP2Triangles(10, 14, 6, 0, 6, 14, 7, 0),
    gsSP2Triangles(12, 13, 16, 0, 12, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 15, 14, 0, 17, 14, 19, 0),
    gsSP2Triangles(14, 20, 21, 0, 14, 21, 19, 0),
    gsSP2Triangles(4, 20, 3, 0, 3, 20, 14, 0),
    gsSP2Triangles(12, 17, 19, 0, 12, 19, 22, 0),
    gsSP2Triangles(12, 22, 4, 0, 21, 20, 4, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_00EF68[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_00EF68.vtx.inc"
};

Gfx object_link_child_DL_00F1D8[] = {
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
    gsSPVertex(object_link_childVtx_00EF68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 4, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 9, 0, 10, 15, 11, 0),
    gsSP2Triangles(15, 10, 9, 0, 16, 17, 18, 0),
    gsSP2Triangles(4, 6, 3, 0, 3, 6, 5, 0),
    gsSP2Triangles(7, 2, 1, 0, 19, 20, 21, 0),
    gsSP2Triangles(15, 22, 11, 0, 21, 23, 19, 0),
    gsSP2Triangles(10, 24, 8, 0, 14, 13, 12, 0),
    gsSP2Triangles(12, 11, 14, 0, 11, 22, 25, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSP2Triangles(14, 25, 27, 0, 11, 25, 14, 0),
    gsSP2Triangles(27, 9, 14, 0, 27, 15, 9, 0),
    gsSP1Triangle(31, 28, 30, 0),
    gsSPVertex(&object_link_childVtx_00EF68[32], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_00F318[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_00F318.vtx.inc"
};

Gfx object_link_child_DL_00F548[] = {
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
    gsSPVertex(object_link_childVtx_00F318, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 2, 17, 0, 0),
    gsSP2Triangles(18, 12, 13, 0, 19, 12, 20, 0),
    gsSP2Triangles(21, 19, 22, 0, 22, 19, 20, 0),
    gsSP2Triangles(23, 24, 6, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 18, 20, 12, 0),
    gsSP2Triangles(12, 29, 10, 0, 12, 19, 29, 0),
    gsSP2Triangles(8, 23, 6, 0, 30, 23, 8, 0),
    gsSP1Triangle(31, 23, 30, 0),
    gsSPVertex(&object_link_childVtx_00F318[32], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_00F668[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_00F668.vtx.inc"
};

Gfx object_link_child_DL_00F998[] = {
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
    gsSPVertex(object_link_childVtx_00F668, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 0, 0, 5, 6, 3, 0),
    gsSP2Triangles(2, 3, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 8, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 12, 11, 0, 2, 4, 3, 0),
    gsSP2Triangles(10, 14, 12, 0, 12, 15, 13, 0),
    gsSP2Triangles(11, 13, 16, 0, 16, 17, 11, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(13, 15, 9, 0, 23, 24, 21, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&object_link_childVtx_00F668[32], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 3, 7, 8, 0),
    gsSP2Triangles(9, 6, 4, 0, 4, 3, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 13, 14, 15, 0),
    gsSP2Triangles(12, 11, 16, 0, 11, 17, 18, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_00FAD8[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_00FAD8.vtx.inc"
};

Gfx object_link_child_DL_00FD08[] = {
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
    gsSPVertex(object_link_childVtx_00FAD8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 2, 17, 0, 0),
    gsSP2Triangles(13, 10, 18, 0, 19, 10, 20, 0),
    gsSP2Triangles(21, 20, 22, 0, 19, 20, 21, 0),
    gsSP2Triangles(8, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 25, 27, 0, 10, 19, 18, 0),
    gsSP2Triangles(12, 29, 10, 0, 29, 20, 10, 0),
    gsSP2Triangles(8, 24, 6, 0, 6, 24, 30, 0),
    gsSP1Triangle(30, 24, 31, 0),
    gsSPVertex(&object_link_childVtx_00FAD8[32], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_00FE28[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_00FE28.vtx.inc"
};

Gfx object_link_child_DL_0102E8[] = {
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
    gsSPVertex(object_link_childVtx_00FE28, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 0, 2, 0, 6, 1, 0, 0),
    gsSP2Triangles(9, 8, 2, 0, 10, 2, 6, 0),
    gsSP2Triangles(2, 10, 9, 0, 0, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 14, 16, 15, 0),
    gsSP2Triangles(0, 8, 9, 0, 14, 18, 16, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 5, 0),
    gsSP2Triangles(5, 7, 20, 0, 22, 4, 3, 0),
    gsSP2Triangles(23, 24, 25, 0, 17, 19, 13, 0),
    gsSP2Triangles(25, 26, 23, 0, 27, 28, 29, 0),
    gsSPVertex(&object_link_childVtx_00FE28[30], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(12, 14, 10, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 12, 11, 0, 18, 11, 10, 0),
    gsSP2Triangles(19, 3, 20, 0, 20, 1, 0, 0),
    gsSP2Triangles(3, 19, 2, 0, 19, 21, 22, 0),
    gsSP2Triangles(22, 2, 19, 0, 2, 22, 0, 0),
    gsSP2Triangles(20, 0, 21, 0, 0, 22, 21, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gLinkHumanOcarinaTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_00FE28[53], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 6, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(11, 9, 0, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 1, 13, 0, 11, 3, 14, 0),
    gsSP2Triangles(11, 0, 3, 0, 0, 9, 1, 0),
    gsSP2Triangles(12, 4, 1, 0, 1, 9, 8, 0),
    gsSP2Triangles(1, 8, 5, 0, 14, 10, 11, 0),
    gsSP2Triangles(1, 5, 13, 0, 15, 13, 5, 0),
    gsSP2Triangles(15, 5, 7, 0, 7, 14, 15, 0),
    gsSP2Triangles(10, 14, 6, 0, 6, 14, 7, 0),
    gsSP2Triangles(12, 13, 16, 0, 12, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 15, 14, 0, 17, 14, 19, 0),
    gsSP2Triangles(14, 20, 21, 0, 14, 21, 19, 0),
    gsSP2Triangles(4, 20, 3, 0, 3, 20, 14, 0),
    gsSP2Triangles(12, 17, 19, 0, 12, 19, 22, 0),
    gsSP2Triangles(12, 22, 4, 0, 21, 20, 4, 0),
    gsSPEndDisplayList(),
};

Vtx object_link_childVtx_010538[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_010538.vtx.inc"
};

Gfx object_link_child_DL_015F98[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 70, 70, 70, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01CB00, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1435], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 2, 0, 4, 5, 0, 0),
    gsSP2Triangles(0, 6, 3, 0, 7, 6, 0, 0),
    gsSP2Triangles(8, 7, 0, 0, 9, 8, 0, 0),
    gsSP2Triangles(9, 0, 10, 0, 0, 5, 10, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016048[] = {
    gsSPDisplayList(object_link_child_DL_015F98),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016058[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01C800, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1411], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 0, 3, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 4, 0),
    gsSP2Triangles(7, 6, 2, 0, 7, 2, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 11, 13, 0, 11, 9, 13, 0),
    gsSP2Triangles(14, 11, 12, 0, 14, 10, 11, 0),
    gsSP2Triangles(14, 13, 15, 0, 14, 12, 13, 0),
    gsSP2Triangles(13, 9, 15, 0, 9, 8, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanShieldHandleTLUT),
    gsDPLoadTextureBlock(gLinkHumanShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[1427], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 3, 0, 2, 1, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 4, 6, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_0161C8[] = {
    gsSPTexture(0x0E74, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 90, 20, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D300, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1399], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 3, 7, 8, 0),
    gsSP2Triangles(3, 8, 1, 0, 5, 9, 6, 0),
    gsSP2Triangles(5, 10, 9, 0, 10, 11, 9, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016270[] = {
    gsSPTexture(0x0898, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 90, 20, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D440, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 2, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1386], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 5, 0, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 6, 7, 0),
    gsSP2Triangles(9, 6, 8, 0, 10, 9, 8, 0),
    gsSP2Triangles(11, 9, 10, 0, 11, 12, 9, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016320[] = {
    gsSPTexture(0x0898, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 90, 20, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D440, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, 2, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1373], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 7, 9, 0, 10, 8, 9, 0),
    gsSP2Triangles(11, 8, 10, 0, 11, 12, 8, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_0163D0[] = {
    gsSPTexture(0x0FA0, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 120, 120, 120, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 2, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1362], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(1, 5, 2, 0, 0, 2, 6, 0),
    gsSP2Triangles(2, 7, 6, 0, 3, 7, 2, 0),
    gsSP2Triangles(2, 8, 4, 0, 2, 9, 8, 0),
    gsSP2Triangles(2, 10, 9, 0, 5, 10, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanMirrorShieldDL[] = {
    gsSPDisplayList(object_link_child_DL_0163D0),
    gsSPDisplayList(object_link_child_DL_016320),
    gsSPDisplayList(object_link_child_DL_016270),
    gsSPDisplayList(object_link_child_DL_0161C8),
    gsSPDisplayList(object_link_child_DL_016058),
    gsSPDisplayList(object_link_child_DL_016048),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_0164B8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01A380, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1298], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 4, 10, 0, 4, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 16, 19, 0),
    gsSP2Triangles(20, 17, 21, 0, 19, 21, 17, 0),
    gsSP2Triangles(22, 16, 23, 0, 21, 23, 20, 0),
    gsSP2Triangles(23, 21, 22, 0, 18, 23, 16, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(24, 30, 25, 0, 29, 30, 27, 0),
    gsSP1Triangle(31, 28, 27, 0),
    gsSPVertex(&object_link_childVtx_010538[1330], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 0, 5, 0, 8, 6, 9, 0),
    gsSP2Triangles(4, 8, 9, 0, 10, 4, 11, 0),
    gsSP2Triangles(10, 11, 0, 0, 11, 4, 9, 0),
    gsSP2Triangles(5, 0, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 14, 18, 12, 0),
    gsSP1Triangle(17, 19, 15, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 26, 25, 27, 0),
    gsSP2Triangles(25, 28, 27, 0, 29, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016608[] = {
    gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 90, 30, 128, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1273], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(4, 8, 7, 0, 7, 8, 9, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSP2Triangles(9, 8, 10, 0, 10, 11, 12, 0),
    gsSP1Triangle(10, 8, 11, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSP2Triangles(13, 1, 14, 0, 15, 13, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(16, 20, 19, 0, 20, 21, 19, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSP2Triangles(20, 22, 21, 0, 22, 23, 24, 0),
    gsSP1Triangle(22, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_0166F8[] = {
    gsSPTexture(0x0FA0, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 90, 30, 128, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1248], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 7, 8, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSP2Triangles(10, 2, 1, 0, 9, 8, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(10, 1, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(18, 10, 16, 0, 19, 11, 20, 0),
    gsSP2Triangles(21, 19, 20, 0, 11, 8, 20, 0),
    gsSP2Triangles(22, 13, 23, 0, 22, 23, 24, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_0167D0[] = {
    gsSPTexture(0x0FA0, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 120, 30, 40, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1230], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 2, 4, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 8, 11, 10, 0),
    gsSP2Triangles(12, 11, 8, 0, 12, 8, 13, 0),
    gsSP2Triangles(13, 8, 14, 0, 8, 7, 14, 0),
    gsSP2Triangles(15, 2, 16, 0, 17, 2, 15, 0),
    gsSP2Triangles(17, 3, 2, 0, 2, 1, 16, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanGreatFairysSwordDL[] = {
    gsSPDisplayList(object_link_child_DL_0167D0),
    gsSPDisplayList(object_link_child_DL_0166F8),
    gsSPDisplayList(object_link_child_DL_016608),
    gsSPDisplayList(object_link_child_DL_0164B8),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_0168C0[] = {
    gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, ENVIRONMENT,
                       0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1225], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016950[] = {
    gsSPTexture(0x0578, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, ENVIRONMENT,
                       0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 4, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1220], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_0169E0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01C900, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1168], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(1, 0, 5, 0, 4, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 6, 9, 0),
    gsSP2Triangles(8, 3, 6, 0, 2, 9, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_link_child_Tex_01C400, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[1178], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(4, 18, 19, 0, 6, 18, 4, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(1, 3, 24, 0, 25, 1, 24, 0),
    gsSP2Triangles(26, 18, 27, 0, 19, 18, 26, 0),
    gsSP2Triangles(26, 5, 7, 0, 27, 5, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_link_child_Tex_01C380, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[1206], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 4, 0),
    gsSP2Triangles(9, 4, 0, 0, 11, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanGildedSwordSheathDL[] = {
    gsSPDisplayList(object_link_child_DL_0169E0),
    gsSPDisplayList(object_link_child_DL_016950),
    gsSPDisplayList(object_link_child_DL_0168C0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016BA0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01C900, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1136], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(12, 16, 17, 0, 15, 18, 19, 0),
    gsSP2Triangles(17, 16, 20, 0, 19, 18, 21, 0),
    gsSP2Triangles(20, 11, 10, 0, 21, 14, 13, 0),
    gsSP2Triangles(3, 22, 23, 0, 23, 22, 24, 0),
    gsSP2Triangles(25, 1, 26, 0, 26, 1, 0, 0),
    gsSP2Triangles(27, 7, 28, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 28, 30, 0, 31, 22, 25, 0),
    gsSP2Triangles(28, 9, 30, 0, 24, 22, 31, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016C88[] = {
    gsSPTexture(0x07D0, 0x044C, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, ENVIRONMENT,
                       0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 64, 64, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1126], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 1, 2, 0),
    gsSP2Triangles(2, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(3, 4, 0, 0, 8, 3, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 1, 4, 5, 0),
    gsSP2Triangles(4, 7, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(7, 4, 3, 0, 0, 2, 9, 0),
    gsSP2Triangles(9, 2, 6, 0, 6, 7, 3, 0),
    gsSP1Triangle(6, 3, 8, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016D58[] = {
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D300, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1110], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 3, 6, 0),
    gsSP2Triangles(1, 3, 5, 0, 7, 1, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 11, 8, 0, 13, 11, 14, 0),
    gsSP2Triangles(9, 11, 13, 0, 15, 9, 13, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016E10[] = {
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 0, 0, 40, 255),
    gsDPSetEnvColor(128, 128, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D300, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1078], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 2, 4, 5, 0),
    gsSP2Triangles(2, 5, 0, 0, 3, 0, 6, 0),
    gsSP2Triangles(6, 5, 3, 0, 0, 5, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 0, 0),
    gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 10, 14, 0),
    gsSP2Triangles(13, 11, 10, 0, 10, 8, 14, 0),
    gsSP2Triangles(15, 12, 14, 0, 15, 14, 8, 0),
    gsSP2Triangles(15, 8, 7, 0, 15, 7, 5, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(19, 20, 18, 0, 20, 21, 18, 0),
    gsSP2Triangles(20, 19, 22, 0, 22, 23, 24, 0),
    gsSP2Triangles(20, 22, 24, 0, 20, 24, 21, 0),
    gsSP2Triangles(25, 23, 22, 0, 25, 22, 19, 0),
    gsSP2Triangles(26, 25, 17, 0, 25, 19, 17, 0),
    gsSP2Triangles(17, 16, 26, 0, 27, 16, 28, 0),
    gsSP2Triangles(28, 26, 27, 0, 26, 16, 29, 0),
    gsSP2Triangles(16, 30, 29, 0, 16, 27, 30, 0),
    gsSP2Triangles(31, 27, 26, 0, 29, 31, 26, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016F38[] = {
    gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, ENVIRONMENT,
                       0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1073], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_016FC8[] = {
    gsSPTexture(0x0578, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, ENVIRONMENT,
                       0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 4, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1068], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanGildedSwordHandleDL[] = {
    gsSPDisplayList(object_link_child_DL_016FC8),
    gsSPDisplayList(object_link_child_DL_016F38),
    gsSPDisplayList(object_link_child_DL_016E10),
    gsSPDisplayList(object_link_child_DL_016D58),
    gsSPDisplayList(object_link_child_DL_016C88),
    gsSPDisplayList(object_link_child_DL_016BA0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_017090[] = {
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D300, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1054], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_017130[] = {
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0,
                       COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetEnvColor(0, 0, 60, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D300, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1040], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_0171D0[] = {
    gsSPTexture(0x0FA0, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, ENVIRONMENT,
                       0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1027], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 9, 12, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_017270[] = {
    gsSPTexture(0x0BB8, 0x0384, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, ENVIRONMENT, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, ENVIRONMENT,
                       0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 128, 128, 0, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01D340, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR |
                         G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[1014], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 11, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanGildedSwordBladeDL[] = {
    gsSPDisplayList(object_link_child_DL_017270),
    gsSPDisplayList(object_link_child_DL_0171D0),
    gsSPDisplayList(object_link_child_DL_017130),
    gsSPDisplayList(object_link_child_DL_017090),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanRazorSwordSheathDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01C180, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[986], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 4, 0, 10, 4, 3, 0),
    gsSP2Triangles(12, 1, 0, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 15, 0, 7, 17, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_link_child_Tex_01BF80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[1004], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 2, 4, 0),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPVertex(&object_link_childVtx_010538[1010], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanHerosShieldDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gLinkHumanShieldHandleTLUT),
    gsDPLoadTextureBlock(gLinkHumanShieldHandleTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[946], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gLinkHumanHerosShieldBackTLUT),
    gsDPLoadTextureBlock(gLinkHumanHerosShieldBackTex, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[958], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 0, 5, 0, 5, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 2, 6, 5, 0),
    gsSP2Triangles(2, 8, 6, 0, 2, 3, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gLinkHumanHerosShieldFrontTLUT),
    gsDPLoadTextureBlock(gLinkHumanHerosShieldFrontLowerTex, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[967], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(2, 1, 5, 0, 6, 2, 5, 0),
    gsSP2Triangles(7, 6, 5, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(gLinkHumanHerosShieldFrontTLUT),
    gsDPLoadTextureBlock(gLinkHumanHerosShieldFrontUpperTex, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR |
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[975], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(5, 6, 7, 0, 2, 1, 5, 0),
    gsSP2Triangles(2, 5, 7, 0, 9, 2, 7, 0),
    gsSP2Triangles(10, 4, 3, 0, 4, 1, 0, 0),
    gsSP2Triangles(3, 2, 9, 0, 3, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanKokiriSwordSheathDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_01BF80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[928], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 2, 3, 0, 3, 5, 4, 0),
    gsSP2Triangles(3, 6, 5, 0, 5, 6, 0, 0),
    gsSP2Triangles(7, 5, 0, 0, 0, 2, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_link_child_Tex_01BF00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[936], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 5, 4, 0, 0),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPVertex(&object_link_childVtx_010538[942], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_017818[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, SHADE, 0, 0, 0, 1),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[922], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 2, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanHookshotDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_01B380, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[856], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 16, 5, 4, 0),
    gsSP2Triangles(13, 12, 17, 0, 13, 17, 14, 0),
    gsSP2Triangles(8, 7, 18, 0, 19, 8, 18, 0),
    gsSP2Triangles(19, 10, 8, 0, 20, 12, 11, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsSP2Triangles(23, 12, 20, 0, 24, 1, 0, 0),
    gsSP2Triangles(5, 25, 3, 0, 25, 5, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_01A280, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[883], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(6, 8, 2, 0, 2, 7, 6, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP1Triangle(9, 10, 11, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP1Triangle(0, 12, 1, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP1Triangle(11, 10, 13, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(1, 12, 4, 0, 2, 8, 0, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_019A80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[897], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 8, 7, 0, 7, 5, 9, 0),
    gsSP2Triangles(0, 10, 9, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 15, 18, 0, 10, 8, 9, 0),
    gsSP2Triangles(12, 15, 17, 0, 13, 12, 18, 0),
    gsSP2Triangles(13, 18, 19, 0, 6, 11, 10, 0),
    gsSP2Triangles(6, 10, 7, 0, 20, 17, 16, 0),
    gsSP2Triangles(21, 18, 12, 0, 3, 5, 7, 0),
    gsSP2Triangles(10, 0, 3, 0, 7, 10, 3, 0),
    gsSP2Triangles(18, 22, 16, 0, 15, 19, 18, 0),
    gsSP2Triangles(17, 21, 12, 0, 22, 23, 16, 0),
    gsSP2Triangles(9, 1, 0, 0, 17, 20, 21, 0),
    gsSP2Triangles(12, 14, 15, 0, 5, 24, 9, 0),
    gsSP2Triangles(4, 24, 5, 0, 15, 14, 19, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_017B40[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_01B380, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[452], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 0, 0),
    gsSP2Triangles(6, 3, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 9, 11, 0, 10, 7, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 16, 12, 0, 17, 18, 19, 0),
    gsSP2Triangles(10, 17, 19, 0, 10, 20, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 23, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 28, 30, 0),
    gsSPVertex(&object_link_childVtx_010538[483], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 2, 0, 8, 5, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 14, 17, 19, 0),
    gsSP2Triangles(19, 20, 14, 0, 20, 15, 14, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 21, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 26, 30, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_01A280, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[514], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 0, 2, 0),
    gsSP2Triangles(3, 0, 4, 0, 2, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 13, 12, 0),
    gsSP2Triangles(4, 16, 17, 0, 17, 5, 4, 0),
    gsSP2Triangles(6, 17, 16, 0, 6, 7, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_019A80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[532], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 0, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 8, 10, 0),
    gsSP2Triangles(0, 13, 11, 0, 4, 16, 17, 0),
    gsSP2Triangles(10, 13, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(13, 10, 11, 0, 7, 21, 17, 0),
    gsSP2Triangles(17, 20, 19, 0, 22, 23, 24, 0),
    gsSP2Triangles(17, 16, 7, 0, 25, 22, 16, 0),
    gsSP2Triangles(25, 26, 22, 0, 24, 16, 22, 0),
    gsSP2Triangles(27, 21, 28, 0, 24, 7, 16, 0),
    gsSP2Triangles(6, 26, 25, 0, 24, 23, 6, 0),
    gsSP2Triangles(6, 7, 24, 0, 23, 29, 6, 0),
    gsSP2Triangles(25, 4, 6, 0, 6, 29, 26, 0),
    gsSP1Triangle(30, 27, 31, 0),
    gsSPVertex(&object_link_childVtx_010538[564], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 6, 5, 0),
    gsSP2Triangles(8, 9, 6, 0, 0, 2, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 0, 13, 1, 0),
    gsSP2Triangles(0, 14, 13, 0, 15, 4, 16, 0),
    gsSP2Triangles(17, 18, 3, 0, 4, 15, 0, 0),
    gsSP2Triangles(18, 19, 3, 0, 16, 4, 20, 0),
    gsSP2Triangles(3, 21, 22, 0, 15, 11, 23, 0),
    gsSP2Triangles(16, 11, 15, 0, 22, 20, 3, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 24, 16, 0),
    gsSP2Triangles(25, 26, 27, 0, 22, 28, 0, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_link_childVtx_010538[596], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 0, 4, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 2, 6, 0, 8, 4, 7, 0),
    gsSP2Triangles(8, 5, 4, 0, 7, 9, 10, 0),
    gsSP1Triangle(7, 6, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_019240, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[607], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 1, 0, 7, 2, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 20, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 25, 30, 0),
    gsSPVertex(&object_link_childVtx_010538[638], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 7, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 10, 9, 15, 0),
    gsSP2Triangles(10, 15, 6, 0, 16, 8, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 16, 0),
    gsSP2Triangles(18, 20, 22, 0, 23, 24, 16, 0),
    gsSP2Triangles(3, 0, 25, 0, 26, 21, 27, 0),
    gsSP2Triangles(26, 27, 28, 0, 24, 29, 30, 0),
    gsSP1Triangle(25, 0, 31, 0),
    gsSPVertex(&object_link_childVtx_010538[670], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 26, 24, 0),
    gsSP2Triangles(23, 21, 20, 0, 27, 28, 29, 0),
    gsSP2Triangles(23, 25, 30, 0, 30, 21, 23, 0),
    gsSPVertex(&object_link_childVtx_010538[701], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 0, 6, 0, 1, 0, 15, 0),
    gsSP2Triangles(16, 17, 1, 0, 15, 5, 18, 0),
    gsSP2Triangles(2, 17, 14, 0, 6, 19, 15, 0),
    gsSP2Triangles(15, 18, 1, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 8, 0, 14, 17, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 11, 10, 29, 0),
    gsSP1Triangle(12, 30, 10, 0),
    gsSPVertex(&object_link_childVtx_010538[732], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(0, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(0, 9, 13, 0, 3, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 14, 23, 0, 3, 23, 14, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 27, 14, 22, 0),
    gsSPVertex(&object_link_childVtx_010538[763], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 7, 0, 0),
    gsSP2Triangles(2, 1, 8, 0, 0, 9, 10, 0),
    gsSP2Triangles(2, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 3, 19, 20, 0),
    gsSP2Triangles(4, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(12, 7, 2, 0, 24, 25, 8, 0),
    gsSP2Triangles(23, 26, 27, 0, 0, 10, 28, 0),
    gsSP1Triangle(29, 9, 30, 0),
    gsSPVertex(&object_link_childVtx_010538[794], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 1, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 15, 18, 0),
    gsSP2Triangles(18, 15, 19, 0, 20, 21, 17, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 24, 23, 0, 20, 27, 22, 0),
    gsSP2Triangles(18, 28, 29, 0, 18, 30, 28, 0),
    gsSPVertex(&object_link_childVtx_010538[825], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 7, 3, 5, 0),
    gsSP2Triangles(8, 9, 4, 0, 6, 2, 10, 0),
    gsSP2Triangles(11, 10, 9, 0, 12, 13, 7, 0),
    gsSP2Triangles(7, 5, 12, 0, 14, 13, 12, 0),
    gsSP2Triangles(15, 16, 8, 0, 17, 3, 7, 0),
    gsSP2Triangles(18, 17, 7, 0, 17, 15, 3, 0),
    gsSP2Triangles(19, 20, 21, 0, 13, 20, 19, 0),
    gsSP2Triangles(20, 0, 21, 0, 14, 20, 13, 0),
    gsSP2Triangles(20, 1, 0, 0, 14, 1, 20, 0),
    gsSP2Triangles(6, 11, 22, 0, 6, 10, 11, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(23, 27, 24, 0, 23, 28, 27, 0),
    gsSP2Triangles(28, 29, 27, 0, 29, 30, 27, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanBowDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_01A280, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_link_childVtx_010538[348], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 5, 7, 2, 0),
    gsSP2Triangles(3, 0, 4, 0, 0, 3, 6, 0),
    gsSP2Triangles(2, 1, 5, 0, 2, 7, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 9, 11, 0, 10, 9, 12, 0),
    gsSP2Triangles(8, 13, 11, 0, 10, 13, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 18, 0, 14, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 22, 0, 28, 29, 20, 0),
    gsSP2Triangles(30, 20, 29, 0, 22, 21, 26, 0),
    gsSP2Triangles(29, 28, 26, 0, 26, 30, 29, 0),
    gsSP1Triangle(22, 27, 20, 0),
    gsSPVertex(&object_link_childVtx_010538[379], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 3, 9, 0),
    gsSP2Triangles(5, 4, 7, 0, 5, 9, 3, 0),
    gsSP2Triangles(7, 6, 5, 0, 10, 11, 0, 0),
    gsSP2Triangles(1, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 15, 14, 0, 18, 19, 16, 0),
    gsSP2Triangles(17, 19, 18, 0, 11, 10, 13, 0),
    gsSP2Triangles(13, 2, 1, 0, 14, 19, 17, 0),
    gsSP2Triangles(16, 19, 14, 0, 20, 21, 22, 0),
    gsSP1Triangle(20, 23, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_019A80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[403], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 3, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(11, 14, 12, 0, 13, 14, 11, 0),
    gsSP2Triangles(13, 15, 14, 0, 14, 16, 12, 0),
    gsSP2Triangles(16, 17, 12, 0, 5, 4, 7, 0),
    gsSP2Triangles(7, 18, 1, 0, 19, 4, 3, 0),
    gsSP2Triangles(3, 20, 19, 0, 18, 7, 4, 0),
    gsSP2Triangles(4, 19, 18, 0, 15, 21, 22, 0),
    gsSP2Triangles(22, 21, 16, 0, 23, 24, 21, 0),
    gsSP2Triangles(21, 15, 23, 0, 24, 17, 16, 0),
    gsSP2Triangles(16, 21, 24, 0, 13, 23, 15, 0),
    gsSP2Triangles(25, 16, 14, 0, 14, 15, 26, 0),
    gsSP2Triangles(26, 27, 14, 0, 14, 27, 25, 0),
    gsSP2Triangles(26, 15, 22, 0, 22, 16, 25, 0),
    gsSP2Triangles(12, 13, 28, 0, 10, 29, 13, 0),
    gsSP2Triangles(12, 28, 10, 0, 5, 7, 6, 0),
    gsSP2Triangles(9, 3, 5, 0, 30, 0, 2, 0),
    gsSP2Triangles(9, 31, 8, 0, 8, 31, 6, 0),
    gsSPVertex(&object_link_childVtx_010538[435], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 6, 7, 0, 0),
    gsSP2Triangles(8, 6, 0, 0, 2, 8, 0, 0),
    gsSP2Triangles(3, 6, 8, 0, 3, 8, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 13, 15, 0),
    gsSPEndDisplayList(),
};

Gfx object_link_child_DL_018490[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_01A280, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_link_childVtx_010538, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(3, 1, 9, 0, 9, 1, 0, 0),
    gsSP2Triangles(3, 10, 2, 0, 2, 10, 0, 0),
    gsSP2Triangles(6, 11, 4, 0, 8, 7, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(18, 13, 19, 0, 15, 14, 17, 0),
    gsSP2Triangles(15, 19, 13, 0, 17, 16, 15, 0),
    gsSP2Triangles(12, 6, 5, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
    gsSP2Triangles(20, 27, 23, 0, 24, 22, 25, 0),
    gsSP2Triangles(26, 25, 22, 0, 23, 21, 20, 0),
    gsSP2Triangles(4, 11, 7, 0, 22, 27, 20, 0),
    gsSP2Triangles(28, 29, 30, 0, 30, 29, 31, 0),
    gsSPVertex(&object_link_childVtx_010538[32], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 4, 1, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 10, 7, 12, 0),
    gsSP2Triangles(9, 6, 5, 0, 9, 11, 10, 0),
    gsSP2Triangles(10, 12, 9, 0, 7, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_019A80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[45], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 3, 15, 0),
    gsSP2Triangles(16, 15, 12, 0, 15, 3, 12, 0),
    gsSP2Triangles(3, 7, 12, 0, 13, 4, 3, 0),
    gsSP2Triangles(13, 17, 4, 0, 12, 14, 16, 0),
    gsSP2Triangles(3, 18, 6, 0, 5, 18, 3, 0),
    gsSP2Triangles(19, 20, 21, 0, 8, 20, 19, 0),
    gsSP2Triangles(19, 9, 8, 0, 21, 22, 19, 0),
    gsSP2Triangles(23, 24, 9, 0, 22, 25, 26, 0),
    gsSP2Triangles(26, 27, 22, 0, 28, 29, 7, 0),
    gsSP2Triangles(4, 29, 28, 0, 25, 9, 24, 0),
    gsSP2Triangles(28, 7, 6, 0, 29, 30, 31, 0),
    gsSP2Triangles(31, 7, 29, 0, 4, 17, 30, 0),
    gsSP2Triangles(30, 29, 4, 0, 7, 31, 12, 0),
    gsSP2Triangles(16, 11, 13, 0, 24, 26, 25, 0),
    gsSPVertex(&object_link_childVtx_010538[77], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(11, 15, 16, 0, 16, 17, 18, 0),
    gsSP2Triangles(11, 18, 15, 0, 18, 17, 15, 0),
    gsSP2Triangles(6, 8, 19, 0, 20, 8, 11, 0),
    gsSP2Triangles(18, 9, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(21, 20, 11, 0, 18, 21, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_019240, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_link_childVtx_010538[99], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 1, 0, 7, 2, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 20, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 25, 30, 0),
    gsSPVertex(&object_link_childVtx_010538[130], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 7, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 10, 9, 15, 0),
    gsSP2Triangles(10, 15, 6, 0, 16, 8, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 16, 0),
    gsSP2Triangles(18, 20, 22, 0, 23, 24, 16, 0),
    gsSP2Triangles(3, 0, 25, 0, 26, 21, 27, 0),
    gsSP2Triangles(26, 27, 28, 0, 24, 29, 30, 0),
    gsSP1Triangle(25, 0, 31, 0),
    gsSPVertex(&object_link_childVtx_010538[162], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 1, 0, 12, 13, 14, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 26, 24, 0),
    gsSP2Triangles(23, 21, 20, 0, 27, 28, 29, 0),
    gsSP2Triangles(23, 25, 30, 0, 30, 21, 23, 0),
    gsSPVertex(&object_link_childVtx_010538[193], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 0, 6, 0, 1, 0, 15, 0),
    gsSP2Triangles(16, 17, 1, 0, 15, 5, 18, 0),
    gsSP2Triangles(2, 17, 14, 0, 6, 19, 15, 0),
    gsSP2Triangles(15, 18, 1, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 8, 0, 14, 17, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 11, 10, 29, 0),
    gsSP1Triangle(12, 30, 10, 0),
    gsSPVertex(&object_link_childVtx_010538[224], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(0, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(0, 9, 13, 0, 3, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 14, 23, 0, 3, 23, 14, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 27, 14, 22, 0),
    gsSPVertex(&object_link_childVtx_010538[255], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 7, 0, 0),
    gsSP2Triangles(2, 1, 8, 0, 0, 9, 10, 0),
    gsSP2Triangles(2, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 3, 19, 20, 0),
    gsSP2Triangles(4, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(12, 7, 2, 0, 24, 25, 8, 0),
    gsSP2Triangles(23, 26, 27, 0, 0, 10, 28, 0),
    gsSP1Triangle(29, 9, 30, 0),
    gsSPVertex(&object_link_childVtx_010538[286], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 1, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 15, 18, 0),
    gsSP2Triangles(18, 15, 19, 0, 20, 21, 17, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 24, 23, 0, 20, 27, 22, 0),
    gsSP2Triangles(18, 28, 29, 0, 18, 30, 28, 0),
    gsSPVertex(&object_link_childVtx_010538[317], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 7, 3, 5, 0),
    gsSP2Triangles(8, 9, 4, 0, 6, 2, 10, 0),
    gsSP2Triangles(11, 10, 9, 0, 12, 13, 7, 0),
    gsSP2Triangles(7, 5, 12, 0, 14, 13, 12, 0),
    gsSP2Triangles(15, 16, 8, 0, 17, 3, 7, 0),
    gsSP2Triangles(18, 17, 7, 0, 17, 15, 3, 0),
    gsSP2Triangles(19, 20, 21, 0, 13, 20, 19, 0),
    gsSP2Triangles(20, 0, 21, 0, 14, 20, 13, 0),
    gsSP2Triangles(20, 1, 0, 0, 14, 1, 20, 0),
    gsSP2Triangles(6, 11, 22, 0, 6, 10, 11, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(23, 27, 24, 0, 23, 28, 27, 0),
    gsSP2Triangles(28, 29, 27, 0, 29, 30, 27, 0),
    gsSPEndDisplayList(),
};

u64 object_link_child_TLUT_018A40[] = {
#include "assets/objects/object_link_child/mm_link/tlut_018A40.rgba16.inc.c"
};

u64 gLinkHumanHerosShieldFrontTLUT[] = {
#include "assets/objects/object_link_child/mm_link/hylian_shield_front_tlut.rgba16.inc.c"
};

u64 gLinkHumanHerosShieldBackTLUT[] = {
#include "assets/objects/object_link_child/mm_link/hylian_shield_back_tlut.rgba16.inc.c"
};

u64 gLinkHumanShieldHandleTLUT[] = {
#include "assets/objects/object_link_child/mm_link/shield_handle_tlut.rgba16.inc.c"
};

u64 object_link_child_Tex_019240[] = {
#include "assets/objects/object_link_child/mm_link/tex_019240.ci8.inc.c"
};

u64 gLinkHumanHerosShieldFrontUpperTex[] = {
#include "assets/objects/object_link_child/mm_link/hylian_shield_front_upper.ci8.inc.c"
};

u64 object_link_child_Tex_019A80[] = {
#include "assets/objects/object_link_child/mm_link/tex_019A80.ci8.inc.c"
};

u64 object_link_child_Tex_01A280[] = {
#include "assets/objects/object_link_child/mm_link/tex_01A280.ci8.inc.c"
};

u64 object_link_child_Tex_01A380[] = {
#include "assets/objects/object_link_child/mm_link/tex_01A380.rgba16.inc.c"
};

u64 object_link_child_Tex_01B380[] = {
#include "assets/objects/object_link_child/mm_link/tex_01B380.ci8.inc.c"
};

u64 gLinkHumanHerosShieldFrontLowerTex[] = {
#include "assets/objects/object_link_child/mm_link/hylian_shield_front_lower.ci8.inc.c"
};

u64 gLinkHumanHerosShieldBackTex[] = {
#include "assets/objects/object_link_child/mm_link/hylian_shield_back.ci8.inc.c"
};

u64 gLinkHumanShieldHandleTex[] = {
#include "assets/objects/object_link_child/mm_link/shield_handle.ci8.inc.c"
};

u64 object_link_child_Tex_01BF00[] = {
#include "assets/objects/object_link_child/mm_link/tex_01BF00.rgba16.inc.c"
};

u64 object_link_child_Tex_01BF80[] = {
#include "assets/objects/object_link_child/mm_link/tex_01BF80.rgba16.inc.c"
};

u64 object_link_child_Tex_01C180[] = {
#include "assets/objects/object_link_child/mm_link/tex_01C180.rgba16.inc.c"
};

u64 object_link_child_Tex_01C380[] = {
#include "assets/objects/object_link_child/mm_link/tex_01C380.rgba16.inc.c"
};

u64 object_link_child_Tex_01C400[] = {
#include "assets/objects/object_link_child/mm_link/tex_01C400.rgba16.inc.c"
};

u64 object_link_child_Tex_01C800[] = {
#include "assets/objects/object_link_child/mm_link/tex_01C800.rgba16.inc.c"
};

u64 object_link_child_Tex_01C900[] = {
#include "assets/objects/object_link_child/mm_link/tex_01C900.rgba16.inc.c"
};

u64 object_link_child_Tex_01CB00[] = {
#include "assets/objects/object_link_child/mm_link/tex_01CB00.i8.inc.c"
};

u64 object_link_child_Tex_01D300[] = {
#include "assets/objects/object_link_child/mm_link/tex_01D300.i8.inc.c"
};

u64 object_link_child_Tex_01D340[] = {
#include "assets/objects/object_link_child/mm_link/tex_01D340.i8.inc.c"
};

u64 object_link_child_Tex_01D440[] = {
#include "assets/objects/object_link_child/mm_link/tex_01D440.i8.inc.c"
};

Vtx object_link_childVtx_01D840[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_01D840.vtx.inc"
};

// @TODO: Zel
#if 0
Gfx object_link_child_DL_01D960[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(object_link_child_TLUT_018A40),
    gsDPLoadTextureBlock(object_link_child_Tex_019A80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_link_childVtx_01D840, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 8, 9, 0),
    gsSP2Triangles(0, 4, 3, 0, 1, 10, 11, 0),
    gsSP2Triangles(12, 10, 1, 0, 9, 13, 14, 0),
    gsSP2Triangles(3, 12, 0, 0, 9, 11, 6, 0),
    gsSP2Triangles(5, 8, 6, 0, 1, 0, 12, 0),
    gsSP2Triangles(13, 8, 5, 0, 15, 16, 5, 0),
    gsSP2Triangles(2, 1, 9, 0, 2, 14, 0, 0),
    gsSP2Triangles(10, 12, 17, 0, 0, 14, 15, 0),
    gsSP2Triangles(15, 4, 0, 0, 12, 3, 17, 0),
    gsSP2Triangles(16, 15, 14, 0, 5, 4, 15, 0),
    gsSP2Triangles(5, 7, 3, 0, 3, 7, 17, 0),
    gsSP2Triangles(13, 16, 14, 0, 5, 16, 13, 0),
    gsSP2Triangles(7, 6, 17, 0, 9, 8, 13, 0),
    gsSP2Triangles(6, 11, 17, 0, 2, 9, 14, 0),
    gsSP2Triangles(11, 9, 1, 0, 11, 10, 17, 0),
    gsSPEndDisplayList(),
};

Gfx gLinkHumanSheathEmptyDL[] = {
    gsSPEndDisplayList(),
};

Mtx gLinkHumanSheathedKokiriSwordMtx = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -37814493  , -2097151   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gLinkHumanSheathedKokiriSwordDL[] = {
    gsSPDisplayList(gLinkHumanKokiriSwordSheathDL),
    gsSPMatrix(&gLinkHumanSheathedKokiriSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gKokiriSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Mtx gLinkHumanSheathedRazorSwordMtx = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -31391984  , -1310719   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gLinkHumanSheathedRazorSwordDL[] = {
    gsSPMatrix(&gLinkHumanSheathedRazorSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gRazorSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPBranchList(gLinkHumanRazorSwordSheathDL),
};

Gfx gLinkHumanSheathedGildedSwordDL[] = {
    gsSPDisplayList(gLinkHumanGildedSwordSheathDL),
    gsSPMatrix(&gLinkHumanSheathedKokiriSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gLinkHumanGildedSwordHandleDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Mtx gLinkHumanHerosShieldMtx = { 
    -1         , 0          , 65535      , 0          , 
    0          , 65536      , 36175872   , 1          , 
    2684689    , 0          , 149880872  , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gLinkHumanHerosShieldWithMtxDL[] = {
    gsSPMatrix(&gLinkHumanHerosShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPBranchList(gLinkHumanHerosShieldDL),
};

Mtx gLinkHumanMirrorShieldMtx = { 
    -1         , 0          , 65535      , 0          , 
    0          , 65536      , 36175872   , -3276799   , 
    2684689    , 0          , 149880872  , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx gLinkHumanMirrorShieldWithMtxDL[] = {
    gsSPMatrix(&gLinkHumanMirrorShieldMtx, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPBranchList(gLinkHumanMirrorShieldDL),
};

Gfx gLinkHumanRightHandHoldingHerosShieldDL[] = {
    gsSPDisplayList(gLinkHumanRightHandClosedDL),
    gsSPBranchList(gLinkHumanHerosShieldDL),
};

Gfx object_link_child_DL_01DC38[] = {
    gsSPDisplayList(object_link_child_DL_00FD08),
    gsSPBranchList(gLinkHumanHerosShieldDL),
};

Gfx gLinkHumanRightHandHoldingMirrorShieldDL[] = {
    gsSPDisplayList(gLinkHumanRightHandClosedDL),
    gsSPBranchList(gLinkHumanMirrorShieldDL),
};

Gfx object_link_child_DL_01DC58[] = {
    gsSPDisplayList(object_link_child_DL_00FD08),
    gsSPBranchList(gLinkHumanMirrorShieldDL),
};

Gfx gLinkHumanLeftHandHoldingKokiriSwordDL[] = {
    gsSPDisplayList(gLinkHumanLeftHandClosedDL),
    gsSPBranchList(gKokiriSwordDL),
};

Gfx object_link_child_DL_01DC78[] = {
    gsSPDisplayList(object_link_child_DL_00F548),
    gsSPBranchList(gKokiriSwordDL),
};

Gfx gLinkHumanLeftHandHoldingRazorSwordDL[] = {
    gsSPDisplayList(gLinkHumanLeftHandClosedDL),
    gsSPBranchList(gRazorSwordDL),
};

Gfx object_link_child_DL_01DC98[] = {
    gsSPDisplayList(object_link_child_DL_00F548),
    gsSPBranchList(gRazorSwordDL),
};

Gfx gLinkHumanLeftHandHoldingGildedSwordDL[] = {
    gsSPDisplayList(gLinkHumanLeftHandClosedDL),
    gsSPDisplayList(gLinkHumanGildedSwordHandleDL),
    gsSPBranchList(gLinkHumanGildedSwordBladeDL),
};

Gfx object_link_child_DL_01DCC0[] = {
    gsSPDisplayList(object_link_child_DL_00F548),
    gsSPDisplayList(gLinkHumanGildedSwordHandleDL),
    gsSPBranchList(gLinkHumanGildedSwordBladeDL),
};

Gfx gLinkHumanLeftHandHoldingGreatFairysSwordDL[] = {
    gsSPDisplayList(gLinkHumanLeftHandClosedDL),
    gsSPBranchList(gLinkHumanGreatFairysSwordDL),
};

Gfx object_link_child_DL_01DCE8[] = {
    gsSPDisplayList(object_link_child_DL_00F548),
    gsSPBranchList(gLinkHumanGreatFairysSwordDL),
};

Gfx gLinkHumanRightHandHoldingHookshotDL[] = {
    gsSPDisplayList(gLinkHumanRightHandClosedDL),
    gsSPBranchList(gLinkHumanHookshotDL),
};

Gfx object_link_child_DL_01DD08[] = {
    gsSPDisplayList(object_link_child_DL_00FD08),
    gsSPBranchList(gLinkHumanHookshotDL),
};

Gfx gLinkHumanRightHandHoldingBowDL[] = {
    gsSPDisplayList(gLinkHumanRightHandClosedDL),
    gsSPBranchList(gLinkHumanBowDL),
};

Gfx object_link_child_DL_01DD28[] = {
    gsSPDisplayList(gLinkHumanRightHandClosedDL),
    gsSPBranchList(gLinkHumanBowDL),
};
#endif

Vtx object_link_childVtx_01DD38[] = {
#include "assets/objects/object_link_child/mm_link/object_link_childVtx_01DD38.vtx.inc"
};

Gfx gLinkHumanLeftHandHoldBottleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_link_child_Tex_007700, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_link_childVtx_01DD38, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 10, 11, 0, 8, 12, 9, 0),
    gsSP2Triangles(13, 7, 9, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 6, 20, 10, 0),
    gsSP2Triangles(21, 14, 2, 0, 9, 22, 13, 0),
    gsSP2Triangles(14, 21, 15, 0, 13, 23, 7, 0),
    gsSP2Triangles(17, 24, 18, 0, 7, 25, 8, 0),
    gsSP2Triangles(7, 23, 25, 0, 26, 9, 12, 0),
    gsSP2Triangles(22, 9, 26, 0, 2, 14, 0, 0),
    gsSP2Triangles(27, 10, 20, 0, 10, 5, 6, 0),
    gsSP2Triangles(28, 11, 10, 0, 8, 29, 12, 0),
    gsSPVertex(&object_link_childVtx_01DD38[30], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
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

