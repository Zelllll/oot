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
/*
s32 func_800AE2C0(SkyboxContext *skyboxCtx, Vtx *roomVtx, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8) {
    s16 sp320;
    s16 sp31E;
    ? sp2B4;
    ? sp250;
    ? sp1EC;
    ? sp188;
    ? sp124;
    s32 sp40;
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
    Gfx *temp_v1_16;
    Gfx *temp_v1_17;
    Gfx *temp_v1_18;
    Gfx *temp_v1_19;
    Gfx *temp_v1_20;
    Gfx *temp_v1_21;
    Gfx *temp_v1_22;
    Gfx *temp_v1_23;
    Gfx *temp_v1_24;
    Gfx *temp_v1_25;
    Gfx *temp_v1_26;
    Gfx *temp_v1_27;
    Gfx *temp_v1_28;
    Gfx *temp_v1_29;
    Gfx *temp_v1_30;
    Gfx *temp_v1_31;
    Gfx *temp_v1_32;
    Gfx *temp_v1_33;
    Gfx *temp_v1_34;
    Gfx *temp_v1_35;
    Gfx *temp_v1_36;
    Gfx *temp_v1_37;
    Gfx *temp_v1_38;
    Gfx *temp_v1_39;
    Gfx *temp_v1_40;
    Gfx *temp_v1_41;
    Gfx *temp_v1_42;
    Gfx *temp_v1_43;
    Gfx *temp_v1_44;
    Gfx *temp_v1_45;
    Gfx *temp_v1_46;
    Gfx *temp_v1_47;
    Gfx *temp_v1_48;
    Gfx *temp_v1_49;
    Gfx *temp_v1_4;
    Gfx *temp_v1_50;
    Gfx *temp_v1_51;
    Gfx *temp_v1_5;
    Gfx *temp_v1_6;
    Gfx *temp_v1_7;
    Gfx *temp_v1_8;
    Gfx *temp_v1_9;
    Vtx *temp_a1_3;
    s16 temp_s2;
    s16 temp_s2_2;
    s16 temp_s2_3;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_t1_3;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t3_3;
    s16 temp_t5;
    s16 temp_t5_2;
    s16 temp_t5_3;
    s16 temp_v0_11;
    s16 temp_v0_13;
    s16 temp_v0_9;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a1_6;
    s32 temp_a2_4;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_at;
    s32 temp_at_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s1_3;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s3_3;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_s6_3;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    u32 temp_a0;
    u32 temp_a0_2;
    u32 temp_a0_3;
    u32 temp_a0_4;
    u32 temp_a0_5;
    u32 temp_a0_6;
    u32 temp_a2_5;
    u32 temp_a2_6;
    u32 temp_a2_7;
    u32 temp_t0_4;
    u32 temp_t0_5;
    u32 temp_t0_6;
    u32 temp_t1_4;
    u32 temp_t1_5;
    u32 temp_t1_6;
    u32 temp_t2;
    u32 temp_t2_2;
    u32 temp_t2_3;
    void *temp_fp;
    void *temp_fp_2;
    void *temp_v0_10;
    void *temp_v0_12;
    void *temp_v0_8;
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
    void *phi_a0_4;
    Vtx *phi_a1_4;
    s32 phi_v0;
    s16 phi_a0_5;
    s16 phi_s2;
    s16 phi_t5;
    s16 phi_a0_6;
    s16 phi_s2_2;
    s16 phi_t5_2;
    s16 phi_a0_7;
    s16 phi_s2_3;
    s16 phi_t5_3;

    if (arg8 < 6) {
        goto **(&jtbl_80142DA8 + (arg8 * 4));
    default:
        temp_s6 = arg3 + arg6;
        phi_a1 = &sp1EC;
        phi_a2 = &sp2B4;
        phi_t2 = arg4;
        phi_a3 = &sp250;
        phi_t0 = &sp188;
        phi_s4 = &D_8012AE30;
        phi_a0 = &sp124;
loop_3:
        phi_a1->unk0 = arg5;
        phi_a2->unk0 = arg3;
        phi_a3->unk0 = phi_t2;
        temp_t1 = *phi_s4;
        temp_v1 = &D_8012AE18 + (1 * 2);
        temp_v0 = temp_s6 + arg6;
        phi_a2->unk8 = temp_v0;
        temp_v0_2 = temp_v0 + arg6;
        *phi_t0 = D_8012AE18;
        phi_a2->unkC = temp_v0_2;
        temp_a0 = phi_a0 + 0x14;
        phi_a3->unk10 = phi_t2;
        phi_a3->unkC = phi_t2;
        phi_a3->unk8 = phi_t2;
        phi_a3->unk4 = phi_t2;
        phi_a2->unk10 = temp_v0_2 + arg6;
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
        if (temp_a0 < &sp188) {
            goto loop_3;
        }
        goto block_10;
    case 2:
    case 3:
        temp_s6_2 = arg5 + arg6;
        phi_a2_2 = &sp2B4;
        phi_t2_2 = arg4;
        phi_a3_2 = &sp250;
        phi_a1_2 = &sp1EC;
        phi_t0_2 = &sp188;
        phi_s4_2 = &D_8012AE30;
        phi_a0_2 = &sp124;
loop_6:
        phi_a2_2->unk0 = arg3;
        phi_a3_2->unk0 = phi_t2_2;
        phi_a1_2->unk0 = arg5;
        temp_t1_2 = *phi_s4_2;
        temp_v1_2 = &D_8012AE18 + (1 * 2);
        temp_v0_3 = temp_s6_2 + arg6;
        phi_a1_2->unk8 = temp_v0_3;
        temp_v0_4 = temp_v0_3 + arg6;
        *phi_t0_2 = D_8012AE18;
        phi_a1_2->unkC = temp_v0_4;
        temp_a0_2 = phi_a0_2 + 0x14;
        phi_a3_2->unk10 = phi_t2_2;
        phi_a3_2->unkC = phi_t2_2;
        phi_a3_2->unk8 = phi_t2_2;
        phi_a3_2->unk4 = phi_t2_2;
        phi_a1_2->unk10 = temp_v0_4 + arg6;
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
        if (temp_a0_2 < &sp188) {
            goto loop_6;
        }
        goto block_10;
    case 4:
    case 5:
        temp_s6_3 = arg3 + arg6;
        phi_a3_3 = &sp250;
        phi_a2_3 = &sp2B4;
        phi_t2_3 = arg5;
        phi_a1_3 = &sp1EC;
        phi_t0_3 = &sp188;
        phi_s4_3 = &D_8012AE24;
        phi_a0_3 = &sp124;
loop_9:
        phi_a3_3->unk0 = arg4;
        phi_a2_3->unk0 = arg3;
        phi_a1_3->unk0 = phi_t2_3;
        temp_t1_3 = *phi_s4_3;
        temp_v1_3 = &D_8012AE18 + (1 * 2);
        temp_v0_5 = temp_s6_3 + arg6;
        phi_a2_3->unk8 = temp_v0_5;
        temp_v0_6 = temp_v0_5 + arg6;
        *phi_t0_3 = D_8012AE18;
        phi_a2_3->unkC = temp_v0_6;
        temp_a0_3 = phi_a0_3 + 0x14;
        phi_a1_3->unk10 = phi_t2_3;
        phi_a1_3->unkC = phi_t2_3;
        phi_a1_3->unk8 = phi_t2_3;
        phi_a1_3->unk4 = phi_t2_3;
        phi_a2_3->unk10 = temp_v0_6 + arg6;
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
        if (temp_a0_3 < &sp188) {
            goto loop_9;
        }
    }
block_10:
    skyboxCtx->unk_138 = skyboxCtx->dpList + (arg8 * 0x960);
    phi_a0_4 = &D_8012ADD8;
    phi_a1_4 = &roomVtx[arg2];
    phi_v0 = 0;
loop_11:
    temp_v0_7 = phi_v0 + 1;
    temp_a2_4 = *phi_a0_4 * 4;
    phi_a1_4->v.ob = *(&sp2B4 + temp_a2_4);
    temp_a1_3 = phi_a1_4 + 0x10;
    temp_a1_3->unk-E = *(&sp250 + temp_a2_4);
    temp_a1_3->unk-A = 0;
    temp_a1_3->unk-C = *(&sp1EC + temp_a2_4);
    temp_a1_3->unk-8 = *(&sp188 + temp_a2_4);
    temp_a1_3->unk-3 = 0;
    temp_a1_3->unk-2 = 0;
    temp_a1_3->unk-4 = 0xFF;
    temp_a1_3->unk-6 = *(&sp124 + temp_a2_4);
    phi_a0_4 = phi_a0_4 + 2;
    phi_a1_4 = temp_a1_3;
    phi_v0 = temp_v0_7;
    if (temp_v0_7 != 0x20) {
        goto loop_11;
    }
    temp_v1_4 = skyboxCtx->unk_138;
    skyboxCtx->unk_138 = temp_v1_4 + 8;
    temp_v1_4->words.w0 = 0x1020040;
    temp_v1_4->words.w1 = &roomVtx[arg2];
    arg2 = arg2 + temp_v0_7;
    temp_v1_5 = skyboxCtx->unk_138;
    skyboxCtx->unk_138 = temp_v1_5 + 8;
    temp_v1_5->words.w1 = 0x1E;
    temp_v1_5->words.w0 = 0x3000000;
    if ((arg8 == 4) || (arg8 == 5)) {
        temp_fp_2 = (arg8 * 4) + &D_8012ADC0;
        sp31E = 0;
        sp320 = 0;
        phi_s2_3 = 0;
loop_15:
        temp_t8 = sp320 + 0x1F;
        temp_s3_3 = (sp320 * 4) & 0xFFF;
        temp_s1_3 = (temp_t8 * 4) & 0xFFF;
        sp40 = temp_t8;
        phi_a0_7 = 0;
        phi_t5_3 = 0;
loop_16:
        temp_v1_36 = skyboxCtx->unk_138;
        temp_t3_3 = phi_a0_7 + 0x1F;
        skyboxCtx->unk_138 = temp_v1_36 + 8;
        temp_v1_36->words.w0 = 0xFD48007F;
        temp_v1_36->words.w1 = *temp_fp_2 + skyboxCtx->staticSegments;
        temp_v1_37 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_37 + 8;
        temp_a2_7 = (((((phi_a0_7 * 0) + 0x27) >> 3) & 0x1FF) << 9) | 0xF5480000;
        temp_v1_37->words.w0 = temp_a2_7;
        temp_v1_37->words.w1 = 0x7000000;
        temp_v1_38 = skyboxCtx->unk_138;
        temp_a3_4 = ((temp_t3_3 * 4) & 0xFFF) << 0xC;
        skyboxCtx->unk_138 = temp_v1_38 + 8;
        temp_v1_38->words.w1 = 0;
        temp_v1_38->words.w0 = 0xE6000000;
        temp_v1_39 = skyboxCtx->unk_138;
        temp_a1_6 = ((phi_a0_7 * 4) & 0xFFF) << 0xC;
        skyboxCtx->unk_138 = temp_v1_39 + 8;
        temp_t1_6 = temp_a3_4 | 0x7000000 | temp_s1_3;
        temp_t0_6 = temp_a1_6 | 0xF4000000 | temp_s3_3;
        temp_v1_39->words.w0 = temp_t0_6;
        temp_v1_39->words.w1 = temp_t1_6;
        temp_v1_40 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_40 + 8;
        temp_v1_40->words.w1 = 0;
        temp_v1_40->words.w0 = 0xE7000000;
        temp_v1_41 = skyboxCtx->unk_138;
        temp_t2_3 = temp_a1_6 | 0xF2000000 | temp_s3_3;
        skyboxCtx->unk_138 = temp_v1_41 + 8;
        temp_v1_41->words.w1 = 0;
        temp_v1_41->words.w0 = temp_a2_7;
        temp_v1_42 = skyboxCtx->unk_138;
        temp_a0_6 = temp_a2_7 | 0x80;
        skyboxCtx->unk_138 = temp_v1_42 + 8;
        temp_v1_42->words.w1 = temp_a3_4 | temp_s1_3;
        temp_v1_42->words.w0 = temp_t2_3;
        temp_v1_43 = skyboxCtx->unk_138;
        temp_t5_3 = phi_t5_3 + 1;
        skyboxCtx->unk_138 = temp_v1_43 + 8;
        temp_v1_43->words.w0 = 0xFD48007F;
        temp_v1_43->words.w1 = *temp_fp_2 + skyboxCtx->unk12C;
        temp_v1_44 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_44 + 8;
        temp_v1_44->words.w1 = 0x7000000;
        temp_v1_44->words.w0 = temp_a0_6;
        temp_v1_45 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_45 + 8;
        temp_v1_45->words.w1 = 0;
        temp_v1_45->words.w0 = 0xE6000000;
        temp_v1_46 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_46 + 8;
        temp_v1_46->words.w1 = temp_t1_6;
        temp_v1_46->words.w0 = temp_t0_6;
        temp_v1_47 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_47 + 8;
        temp_v1_47->words.w1 = 0;
        temp_v1_47->words.w0 = 0xE7000000;
        temp_v1_48 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_48 + 8;
        temp_v1_48->words.w1 = 0x1000000;
        temp_v1_48->words.w0 = temp_a0_6;
        temp_v1_49 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_49 + 8;
        temp_v1_49->words.w1 = temp_a3_4 | 0x1000000 | temp_s1_3;
        temp_v1_49->words.w0 = temp_t2_3;
        temp_v1_50 = skyboxCtx->unk_138;
        temp_v0_12 = (phi_s2_3 * 2) + &D_8012AE3C;
        skyboxCtx->unk_138 = temp_v1_50 + 8;
        temp_v1_50->words.w0 = ((temp_v0_12->unk4 * 2) & 0xFF) | (((temp_v0_12->unk0 * 2) & 0xFF) << 0x10) | (((temp_v0_12->unk2 * 2) & 0xFF) << 8) | 0x7000000;
        temp_s2_3 = phi_s2_3 + 4;
        temp_v1_50->words.w1 = ((temp_v0_12->unk6 * 2) & 0xFF) | (((temp_v0_12->unk0 * 2) & 0xFF) << 0x10) | (((temp_v0_12->unk4 * 2) & 0xFF) << 8);
        phi_a0_7 = temp_t3_3;
        phi_s2_3 = temp_s2_3;
        phi_t5_3 = temp_t5_3;
        if (temp_t5_3 < 4) {
            goto loop_16;
        }
        temp_v0_13 = sp31E + 1;
        temp_at_2 = temp_v0_13 < 4;
        sp31E = temp_v0_13;
        sp320 = sp40;
        phi_s2_3 = temp_s2_3;
        if (temp_at_2 != 0) {
            goto loop_15;
        }
    } else {
        temp_fp = (arg8 * 4) + &D_8012ADC0;
        sp31E = 0;
        sp320 = 0;
        phi_s2 = 0;
loop_20:
        temp_t9 = sp320 + 0x1F;
        temp_s3 = (sp320 * 4) & 0xFFF;
        temp_s1 = (temp_t9 * 4) & 0xFFF;
        sp40 = temp_t9;
        phi_a0_5 = 0;
        phi_t5 = 0;
loop_21:
        temp_v1_6 = skyboxCtx->unk_138;
        temp_t3 = phi_a0_5 + 0x1F;
        skyboxCtx->unk_138 = temp_v1_6 + 8;
        temp_v1_6->words.w0 = 0xFD48007F;
        temp_v1_6->words.w1 = *temp_fp + skyboxCtx->staticSegments;
        temp_v1_7 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_7 + 8;
        temp_a2_5 = (((((phi_a0_5 * 0) + 0x27) >> 3) & 0x1FF) << 9) | 0xF5480000;
        temp_v1_7->words.w0 = temp_a2_5;
        temp_v1_7->words.w1 = 0x7000000;
        temp_v1_8 = skyboxCtx->unk_138;
        temp_a3_2 = ((temp_t3 * 4) & 0xFFF) << 0xC;
        skyboxCtx->unk_138 = temp_v1_8 + 8;
        temp_v1_8->words.w1 = 0;
        temp_v1_8->words.w0 = 0xE6000000;
        temp_v1_9 = skyboxCtx->unk_138;
        temp_a1_4 = ((phi_a0_5 * 4) & 0xFFF) << 0xC;
        skyboxCtx->unk_138 = temp_v1_9 + 8;
        temp_t1_4 = temp_a3_2 | 0x7000000 | temp_s1;
        temp_t0_4 = temp_a1_4 | 0xF4000000 | temp_s3;
        temp_v1_9->words.w0 = temp_t0_4;
        temp_v1_9->words.w1 = temp_t1_4;
        temp_v1_10 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_10 + 8;
        temp_v1_10->words.w1 = 0;
        temp_v1_10->words.w0 = 0xE7000000;
        temp_v1_11 = skyboxCtx->unk_138;
        temp_t2 = temp_a1_4 | 0xF2000000 | temp_s3;
        skyboxCtx->unk_138 = temp_v1_11 + 8;
        temp_v1_11->words.w1 = 0;
        temp_v1_11->words.w0 = temp_a2_5;
        temp_v1_12 = skyboxCtx->unk_138;
        temp_a0_4 = temp_a2_5 | 0x80;
        skyboxCtx->unk_138 = temp_v1_12 + 8;
        temp_v1_12->words.w1 = temp_a3_2 | temp_s1;
        temp_v1_12->words.w0 = temp_t2;
        temp_v1_13 = skyboxCtx->unk_138;
        temp_t5 = phi_t5 + 1;
        skyboxCtx->unk_138 = temp_v1_13 + 8;
        temp_v1_13->words.w0 = 0xFD48007F;
        temp_v1_13->words.w1 = *temp_fp + skyboxCtx->unk12C;
        temp_v1_14 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_14 + 8;
        temp_v1_14->words.w1 = 0x7000000;
        temp_v1_14->words.w0 = temp_a0_4;
        temp_v1_15 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_15 + 8;
        temp_v1_15->words.w1 = 0;
        temp_v1_15->words.w0 = 0xE6000000;
        temp_v1_16 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_16 + 8;
        temp_v1_16->words.w1 = temp_t1_4;
        temp_v1_16->words.w0 = temp_t0_4;
        temp_v1_17 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_17 + 8;
        temp_v1_17->words.w1 = 0;
        temp_v1_17->words.w0 = 0xE7000000;
        temp_v1_18 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_18 + 8;
        temp_v1_18->words.w1 = 0x1000000;
        temp_v1_18->words.w0 = temp_a0_4;
        temp_v1_19 = skyboxCtx->unk_138;
        skyboxCtx->unk_138 = temp_v1_19 + 8;
        temp_v1_19->words.w1 = temp_a3_2 | 0x1000000 | temp_s1;
        temp_v1_19->words.w0 = temp_t2;

        temp_v0_8 = (phi_s2 * 2) + &D_8012AE3C;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = ((temp_v0_8->unk4 * 2) & 0xFF) | (((temp_v0_8->unk0 * 2) & 0xFF) << 0x10) | (((temp_v0_8->unk2 * 2) & 0xFF) << 8) | 0x7000000;
        skyboxCtx->unk_138->words.w1 = ((temp_v0_8->unk6 * 2) & 0xFF) | (((temp_v0_8->unk0 * 2) & 0xFF) << 0x10) | (((temp_v0_8->unk4 * 2) & 0xFF) << 8);

        temp_s2 = phi_s2 + 4;
        phi_a0_5 = temp_t3;
        phi_s2 = temp_s2;
        phi_t5 = temp_t5;
        if (temp_t5 < 4) {
            goto loop_21;
        }
        temp_v0_9 = sp31E + 1;
        temp_at = temp_v0_9 < 2;
        sp31E = temp_v0_9;
        sp320 = sp40;
        phi_s2 = temp_s2;
        if (temp_at != 0) {
            goto loop_20;
        }
        sp31E = 0;
        sp320 = sp320 - 0x1F;
        phi_s2_2 = temp_s2;
loop_24:
        temp_s3_2 = (sp320 * 4) & 0xFFF;
        temp_s1_2 = ((sp320 + 0x1F) * 4) & 0xFFF;
        phi_a0_6 = 0;
        phi_t5_2 = 0;
loop_25:

        temp_t3_2 = phi_a0_6 + 0x1F;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = 0xFD48007F;
        skyboxCtx->unk_138->words.w1 = *temp_fp + skyboxCtx->staticSegments;

        temp_a2_6 = (((((phi_a0_6 * 0) + 0x27) >> 3) & 0x1FF) << 9) | 0xF5480000;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = temp_a2_6;
        skyboxCtx->unk_138->words.w1 = 0x7000000;

        temp_a3_3 = ((temp_t3_2 * 4) & 0xFFF) << 0xC;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = 0xE6000000;
        skyboxCtx->unk_138->words.w1 = 0;

        temp_a1_5 = ((phi_a0_6 * 4) & 0xFFF) << 0xC;
        temp_t1_5 = temp_a3_3 | 0x7000000 | temp_s1_2;
        temp_t0_5 = temp_a1_5 | 0xF4000000 | temp_s3_2;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = temp_t0_5;
        skyboxCtx->unk_138->words.w1 = temp_t1_5;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = 0xE7000000;
        skyboxCtx->unk_138->words.w1 = 0;

        temp_t2_2 = temp_a1_5 | 0xF2000000 | temp_s3_2;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = temp_a2_6;
        skyboxCtx->unk_138->words.w1 = 0;

        temp_a0_5 = temp_a2_6 | 0x80;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = temp_t2_2;
        skyboxCtx->unk_138->words.w1 = temp_a3_3 | temp_s1_2;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = 0xFD48007F;
        skyboxCtx->unk_138->words.w1 = *temp_fp + skyboxCtx->unk12C;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = temp_a0_5;
        skyboxCtx->unk_138->words.w1 = 0x7000000;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = 0xE6000000;
        skyboxCtx->unk_138->words.w1 = 0;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = temp_t0_5;
        skyboxCtx->unk_138->words.w1 = temp_t1_5;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = 0xE7000000;
        skyboxCtx->unk_138->words.w1 = 0;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = temp_a0_5;
        skyboxCtx->unk_138->words.w1 = 0x1000000;

        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = temp_t2_2;
        skyboxCtx->unk_138->words.w1 = temp_a3_3 | 0x1000000 | temp_s1_2;

        temp_v0_10 = (phi_s2_2 * 2) + &D_8012AE3C;
        skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
        skyboxCtx->unk_138->words.w0 = ((temp_v0_10->unk4 * 2) & 0xFF) | (((temp_v0_10->unk0 * 2) & 0xFF) << 0x10) | (((temp_v0_10->unk2 * 2) & 0xFF) << 8) | 0x7000000;
        phi_s2_2 = phi_s2_2 + 4;
        skyboxCtx->unk_138->words.w1 = ((temp_v0_10->unk6 * 2) & 0xFF) | (((temp_v0_10->unk0 * 2) & 0xFF) << 0x10) | (((temp_v0_10->unk4 * 2) & 0xFF) << 8);

        phi_a0_6 = temp_t3_2;
        phi_t5_2 = phi_t5_2 + 1;
        if (phi_t5_2 < 4) {
            goto loop_25;
        }
        sp31E = sp31E + 1;
        sp320 = sp320 - 0x1F;
        if (sp31E < 2) {
            goto loop_24;
        }
    }
    skyboxCtx->unk_138 = skyboxCtx->unk_138 + 8;
    skyboxCtx->unk_138->words.w1 = 0;
    skyboxCtx->unk_138->words.w0 = 0xDF000000;
    return arg2;
}
*/

void func_800AEFC8(SkyboxContext *skyboxCtx, s16 skyboxId) {
    s32 phi_s1;
    s32 phi_s2;
    s32 phi_s3 = 0;

    if (skyboxId == 2 || (skyboxId > 0x10 && skyboxId < 0x19)) {
        for (phi_s2 = 0, phi_s1 = 0; phi_s1 < 2; phi_s1++, phi_s2 += 2) {
            phi_s3 = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, phi_s3, 
                    D_8012AEBC[phi_s1].unk_0, D_8012AEBC[phi_s1].unk_4,
                    D_8012AEBC[phi_s1].unk_8, D_8012AEBC[phi_s1].unk_C, D_8012AEBC[phi_s1].unk_10, 
                    phi_s1, phi_s2);
        }
    } else if (skyboxCtx->unk_140 == 2) {
        for (phi_s2 = 0, phi_s1 = 0; phi_s1 < 3; phi_s1++, phi_s2 += 2) {
            phi_s3 = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, phi_s3, 
                    D_8012AEBC[phi_s1].unk_0, D_8012AEBC[phi_s1].unk_4,
                    D_8012AEBC[phi_s1].unk_8, D_8012AEBC[phi_s1].unk_C, D_8012AEBC[phi_s1].unk_10, 
                    phi_s1, phi_s2);
        }
    } else {
        for (phi_s2 = 0, phi_s1 = 0; phi_s1 < 4; phi_s1++, phi_s2 += 2) {
            phi_s3 = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, phi_s3, 
                    D_8012AEBC[phi_s1].unk_0, D_8012AEBC[phi_s1].unk_4,
                    D_8012AEBC[phi_s1].unk_8, D_8012AEBC[phi_s1].unk_C, D_8012AEBC[phi_s1].unk_10, 
                    phi_s1, phi_s2);
        }
    }
}

void func_800AF178(SkyboxContext *skyboxCtx, s32 arg1) {
    s32 phi_s2 = 0;
    s32 phi_s1;

    for (phi_s1 = 0; phi_s1 < arg1; phi_s1++) {
        phi_s2 = func_800AE2C0(skyboxCtx, skyboxCtx->roomVtx, phi_s2, 
                D_8012AF0C[phi_s1].unk_0, D_8012AF0C[phi_s1].unk_4, 
                D_8012AF0C[phi_s1].unk_8, D_8012AF0C[phi_s1].unk_C, D_8012AF0C[phi_s1].unk_10, phi_s1);
    }
}

typedef struct {
    /* 0x00 */ u16 unk_0; // start
    /* 0x02 */ u16 unk_2; // end
    /* 0x04 */ u8 unk_4;
    /* 0x05 */ u8 unk_5; // img idx 1
    /* 0x06 */ u8 unk_6; // img idx 2
    /* 0x07 */ char unk_7[0x1];
} Struct_8011FC1C; // size = 0x8

extern Struct_8011FC1C D_8011FC1C[8][9];

typedef struct {
    /* 0x00 */ u32 unk_0; // start
    /* 0x04 */ u32 unk_4; // end
    /* 0x08 */ u32 unk_8; // pal start
    /* 0x0C */ u32 unk_C; // pal end
} Struct_8011FD3C; // size = 0x10

extern Struct_8011FD3C D_8011FD3C[];

#ifdef NON_MATCHING
// Some reoderings at the end of the first case, some regalloc, stack
void func_800AF218(GlobalContext* globalCtx, SkyboxContext* skyboxCtx, s16 skyboxId) {
    Struct_8011FD3C* temp;
    u8 sp41;    // imageIdx2
    u8 sp40;    // imageIdx
    s16 phi_v0;
    s32 phi_v1;
    u32 sp30;   // start
    u32 sp2C;   // size

    switch (skyboxId) {
    case 1: // Normal sky
        phi_v1 = 0;
        if (gSaveContext.unk_13C3 != 0 && gSaveContext.sceneSetupIndex < 4 && D_8011FB30 > 0 && D_8011FB30 < 6) {
            phi_v1 = 1;
        }

        for (phi_v0 = 0; phi_v0 < 9; phi_v0++) {
            if (gSaveContext.environmentTime >= D_8011FC1C[phi_v1][phi_v0].unk_0 && 
                (gSaveContext.environmentTime < D_8011FC1C[phi_v1][phi_v0].unk_2 || D_8011FC1C[phi_v1][phi_v0].unk_2 == 0xFFFF)) {
                globalCtx->envCtx.unk_10 = sp41 = D_8011FC1C[phi_v1][phi_v0].unk_5;
                globalCtx->envCtx.unk_11 = sp40 = D_8011FC1C[phi_v1][phi_v0].unk_6;
                if (D_8011FC1C[phi_v1][phi_v0].unk_4 != 0) {
                    globalCtx->envCtx.unk_13 = 
                            func_8006F93C(D_8011FC1C[phi_v1][phi_v0].unk_2, D_8011FC1C[phi_v1][phi_v0].unk_0, ((void)0,gSaveContext.environmentTime)) * 255.0f;
                } else {
                    globalCtx->envCtx.unk_13 = 0;
                }
                break;
            }
        }

        sp2C = D_8011FD3C[sp41].unk_4 - D_8011FD3C[sp41].unk_0;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x41E);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x41F);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], D_8011FD3C[sp41].unk_0, sp2C, "../z_vr_box.c", 0x422);

        sp2C = D_8011FD3C[sp40].unk_4 - D_8011FD3C[sp40].unk_0;
        skyboxCtx->staticSegments[1] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x424);
        if (skyboxCtx->staticSegments[1] == NULL) {
            __assert("vr_box->vr_box_staticSegment[1] != NULL", "../z_vr_box.c", 0x425);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[1], D_8011FD3C[sp40].unk_0, sp2C, "../z_vr_box.c", 0x428);

        // reorderings in the rest of this case

        if (((u8)(sp41 & 4) >> 2) != (sp41 & 1)) {
            sp2C = D_8011FD3C[sp41].unk_C - D_8011FD3C[sp41].unk_8;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C * 2, "../z_vr_box.c", 0x430);
            if (skyboxCtx->staticSegments[2] == NULL) {
                __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x431);
            }
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], D_8011FD3C[sp40].unk_8, sp2C, "../z_vr_box.c", 0x433);
            DmaMgr_SendRequest1((u32)skyboxCtx->staticSegments[2] + sp2C, D_8011FD3C[sp41].unk_8, sp2C, "../z_vr_box.c", 0x435);
        } else {
            sp2C = D_8011FD3C[sp41].unk_C - D_8011FD3C[sp41].unk_8;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C * 2, "../z_vr_box.c", 0x43D);
            if (skyboxCtx->staticSegments[2] == NULL) {
                __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x43E);
            }
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], D_8011FD3C[sp41].unk_8, sp2C, "../z_vr_box.c", 0x440);
            DmaMgr_SendRequest1((u32)skyboxCtx->staticSegments[2] + sp2C, D_8011FD3C[sp40].unk_8, sp2C, "../z_vr_box.c", 0x442);
        }
        break;
    case 2: // Bazaar
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_SP1a_staticSegmentRomStart;
        sp2C = _vr_SP1a_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x467);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x468);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x469);
        sp30 = _vr_SP1a_pal_staticSegmentRomStart;
        sp2C = _vr_SP1a_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x46C);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x46D);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x46E);
        skyboxCtx->rot.y = 0.8f;
        break;
    case 3: // Cloudy Sunset
        sp30 = _vr_cloud2_staticSegmentRomStart;
        sp2C = _vr_cloud2_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x483);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x484);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x487);
        skyboxCtx->staticSegments[1] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x48A);
        if (skyboxCtx->staticSegments[1] == NULL) {
            __assert("vr_box->vr_box_staticSegment[1] != NULL", "../z_vr_box.c", 0x48B);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[1], sp30, sp2C, "../z_vr_box.c", 0x48E);
        sp30 = _vr_cloud2_pal_staticSegmentRomStart;
        sp2C = _vr_cloud2_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C * 2, "../z_vr_box.c", 0x492);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x493);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x495);
        DmaMgr_SendRequest1((u32)skyboxCtx->staticSegments[2] + sp2C, sp30, sp2C, "../z_vr_box.c", 0x497);
        break;
    case 4: // Adult Market
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_RUVR_staticSegmentRomStart;
        sp2C = _vr_RUVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x49E);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x49F);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x4A0);
        sp30 = _vr_RUVR_pal_staticSegmentRomStart;
        sp2C = _vr_RUVR_pal_staticSegmentRomEnd - sp30;
        osSyncPrintf("ＳＩＺＥ = %d\n", sp2C);
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4A4);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4A5);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x4A6);
        break;
    case 5: // Cutscene Map
        sp30 = _vr_holy0_staticSegmentRomStart;
        sp2C = _vr_holy0_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4AC);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x4AD);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x4B0);
        sp30 = _vr_holy1_staticSegmentRomStart;
        sp2C = _vr_holy1_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[1] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4B3);
        if (skyboxCtx->staticSegments[1] == 0) {
            __assert("vr_box->vr_box_staticSegment[1] != NULL", "../z_vr_box.c", 0x4B4);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[1], sp30, sp2C, "../z_vr_box.c", 0x4B7);
        sp30 = _vr_holy0_pal_staticSegmentRomStart;
        sp2C = _vr_holy0_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C * 2, "../z_vr_box.c", 0x4BB);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4BC);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x4BE);
        DmaMgr_SendRequest1((u32)skyboxCtx->staticSegments[2] + sp2C, _vr_holy1_pal_staticSegmentRomStart, sp2C, "../z_vr_box.c", 0x4C0);
        break;
    case 7: // Link's House
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_LHVR_staticSegmentRomStart;
        sp2C = _vr_LHVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4CA);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x4CB);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x4CC);
        sp30 = _vr_LHVR_pal_staticSegmentRomStart;
        sp2C = _vr_LHVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4CF);
        if (skyboxCtx->staticSegments[2] == 0) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4D0);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x4D1);
        break;
    case 9: // Child Market Day
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_MDVR_staticSegmentRomStart;
        sp2C = _vr_MDVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4E9);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x4EA);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x4EB);
        sp30 = _vr_MDVR_pal_staticSegmentRomStart;
        sp2C = _vr_MDVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4EE);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4EF);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x4F0);
        break;
    case 10: // Child Market Night
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_MNVR_staticSegmentRomStart;
        sp2C = _vr_MNVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4F7);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x4F8);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x4F9);
        sp30 = _vr_MNVR_pal_staticSegmentRomStart;
        sp2C = _vr_MNVR_pal_staticSegmentRomEnd - sp30;
        osSyncPrintf("ＳＩＺＥ = %d\n", sp2C);
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4FD);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x4FE);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x4FF);
        break;
    case 11: // Happy Mask Shop
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_FCVR_staticSegmentRomStart;
        sp2C = _vr_FCVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x506);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x507);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x508);
        sp30 = _vr_FCVR_pal_staticSegmentRomStart;
        sp2C = _vr_FCVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x50B);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x50C);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x50D);
        skyboxCtx->rot.y = 0.8f;
        break;
    case 12: // Know-it-All Brothers' House
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_KHVR_staticSegmentRomStart;
        sp2C = _vr_KHVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x515);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x516);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x517);
        sp30 = _vr_KHVR_pal_staticSegmentRomStart;
        sp2C = _vr_KHVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x51A);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x51B);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x51C);
        break;
    case 14: // House of Twins
        skyboxCtx->unk_140 = 2;
        sp30 = _vr_K3VR_staticSegmentRomStart;
        sp2C = _vr_K3VR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x533);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x534);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x535);
        sp30 = _vr_K3VR_pal_staticSegmentRomStart;
        sp2C = _vr_K3VR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x538);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x539);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x53A);
        break;
    case 15: // Stables
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_MLVR_staticSegmentRomStart;
        sp2C = _vr_MLVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x541);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x542);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x543);
        sp30 = _vr_MLVR_pal_staticSegmentRomStart;
        sp2C = _vr_MLVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x546);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x547);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x548);
        break;
    case 16: // Kakariko Village House
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_KKRVR_staticSegmentRomStart;
        sp2C = _vr_KKRVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x54F);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x550);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x551);
        sp30 = _vr_KKRVR_pal_staticSegmentRomStart;
        sp2C = _vr_KKRVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x554);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x555);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x556);
        break;
    case 17: // Kokiri Shop
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_KSVR_staticSegmentRomStart;
        sp2C = _vr_KSVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x55D);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x55E);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x55F);
        sp30 = _vr_KSVR_pal_staticSegmentRomStart;
        sp2C = _vr_KSVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x562);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x563);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x564);
        skyboxCtx->rot.y = 0.8f;
        break;
    case 19: // Goron Shop
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_GLVR_staticSegmentRomStart;
        sp2C = _vr_GLVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x57D);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x57E);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x57F);
        sp30 = _vr_GLVR_pal_staticSegmentRomStart;
        sp2C = _vr_GLVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x582);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x583);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x584);
        skyboxCtx->rot.y = 0.8f;
        break;
    case 20: // Zora Shop
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_ZRVR_staticSegmentRomStart;
        sp2C = _vr_ZRVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x58C);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x58D);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x58E);
        sp30 = _vr_ZRVR_pal_staticSegmentRomStart;
        sp2C = _vr_ZRVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x591);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x592);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x593);
        skyboxCtx->rot.y = 0.8f;
        break;
    case 22: // Kakariko Potion Shop
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_DGVR_staticSegmentRomStart;
        sp2C = _vr_DGVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5AB);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5AC);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5AD);
        sp30 = _vr_DGVR_pal_staticSegmentRomStart;
        sp2C = _vr_DGVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5B0);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5B1);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5B2);
        skyboxCtx->rot.y = 0.8f;
        break;
    case 23: // Market Potion Shop
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_ALVR_staticSegmentRomStart;
        sp2C = _vr_ALVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5BA);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5BB);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5BC);
        sp30 = _vr_ALVR_pal_staticSegmentRomStart;
        sp2C = _vr_ALVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5BF);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5C0);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5C1);
        skyboxCtx->rot.y = 0.8f;
        break;
    case 24: // Bombchu Shop
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_NSVR_staticSegmentRomStart;
        sp2C = _vr_NSVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5C9);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5CA);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5CB);
        sp30 = _vr_NSVR_pal_staticSegmentRomStart;
        sp2C = _vr_NSVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5CE);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5CF);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5D0);
        skyboxCtx->rot.y = 0.8f;
        break;
    case 26: // Richard's House
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_IPVR_staticSegmentRomStart;
        sp2C = _vr_IPVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5E8);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5E9);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5EA);
        sp30 = _vr_IPVR_pal_staticSegmentRomStart;
        sp2C = _vr_IPVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5ED);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5EE);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5EF);
        break;
    case 27: // Impa's House
        skyboxCtx->unk_140 = 1;
        sp30 = _vr_LBVR_staticSegmentRomStart;
        sp2C = _vr_LBVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5F6);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x5F7);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5F8);
        sp30 = _vr_LBVR_pal_staticSegmentRomStart;
        sp2C = _vr_LBVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5FB);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x5FC);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5FD);
        break;
    case 28: // Carpenter's Tent
        skyboxCtx->unk_140 = 2;
        sp30 = _vr_TTVR_staticSegmentRomStart;
        sp2C = _vr_TTVR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x604);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x605);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x606);
        sp30 = _vr_TTVR_pal_staticSegmentRomStart;
        sp2C = _vr_TTVR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x609);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x60A);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x60B);
        break;
    case 32: // Mido's House
        skyboxCtx->unk_140 = 2;
        sp30 = _vr_K4VR_staticSegmentRomStart;
        sp2C = _vr_K4VR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x618);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x619);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x61A);
        sp30 = _vr_K4VR_pal_staticSegmentRomStart;
        sp2C = _vr_K4VR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x61D);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x61E);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x61F);
        break;
    case 33: // Saria's House
        skyboxCtx->unk_140 = 2;
        sp30 = _vr_K5VR_staticSegmentRomStart;
        sp2C = _vr_K5VR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x626);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x627);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x628);
        sp30 = _vr_K5VR_pal_staticSegmentRomStart;
        sp2C = _vr_K5VR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x62B);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x62C);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x62D);
        break;
    case 34: // Guy's House
        skyboxCtx->unk_140 = 2;
        sp30 = _vr_KR3VR_staticSegmentRomStart;
        sp2C = _vr_KR3VR_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x634);
        if (skyboxCtx->staticSegments[0] == NULL) {
            __assert("vr_box->vr_box_staticSegment[0] != NULL", "../z_vr_box.c", 0x635);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x636);
        sp30 = _vr_KR3VR_pal_staticSegmentRomStart;
        sp2C = _vr_KR3VR_pal_staticSegmentRomEnd - sp30;
        skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x639);
        if (skyboxCtx->staticSegments[2] == NULL) {
            __assert("vr_box->vr_box_staticSegment[2] != NULL", "../z_vr_box.c", 0x63A);
        }
        DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x63B);
        break;
    case 39:
    default:
        break;
    }
}
#else
void func_800AF218(GlobalContext *globalCtx, SkyboxContext *skyboxCtx, s16 skyboxId);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AF218.s")
#endif

void func_800B0E50(GlobalContext* globalCtx, SkyboxContext* skyboxCtx, s16 skyboxId) {
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
