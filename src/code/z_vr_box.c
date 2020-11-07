#include "global.h"
#include "vt.h"

typedef struct {
    /* 0x000 */ s32 unk_0;
    /* 0x004 */ s32 unk_4;
    /* 0x008 */ s32 unk_8;
    /* 0x00C */ s32 unk_C;
    /* 0x010 */ s32 unk_10;
} Struct_8012AF0C; // size = 0x14

extern Struct_8012AF0C D_8012AF0C[6];
extern Struct_8012AF0C D_8012AEBC[4];

s32 func_800ADBB0(SkyboxContext *skyboxCtx, Vtx *roomVtx, s32, UNK_TYPE, UNK_TYPE, UNK_TYPE, UNK_TYPE, UNK_TYPE, s32, s32);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800ADBB0.s")
/* s32 func_800ADBB0(SkyboxContext *skyboxCtx, Vtx *roomVtx, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9) {
    s32 sp424;
    ? sp358;
    ? sp2A4;
    ? sp1F0;
    ? sp13C;
    ? sp88;
    void *sp54;
    s32 sp38;
    ? *temp_a1;
    ? *temp_a1_2;
    ? *temp_a2;
    ? *temp_a2_2;
    ? *temp_a2_3;
    ? *temp_a3;
    ? *temp_t0;
    ? *temp_t0_2;
    ? *temp_t0_3;
    Gfx *temp_v1_10;
    Gfx *temp_v1_11;
    Gfx *temp_v1_12;
    Gfx *temp_v1_13;
    Gfx *temp_v1_14;
    Gfx *temp_v1_15;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    Vtx *temp_v0_4;
    s16 temp_ra;
    s16 temp_t0_4;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_t1_3;
    s16 temp_t1_5;
    s16 temp_t2;
    s32 temp_a2_4;
    s32 temp_a3_2;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_s6_3;
    s32 temp_t1_4;
    s32 temp_t3;
    s32 temp_t4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v1_4;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a1_3;
    void *temp_v0_6;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    ? *phi_a1;
    ? *phi_a2;
    s32 phi_t2;
    ? *phi_a3;
    ? *phi_t0;
    void *phi_s4;
    u32 phi_a0;
    ? *phi_a2_2;
    s32 phi_t2_2;
    ? *phi_a3_2;
    ? *phi_a1_2;
    ? *phi_t0_2;
    void *phi_s4_2;
    u32 phi_a0_2;
    ? *phi_a3_3;
    ? *phi_a2_3;
    s32 phi_t2_3;
    ? *phi_a1_3;
    ? *phi_t0_3;
    void *phi_s4_3;
    u32 phi_a0_3;
    void *phi_a1_4;
    Vtx *phi_v0;
    s32 phi_t1;
    s16 phi_a2_4;
    s16 phi_a0_4;
    s16 phi_t2_4;
    s16 phi_t1_2;
    s16 phi_ra;

    switch (arg8) {
        default:
            temp_s6 = arg3 + arg6;
            phi_a1 = &sp1F0;
            phi_a2 = &sp358;
            phi_t2 = arg4;
            phi_a3 = &sp2A4;
            phi_t0 = &sp13C;
            phi_s4 = &D_8012AD2C;
            phi_a0 = &sp88;
loop_3:
                phi_a1->unk0 = arg5;
                phi_a2->unk0 = arg3;
                phi_a3->unk0 = phi_t2;
                temp_t1 = *phi_s4;
                temp_v1 = &D_8012AD20 + (1 * 2);
                temp_v0 = temp_s6 + arg6;
                phi_a2->unk8 = temp_v0;
                temp_v0 = temp_v0 + arg6;
                *phi_t0 = D_8012AD20;
                phi_a2->unkC = temp_v0;
                temp_a0 = phi_a0 + 0x14;
                phi_a3->unk10 = phi_t2;
                phi_a3->unkC = phi_t2;
                phi_a3->unk8 = phi_t2;
                phi_a3->unk4 = phi_t2;
                phi_a2->unk10 = temp_v0 + arg6;
                phi_a1->unk10 = arg5;
                phi_a1->unkC = arg5;
                phi_a1->unk8 = arg5;
                temp_a1 = phi_a1 + 0x14;
                temp_a2 = phi_a2 + 0x14;
                temp_t0 = phi_t0 + 0x14;
                temp_a1->unk-10 = arg5;
                temp_a2->unk-10 = temp_s6;
                temp_a0->unk-14 = temp_t1;
                temp_a0->unk-C = temp_t1;
                temp_a0->unk-8 = temp_t1;
                temp_a0->unk-4 = temp_t1;
                temp_a0->unk-10 = temp_t1;
                temp_t0->unk-8 = temp_v1->unk4;
                temp_t0->unk-C = temp_v1->unk2;
                temp_t0->unk-4 = temp_v1->unk6;
                temp_t0->unk-10 = temp_v1->unk0;
                phi_a1 = temp_a1;
                phi_a2 = temp_a2;
                phi_t2 = phi_t2 + arg7;
                phi_a3 = phi_a3 + 0x14;
                phi_t0 = temp_t0;
                phi_s4 = phi_s4 + 2;
                phi_a0 = temp_a0;
            if (temp_a0 < &sp13C) {
                goto loop_3;
            }
            break;
        case 1:
        case 3:
            temp_s6_2 = arg5 + arg6;
            phi_a2_2 = &sp358;
            phi_t2_2 = arg4;
            phi_a3_2 = &sp2A4;
            phi_a1_2 = &sp1F0;
            phi_t0_2 = &sp13C;
            phi_s4_2 = &D_8012AD2C;
            phi_a0_2 = &sp88;
loop_6:
                phi_a2_2->unk0 = arg3;
                phi_a3_2->unk0 = phi_t2_2;
                phi_a1_2->unk0 = arg5;
                temp_t1_2 = *phi_s4_2;
                temp_v1_2 = &D_8012AD20 + (1 * 2);
                temp_v0_2 = temp_s6_2 + arg6;
                phi_a1_2->unk8 = temp_v0_2;
                temp_v0_2 = temp_v0_2 + arg6;
                *phi_t0_2 = D_8012AD20;
                phi_a1_2->unkC = temp_v0_2;
                temp_a0_2 = phi_a0_2 + 0x14;
                phi_a3_2->unk10 = phi_t2_2;
                phi_a3_2->unkC = phi_t2_2;
                phi_a3_2->unk8 = phi_t2_2;
                phi_a3_2->unk4 = phi_t2_2;
                phi_a1_2->unk10 = temp_v0_2 + arg6;
                phi_a2_2->unk10 = arg3;
                phi_a2_2->unkC = arg3;
                phi_a2_2->unk8 = arg3;
                temp_a1_2 = phi_a1_2 + 0x14;
                temp_a2_2 = phi_a2_2 + 0x14;
                temp_t0_2 = phi_t0_2 + 0x14;
                temp_a2_2->unk-10 = arg3;
                temp_a1_2->unk-10 = temp_s6_2;
                temp_a0_2->unk-14 = temp_t1_2;
                temp_a0_2->unk-C = temp_t1_2;
                temp_a0_2->unk-8 = temp_t1_2;
                temp_a0_2->unk-4 = temp_t1_2;
                temp_a0_2->unk-10 = temp_t1_2;
                temp_t0_2->unk-8 = temp_v1_2->unk4;
                temp_t0_2->unk-C = temp_v1_2->unk2;
                temp_t0_2->unk-4 = temp_v1_2->unk6;
                temp_t0_2->unk-10 = temp_v1_2->unk0;
                phi_a2_2 = temp_a2_2;
                phi_t2_2 = phi_t2_2 + arg7;
                phi_a3_2 = phi_a3_2 + 0x14;
                phi_a1_2 = temp_a1_2;
                phi_t0_2 = temp_t0_2;
                phi_s4_2 = phi_s4_2 + 2;
                phi_a0_2 = temp_a0_2;
            if (temp_a0_2 < &sp13C) {
                goto loop_6;
            }
            break;
        case 4:
        case 5:
            temp_s6_3 = arg3 + arg6;
            phi_a3_3 = &sp2A4;
            phi_a2_3 = &sp358;
            phi_t2_3 = arg5;
            phi_a1_3 = &sp1F0;
            phi_t0_3 = &sp13C;
            phi_s4_3 = &D_8012AD2C;
            phi_a0_3 = &sp88;
loop_9:
                phi_a3_3->unk0 = arg4;
                phi_a2_3->unk0 = arg3;
                phi_a1_3->unk0 = phi_t2_3;
                temp_t1_3 = *phi_s4_3;
                temp_v1_3 = &D_8012AD20 + (1 * 2);
                temp_v0_3 = temp_s6_3 + arg6;
                phi_a2_3->unk8 = temp_v0_3;
                temp_v0_3 = temp_v0_3 + arg6;
                *phi_t0_3 = D_8012AD20;
                phi_a2_3->unkC = temp_v0_3;
                temp_a0_3 = phi_a0_3 + 0x14;
                phi_a1_3->unk10 = phi_t2_3;
                phi_a1_3->unkC = phi_t2_3;
                phi_a1_3->unk8 = phi_t2_3;
                phi_a1_3->unk4 = phi_t2_3;
                phi_a2_3->unk10 = temp_v0_3 + arg6;
                phi_a3_3->unk10 = arg4;
                phi_a3_3->unkC = arg4;
                phi_a3_3->unk8 = arg4;
                temp_a2_3 = phi_a2_3 + 0x14;
                temp_a3 = phi_a3_3 + 0x14;
                temp_t0_3 = phi_t0_3 + 0x14;
                temp_a3->unk-10 = arg4;
                temp_a2_3->unk-10 = temp_s6_3;
                temp_a0_3->unk-14 = temp_t1_3;
                temp_a0_3->unk-C = temp_t1_3;
                temp_a0_3->unk-8 = temp_t1_3;
                temp_a0_3->unk-4 = temp_t1_3;
                temp_a0_3->unk-10 = temp_t1_3;
                temp_t0_3->unk-8 = temp_v1_3->unk4;
                temp_t0_3->unk-C = temp_v1_3->unk2;
                temp_t0_3->unk-4 = temp_v1_3->unk6;
                temp_t0_3->unk-10 = temp_v1_3->unk0;
                phi_a3_3 = temp_a3;
                phi_a2_3 = temp_a2_3;
                phi_t2_3 = phi_t2_3 + arg7;
                phi_a1_3 = phi_a1_3 + 0x14;
                phi_t0_3 = temp_t0_3;
                phi_s4_3 = phi_s4_3 + 2;
                phi_a0_3 = temp_a0_3;
            if (temp_a0_3 < &sp13C) {
                goto loop_9;
            }
            break;
    }

    sp54 = &D_8012ACA0;
    sp424 = 0;
    phi_a2_4 = 0;
loop_11:
        skyboxCtx->unk_138 = skyboxCtx->dpList + (arg9 * 0x4B0) + (sp424 * 0x4B0);
        phi_a1_4 = sp54;
        phi_v0 = &roomVtx[arg2];
        phi_t1 = 0;
loop_12:
            phi_t1++;
            temp_v1_4 = *phi_a1_4 * 4;
            phi_v0->v.ob = (sp + temp_v1_4)->unk358;
            phi_v0->unk2 = (sp + temp_v1_4)->unk2A4;
            phi_v0->v.flag = 0;
            phi_v0->unk4 = (sp + temp_v1_4)->unk1F0;
            phi_v0++;
            phi_v0->unk-8 = (sp + temp_v1_4)->unk13C;
            phi_v0->unk-3 = 0;
            phi_v0->unk-2 = 0;
            phi_v0->unk-4 = 0xFF;
            phi_v0->unk-6 = (sp + temp_v1_4)->unk88;
            phi_a1_4 += 2;
        if (phi_t1 != 0x20) {
            goto loop_12;
        }

        // skyboxCtx->unk_138++;
        // skyboxCtx->unk_138->words.w0 = 0x01020040;
        // skyboxCtx->unk_138->words.w1 = &roomVtx[arg2];
        gSPVertex(skyboxCtx->unk_138++, &roomVtx[arg2], 32, 0);

        arg2 += phi_t1;

        // skyboxCtx->unk_138++;
        // skyboxCtx->unk_138->words.w1 = 0x0000001E;
        // skyboxCtx->unk_138->words.w0 = 0x03000000;
        gSPCullDisplayList(skyboxCtx->unk_138++, 0, 15);

        phi_ra = 0;
        phi_t2_4 = 0;
    loop_14:
            temp_v0_5 = phi_a2_4 + 0x1F;
            temp_t3 = (phi_a2_4 * 4) & 0xFFF;
            temp_t4 = (temp_v0_5 * 4) & 0xFFF;
            sp38 = temp_v0_5;
            phi_a0_4 = 0;
            phi_t1_2 = 0;
        loop_15:
                phi_a0_4 += 0x3F;

                //skyboxCtx->unk_138++;
                //skyboxCtx->unk_138->words.w0 = 0xFD4800FF;
                //skyboxCtx->unk_138->words.w1 = *((arg8 * 4) + &D_8012AC90) + skyboxCtx->staticSegments;
                gDPSetTextureImage(skyboxCtx->unk_138++, G_IM_FMT_CI, G_IM_SIZ_8b, 256, skyboxCtx->staticSegments + *((arg8 * 4) + &D_8012AC90));

                temp_a1_3 = (((((phi_a0_4 * 0) + 0x47) >> 3) & 0x1FF) << 9) | 0xF5480000;

                skyboxCtx->unk_138++;
                skyboxCtx->unk_138->words.w0 = temp_a1_3;
                skyboxCtx->unk_138->words.w1 = 0x07000000;

                temp_a3_2 = ((phi_a0_4 * 4) & 0xFFF) << 0xC;

                // skyboxCtx->unk_138++;
                // skyboxCtx->unk_138->words.w1 = 0x00000000;
                // skyboxCtx->unk_138->words.w0 = 0xE6000000;
                gDPLoadSync(skyboxCtx->unk_138++);

                temp_a2_4 = ((phi_a0_4 * 4) & 0xFFF) << 0xC;

                skyboxCtx->unk_138++;
                skyboxCtx->unk_138->words.w0 = temp_a2_4 | 0xF4000000 | temp_t3;
                skyboxCtx->unk_138->words.w1 = temp_a3_2 | 0x07000000 | temp_t4;

                // skyboxCtx->unk_138++;
                // skyboxCtx->unk_138->words.w1 = 0x00000000;
                // skyboxCtx->unk_138->words.w0 = 0xE7000000;
                gDPPipeSync(skyboxCtx->unk_138++);

                skyboxCtx->unk_138++;
                skyboxCtx->unk_138->words.w1 = 0x00000000;
                skyboxCtx->unk_138->words.w0 = temp_a1_3;

                temp_v0_6 = &D_8012AD40 + (phi_t2_4 * 2);

                skyboxCtx->unk_138++;
                skyboxCtx->unk_138->words.w1 = temp_a3_2 | temp_t4;
                skyboxCtx->unk_138->words.w0 = temp_a2_4 | 0xF2000000 | temp_t3;

                phi_t1_2++;

                skyboxCtx->unk_138++;
                skyboxCtx->unk_138->words.w0 = ((temp_v0_6->unk4 * 2) & 0xFF) | (((temp_v0_6->unk0 * 2) & 0xFF) << 0x10) | (((temp_v0_6->unk2 * 2) & 0xFF) << 8) | 0x7000000;
                skyboxCtx->unk_138->words.w1 = ((temp_v0_6->unk6 * 2) & 0xFF) | (((temp_v0_6->unk0 * 2) & 0xFF) << 0x10) | (((temp_v0_6->unk4 * 2) & 0xFF) << 8);

                phi_t2_4 += 4;
            if (phi_t1_2 < 4) {
                goto loop_15;
            }
            phi_ra++;
            phi_a2_4 = sp3A;
        if (phi_ra < 4) {
            goto loop_14;
        }

        // skyboxCtx->unk_138++;
        // skyboxCtx->unk_138->words.w0 = 0xDF000000;
        // skyboxCtx->unk_138->words.w1 = 0x00000000;
        gSPEndDisplayList(skyboxCtx->unk_138++);

        sp424++;
        sp54 += 0x40;
        phi_a2_4 = sp3A;
    if (sp424 != 2) {
        goto loop_11;
    }
    return arg2;
} */

s32 func_800AE2C0(SkyboxContext *skyboxCtx, Vtx *roomVtx, s32, UNK_TYPE, UNK_TYPE, UNK_TYPE, UNK_TYPE, UNK_TYPE, s32);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AE2C0.s")

#ifdef NON_MATCHING
// Small regalloc, reorderings near the end
void func_800AEFC8(SkyboxContext *skyboxCtx, s16 skyboxId) {
    s32 phi_s3 = 0;
    s32 phi_s1;

    if (skyboxId == 2 || (skyboxId > 0x10 && skyboxId < 0x19)) {
        for (phi_s1 = 0; phi_s1 < 2; phi_s1++) {
            phi_s3 = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, phi_s3, 
                    D_8012AEBC[phi_s1].unk_0, D_8012AEBC[phi_s1].unk_4,
                    D_8012AEBC[phi_s1].unk_8, D_8012AEBC[phi_s1].unk_C, D_8012AEBC[phi_s1].unk_10, 
                    phi_s1, phi_s1 * 2);
        }
    } else if (skyboxCtx->unk_140 == 2) {
        for (phi_s1 = 0; phi_s1 < 3; phi_s1++) {
            phi_s3 = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, phi_s3, 
                    D_8012AEBC[phi_s1].unk_0, D_8012AEBC[phi_s1].unk_4,
                    D_8012AEBC[phi_s1].unk_8, D_8012AEBC[phi_s1].unk_C, D_8012AEBC[phi_s1].unk_10, 
                    phi_s1, phi_s1 * 2);
        }
    } else {
        for (phi_s1 = 0; phi_s1 < 4; phi_s1++) {
            phi_s3 = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, phi_s3, 
                    D_8012AEBC[phi_s1].unk_0, D_8012AEBC[phi_s1].unk_4,
                    D_8012AEBC[phi_s1].unk_8, D_8012AEBC[phi_s1].unk_C, D_8012AEBC[phi_s1].unk_10, 
                    phi_s1, phi_s1 * 2);
        }
    }
}
#else
void func_800AEFC8(SkyboxContext *skyboxCtx, s16 skyboxId);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AEFC8.s")
#endif

void func_800AF178(SkyboxContext *skyboxCtx, s32 arg1) {
    s32 phi_s2 = 0;
    s32 phi_s1;

    for (phi_s1 = 0; phi_s1 < arg1; phi_s1++) {
        phi_s2 = func_800AE2C0(skyboxCtx, skyboxCtx->roomVtx, phi_s2, 
                D_8012AF0C[phi_s1].unk_0, D_8012AF0C[phi_s1].unk_4, 
                D_8012AF0C[phi_s1].unk_8, D_8012AF0C[phi_s1].unk_C, D_8012AF0C[phi_s1].unk_10, phi_s1);
    }
}

void func_800AF218(GlobalContext *globalCtx, SkyboxContext *skyboxCtx, s16 skyboxId);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AF218.s")

void func_800B0E50(GlobalContext *globalCtx, SkyboxContext *skyboxCtx, s16 skyboxId) {
    skyboxCtx->unk_140 = 0;
    skyboxCtx->rot.x = 0.0f;
    skyboxCtx->rot.y = 0.0f;
    skyboxCtx->rot.z = 0.0f;
    func_800AF218(globalCtx, skyboxCtx, skyboxId);
    osSyncPrintf("\n\n\n＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n\n\nＴＹＰＥ＝%d\n\n\n＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n\n\n", skyboxId);
    if (skyboxId != 0) {
        osSyncPrintf(VT_FGCOL(GREEN));
        if (skyboxCtx->unk_140 != 0) {
            skyboxCtx->dpList = GameState_Alloc(&globalCtx->state, 1200 * sizeof(Gfx), "../z_vr_box.c", 1636);
            if (skyboxCtx->dpList == NULL) {
                __assert("vr_box->dpList != NULL", "../z_vr_box.c", 1637);
            }
            skyboxCtx->roomVtx = GameState_Alloc(&globalCtx->state, 256 * sizeof(Vtx), "../z_vr_box.c", 1639);
            if (skyboxCtx->roomVtx == NULL) {
                __assert("vr_box->roomVtx != NULL", "../z_vr_box.c", 1640);
            }
            func_800AEFC8(skyboxCtx, skyboxId);
        } else {
            skyboxCtx->dpList = GameState_Alloc(&globalCtx->state, 1800 * sizeof(Gfx), "../z_vr_box.c", 1643);
            if (skyboxCtx->dpList == NULL) {
                __assert("vr_box->dpList != NULL", "../z_vr_box.c", 1644);
            }
            if (skyboxId == 5) {
                skyboxCtx->roomVtx = GameState_Alloc(&globalCtx->state, 192 * sizeof(Vtx), "../z_vr_box.c", 1648);
                if (skyboxCtx->roomVtx == NULL) {
                    __assert("vr_box->roomVtx != NULL", "../z_vr_box.c", 1649);
                }
                func_800AF178(skyboxCtx, 6);
            } else {
                skyboxCtx->roomVtx = GameState_Alloc(&globalCtx->state, 160 * sizeof(Vtx), "../z_vr_box.c", 1653);
                if (skyboxCtx->roomVtx == NULL) {
                    __assert("vr_box->roomVtx != NULL", "../z_vr_box.c", 1654);
                }
                func_800AF178(skyboxCtx, 5);
            }
        }
        osSyncPrintf(VT_RST);
    }
}
