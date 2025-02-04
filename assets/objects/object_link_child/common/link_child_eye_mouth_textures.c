#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "../object_link_child.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#ifdef USE_MM_CHILD_LINK
u64 gLinkChildEyesOpenTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_open.ci8.inc.c"
};

u64 gLinkChildEyesHalfTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_half.ci8.inc.c"
};

u64 gLinkChildEyesClosedfTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_closed.ci8.inc.c"
};

u64 gLinkChildEyesLeftTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_roll_right.ci8.inc.c"
};

u64 gLinkChildEyesRightTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_roll_left.ci8.inc.c"
};

u64 gLinkChildEyesWideTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_roll_up.ci8.inc.c"
};

u64 gLinkChildEyesDownTex[] = {
#include "assets/objects/object_link_child/mm_link/eyes_roll_down.ci8.inc.c"
};

u64 gLinkChildEyesWincingTex[] = {
#include "assets/objects/object_link_child/mm_link/tex_003800.ci8.inc.c"
};

u64 gLinkChildMouthClosedTex[] = {
#include "assets/objects/object_link_child/mm_link/mouth_closed.ci8.inc.c"
};

u64 gLinkChildMouthHalfTex[] = {
#include "assets/objects/object_link_child/mm_link/mouth_teeth.ci8.inc.c"
};

u64 gLinkChildMouthOpenTex[] = {
#include "assets/objects/object_link_child/mm_link/mouth_angry.ci8.inc.c"
};

u64 gLinkChildMouthSmileTex[] = {
#include "assets/objects/object_link_child/mm_link/mouth_happy.ci8.inc.c"
};
#else
u64 gLinkChildEyesOpenTex[] = {
#include "assets/objects/object_link_child/oot_link/eyes_open.ci8.inc.c"
};

u64 gLinkChildEyesHalfTex[] = {
#include "assets/objects/object_link_child/oot_link/eyes_half.ci8.inc.c"
};

u64 gLinkChildEyesClosedfTex[] = {
#include "assets/objects/object_link_child/oot_link/eyes_closed.ci8.inc.c"
};

u64 gLinkChildEyesLeftTex[] = {
#include "assets/objects/object_link_child/oot_link/eyes_left.ci8.inc.c"
};

u64 gLinkChildEyesRightTex[] = {
#include "assets/objects/object_link_child/oot_link/eyes_right.ci8.inc.c"
};

u64 gLinkChildEyesWideTex[] = {
#include "assets/objects/object_link_child/oot_link/eyes_wide.ci8.inc.c"
};

u64 gLinkChildEyesDownTex[] = {
#include "assets/objects/object_link_child/oot_link/eyes_down.ci8.inc.c"
};

u64 gLinkChildEyesWincingTex[] = {
#include "assets/objects/object_link_child/oot_link/eyes_wincing.ci8.inc.c"
};

u64 gLinkChildMouthClosedTex[] = {
#include "assets/objects/object_link_child/oot_link/mouth_closed.ci8.inc.c"
};

u64 gLinkChildMouthHalfTex[] = {
#include "assets/objects/object_link_child/oot_link/mouth_half.ci8.inc.c"
};

u64 gLinkChildMouthOpenTex[] = {
#include "assets/objects/object_link_child/oot_link/mouth_open.ci8.inc.c"
};

u64 gLinkChildMouthSmileTex[] = {
#include "assets/objects/object_link_child/oot_link/mouth_smile.ci8.inc.c"
};
#endif
