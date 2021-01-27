#include "global.h"
#include "message_data_static.h"
#include "vt.h"

// TODO move these prototypes

void func_800ECC04(u16); // original name : Na_StartOcarinaSinglePlayCheck2
void func_800ED93C(s8,s8);
void func_800ED858(u8);
void func_800EE170(u8);
void func_800EE57C(u8);
s32 func_800EE5EC(void);
OcarinaStaff* func_800EE3C8(void);
OcarinaStaff* func_800EE3D4(void); // original name : Na_StopOcarinaMode
OcarinaStaff* func_800EE3F8(void);
void func_800F691C(u16);

void func_801069B0(void);
void func_80106AA8(GlobalContext* globalCtx);
u8 func_80106BC8(GlobalContext* globalCtx);
u8 func_80106C88(GlobalContext* globalCtx);
void func_80106CCC(GlobalContext* globalCtx);
void func_80106D40(GlobalContext* globalCtx, u8 arg1);
void func_80106F1C(GlobalContext* globalCtx, void* textureImage, Gfx** p);

typedef struct {
    s16 r,g,b;
} ColorRGB16; // size = 0x6

typedef struct {
    u8 len;
    u8 notesIdx[8];
} OcarinaSongInfo;

s16 D_8014B2F0 = 0x0000;

u8 D_8014B2F4 = 0x00;

s16 D_8014B2F8 = 0x0000;

s16 D_8014B2FC = 0x0000;

u8 D_8014B300 = 0x00;

u16 D_8014B304 = 0x0000;

s16 D_8014B308 = 0x00;

UNK_TYPE D_8014B30C = 0x00000000;

s16 D_8014B310 = 0x00FF;

s16 D_8014B314 = 0x0000;

s16 D_8014B318 = 0x0000;

u16 D_8014B31C = 0x0000;

MessageTableEntry D_8014B320[] = {
    #define DECLARE_MESSAGE(textId, type, yPos, nesMessage, gerMessage, fraMessage) \
        { textId, (_SHIFTL(type, 4, 8) | _SHIFTL(yPos, 0, 8)), _message_##textId##_nes },
    #define DECLARE_MESSAGE_FFFC
    #include "../text/declare_messages.h"
    #undef DECLARE_MESSAGE_FFFC
    #undef DECLARE_MESSAGE
    { 0xFFFF, 0, NULL },
};

const char* D_8014F548[] = {
    #define DECLARE_MESSAGE(textId, type, yPos, nesMessage, gerMessage, fraMessage) \
        _message_##textId##_ger,
    #include "../text/declare_messages.h"
    #undef DECLARE_MESSAGE
    NULL,
};

const char* D_80151658[] = {
    #define DECLARE_MESSAGE(textId, type, yPos, nesMessage, gerMessage, fraMessage) \
        _message_##textId##_fra,
    #include "../text/declare_messages.h"
    #undef DECLARE_MESSAGE
    NULL,
};

MessageTableEntry D_80153768[] = {
    #define DECLARE_MESSAGE(textId, type, yPos, staffMessage) \
        { textId, (_SHIFTL(type, 4, 8) | _SHIFTL(yPos, 0, 8)), _message_##textId##_staff },
    #include "../text/declare_messages_staff.h"
    #undef DECLARE_MESSAGE
    { 0xFFFF, 0, NULL },
};

MessageTableEntry* D_801538F0 = &D_8014B320[0];
const char** D_801538F4 = &D_8014F548[0];
const char** D_801538F8 = &D_80151658[0];
MessageTableEntry* D_801538FC = &D_80153768[0];

ColorRGB16 D_80153900[] = {
    { 0x00FF, 0x00FF, 0x00FF }, 
    { 0x0032, 0x0014, 0x0000 }, 
    { 0x00FF, 0x003C, 0x0000 }, 
    { 0x00FF, 0x00FF, 0x00FF }, 
    { 0x00FF, 0x00FF, 0x00FF }, 
    { 0x00FF, 0x00FF, 0x00FF }, 
    { 0x00FF, 0x00FF, 0x00FF }, 
    { 0x00FF, 0x00FF, 0x00FF },
};

ColorRGB16 D_80153930[] = {
    { 0x0000, 0x0000, 0x0000 }, 
    { 0x00DC, 0x0096, 0x0000 }, 
    { 0x0000, 0x0000, 0x0000 }, 
    { 0x0000, 0x0000, 0x0000 },
};

s16 D_80153948[] = {
    0x0001, 0x0002,
};

u8 D_8015394C[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

s16 D_80153958[] = {
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

s16 D_8015396C[] = {
    0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0008, 0x0007, 0x0006, 0x0009,
};

// claims to be a float, but clearly isn't, maybe references to this should be D_80153988 - 0x8
u32 D_80153980 = 0x000A000B;

// bss
s32 D_801759A0;
s32 D_801759A4;
s16 D_801759A8;
s16 D_801759AA;
s16 D_801759AC;
s16 D_801759AE;
s16 D_801759B0;
s16 D_801759B2;
s16 D_801759B4;
s16 D_801759B6;
s16 D_801759B8;
s16 D_801759BA;
s16 D_801759BC;
s16 D_801759BE;

// external data
extern OcarinaSongInfo D_80131C00[];

// Segment addresses
extern UNK_TYPE D_02002E40;

void func_801069B0(void) {
    VREG(45) = 0xBD;
    VREG(46) = 0xB8;
    VREG(47) = 0xB3;
    VREG(48) = 0xAE;
    VREG(49) = 0xA9;
    D_8015394C[0] = 0xFF;
    D_80153958[8] = 0;
    D_80153958[7] = D_80153958[8];
    D_80153958[6] = D_80153958[8];
    D_80153958[5] = D_80153958[8];
    D_80153958[4] = D_80153958[8];
    D_80153958[3] = D_80153958[8];
    D_80153958[2] = D_80153958[8];
    D_80153958[1] = D_80153958[8];
    D_80153958[0] = D_80153958[8];
    D_801759A8 = 0x50;
    D_801759AC = 0xFF;
    D_801759AA = 0x96;
    D_801759AE = 0xA;
    D_801759B2 = 0xA;
    D_801759B0 = 0xA;
    D_801759B4 = 0xFF;
    D_801759B8 = 0xFF;
    D_801759B6 = 0x32;
    D_801759BA = 0xA;
    D_801759BE = 0xA;
    D_801759BC = 0xA;
}

void func_80106AA8(GlobalContext* globalCtx) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    globalCtx->msgCtx.msgMode++;

    if (globalCtx->msgCtx.msgMode == 0x2E) {
        func_800ED858(1);
        msgCtx->unk_E2B8 = func_800EE3D4();
        msgCtx->unk_E2B8->pos = D_8014B2F8 = 0;
        func_800ECC04(0xA000);
        msgCtx->unk_E3D2 = msgCtx->unk_E3D4;
    } else if (msgCtx->msgMode == 0x2C) {
        func_800ED858(6);
        msgCtx->unk_E2B8 = func_800EE3F8();
        msgCtx->unk_E2B8->pos = D_8014B2F8 = 0;
        func_800ED93C(0xE, 1);
        msgCtx->unk_E3E7 = 2;
    }
    func_801069B0();
}

u8 func_80106BC8(GlobalContext* globalCtx) {
    Input* curInput = &globalCtx->state.input[0];

    if (CHECK_BTN_ALL(curInput->press.button, BTN_A) || 
        CHECK_BTN_ALL(curInput->press.button, BTN_B) || 
        CHECK_BTN_ALL(curInput->press.button, BTN_CUP)) {
        Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_PASS, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
    }
    return CHECK_BTN_ALL(curInput->press.button, BTN_A) || 
           CHECK_BTN_ALL(curInput->press.button, BTN_B) || 
           CHECK_BTN_ALL(curInput->press.button, BTN_CUP);
}

u8 func_80106C88(GlobalContext* globalCtx) {
    Input* curInput = &globalCtx->state.input[0];

    return CHECK_BTN_ALL(curInput->press.button, BTN_A) || 
           CHECK_BTN_ALL(curInput->press.button, BTN_B) || 
           CHECK_BTN_ALL(curInput->press.button, BTN_CUP);
}

void func_80106CCC(GlobalContext* globalCtx) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    if (msgCtx->unk_E300 != 0) {
        msgCtx->unk_E3E7 = 2;
        msgCtx->msgMode = 0x36;
        msgCtx->unk_E3E4 = 0;
        Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
    }
}

void func_80106D40(GlobalContext* globalCtx, u8 arg1) {
    static s16 D_80153984 = 0;

    MessageContext* msgCtx = &globalCtx->msgCtx;
    Input* curInput = &globalCtx->state.input[0];

    if (curInput->rel.stick_y >= 0x1E && D_80153984 == 0) {
        D_80153984 = 1;
        msgCtx->choiceIndex--;
        if (msgCtx->choiceIndex >= 0x81) {
            msgCtx->choiceIndex = 0;
        } else {
            Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }
    } else if (curInput->rel.stick_y < -0x1D && D_80153984 == 0) {
        D_80153984 = 1;
        msgCtx->choiceIndex++;
        if (msgCtx->choiceIndex > arg1) {
            msgCtx->choiceIndex = arg1;
        } else {
            Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }
    } else if (ABS(curInput->rel.stick_y) < 0x1E) {
        D_80153984 = 0;
    }
    msgCtx->unk_E3D8 = XREG(66);
    msgCtx->unk_E3DA = (arg1 == 1) ? gGameInfo->data[msgCtx->choiceIndex + 0x584] : gGameInfo->data[msgCtx->choiceIndex + 0x583];
}

f32 D_80153988[] = {
    1.20000004768f, 1.5f, 1.79999995232f, 2.0f, 2.09999990463f, 2.20000004768f, 2.09999990463f, 2.0f,
};

f32 D_801539A8[] = {
    0.600000023842f, 0.75f, 0.899999976158f, 1.0f, 1.04999995232f, 1.10000002384f, 1.04999995232f, 1.0f,
};

Vec3s D_801539C8[] = {
    { 0x0000, 0x00C8, 0x0050 },
    { 0x0032, 0x00FF, 0x0082 },
};

Vec3s D_801539D4[] = {
    { 0x0000, 0x0000, 0x0000 }, 
    { 0x0000, 0x00FF, 0x0082 },
};

s16 D_801539E0 = 0x0000;

s16 D_801539E4 = 0x00C8;

s16 D_801539E8 = 0x0050;

s16 D_801539EC = 0x000C;

s16 D_801539F0 = 0x0000;

s16 D_801539F4 = 0x0000;

s16 D_801539F8 = 0x0000;

s16 D_801539FC = 0x0000;

UNK_TYPE D_80153A00[] = {
    0x41000000, 0x41000000, 0x40C00000, 0x41100000, 0x41100000, 0x41600000, 0x41400000, 0x40400000,
    0x40E00000, 0x40E00000, 0x40E00000, 0x41100000, 0x40800000, 0x40C00000, 0x40800000, 0x41100000,
    0x41200000, 0x40A00000, 0x41100000, 0x41100000, 0x41200000, 0x41100000, 0x41100000, 0x41100000,
    0x41100000, 0x41100000, 0x40C00000, 0x40C00000, 0x41100000, 0x41300000, 0x41100000, 0x41300000,
    0x41500000, 0x41400000, 0x41100000, 0x41300000, 0x41300000, 0x41000000, 0x41000000, 0x41400000,
    0x41200000, 0x40800000, 0x41000000, 0x41200000, 0x41000000, 0x41500000, 0x41300000, 0x41500000,
    0x41100000, 0x41500000, 0x41200000, 0x41200000, 0x41100000, 0x41200000, 0x41300000, 0x41700000,
    0x41300000, 0x41200000, 0x41200000, 0x40E00000, 0x41200000, 0x40E00000, 0x41200000, 0x41100000,
    0x40A00000, 0x41000000, 0x41100000, 0x41000000, 0x41100000, 0x41100000, 0x40C00000, 0x41100000,
    0x41000000, 0x40800000, 0x40C00000, 0x41000000, 0x40800000, 0x41400000, 0x41100000, 0x41100000,
    0x41100000, 0x41100000, 0x40E00000, 0x41000000, 0x40E00000, 0x41000000, 0x41100000, 0x41400000,
    0x41000000, 0x41100000, 0x41000000, 0x40E00000, 0x40A00000, 0x40E00000, 0x41200000, 0x41200000,
    0x41400000, 0x40C00000, 0x41400000, 0x41400000, 0x41300000, 0x41000000, 0x41000000, 0x41000000,
    0x40C00000, 0x40C00000, 0x41500000, 0x41500000, 0x41200000, 0x41200000, 0x41200000, 0x41100000,
    0x41000000, 0x41000000, 0x41000000, 0x41000000, 0x41000000, 0x41100000, 0x41100000, 0x41100000,
    0x41100000, 0x40C00000, 0x41100000, 0x41100000, 0x41100000, 0x41100000, 0x41100000, 0x41600000,
    0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000,
    0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000, 0x41600000,
};

s16 D_80153C40[] = {
    0x004A, 0x004A, 0x004A, 0x0000,
};

s16 D_80153C48[] = {
    0x0048, 0x0048, 0x0048, 0x0000,
};

void func_80106F1C(GlobalContext* globalCtx, void* textureImage, Gfx** p) {
    MessageContext* msgCtx = &globalCtx->msgCtx;
    Gfx* gfx = *p;
    s16 unk_E3D8 = msgCtx->unk_E3D8;
    s16 unk_E3DA = msgCtx->unk_E3DA;

    gDPPipeSync(gfx++);
    D_801759A0 = (XREG(57) / 100.0f) * 16.0f;
    D_801759A4 = 1024.0f / (XREG(57) / 100.0f);
    gDPLoadTextureBlock_4b(gfx++, textureImage, 
                G_IM_FMT_I, 16, 16, 0, 
                G_TX_NOMIRROR | G_TX_CLAMP, 
                G_TX_NOMIRROR | G_TX_CLAMP, 
                G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    if (msgCtx->unk_E2FD != 5) {
        gDPSetPrimColor(gfx++, 0, 0, 0x00, 0x00, 0x00, msgCtx->unk_E3E2);
        gSPTextureRectangle(gfx++, 
                    (unk_E3D8 + XREG(60)) * 4, 
                    (unk_E3DA + XREG(60)) * 4, 
                    (unk_E3D8 + XREG(60) + D_801759A0) * 4, 
                    (unk_E3DA + XREG(60) + D_801759A0) * 4, G_TX_RENDERTILE, 0, 0, D_801759A4, D_801759A4);
    }
    gDPPipeSync(gfx++);
    gDPSetPrimColor(gfx++, 0, 0, msgCtx->unk_E3DC, msgCtx->unk_E3DE, msgCtx->unk_E3E0, msgCtx->unk_E3E2);
    gSPTextureRectangle(gfx++, 
                unk_E3D8 * 4, 
                unk_E3DA * 4, 
                (unk_E3D8 + D_801759A0) * 4, 
                (unk_E3DA + D_801759A0) * 4, G_TX_RENDERTILE, 0, 0, D_801759A4, D_801759A4);
    *p = gfx;
}

void func_80107244(MessageContext *msgCtx) {
    f32 temp_f0 = XREG(74) * (D_80153988[msgCtx->unk_E3E7] + D_80153988[msgCtx->unk_E3E7]);
    f32 temp_f14 = XREG(75) * D_801539A8[msgCtx->unk_E3E7];
    f32 temp_f18 = XREG(76) / (D_80153988[msgCtx->unk_E3E7] + D_80153988[msgCtx->unk_E3E7]);
    f32 temp_f4 = XREG(77) / D_801539A8[msgCtx->unk_E3E7];

    VREG(1) = XREG(73) + (XREG(73) - (s16)(XREG(73) * D_801539A8[msgCtx->unk_E3E7] + 0.5f)) / 2;
    msgCtx->unk_E406 += msgCtx->unk_E404 / 8;
    msgCtx->unk_E3E7++;
    if (msgCtx->unk_E3E7 == 8) {
        VREG(0) = XREG(72);
        VREG(1) = XREG(73);
        msgCtx->msgMode = 3;
        msgCtx->unk_E406 = msgCtx->unk_E404;
    }
    YREG(22) = (s16)(temp_f0 + 0.5f) / 2;
    YREG(23) = (s16)(temp_f14 + 0.5f);
    YREG(16) = temp_f18 + 0.5f;
    YREG(17) = temp_f4 + 0.5f;
    VREG(0) = (XREG(72) + XREG(74)) - (YREG(22) / 2);
}

void func_80107448(GlobalContext* globalCtx, u16 textId) {
    const char* foundSeg;
    const char* nextSeg;
    MessageTableEntry* messageTableEntry;
    const char** languageSegmentTable;
    Font* font;
    const char* seg;

    messageTableEntry = D_801538F0;
    if (gSaveContext.language == LANGUAGE_ENG) {
        seg = messageTableEntry->segment;
        while (messageTableEntry->textId != 0xFFFF) {
            font = &globalCtx->msgCtx.font;
            if (messageTableEntry->textId == textId) {
                foundSeg = messageTableEntry->segment;
                font->xy = messageTableEntry->typePos;
                messageTableEntry++;
                nextSeg = messageTableEntry->segment;
                font->msgOffset = foundSeg - seg;
                font->msgLength = nextSeg - foundSeg;
                // Message found!!!
                osSyncPrintf(" メッセージが,見つかった！！！ = %x  (data=%x) (data0=%x) (data1=%x) (data2=%x) (data3=%x)\n",
                            textId, font->msgOffset, font->msgLength, foundSeg, seg, nextSeg);
                return;
            }
            messageTableEntry++;
        }
    } else {
        languageSegmentTable = (gSaveContext.language == LANGUAGE_GER) ? D_801538F4 : D_801538F8;
        seg = messageTableEntry->segment;
        while (messageTableEntry->textId != 0xFFFF) {
            font = &globalCtx->msgCtx.font;
            if (messageTableEntry->textId == textId) {
                foundSeg = *languageSegmentTable;
                font->xy = messageTableEntry->typePos;
                languageSegmentTable++;
                nextSeg = *languageSegmentTable;
                font->msgOffset = foundSeg - seg;
                font->msgLength = nextSeg - foundSeg;
                // Message found!!!
                osSyncPrintf(" メッセージが,見つかった！！！ = %x  (data=%x) (data0=%x) (data1=%x) (data2=%x) (data3=%x)\n",
                            textId, font->msgOffset, font->msgLength, foundSeg, seg, nextSeg);
                return;
            }
            messageTableEntry++;
            languageSegmentTable++;
        }
    }
    // Message not found!!!
    osSyncPrintf(" メッセージが,見つからなかった！！！ = %x\n", textId);
    font = &globalCtx->msgCtx.font;
    messageTableEntry = D_801538F0;
    if (gSaveContext.language == LANGUAGE_ENG) {
        foundSeg = messageTableEntry->segment;
        font->xy = messageTableEntry->typePos;
        messageTableEntry++;
        nextSeg = messageTableEntry->segment;
    } else {
        languageSegmentTable = (gSaveContext.language == LANGUAGE_GER) ? D_801538F4 : D_801538F8;
        foundSeg = *languageSegmentTable;
        font->xy = messageTableEntry->typePos;
        languageSegmentTable++;
        nextSeg = *languageSegmentTable;
    }
    font->msgOffset = foundSeg - seg;
    font->msgLength = nextSeg - foundSeg;
}

void func_80107628(GlobalContext* globalCtx, u16 textId) {
    u32 foundSeg;
    u32 nextSeg;
    u32 seg;
    MessageTableEntry* messageTableEntry;
    Font* font;

    messageTableEntry = D_801538FC;
    seg = messageTableEntry->segment;
    while (messageTableEntry->textId != 0xFFFF) {
        font = &globalCtx->msgCtx.font;
        if (messageTableEntry->textId == textId) {
            foundSeg = messageTableEntry->segment;
            font->xy = messageTableEntry->typePos;
            messageTableEntry++;
            nextSeg = messageTableEntry->segment;
            font->msgOffset = foundSeg - seg;
            font->msgLength = nextSeg - foundSeg;
            // Message found!!!
            osSyncPrintf(" メッセージが,見つかった！！！ = %x  (data=%x) (data0=%x) (data1=%x) (data2=%x) (data3=%x)\n", 
                        textId, font->msgOffset, font->msgLength, foundSeg, seg, nextSeg);
            return;
        }
        messageTableEntry++;
    }
}

void func_801076CC(MessageContext* msgCtx, u16 textId) {
    switch (textId) {
        case 1:
            if (msgCtx->unk_E2FD == 1) {
                msgCtx->unk_E3DC = 0xFF;
                msgCtx->unk_E3DE = 0x78;
                msgCtx->unk_E3E0 = 0;
            } else {
                msgCtx->unk_E3DC = 0xFF;
                msgCtx->unk_E3DE = 0x3C;
                msgCtx->unk_E3E0 = 0x3C;
            }
            break;
        case 2:
            if (msgCtx->unk_E2FD == 1) {
                msgCtx->unk_E3DC = VREG(33);
                msgCtx->unk_E3DE = VREG(34);
                msgCtx->unk_E3E0 = VREG(35);
            } else {
                msgCtx->unk_E3DC = VREG(36);
                msgCtx->unk_E3DE = VREG(37);
                msgCtx->unk_E3E0 = VREG(38);
            }
            break;
        case 3:
            if (msgCtx->unk_E2FD == 1) {
                msgCtx->unk_E3DC = 0x50;
                msgCtx->unk_E3DE = 0x6E;
                msgCtx->unk_E3E0 = 0xFF;
            } else {
                msgCtx->unk_E3DC = 0x50;
                msgCtx->unk_E3DE = 0x5A;
                msgCtx->unk_E3E0 = 0xFF;
            }
            break;
        case 4:
            if (msgCtx->unk_E2FD == 1) {
                msgCtx->unk_E3DC = 0x5A;
                msgCtx->unk_E3DE = 0xB4;
                msgCtx->unk_E3E0 = 0xFF;
            } else if (msgCtx->unk_E2FD == 5) {
                msgCtx->unk_E3DC = 0x50;
                msgCtx->unk_E3DE = 0x96;
                msgCtx->unk_E3E0 = 0xB4;
            } else {
                msgCtx->unk_E3DC = 0x64;
                msgCtx->unk_E3DE = 0xB4;
                msgCtx->unk_E3E0 = 0xFF;
            }
            break;
        case 5:
            if (msgCtx->unk_E2FD == 1) {
                msgCtx->unk_E3DC = 0xD2;
                msgCtx->unk_E3DE = 0x64;
                msgCtx->unk_E3E0 = 0xFF;
            } else {
                msgCtx->unk_E3DC = 0xFF;
                msgCtx->unk_E3DE = 0x96;
                msgCtx->unk_E3E0 = 0xB4;
            }
            break;
        case 6:
            if (msgCtx->unk_E2FD == 1) {
                msgCtx->unk_E3DC = 0xFF;
                msgCtx->unk_E3DE = 0xFF;
                msgCtx->unk_E3E0 = 0x1E;
            } else {
                msgCtx->unk_E3DC = 0xE1;
                msgCtx->unk_E3DE = 0xFF;
                msgCtx->unk_E3E0 = 0x32;
            }
            break;
        case 7:
            msgCtx->unk_E3DC = msgCtx->unk_E3DE = msgCtx->unk_E3E0 = 0;
            break;
        case 0: // required to match
        default:
            if (msgCtx->unk_E2FD == 5) {
                msgCtx->unk_E3DC = msgCtx->unk_E3DE = msgCtx->unk_E3E0 = 0;
            } else {
                msgCtx->unk_E3DC =  msgCtx->unk_E3DE = msgCtx->unk_E3E0 = 0xFF;
            }
            break;
    }
}

void func_80107980(GlobalContext *globalCtx, Gfx **p, s16 arg2, s16 arg3);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_message_PAL/func_80107980.s")
/* void func_80107980(GlobalContext *globalCtx, Gfx **p, s16 arg2, s16 arg3) {
    s16 sp60;
    s32 spC;
    s32 sp8;
    s32 sp4;
    s32 sp0;
    Gfx *temp_v0;
    s16 temp_a1;
    s16 temp_a2;
    s16 temp_a2_3;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_t0;
    s16 temp_t0_2;
    s16 temp_t1;
    s16 temp_t1_3;
    s16 temp_t2;
    s16 temp_t2_3;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t4;
    s16 temp_t4_2;
    s16 temp_t5;
    s16 temp_t5_2;
    s16 temp_t9;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1_4;
    s32 temp_a2_2;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_f18;
    s16 temp_t1_2;
    s16 temp_t2_2;
    s32 temp_t6;
    Vec3s *temp_a0;
    Vec3s *temp_a1_2;
    s32 phi_v1;
    s32 phi_t1;
    s32 phi_t2;
    s16 phi_a3;
    s16 phi_t5;
    s16 phi_t1_2;
    s16 phi_t2_2;
    s32 phi_v1_2;
    s32 phi_v1_3;
    s16 phi_t5_2;
    s32 phi_t1_3;
    s32 phi_v1_4;
    s32 phi_v1_5;
    s32 phi_v1_6;
    s32 temp_1;

    temp_v0 = *p;

    if (D_8014B308 == 0) {
        temp_a0 = &D_801539C8[D_801539F0];

        temp_a3 = D_801539E0 - temp_a0->x;
        temp_t5 = ((temp_a3 >= 0) ? temp_a3 : -temp_a3) / D_801539EC;

        temp_a3_2 = D_801539E4 - temp_a0->y;
        sp60 = ((temp_a3_2 >= 0) ? temp_a3_2 : -temp_a3_2) / D_801539EC;

        temp_t6 = D_801539E8 - temp_a0->z;
        phi_v1_3 = (temp_t6 >= 0) ? temp_t6 : -temp_t6;

        if (D_801539E0 >= temp_a0->x) {
            temp_t2_2 = (D_801539E0 - temp_t5);
        } else {
            temp_t2_2 = (D_801539E0 + temp_t5);
        }
        if (D_801539E4 >= temp_a0->y) {
            temp_t1_2 = (D_801539E4 - sp60);
        } else {
            temp_t1_2 = (D_801539E4 + sp60);
        }
        if (D_801539E8 >= temp_a0->z) {
            phi_a3 = D_801539E8 - (phi_v1_3 / D_801539EC);
        } else {
            phi_a3 = D_801539E8 + (phi_v1_3 / D_801539EC);
        }

        temp_a1_2 = &D_801539D4[D_801539F0];

        D_801539E0 = temp_t2_2;
        spC = temp_a0->x;

        temp_a0_2 = D_801539F4 - temp_a1_2->x;
        temp_a2_3 = ((temp_a0_2 >= 0) ? temp_a0_2 : -temp_a0_2) / D_801539EC;

        D_801539E4 = temp_t1_2;
        sp8 = temp_a0->y;

        temp_a0_3 = D_801539F8 - temp_a1_2->y;
        temp_a3_4 = ((temp_a0_3 >= 0) ? temp_a0_3 : -temp_a0_3) / D_801539EC;

        D_801539E8 = phi_a3;
        sp4 = temp_a0->z;

        temp_a0_4 = D_801539FC - temp_a1_2->z;
        phi_v1_6 = (temp_a0_4 >= 0) ? temp_a0_4 : -temp_a0_4;

        if (D_801539F4 >= temp_a1_2->x) {
            phi_t5 = (D_801539F4 - temp_a2_3);
        } else {
            phi_t5 = (D_801539F4 + temp_a2_3);
        }
        if (D_801539F8 >= temp_a1_2->y) {
            phi_t1_2 = (D_801539F8 - temp_a3_4);
        } else {
            phi_t1_2 = (D_801539F8 + temp_a3_4);
        }
        if (D_801539FC >= temp_a1_2->z) {
            phi_t2_2 = D_801539FC - (s16)(phi_v1_6 / D_801539EC);
        } else {
            phi_t2_2 = D_801539FC + (s16)(phi_v1_6 / D_801539EC);
        }

        D_801539EC--;
        if (D_801539EC == 0) {
            D_801539E0 = spC;
            D_801539E4 = sp8;
            D_801539E8 = sp4;
            D_801539F0 ^= 1;
            D_801539EC = 0xC;
            phi_t5 = temp_a1_2->x;
            phi_t1_2 = temp_a1_2->y;
            phi_t2_2 = temp_a1_2->z;
        }

        gDPPipeSync(temp_v0++);
        gDPSetCombineLERP(temp_v0++, 
            PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
            PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
        gDPSetPrimColor(temp_v0++, 0, 0, D_801539E0, D_801539E4, D_801539E8, 255);
        gDPSetEnvColor(temp_v0++, phi_t5, phi_t1_2, phi_t2_2, 255);

        D_801539F8 = phi_t1_2;
        D_801539FC = phi_t2_2;
        D_801539F4 = phi_t5;

        // gDPLoadTextureBlock
        gDPSetTextureImage(temp_v0++, G_IM_FMT_I, G_IM_SIZ_16b, 1, globalCtx->msgCtx.font.iconBuf);
        gDPSetTile(temp_v0++, G_IM_FMT_I, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOLOD);
        gDPLoadSync(temp_v0++);
        gDPLoadBlock(temp_v0++, G_TX_LOADTILE, 0, 0, 63, 2048);
        gDPPipeSync(temp_v0++);
        gDPSetTile(temp_v0++, G_IM_FMT_I, G_IM_SIZ_4b, 1, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMASK, G_TX_NOLOD);
        gDPSetTileSize(temp_v0++, G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C);

        D_801759A0 = (XREG(57) / 100.0f) * 16.0f;
        D_801759A4 = 1024.0f / (XREG(57) / 100.0f);

        gSPTextureRectangle(temp_v0++, 
                        arg2 * 4, arg3 * 4, 
                        (arg2 + D_801759A0) * 4, (arg3 + D_801759A0) * 4, G_TX_RENDERTILE, 0, 0, D_801759A4, D_801759A4);

        globalCtx->msgCtx.unk_E3E7++;
        *p = temp_v0;
    }
} */

u16 func_801080B4(GlobalContext* globalCtx, u16 arg1, Gfx** p, u16 arg3) {
    s32 pad;
    Gfx* gfx = *p;
    MessageContext* msgCtx = &globalCtx->msgCtx;

    // clang-format off
    // same line required to match
    if (msgCtx->msgMode == 6) { Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8); }
    // clang-format on

    gDPPipeSync(gfx++);
    gDPSetCombineMode(gfx++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
    gDPSetPrimColor(gfx++, 0, 0, 0xFF, 0xFF, 0xFF, msgCtx->unk_E3E2);

    if (arg1 >= 0x66) {
        gDPLoadTextureBlock(gfx++, (u32)msgCtx->textboxSegment + 0x1000, 
                    G_IM_FMT_RGBA, G_IM_SIZ_32b, 24, 24, 0, 
                    G_TX_NOMIRROR | G_TX_WRAP, 
                    G_TX_NOMIRROR | G_TX_WRAP, 
                    G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    } else {
        gDPLoadTextureBlock(gfx++, (u32)msgCtx->textboxSegment + 0x1000, 
                    G_IM_FMT_RGBA, G_IM_SIZ_32b, 32, 32, 0, 
                    G_TX_NOMIRROR | G_TX_WRAP, 
                    G_TX_NOMIRROR | G_TX_WRAP, 
                    G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    }
    gSPTextureRectangle(gfx++, 
                    (msgCtx->unk_E3D8 + YREG(71))*4, 
                    YREG(72)*4, 
                    (msgCtx->unk_E3D8 + YREG(71) + YREG(75))*4, 
                    (YREG(72) + YREG(75))*4, G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);
    gDPPipeSync(gfx++);
    gDPSetCombineLERP(gfx++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

    msgCtx->unk_E3D8 += 0x20;
    arg3++;
    *p = gfx;
    return arg3;
}

void func_801083F8(GlobalContext* globalCtx) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    if (globalCtx->msgCtx.msgMode == 6) {
        globalCtx->msgCtx.unk_E3EE = 1;
        if (msgCtx->unk_E3F0 == 0x2A) {
            msgCtx->msgMode = 0x21;
            // Recording Start / Recording Start / Recording Start / Recording Start ->
            osSyncPrintf("録音開始 録音開始 録音開始 録音開始  -> ");
        } else if (msgCtx->unk_E3F0 == 0x2B) {
            // Recording Playback / Recording Playback / Recording Playback / Recording Playback ->
            osSyncPrintf("録音再生 録音再生 録音再生 録音再生  -> ");
            func_800ED858(1);
            func_800ED858(1);
            msgCtx->unk_E2B8 = func_800EE3F8();
            D_8014B2F8 = D_8014B2FC = 0;
            msgCtx->unk_E2B8->pos = D_8014B2F8;
            func_801069B0();
            msgCtx->unk_E3E7 = 3;
            msgCtx->msgMode = 0x23;
            func_800ED93C(0xF, 1);
        } else if (msgCtx->unk_E3F0 == 0x2C) {
            msgCtx->msgMode = 0x24;
            // 8 Note Recording Start / 8 Note Recording Start / 8 Note Recording Start ->
            osSyncPrintf("８音録音開始 ８音録音開始 ８音録音開始  -> ");
        } else if (msgCtx->unk_E3F0 == 0x2D) {
            // 8 Note Playback / 8 Note Playback / 8 Note Playback ->
            osSyncPrintf("８音再生 ８音再生 ８音再生  -> ");
            func_800ED858(1);
            func_800ED858(1);
            msgCtx->unk_E2B8 = func_800EE3F8();
            D_8014B2F8 = D_8014B2FC = 0;
            msgCtx->unk_E2B8->pos = D_8014B2F8;
            func_801069B0();
            msgCtx->unk_E3E7 = 3;
            msgCtx->msgMode = 0x28;
            func_800ED93C(0xD, 1);
        } else if (msgCtx->unk_E3F0 == 0x2E) {
            msgCtx->msgMode = 0x29;
            // Musical Round Start / Musical Round Start / Musical Round Start / Musical Round Start ->
            osSyncPrintf("輪唱開始 輪唱開始 輪唱開始 輪唱開始  -> ");
        } else if (msgCtx->unk_E3F0 == 0x2F) {
            msgCtx->msgMode = 0x31;
            // Frog Chorus / Frog Chorus ->
            osSyncPrintf("カエルの合唱 カエルの合唱  -> ");
        } else {
            // Ocarina（%d）
            osSyncPrintf("オカリナ（%d） ", msgCtx->unk_E3F0);
            if (msgCtx->unk_E3F0 == 0 || msgCtx->unk_E3F0 == 1 || msgCtx->unk_E3F0 >= 0x22) {
                msgCtx->msgMode = 9;
                osSyncPrintf("000000000000  -> ");
            } else if (msgCtx->unk_E3F0 >= 2 && msgCtx->unk_E3F0 < 0xE) {
                msgCtx->msgMode = 0xA;
                osSyncPrintf("111111111111  -> ");
            } else {
                msgCtx->msgMode = 0xB;
                osSyncPrintf("222222222222  -> ");
            }
        }
        osSyncPrintf("msg_mode=%d\n", msgCtx->msgMode);
    }
}

#ifdef NON_MATCHING
// stack only
void func_801086B0(GlobalContext *globalCtx, Gfx **gfxP) {
    s32 temp_v0;
    u16 phi_a0;
    u16 sp128;
    u16 phi_s2;
    u16 new_var;
    Gfx *sp120 = *gfxP;
    Font* font = &globalCtx->msgCtx.font;
    MessageContext *temp_s1 = &globalCtx->msgCtx;

    globalCtx->msgCtx.unk_E3D8 = XREG(54);
    if (D_8014B308 == 0) {
        temp_s1->unk_E3DA = XREG(55);
    } else {
        temp_s1->unk_E3DA = YREG(1);
    }
    if (temp_s1->unk_E2FD == 5) {
        temp_s1->unk_E3DC = temp_s1->unk_E3DE = temp_s1->unk_E3E0 = 0;
    } else {
        temp_s1->unk_E3DC = temp_s1->unk_E3DE = temp_s1->unk_E3E0 = 0xFF;
    }
    temp_s1->unk_E3D0 = 0;
    sp128 = 0;

    for (phi_s2 = 0; phi_s2 < temp_s1->unk_E3D2; phi_s2++) {
        temp_v0 = temp_s1->unk_E306[phi_s2];
        switch(temp_v0) {
            case 1:
                temp_s1->unk_E3D8 = XREG(54);
                if ((temp_s1->unk_E3E6 == 1) || (temp_s1->unk_E3E6 == 3)) {
                    temp_s1->unk_E3D8 += 0x20;
                }
                if ((temp_s1->unk_E3E6 == 2) && (temp_s1->unk_E3DA != XREG(55))) {
                    temp_s1->unk_E3D8 += 0x20;
                }
                temp_s1->unk_E3DA += XREG(56);
                break;
            case 5:
                func_801076CC(temp_s1, temp_s1->unk_E306[++phi_s2] & 0xF);
                break;
            case 32:
                temp_s1->unk_E3D8 += 6;
                break;
            case 4:
                if (temp_s1->msgMode == 6) {
                    if (D_8014B300 == 0) {
                        Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                        temp_s1->msgMode = 0x34;
                        Font_LoadMessageBoxEndIcon(font, 0);
                    } else {
                        temp_s1->msgMode = 4;
                        temp_s1->unk_E3D6 = 0;
                        temp_s1->unk_E3CE++;
                    }
                }
                *gfxP = sp120;
                return;
            case 6:
                temp_s1->unk_E3D8 += temp_s1->unk_E306[++phi_s2];
                break;
            case 7:
                temp_s1->unk_E3E4 = 0x30;
                if (temp_s1->msgMode == 6) {
                    Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    temp_s1->msgMode = 0x35;
                    Font_LoadMessageBoxEndIcon(font, 0);
                }
                *gfxP = sp120;
                return;
            case 8:
                if (phi_s2 + 1 == temp_s1->unk_E3D2) {
                    if (temp_s1->msgMode == 6 || (temp_s1->msgMode >= 9 && temp_s1->msgMode < 0x21)) {
                        for (phi_a0 = phi_s2;; phi_a0++) {
                            u8 tmp = temp_s1->unk_E306[phi_a0];
                            if (tmp == 6) {
                                phi_a0++;
                            } else if ((tmp != 9) && 
                                (tmp != 0xA) && 
                                (tmp != 0xB) && 
                                (tmp != 0xC) && 
                                (tmp != 0xD) && 
                                (tmp != 4) && 
                                (tmp != 2)) {
                            } else {
                                break;
                            }
                        }
                        phi_s2 = phi_a0 - 1;
                        temp_s1->unk_E3D2 = phi_s2 + 1;
                    }
                }
            case 9:
                break;
            case 13:
                if (phi_s2 + 1 == temp_s1->unk_E3D2) {
                    if (temp_s1->msgMode == 6) {
                        temp_s1->msgMode = 7;
                        Font_LoadMessageBoxEndIcon(font, 0);
                    }
                    *gfxP = sp120;
                    return;
                }
                break;
            case 12:
                if (temp_s1->msgMode == 6) {
                    temp_s1->unk_E3E7 = temp_s1->unk_E306[++phi_s2];
                    temp_s1->msgMode = 8;
                }
                *gfxP = sp120;
                return;
            case 17:
                if (temp_s1->msgMode == 6) {
                    temp_s1->msgMode = 0x35;
                    temp_s1->unk_E3E4 = 0x60;
                    osSyncPrintf("タイマー (%x) (%x)", temp_s1->unk_E306[phi_s2 + 1], temp_s1->unk_E306[phi_s2 + 2]); // timer
                    temp_s1->unk_E3E7 = temp_s1->unk_E306[++phi_s2] << 8;
                    temp_s1->unk_E3E7 |= temp_s1->unk_E306[++phi_s2];
                    osSyncPrintf("合計wct=%x(%d)\n", temp_s1->unk_E3E7, temp_s1->unk_E3E7); // total wct
                }
                *gfxP = sp120;
                return;
            case 18:
                if (temp_s1->msgMode == 6 && D_8014B318 == 0) {
                    D_8014B318 = 1;
                    osSyncPrintf("サウンド（ＳＥ）\n"); // sfx
                    new_var = temp_s1->unk_E306[phi_s2 + 1] << 8;
                    Audio_PlaySoundGeneral((new_var) | temp_s1->unk_E306[phi_s2 + 2], 
                                    &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                }
                phi_s2 += 2;
                break;
            case 19:
                phi_s2 = func_801080B4(globalCtx, temp_s1->unk_E306[phi_s2 + 1], &sp120, phi_s2);
                break;
            case 21:
                // clang-format off
                if (temp_s1->msgMode == 6) { Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8); }
                // clang-format on
                gDPPipeSync(sp120++);
                gDPSetCombineMode(sp120++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);
                gDPSetPrimColor(sp120++, 0, 0, D_80153930[temp_s1->unk_E3F9].r, D_80153930[temp_s1->unk_E3F9].g, D_80153930[temp_s1->unk_E3F9].b, temp_s1->unk_E3E2);

                gDPLoadTextureBlock_4b(sp120++, ((u32)temp_s1->textboxSegment + 0x1000), 
                            G_IM_FMT_I, 96, 48, 0, 
                            G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                gSPTextureRectangle(sp120++, 
                                (temp_s1->unk_E3D8 + 1) << 2,    (XREG(61) + D_80153948[temp_s1->unk_E3FA]) << 2, 
                                (temp_s1->unk_E3D8 + 0x61) << 2, (XREG(61) + D_80153948[temp_s1->unk_E3FA] + 0x30) << 2, G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);

                gDPLoadTextureBlock_4b(sp120++, ((u32)temp_s1->textboxSegment + 0x1900), 
                            G_IM_FMT_I, 96, 48, 0, 
                            G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                gSPTextureRectangle(sp120++, 
                                (temp_s1->unk_E3D8 + 0x61) << 2, (XREG(61) + D_80153948[temp_s1->unk_E3FA]) << 2, 
                                (temp_s1->unk_E3D8 + 0xC2) << 2, (XREG(61) + D_80153948[temp_s1->unk_E3FA] + 0x30) << 2, G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);

                gDPPipeSync(sp120++);
                gDPSetPrimColor(sp120++, 0, 0, D_80153900[temp_s1->unk_E3F8].r, D_80153900[temp_s1->unk_E3F8].g, D_80153900[temp_s1->unk_E3F8].b, temp_s1->unk_E3E2);

                gDPLoadTextureBlock_4b(sp120++, ((u32)temp_s1->textboxSegment + 0x1000), 
                            G_IM_FMT_I, 96, 48, 0, 
                            G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                gSPTextureRectangle(sp120++, 
                                temp_s1->unk_E3D8 << 2, XREG(61) << 2, 
                                (temp_s1->unk_E3D8 + 0x60) << 2, (XREG(61) + 0x30) << 2, G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);

                gDPLoadTextureBlock_4b(sp120++, ((u32)temp_s1->textboxSegment + 0x1900), 
                            G_IM_FMT_I, 96, 48, 0, 
                            G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
                gSPTextureRectangle(sp120++, 
                                (temp_s1->unk_E3D8 + 0x60) << 2, XREG(61) << 2, 
                                (temp_s1->unk_E3D8 + 0xC0) << 2, (XREG(61) + 0x30) << 2, G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);

                gDPPipeSync(sp120++);
                gDPSetCombineLERP(sp120++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

                temp_s1->unk_E3D8 += 0x20;
                break;
            case 20:
                temp_s1->unk_E3EA = temp_s1->unk_E306[++phi_s2];
                break;
            case 26:
                temp_s1->unk_E3D6 = 1;
                break;
            case 27:
                temp_s1->unk_E3E4 = 0x10;
                if (temp_s1->msgMode == 6) {
                    temp_s1->unk_E2FA = temp_s1->unk_E2F8;
                    temp_s1->unk_E3E7 = 4;
                    temp_s1->choiceIndex = 0;
                    Font_LoadMessageBoxEndIcon(font, 2);
                }
                break;
            case 28:
                temp_s1->unk_E3E4 = 0x20;
                if (temp_s1->msgMode == 6) {
                    temp_s1->unk_E2FA = temp_s1->unk_E2F8;
                    temp_s1->unk_E3E7 = 4;
                    temp_s1->choiceIndex = 0;
                    Font_LoadMessageBoxEndIcon(font, 2);
                }
                break;
            case 2:
                if (temp_s1->msgMode == 6) {
                    temp_s1->msgMode = 0x35;
                    if (temp_s1->unk_E3E4 == 0) {
                        Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_END, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                        Font_LoadMessageBoxEndIcon(font, 1);
                        if (globalCtx->csCtx.state == 0) {
                            Interface_SetDoAction(globalCtx, 3);
                        }
                    }
                }
                *gfxP = sp120;
                return;
            case 16:
                if (phi_s2 + 1 == temp_s1->unk_E3D2) {
                    func_801083F8(globalCtx);
                    *gfxP = sp120;
                    return;
                }
                break;
            case 14:
                if (temp_s1->msgMode == 6) {
                    temp_s1->msgMode = 0x35;
                    temp_s1->unk_E3E4 = 0x60;
                    temp_s1->unk_E3E7 = temp_s1->unk_E306[++phi_s2];
                    Font_LoadMessageBoxEndIcon(font, 1);
                    if (globalCtx->csCtx.state == 0) {
                        Interface_SetDoAction(globalCtx, 3);
                    }
                }
                *gfxP = sp120;
                return;
            case 10:
                if (temp_s1->msgMode == 6) {
                    Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    temp_s1->msgMode = 0x35;
                    temp_s1->unk_E3E4 = 0x40;
                }
                *gfxP = sp120;
                return;
            case 11:
                if (temp_s1->msgMode == 6) {
                    temp_s1->msgMode = 0x35;
                    temp_s1->unk_E3E4 = 0x50;
                    Font_LoadMessageBoxEndIcon(font, 0);
                    Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_END, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                }
                *gfxP = sp120;
                return;
            default:
                if (temp_s1->msgMode == 6 && phi_s2 + 1 == temp_s1->unk_E3D2 && temp_s1->unk_E3E8 == temp_s1->unk_E3EA) {
                    Audio_PlaySoundGeneral(0, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                }
                // TODO this is not ok, what is this
                func_80106F1C(globalCtx, &((u8*)&font->xy)[sp128], &sp120);
                sp128 += 128;
                temp_s1->unk_E3D8 += (s32)(D_80153988[temp_v0 - 2] * (XREG(57) / 100.0f));
                break;
        }
    }
    if (temp_s1->unk_E3E8 == 0) {
        temp_s1->unk_E3D2 = phi_s2 + 1;
        temp_s1->unk_E3E8 = temp_s1->unk_E3EA;
    } else {
        temp_s1->unk_E3E8--;
    }
    *gfxP = sp120;
}
#else
void func_801086B0(GlobalContext* globalCtx, Gfx** gfxP);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_message_PAL/func_801086B0.s")
#endif

void func_80109968(GlobalContext* globalCtx, u16 arg1, s16 arg2) {
    MessageContext* msgCtx = &globalCtx->msgCtx;
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;

    if (arg1 == 0x76) {
        interfaceCtx->unk_140[30] = 0xFF;
        interfaceCtx->unk_140[31] = 0xFF;
    }
    if (arg1 < 0x66) {
        YREG(71) = XREG(54) - D_80153C40[gSaveContext.language];
        YREG(72) = arg2 + 6;
        YREG(75) = 32;
        DmaMgr_SendRequest1((u32)msgCtx->textboxSegment + 0x1000, 
                            (u32)_icon_item_staticSegmentRomStart + (arg1 * 0x1000), 
                            0x1000, "../z_message_PAL.c", 1473);
        // Item 32-0
        osSyncPrintf("アイテム32-0\n");
    } else {
        YREG(71) = XREG(54) - D_80153C48[gSaveContext.language];
        YREG(72) = arg2 + 10;
        YREG(75) = 24;
        DmaMgr_SendRequest1((u32)msgCtx->textboxSegment + 0x1000, 
                            (u32)_icon_item_24_staticSegmentRomStart + 0xFFFC6A00 + (arg1 * 0x900), 
                            0x900, "../z_message_PAL.c", 1482);
        // Item 24＝%d (%d) {%d}
        osSyncPrintf("アイテム24＝%d (%d) {%d}\n", arg1, arg1 - 0x6C, 0x54);
    }
    msgCtx->unk_E3CE++;
    msgCtx->unk_E3E6 = 1;
}

// Message_Decode
#ifdef NON_MATCHING
// Missing some useless moves and ands, few other reorderings, some regalloc, stack
void func_80109B3C(GlobalContext *globalCtx) {
    u8 temp_s2;
    u8 phi_s1;
    u8 phi_s0;
    u8 temp_var;
    s32 phi_s1_2;
    s16 new_var;
    u16 phi_s0_3;
    s16 phi_s3;
    s16 sp86 = 0;
    f32 temp_f0_2;
    s16 sp7C[4]; // digits
    MessageContext *msgCtx = &globalCtx->msgCtx;
    Font *font = &globalCtx->msgCtx.font;
    s32 phi_s5 = 0;
    s16 phi_s4;
    s16 phi_s6 = 0;

    globalCtx->msgCtx.unk_E3E8 = 0;
    globalCtx->msgCtx.unk_E3D6 = globalCtx->msgCtx.unk_E3EA = globalCtx->msgCtx.unk_E3E8 = 0;
    D_8014B2F0 = 0;

    while (true) {
        temp_s2 = msgCtx->unk_E306[phi_s6] = font->msgBuf[msgCtx->unk_E3CE];
        if (1) {}

        if (temp_s2 == 4 || temp_s2 == 7 || temp_s2 == 0xC || temp_s2 == 0xB || temp_s2 == 0x2) {
            msgCtx->msgMode = 6;
            msgCtx->unk_E3D2 = 1;
            XREG(55) = VREG(1) + 8;
            osSyncPrintf("ＪＪ＝%d\n", sp86);
            phi_s3 = msgCtx->unk_E2FD;
            if (phi_s3 != 4) {
                if (sp86 == 0) {
                    XREG(55) = VREG(1) + 0x1A;
                } else if (sp86 == 1) {
                    XREG(55) = (VREG(1) + 0x14) & 0xFFFF;
                } else if (sp86 == 2) {
                    XREG(55) = VREG(1) + 0x10;
                }
            }
            if (temp_s2 == 7) {
                osSyncPrintf("NZ_NEXTMSG=%x, %x, %x\n", font->msgBuf[msgCtx->unk_E3CE], font->msgBuf[msgCtx->unk_E3CE + 1], font->msgBuf[msgCtx->unk_E3CE + 2]);
                temp_s2 = font->msgBuf[msgCtx->unk_E3CE + 1];
                msgCtx->unk_E306[++phi_s6] = temp_s2;
                phi_s1 = (temp_s2 << 8);
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[msgCtx->unk_E3CE + 2];
                D_8014B304 = msgCtx->unk_E306[phi_s6] | phi_s1;
            }
            if (temp_s2 == 0xC) {
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[msgCtx->unk_E3CE + 1];
                msgCtx->unk_E3CE += 2;
            }
            msgCtx->unk_E3D4 = phi_s6;
            if (D_8014B300 != 0) {
                msgCtx->unk_E3D2 = msgCtx->unk_E3D4;
            }
            break;
        } else if (temp_s2 == 0xF) {
            for (phi_s4 = 8; phi_s4 > 0; phi_s4--) {
                if (gSaveContext.playerName[phi_s4 - 1] != 0x3E) {
                    break;
                }
            }
            osSyncPrintf("\n名前 ＝ ");
            for (phi_s3 = 0; phi_s3 < phi_s4; phi_s3++) {
                phi_s1 = gSaveContext.playerName[phi_s3];
                if (phi_s1 == 0x3E) {
                    phi_s1 = 0x20;
                } else if (phi_s1 == 0x40) {
                    phi_s1 = 0x2E;
                } else if (phi_s1 == 0x3F) {
                    phi_s1 = 0x2D;
                } else if (phi_s1 < 0xA) {
                    phi_s1 += 0x30;
                } else if (phi_s1 < 0x24) {
                    phi_s1 += 0x37;
                } else if (phi_s1 < 0x3E) {
                    phi_s1 += 0x3D;
                }
                if (phi_s1 != 0x20) {
                    Font_LoadChar(font, phi_s1 - 0x20, phi_s5);
                    phi_s5 += 0x80;
                }
                osSyncPrintf("%x ", phi_s1);
                msgCtx->unk_E306[phi_s6] = phi_s1;
                phi_s6++;
            }
            phi_s6--;
        } else if (temp_s2 == 0x16 || temp_s2 == 0x17) {
            osSyncPrintf("\nＥＶＥＮＴタイマー ＝ ");
            sp7C[0] = sp7C[1] = sp7C[2] = 0;
            if (temp_s2 == 0x17) {
                sp7C[3] = gSaveContext.timer1Value;
            } else {
                sp7C[3] = gSaveContext.timer2Value;
            }

            while (sp7C[3] >= 60) {
                sp7C[1]++;
                if (sp7C[1] >= 10) {
                    sp7C[0]++;
                    sp7C[1] -= 10;
                }
                sp7C[3] -= 60;
            }
            while (sp7C[3] >= 10) {
                sp7C[2]++;
                sp7C[3] -= 10;
            }

            for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                phi_s5 += 0x80;
                msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                phi_s6++;
                if (phi_s3 == 1) {
                    Font_LoadChar(font, 2, phi_s5);
                    phi_s5 += 0x80;
                    msgCtx->unk_E306[phi_s6] = 0x22;
                    phi_s6++;
                } else if (phi_s3 == 3) {
                    Font_LoadChar(font, 2, phi_s5);
                    phi_s5 += 0x80;
                    msgCtx->unk_E306[phi_s6] = 0x22;
                }
            }
        } else if (temp_s2 == 0x18) {
            osSyncPrintf("\n流鏑馬スコア ＝ %d\n", gSaveContext.minigameScore);
            sp7C[0] = sp7C[1] = sp7C[2] = 0;
            sp7C[3] = gSaveContext.minigameScore;

            while (sp7C[3] >= 1000) {
                sp7C[0]++;
                sp7C[3] -= 1000;
            }
            while (sp7C[3] >= 100) {
                sp7C[1]++;
                sp7C[3] -= 100;
            }
            while (sp7C[3] >= 10) {
                sp7C[2]++;
                sp7C[3] -= 10;
            }

            phi_s1_2 = 0;
            for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                if (phi_s3 == 3 || sp7C[phi_s3] != 0) {
                    phi_s1_2 = 1;
                }
                if (phi_s1_2 != 0) {
                    Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                    msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                    phi_s5 += 0x80;
                    phi_s6++;
                }
            }
            phi_s6--;
        } else if (temp_s2 == 0x19) {
            osSyncPrintf("\n金スタ合計数 ＝ %d", gSaveContext.inventory.gsTokens);
            sp7C[0] = sp7C[1] = 0;
            sp7C[2] = gSaveContext.inventory.gsTokens;

            while (sp7C[2] >= 100) {
                sp7C[0]++;
                sp7C[2] -= 100;
            }
            while (sp7C[2] >= 10) {
                sp7C[1]++;
                sp7C[2] -= 10;
            }

            phi_s1_2 = 0;
            for (phi_s3 = 0; phi_s3 < 3; phi_s3++) {
                if (phi_s3 == 2 || sp7C[phi_s3] != 0) {
                    phi_s1_2 = 1;
                }
                if (phi_s1_2 != 0) {
                    Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                    msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                    phi_s5 += 0x80;
                    osSyncPrintf("%x(%x) ", sp7C[phi_s3] + 0x10, sp7C[phi_s3]);
                    phi_s6++;
                }
            }
            phi_s6--;
        } else if (temp_s2 == 0x1D) {
            osSyncPrintf("\n釣り堀魚サイズ ＝ ");
            sp7C[0] = 0;
            sp7C[1] = gSaveContext.minigameScore;

            while (sp7C[1] >= 10) {
                sp7C[0]++;
                sp7C[1] -= 10;
            }

            for (phi_s3 = 0; phi_s3 < 2; phi_s3++) {
                if (phi_s3 == 1 || sp7C[phi_s3] != 0) {
                    Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                    msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                    phi_s5 += 0x80;
                    osSyncPrintf("%x(%x) ", sp7C[phi_s3] + 0x10, sp7C[phi_s3]);
                    phi_s6++;
                }
            }
            phi_s6--;
        } else if (temp_s2 == 0x1E) {
            phi_s0_3 = HIGH_SCORE(font->msgBuf[++msgCtx->unk_E3CE]);
            osSyncPrintf("ランキング＝%d\n", font->msgBuf[msgCtx->unk_E3CE]);
            if (font->msgBuf[msgCtx->unk_E3CE] == 2) {
                if (LINK_AGE_IN_YEARS == YEARS_CHILD) {
                    phi_s0_3 = phi_s0_3 & 0x7F;
                } else {
                    osSyncPrintf("HI_SCORE( kanfont->mbuff.nes_mes_buf[message->rdp] & 0xff000000 ) = %x\n", 
                                HIGH_SCORE(((u16*)font->msgBuf)[msgCtx->unk_E3CE] & 0xFF000000));
                    phi_s0_3 = ((HIGH_SCORE(font->msgBuf[msgCtx->unk_E3CE]) & 0xFF000000) >> 0x18) & 0x7F;
                }
                phi_s0_3 = SQ((f32)phi_s0_3) * 0.0036f + 0.5f;
                osSyncPrintf("score=%d\n", phi_s0_3);
            }
            switch (font->msgBuf[msgCtx->unk_E3CE]) {
                case HS_HBA:
                case HS_POE_POINTS:
                case HS_FISHING:
                    sp7C[0] = sp7C[1] = sp7C[2] = 0;
                    sp7C[3] = phi_s0_3;

                    while (sp7C[3] >= 1000) {
                        sp7C[0]++;
                        sp7C[3] -= 1000;
                    }
                    while (sp7C[3] >= 100) {
                        sp7C[1]++;
                        sp7C[3] -= 100;
                    }
                    while (sp7C[3] >= 10) {
                        sp7C[2]++;
                        sp7C[3] -= 10;
                    }
                    if (temp_s2) {}

                    phi_s1_2 = 0;
                    for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                        if (phi_s3 == 3 || sp7C[phi_s3] != 0) {
                            phi_s1_2 = 1;
                        }
                        if (phi_s1_2 != 0) {
                            Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                            msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                            phi_s5 += 0x80;
                            phi_s6++;
                        }
                    }
                    phi_s6--;
                    break;
                case HS_UNK_05:
                    break;
                case HS_HORSE_RACE:
                case HS_MARATHON:
                case HS_DAMPE_RACE:
                    sp7C[0] = sp7C[1] = sp7C[2] = 0;
                    sp7C[3] = phi_s0_3;
                    
                    while (sp7C[3] >= 60) {
                        sp7C[1]++;
                        if (sp7C[1] >= 10) {
                            sp7C[0]++;
                            sp7C[1] -= 10;
                        }
                        sp7C[3] -= 60;
                    }
                    while (sp7C[3] >= 10) {
                        sp7C[2]++;
                        sp7C[3] -= 10;
                    }

                    for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                        Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                        phi_s5 += 0x80;
                        msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                        phi_s6++;
                        if (phi_s3 == 1) {
                            Font_LoadChar(font, 2, phi_s5);
                            phi_s5 += 0x80;
                            msgCtx->unk_E306[phi_s6] = 0x22;
                            phi_s6++;
                        } else if (phi_s3 == 3) {
                            Font_LoadChar(font, 2, phi_s5);
                            phi_s5 += 0x80;
                            msgCtx->unk_E306[phi_s6] = 0x22;
                        }
                    }
                    break;
            }
        } else if (temp_s2 == 0x1F) {
            osSyncPrintf("\nゼルダ時間 ＝ ");
            sp7C[0] = 0;
            temp_f0_2 = gSaveContext.dayTime * 0.021972656f;

            sp7C[1] = temp_f0_2 / 60.0f;
            while (sp7C[1] >= 10) {
                sp7C[0]++;
                sp7C[1] -= 10;
            }
            sp7C[2] = 0;
            sp7C[3] = (s16)temp_f0_2 % 0x3C;
            while (sp7C[3] >= 10) {
                sp7C[2]++;
                sp7C[3] -= 10;
            }

            for (phi_s3 = 0; phi_s3 < 4; phi_s3++) {
                Font_LoadChar(font, sp7C[phi_s3] + 0x10, phi_s5);
                phi_s5 += 0x80;
                msgCtx->unk_E306[phi_s6] = sp7C[phi_s3] + 0x30;
                phi_s6++;
                if (phi_s3 == 1) {
                    Font_LoadChar(font, 0x1A, phi_s5);
                    phi_s5 += 0x80;
                    msgCtx->unk_E306[phi_s6] = 0x3A;
                    phi_s6++;
                }
            }
            phi_s6--;
        } else if (temp_s2 == 0x13) {
            msgCtx->unk_E306[++phi_s6] = font->msgBuf[msgCtx->unk_E3CE + 1];
            osSyncPrintf("ITEM_NO=(%d) (%d)\n", msgCtx->unk_E306[phi_s6], font->msgBuf[msgCtx->unk_E3CE + 1]);
            func_80109968(globalCtx, font->msgBuf[msgCtx->unk_E3CE + 1], VREG(1) + 0xA);
        } else if (temp_s2 == 0x15) {
            msgCtx->unk_E3F6 = font->msgBuf[msgCtx->unk_E3CE + 1] * 2;
            msgCtx->unk_E3F8 = (font->msgBuf[msgCtx->unk_E3CE + 2] & 0xF0) >> 4;
            msgCtx->unk_E3F9 = font->msgBuf[msgCtx->unk_E3CE + 2] & 0xF;
            msgCtx->unk_E3FA = (font->msgBuf[msgCtx->unk_E3CE + 3] & 0xF0) >> 4;
            msgCtx->unk_E3FB = font->msgBuf[msgCtx->unk_E3CE + 3] & 0xF;
            sp86 = 2;
            DmaMgr_SendRequest1((u32)msgCtx->textboxSegment + 0x1000, 
                                (u32)_message_texture_staticSegmentRomStart + (msgCtx->unk_E3F6 * 0x900), 0x900, "../z_message_PAL.c", 1830);
            DmaMgr_SendRequest1((u32)msgCtx->textboxSegment + 0x1900, 
                                (u32)_message_texture_staticSegmentRomStart + (msgCtx->unk_E3F6 * 0x900) + 0x900, 0x900, "../z_message_PAL.c", 1834);
            msgCtx->unk_E3CE += 3;
            XREG(61) = VREG(1) + 8;
            XREG(54) = 0x32;
        } else if (temp_s2 == 5) {
            msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
        } else if (temp_s2 == 1) {
            sp86++;
        } else if (temp_s2 != 8 && temp_s2 != 9 && temp_s2 != 0xD && temp_s2 != 0x10 && temp_s2 != 0xA && temp_s2 != 0x1A) {
            if (temp_s2 == 0xE) {
                D_8014B2F0 = 1;
                osSyncPrintf("NZ_TIMER_END (key_off_flag=%d)\n", D_8014B2F0);
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
            } else if (temp_s2 == 0x11) {
                D_8014B2F0 = 1;
                osSyncPrintf("NZ_BGM (key_off_flag=%d)\n", D_8014B2F0);
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
            } else if (temp_s2 == 6 || temp_s2 == 0x14) {
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
            } else if (temp_s2 == 0x12) {
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
                msgCtx->unk_E306[++phi_s6] = font->msgBuf[++msgCtx->unk_E3CE];
            } else if (temp_s2 == 0x1B) {
                msgCtx->unk_E3E6 = 2;
            }else  if (temp_s2 == 0x1C) {
                msgCtx->unk_E3E6 = 3;
            } else if (temp_s2 != 0x20) {
                Font_LoadChar(font, temp_s2 - 0x20, phi_s5);
                phi_s5 += 0x80;
            }
        }
        phi_s6++;
        msgCtx->unk_E3CE++;
    }
}
#else
void func_80109B3C(GlobalContext* globalCtx);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_message_PAL/func_80109B3C.s")
#endif

void func_8010B0C0(GlobalContext* globalCtx, u16 textId) {
    static s16 D_80153C50[] = {
        0x0000, 0x0001, 0x0003, 0x0002,
    };

    MessageContext* msgCtx = &globalCtx->msgCtx;
    Font* sp30 = &msgCtx->font;
    s16 tmp;

    if (msgCtx->msgMode == 0) {
        gSaveContext.unk_13EE = gSaveContext.unk_13EA;
    }
    if (YREG(15) == 0x10) {
        Interface_ChangeAlpha(5);
    }

    D_8014B318 = D_8014B2F4 = D_8014B300 = D_8014B308 = 0;

    if (textId >= 0x0500 && textId < 0x0600) { // text ids 0500 to 0600 are reserved for credits
        D_8014B308 = 1;
        XREG(57) = 0x55;
        XREG(56) = 6;
        XREG(54) = 0x14;
        YREG(1) = 0x30;
    } else {
        XREG(57) = 0x4B;
        XREG(56) = 0xC;
        XREG(54) = 0x41;
    }
    if (textId == 0xC2 || textId == 0xFA) { // C2 = One piece of heart , FA = WINNER One piece of heart
        // Increments text id based on piece of heart count, assumes the piece of heart text is all
        // in order and that you don't have more than the intended amount of heart pieces.
        textId += (gSaveContext.inventory.questItems & 0xF0000000 & 0xF0000000) >> 0x1C;
    } else if (msgCtx->unk_E2F8 == 0xC && CHECK_OWNED_EQUIP(EQUIP_SWORD,2)) {
        textId = 0xB; // Traded Giant's Knife for Biggoron Sword
    } else if (msgCtx->unk_E2F8 == 0xB4 && (gSaveContext.eventChkInf[9] & 0x40)) {
        textId = 0xB5; // Destroyed Gold Skulltula
    }
    // Ocarina Staff + Dialog
    if (textId == 0x4077 || // Pierre?
        textId == 0x407A || // Pierre?
        textId == 0x2061 || // Learning Epona's Song
        textId == 0x5035 || // Guru-Guru in Windmill
        textId == 0x40AC) { // Ocarina Frog Minigame
        Interface_ChangeAlpha(1);
    }
    msgCtx->unk_E2F8 = textId;
    if (textId == 0x2030) { // Talking to Ingo as adult in Lon Lon Ranch for the first time before freeing Epona
        osSyncPrintf("\x1b[33m"); // VT_FGCOL(yellow)
        osSyncPrintf("？？？？？？？？？？？？？？？？  z_message.c  ？？？？？？？？？？？？？？？？？？\n");
        osSyncPrintf("\x1b[m"); // VT_RST
        gSaveContext.eventInf[0] = gSaveContext.eventInf[1] =  gSaveContext.eventInf[2] = gSaveContext.eventInf[3] = 0;
    }
    
    if (D_8014B308 != 0) {
        func_80107628(globalCtx, textId);
        msgCtx->unk_E300 = sp30->msgLength;
        DmaMgr_SendRequest1((u32)sp30->msgBuf, 
                        (u32)(_staff_message_data_staticSegmentRomStart + sp30->msgOffset), 
                        sp30->msgLength, "../z_message_PAL.c", 1954);
    } else {
        if (gSaveContext.language == LANGUAGE_ENG) {
            func_80107448(globalCtx, textId);
            msgCtx->unk_E300 = sp30->msgLength;
            DmaMgr_SendRequest1((u32)sp30->msgBuf, 
                            (u32)(_nes_message_data_staticSegmentRomStart + sp30->msgOffset), 
                            sp30->msgLength, "../z_message_PAL.c", 1966);
        } else if (gSaveContext.language == LANGUAGE_GER) {
            func_80107448(globalCtx, textId);
            msgCtx->unk_E300 = sp30->msgLength;
            DmaMgr_SendRequest1((u32)sp30->msgBuf, 
                            (u32)(_ger_message_data_staticSegmentRomStart + sp30->msgOffset), 
                            sp30->msgLength, "../z_message_PAL.c", 1978);
        } else {
            func_80107448(globalCtx, textId);
            msgCtx->unk_E300 = sp30->msgLength;
            DmaMgr_SendRequest1((u32)sp30->msgBuf, 
                            (u32)(_fra_message_data_staticSegmentRomStart + sp30->msgOffset), 
                            sp30->msgLength, "../z_message_PAL.c", 1990);
        }
    }
    msgCtx->unk_E2FC = sp30->xy;
    msgCtx->unk_E2FD = msgCtx->unk_E2FC >> 4;
    msgCtx->unk_E2FE = msgCtx->unk_E2FC & 0xF;
    tmp = msgCtx->unk_E2FD;
    // Text Box Type＝%d
    osSyncPrintf("吹き出し種類＝%d\n",  msgCtx->unk_E2FD);
    if (tmp < 4) {
        DmaMgr_SendRequest1(msgCtx->textboxSegment, 
                        (u32)(_message_staticSegmentRomStart + (D_80153C50[tmp] * 0x1000)), 
                        0x1000, "../z_message_PAL.c", 2006);
        if (tmp == 0) {
            msgCtx->unk_E3FE = 0;
            msgCtx->unk_E400 = 0;
            msgCtx->unk_E402 = 0;
        } else if (tmp == 1) {
            msgCtx->unk_E3FE = 0x46;
            msgCtx->unk_E400 = 0x32;
            msgCtx->unk_E402 = 0x1E;
        } else if (tmp == 2) {
            msgCtx->unk_E3FE = 0;
            msgCtx->unk_E400 = 0xA;
            msgCtx->unk_E402 = 0x32;
        } else {
            msgCtx->unk_E3FE = 0xFF;
            msgCtx->unk_E400 = 0;
            msgCtx->unk_E402 = 0;
        }
        if (tmp == 1) {
            msgCtx->unk_E404 = 0xE6;
        } else if (tmp == 3) {
            msgCtx->unk_E404 = 0xB4;
        } else {
            msgCtx->unk_E404 = 0xAA;
        }
        msgCtx->unk_E406 = 0;
    }
    msgCtx->unk_E3E6 = msgCtx->unk_E3D6 = msgCtx->unk_E3E4 = 0;
    msgCtx->unk_E3CE = msgCtx->unk_E3D0 = msgCtx->unk_E3D2 = 0;
}

// Message_Begin
void func_8010B680(GlobalContext* globalCtx, u16 textId, Actor* actor) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    osSyncPrintf("\x1b[34m");
    // Message＝%x(%d)
    osSyncPrintf("めっせーじ＝%x(%d)\n", textId, actor);
    osSyncPrintf("\x1b[m");
    msgCtx->unk_E3F0 = 0xFFFF;
    func_8010B0C0(globalCtx, textId);
    msgCtx->unk_E408 = actor;
    msgCtx->msgMode = 1;
    msgCtx->unk_E3E7 = 0;
    msgCtx->unk_E3E8 = 0;
    globalCtx->msgCtx.unk_E3EE = 0;
}

// Message_Continue
void func_8010B720(GlobalContext* globalCtx, u16 textId) {
    MessageContext* msgCtx = &globalCtx->msgCtx;

    osSyncPrintf("\x1b[32m");
    // Message＝%x message->msg_data
    osSyncPrintf("めっせーじ＝%x  message->msg_data\n", textId, msgCtx->unk_E300);
    osSyncPrintf("\x1b[m");
    msgCtx->unk_E300 = 0;
    func_8010B0C0(globalCtx, textId);
    msgCtx->msgMode = 0;
    msgCtx->unk_E406 = msgCtx->unk_E404;
    msgCtx->msgMode = 5;
    msgCtx->unk_E3E7 = 3;
    msgCtx->unk_E3E4 = msgCtx->unk_E3CE = msgCtx->unk_E3D0 = msgCtx->unk_E3D2 = msgCtx->unk_E3E8 = 0;
    msgCtx->unk_E3E2 = 0xFF;
    if (YREG(31) == 0 && globalCtx->interfaceCtx.unk_1FA == 0) {
        Interface_SetDoAction(globalCtx, 0x10);
    }
    msgCtx->unk_E406 = msgCtx->unk_E404;
}

u16 D_80153C58[] = {
    0x0001, 0x0002, 0x0004, 0x0008, 0x0010, 0x0020, 0x0100, 0x0080,
};

void func_8010B820(GlobalContext* globalCtx, u16 ocarinaActionId) {
    MessageContext* msgCtx = &globalCtx->msgCtx;
    s32 phi_s0_2;
    s16 phi_v0_3;
    s16 phi_s0;
    s16 sp4A;
    s32 phi_s0_3;

    osSyncPrintf("\x1b[32m");
    for (phi_s0 = D_8014B31C = 0; phi_s0 < 0xC; phi_s0++) {
        if (CHECK_QUEST_ITEM(phi_s0 + 0x6)) {
            osSyncPrintf("ocarina_check_bit[%d]=%x\n", phi_s0, D_80153C58[phi_s0]);
            D_8014B31C |= D_80153C58[phi_s0];
        }
    }
    if (gSaveContext.scarecrowSpawnSongSet != 0) {
        D_8014B31C |= 0x1000;
    }
    osSyncPrintf("ocarina_bit = %x\n", D_8014B31C);
    osSyncPrintf("\x1b[m");
    D_8014B314 = CHECK_QUEST_ITEM(QUEST_SONG_SUN);
    msgCtx->unk_E2B8 = func_800EE3C8();
    msgCtx->unk_E2B8->pos = D_8014B2F8 = 0;
    D_8014B2FC = 0;
    func_801069B0();
    msgCtx->unk_E410 = 0xFF;
    D_8014B310 = msgCtx->unk_E3F2 = msgCtx->unk_E410;

    // ☆☆☆☆☆ Ocarina Number＝%d(%d) ☆☆☆☆☆
    osSyncPrintf("\x1b[31m☆☆☆☆☆ オカリナ番号＝%d(%d) ☆☆☆☆☆\n\x1b[m", ocarinaActionId, 2);
    sp4A = 0;
    if (ocarinaActionId >= 0x893) {
        func_8010B0C0(globalCtx, ocarinaActionId);
        phi_s0_2 = ocarinaActionId + 0x86E;
    } else if (ocarinaActionId == 0x2E) {
        msgCtx->unk_E3F0 = ocarinaActionId;
        func_8010B0C0(globalCtx, 0x86D);
        phi_s0_2 = ocarinaActionId + 0x86E;
    } else if (ocarinaActionId == 1 || ocarinaActionId >= 0x22) {
        osSyncPrintf("ocarina_set 000000000000000000  = %d\n", ocarinaActionId);
        msgCtx->unk_E3F0 = ocarinaActionId;
        if (ocarinaActionId >= 0x22 && ocarinaActionId < 0x28) {
            Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }
        if (ocarinaActionId == 0x2D) {
            func_8010B0C0(globalCtx, 0x86F);
            phi_s0_2 = ocarinaActionId + 0x86E;
        } else {
            func_8010B0C0(globalCtx, 0x86E);
            phi_s0_2 = ocarinaActionId + 0x86E;
        }
    } else {
        msgCtx->unk_E3F0 = ocarinaActionId;
        sp4A = 1;
        if (ocarinaActionId >= 0xF) {
            osSyncPrintf("222222222\n");
            func_8010B0C0(globalCtx, 0x86D);
            phi_s0_2 = ocarinaActionId + 0x86E;
        } else {
            osSyncPrintf("333333333\n");
            phi_s0_2 = ocarinaActionId + 0x86E;
            func_8010B0C0(globalCtx, phi_s0_2);
        }
    }
    msgCtx->unk_E408 = NULL;
    // Ocarina Mode
    osSyncPrintf("オカリナモード = %d  (%x)\n", msgCtx->unk_E3F0, phi_s0_2);
    msgCtx->unk_E3E8 = 0;
    globalCtx->msgCtx.unk_E3EE = 0;
    VREG(0) = 0x22;
    VREG(1) = 0x8E;
    YREG(16) = 0x200;
    YREG(17) = 0x200;
    YREG(22) = 0x100;
    YREG(23) = 0x40;
    msgCtx->unk_E3E7 = 0;
    if (YREG(12) != 0) {
        msgCtx->msgMode = 4;
    } else {
        msgCtx->unk_E3E7 =2;
        msgCtx->msgMode = 5;
    }
    msgCtx->unk_E406 = msgCtx->unk_E404;
    if (sp4A == 0) {
        Interface_LoadActionLabelB(globalCtx, 0x12);
        sp4A = gSaveContext.unk_13EA;
        Interface_ChangeAlpha(0xA);
        gSaveContext.unk_13EA = sp4A;
    }
    // Music Performance Start
    osSyncPrintf("演奏開始\n");
    if (ocarinaActionId == 1 || ocarinaActionId == 0x30) {
        msgCtx->msgMode = 9;
        msgCtx->unk_E2FD = 0x63;
    } else if (ocarinaActionId == 0x2F) {
        msgCtx->msgMode = 0x31;
        msgCtx->unk_E2FD = 2;
    } else if (ocarinaActionId == 0x2E) {
        Interface_ChangeAlpha(1);
        func_80109B3C(globalCtx);
        msgCtx->msgMode = 0x29;
    } else if (ocarinaActionId == 0x2B) {
        // ?????Recording Playback / Recording Playback / Recording Playback / Recording Playback ->
        osSyncPrintf("?????録音再生 録音再生 録音再生 録音再生  -> ");
        func_800ED858(1);
        func_800ED858(1);
        msgCtx->unk_E2B8 = func_800EE3F8();
        D_8014B2F8 = D_8014B2FC = 0;
        msgCtx->unk_E2B8->pos = D_8014B2F8;
        func_801069B0();
        msgCtx->unk_E3E7 = 3;
        msgCtx->msgMode = 0x23;
        func_800ED93C(0xF, 1);
        gSaveContext.unk_13EA = 0;
        Interface_ChangeAlpha(1);
    }
    for (phi_s0_3 = 0, phi_v0_3 = 0; phi_v0_3 < 0x30; phi_v0_3++, phi_s0_3 += 0x80) {
        func_8006EE50(&globalCtx->msgCtx.font, 0x8140, phi_s0_3);
    }
}

void func_8010BD58(GlobalContext* globalCtx, u16 arg1) {
    globalCtx->msgCtx.unk_E40E = 0;
    func_8010B820(globalCtx, arg1);
}

void func_8010BD88(GlobalContext* globalCtx, u16 arg1) {
    globalCtx->msgCtx.unk_E40E = 1;
    func_8010B820(globalCtx, arg1);
}

// Talk states?
u8 func_8010BDBC(MessageContext* msgCtx) {
    u8 ret;
    if (msgCtx->unk_E300 == 0) {
        ret = 0;
    } else if (msgCtx->msgMode == 0x35) {
        if (msgCtx->unk_E3E4 == 0x30) {
            ret = 1;
        } else if (msgCtx->unk_E3E4 == 0x10 || msgCtx->unk_E3E4 == 0x20) {
            ret = 4;
        } else if (msgCtx->unk_E3E4 == 0x50 || msgCtx->unk_E3E4 == 0x40) {
            ret = 5;
        } else if (msgCtx->unk_E3E4 == 0x60) {
            ret = 3;
        } else {
            ret = 6;
        }
    } else if (msgCtx->msgMode == 0x34) {
        ret = 10;
    } else if (msgCtx->msgMode == 0x1A) {
        ret = 7;
    } else if (msgCtx->unk_E3EE == 3) {
        ret = 8;
    } else if (msgCtx->msgMode == 0x1F) {
        ret = 9;
    } else if (msgCtx->msgMode == 0x36 && msgCtx->unk_E3E7 == 1) {
        ret = 2;
    } else {
        ret = 3;
    }
    return ret;
}

#ifdef NON_MATCHING
// Single regalloc, stack offsets
void func_8010BED8(GlobalContext* globalCtx, Gfx** p) {
    MessageContext* msgCtx = &globalCtx->msgCtx;
    Gfx* gfx = *p;
    s32 unk_E2FD;

    gDPPipeSync(gfx++);
    gDPSetPrimColor(gfx++, 0, 0, msgCtx->unk_E3FE, msgCtx->unk_E400, msgCtx->unk_E402, msgCtx->unk_E406);

    if (msgCtx->unk_E2FD == 0 || (unk_E2FD = msgCtx->unk_E2FD, msgCtx->unk_E2FD == 2)) {
        gDPLoadTextureBlock_4b(gfx++, msgCtx->textboxSegment, G_IM_FMT_I, 128, 64, 0, 
                G_TX_MIRROR | G_TX_WRAP, 
                G_TX_NOMIRROR | G_TX_WRAP, 
                7, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    } else {
        if (unk_E2FD == 3) {
            gDPSetEnvColor(gfx++, 0, 0, 0, 255);
        } else {
            gDPSetEnvColor(gfx++, 50, 20, 0, 255);
        }
        gDPLoadTextureBlock_4b(gfx++, msgCtx->textboxSegment, G_IM_FMT_IA, 128, 64, 0, 
                G_TX_MIRROR | G_TX_WRAP, 
                G_TX_MIRROR | G_TX_WRAP, 
                7, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
    }
    if (1) {}
    gSPTextureRectangle(gfx++, 
            VREG(0) << 2, 
            VREG(1) << 2, 
            (VREG(0) + YREG(22)) << 2, 
            (VREG(1) + YREG(23)) << 2, 
            0, 0, 0, YREG(16) << 1, YREG(17) << 1);
    if (msgCtx->unk_E2FD == 3) {
        gDPPipeSync(gfx++);
        gDPSetCombineLERP(gfx++, 
                1, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, 
                1, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0);
        gDPSetPrimColor(gfx++, 0, 0, 255, 100, 0, 255);
        gDPLoadTextureBlock_4b(gfx++, &D_02002E40, G_IM_FMT_I, 16, 32, 0, 
                G_TX_MIRROR | G_TX_WRAP, 
                G_TX_MIRROR | G_TX_WRAP, 
                G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
        if (1) {}
        gSPTextureRectangle(gfx++, 
                VREG(7) << 2, 
                VREG(8) << 2, 
                (VREG(7) + 0x10) << 2, 
                (VREG(8) + 0x20) << 2, 
                0, 0, 0, 0x0400, 0x0400);
    }
    *p = gfx;
}
#else
void func_8010BED8(GlobalContext* globalCtx, Gfx** p);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_message_PAL/func_8010BED8.s")
#endif

// Message_SetView ?
void func_8010C358(View* view) {
    SET_FULLSCREEN_VIEWPORT(view);
    func_800AB2C4(view);
}

// Message_DrawMain ?
#ifdef NON_EQUIVALENT
// A lot but it at least compiles
void func_8010C39C(GlobalContext *globalCtx, Gfx **p) {
    // oceff actor ids
    static s16 D_80153C68[] = {
        0x0040, 0x0200, 0x0400, 0x0800, 0x1000, 0x0000, 0x0199, 0x0198,
    };
    // oceff actor params
    static s16 D_80153C78[] = {
        0x018A, 0x017E, 0x018A, 0x018B, 0x01CB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000
    };
    // texture segment addrs
    static UNK_PTR D_80153C94[] = {
        0x02002940, 0x02002A40, 0x02002B40, 0x02002C40, 0x02002D40,
    };
    static Vec3s D_80153CA8[] = {
        { 0x0050, 0x00FF, 0x0096 },
        { 0x0064, 0x00FF, 0x00C8 },
    };
    static Vec3s D_80153CB4[] = {
        { 0x000A, 0x000A, 0x000A },
        { 0x0032, 0x00FF, 0x0032 },
    };
    static Vec3s D_80153CC0[] = {
        { 0x00FF, 0x00FF, 0x0032 },
        { 0x00FF, 0x00FF, 0x00B4 },
    };
    static Vec3s D_80153CCC[] = {
        { 0x000A, 0x000A, 0x000A },
        { 0x006E, 0x006E, 0x0032 },
    };
    static s16 D_80153CD8 = 0x000C;
    static s16 D_80153CDC = 0x0001;
    static s16 D_80153CE0[] = {
        0x0034, 0x0033, 0x0035, 0x0036, 0x0037, 0x0025, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 0x0049,
    };

    Player *sp148;
    Gfx *sp140;
    u16 sp138;
    u16 sp132;
    Font *sp90;
    s32 sp88;
    s32 sp7C[2];
    s32 sp78;
    s32 sp70;
    s32 sp6C;
    s32 sp64;
    s32 sp5C;
    s32 sp54;
    Vec3s* temp_a1;
    Vec3s* temp_a1_2;
    Vec3s* temp_a1_3;
    Vec3s* temp_a1_4;
    MessageContext *temp_s1;
    s16 temp_a0_3;
    s16 temp_a0_4;
    s16 temp_a0_5;
    s16 temp_a0_6;
    s16 temp_a0_7;
    s16 temp_a0_8;
    s16 temp_a1_10;
    s16 temp_a1_11;
    s16 temp_a1_12;
    s16 temp_a1_5;
    s16 temp_a1_6;
    s16 temp_a1_7;
    s16 temp_a1_8;
    s16 temp_a1_9;
    s16 temp_a2_2;
    s16 temp_a2_3;
    s16 temp_a2_4;
    s16 temp_a2_5;
    s16 temp_a3_3;
    s16 temp_a3_4;
    s16 temp_a3_5;
    s16 temp_a3_6;
    s16 temp_ra;
    s16 temp_t0_2;
    s16 temp_t0_3;
    s16 temp_t0_4;
    s16 temp_t0_5;
    s16 temp_t1;
    s16 temp_t1_2;
    s16 temp_t1_3;
    s16 temp_t1_4;
    s16 temp_t2;
    s16 temp_t3;
    s16 temp_t3_2;
    s16 temp_t3_3;
    s16 temp_t4;
    s16 temp_t5;
    s16 temp_t8;
    s16 temp_t8_2;
    s16 temp_t9_4;
    s16 temp_t9_5;
    s16 temp_v0_10;
    s16 temp_v0_27;
    s16 temp_v1_22;
    s32 temp_a3_10;
    s32 temp_a3_12;
    s32 temp_a3_20;
    s32 temp_a3_21;
    s32 temp_a3_7;
    s32 temp_t9_3;
    s32 temp_v0_12;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_12;
    s32 temp_v1_13;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    u16 temp_a3;
    u16 temp_a3_11;
    u16 temp_a3_14;
    u16 temp_v0_13;
    u16 temp_v0_14;
    u16 temp_v0_23;
    u16 temp_v0_24;
    u16 temp_v0_6;
    u16 temp_v0_8;
    u16 temp_v0_9;
    u16 temp_v1_14;
    u16 temp_v1_15;
    u16 temp_v1_16;
    u32 temp_t9;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_a2;
    u8 temp_a2_6;
    u8 temp_a2_7;
    u8 temp_a2_8;
    u8 temp_a2_9;
    u8 temp_t0_9;
    u8 temp_v0_11;
    u8 temp_v0_17;
    u8 temp_v0_18;
    u8 temp_v0_19;
    u8 temp_v0_20;
    u8 temp_v0_21;
    u8 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_7;
    u8 temp_v1;
    u8 temp_v1_17;
    u8 temp_v1_18;
    u8 temp_v1_19;
    u8 temp_v1_20;
    u8 temp_v1_21;
    u8 temp_v1_23;
    u8 temp_v1_24;
    u8 temp_v1_25;
    u8 temp_v1_26;
    u8 temp_v1_27;
    u8 temp_v1_28;
    u8 temp_a0_9;
    s32 phi_a2;
    u16 phi_a3;
    s8 phi_t8;
    u8 phi_a0;
    OcarinaStaff *phi_a3_2;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    s16 phi_t9;
    s32 phi_v0_6;
    s32 phi_v0_7;
    s16 phi_t9_2;
    s32 phi_v0_8;
    s32 phi_v0_9;
    s16 phi_t8_2;
    s32 phi_v1;
    u16 phi_a3_3;
    u16 phi_v0_10;
    s32 phi_a3_4;
    u16 phi_a3_5;
    u16 phi_v0_11;
    u16 phi_a3_6;
    u16 phi_a3_7;
    s32 phi_v0_12;
    s32 phi_a3_8;
    u16 phi_a1;
    u16 phi_a3_9;
    u16 phi_a1_2;
    s32 phi_v0_13;
    s32 phi_v0_14;
    s32 phi_v0_15;

    sp140 = *p;
    sp148 = PLAYER;
    temp_s1 = &globalCtx->msgCtx;

    gSPSegment(sp140++, 0x02, globalCtx->interfaceCtx.parameterSegment);
    gSPSegment(sp140++, 0x07, temp_s1->textboxSegment);

    if (temp_s1->unk_E300 != 0) {
        if (temp_s1->unk_E3F0 != 0x2F && temp_s1->msgMode != 0x17 && temp_s1->msgMode >= 2 && temp_s1->msgMode < 0x36 && temp_s1->unk_E2FD < 4) {
            func_8010C358(&temp_s1->view);
            func_8009457C(&sp140);
            func_8010BED8(globalCtx, &sp140);
        }
        func_8009457C(&sp140);

        gDPSetAlphaCompare(sp140++, G_AC_NONE);
        gDPSetCombineLERP(sp140++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

        switch (temp_s1->msgMode) {
            case 1:
            case 2:
            case 3:
            case 4:
                break;
            case 5:
                if (temp_s1->unk_E3E7 == 1) {
                    for (phi_a3 = 0; phi_a3 < 0x30; phi_a3++) {
                        func_8006EE50(&globalCtx->msgCtx.font, 0x8140, phi_a2 * 0x80);
                    }
                    func_801086B0(globalCtx, &sp140);
                }
                break;
            case 6:
            case 8:
                func_801086B0(globalCtx, &sp140);
                break;
            case 7:
            case 52:
                func_801086B0(globalCtx, &sp140);
                func_80107980(globalCtx, &sp140, XREG(64), XREG(65));
                break;
            case 9:
            case 10:
            case 11:
                func_800ED858(1);
                temp_s1->unk_E2B8 = func_800EE3D4();
                temp_s1->unk_E2B8->pos = D_8014B2F8 = 0;
                globalCtx->msgCtx.unk_E3EE = 1;
                func_801069B0();
                D_80153CDC = 1;
                D_80153CD8 = 3;
                if (temp_s1->msgMode == 9) {
                    if ((temp_s1->unk_E3F0 == 0) || (temp_s1->unk_E3F0 == 1) || (temp_s1->unk_E3F0 == 0x2C) || (temp_s1->unk_E3F0 == 0x30) || (temp_s1->unk_E3F0 >= 0x22)) {
                        if ((temp_s1->unk_E3F0 == 1) || (temp_s1->unk_E3F0 == 0x30)) {
                            func_800ECC04(D_8014B31C + 0xC000);
                        } else {
                            osSyncPrintf("台上演奏\n");
                            func_800ECC04(D_8014B31C);
                        }
                    } else {
                        osSyncPrintf("Na_StartOcarinaSinglePlayCheck2( message->ocarina_no );\n");
                        func_800ECC04((1 << temp_s1->unk_E3F0) + 0x8000);
                    }
                    temp_s1->msgMode = 0xC;
                } else {
                    if (temp_s1->msgMode == 0xA) {
                        temp_s1->unk_E3E7 = 0x14;
                        phi_t8 = 0x18;
                    } else {
                        func_800ECC04((1 << (temp_s1->unk_E3F0 + 0x11)) + 0x8000);
                        osSyncPrintf("演奏チェック=%d\n", temp_s1->unk_E3F0 - 0xF);
                        phi_t8 = 0x1B;
                    }
                    temp_s1->unk_E305 = phi_t8;
                }
                if ((temp_s1->unk_E3F0 != 1) && (temp_s1->unk_E3F0 != 0x30)) {
                    func_801086B0(globalCtx, &sp140);
                }
                break;
            case 12:
                temp_s1->unk_E2B8 = func_800EE3D4();
                if (temp_s1->unk_E2B8->pos != 0) {
                    osSyncPrintf("locate=%d  onpu_pt=%d\n", temp_s1->unk_E2B8->pos, D_8014B2F8, temp_s1->unk_E2B8);
                    if (temp_s1->unk_E2B8->pos == 1) {
                        if (D_8014B2F8 == 8) {
                            D_8014B2F8 = 0;
                        }
                    }
                    if (temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                        D_8015394C[temp_s1->unk_E2B8->pos - 1] = temp_s1->unk_E2B8->noteIdx;
                        temp_s1->unk_E410 = temp_s1->unk_E2B8->noteIdx;
                        D_8015394C[temp_s1->unk_E2B8->pos] = 0xFF;
                        D_8014B2F8++;
                    }
                }
                if (temp_s1->unk_E2B8->state < 0xD) {
                    if ((temp_s1->unk_E2B8->state == 0xC) || (((&gBitFlags[6])[D_8015396C[temp_s1->unk_E2B8->state]] & gSaveContext.inventory.questItems) != 0)) {
                        temp_s1->unk_E3F2 = temp_s1->unk_E2B8->state;
                        D_8014B310 = temp_s1->unk_E2B8->state;
                        temp_s1->msgMode = 0xD;
                        temp_s1->unk_E3E7 = 0x14;
                        if (temp_s1->unk_E3F0 == 0x30) {
                            if ((temp_s1->unk_E2B8->state < 6) || (0xC == temp_s1->unk_E2B8->state)) {
                                func_800ED858(0);
                                Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                temp_s1->msgMode = 9;
                            } else {
                                osSyncPrintf("Ocarina_Flog 正解模範演奏=%x\n", temp_s1->unk_E3EC);
                                func_8010B720(globalCtx, 0x86F);
                                temp_s1->msgMode = 0x11;
                                temp_s1->unk_E2FD = 3;
                                temp_s1->unk_E3E7 = 0xA;
                                Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                Interface_ChangeAlpha(1);
                            }
                        } else if (temp_s1->unk_E3F0 == 0x28) {
                            if (temp_s1->unk_E2B8->state < 0xC) {
                                func_800ED858(0);
                                Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                temp_s1->unk_E3E7 = 0xA;
                                temp_s1->msgMode = 0xE;
                            } else {
                                osSyncPrintf("Ocarina_Flog 正解模範演奏=%x\n", temp_s1->unk_E3EC);
                                func_8010B720(globalCtx, 0x86F);
                                temp_s1->msgMode = 0x11;
                                temp_s1->unk_E2FD = 3;
                                temp_s1->unk_E3E7 = 0xA;
                                Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                Interface_ChangeAlpha(1);
                            }
                        } else if (temp_s1->unk_E3F0 == 1) {
                            osSyncPrintf("Ocarina_Free 正解模範演奏=%x\n", temp_s1->unk_E3EC);
                            func_8010B720(globalCtx, 0x86F);
                            temp_s1->msgMode = 0x11;
                            temp_s1->unk_E2FD = 3;
                            temp_s1->unk_E3E7 = 0xA;
                            Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                        } else {
                            Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                        }
                        Interface_ChangeAlpha(1);
                    } else {
                        func_800ED858(0);
                        Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                        temp_s1->msgMode = 9;
                    }
                } else if (temp_s1->unk_E2B8->state == 0xFF) {
                    func_800ED858(0);
                    Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    temp_s1->unk_E3E7 = 0xA;
                    temp_s1->msgMode = 0xE;
                } else if (CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_B)) {
                    func_800ED858(0);
                    globalCtx->msgCtx.unk_E3EE = 4;
                    func_80106CCC(globalCtx);
                }
                if ((temp_s1->unk_E3F0 != 1) && (temp_s1->unk_E3F0 != 0x30)) {
                    func_801086B0(globalCtx, &sp140);
                }
                break;
            case 13:
            case 28:
            case 39:
                temp_a1 = &D_80153CA8[D_80153CDC];
                temp_a2_2 = D_801759A8;
                temp_t8 = temp_a1->x;
                temp_v1_2 = temp_a2_2 - temp_t8;
                sp7C[2] = temp_t8;
                if (temp_v1_2 >= 0) {
                    phi_v0 = temp_v1_2;
                } else {
                    phi_v0 = -temp_v1_2;
                }
                temp_t2 = D_80153CD8;
                temp_a3_3 = D_801759AC;
                temp_t9_4 = temp_a1->y;
                temp_v1_3 = temp_a3_3 - temp_t9_4;
                temp_t0_2 = phi_v0 / temp_t2;
                sp78 = temp_t9_4;
                if (temp_v1_3 >= 0) {
                    phi_v0_2 = temp_v1_3;
                } else {
                    phi_v0_2 = -temp_v1_3;
                }
                temp_t1 = D_801759AA;
                temp_t3 = temp_a1->z;
                temp_v1_4 = temp_t1 - temp_t3;
                temp_a0_3 = phi_v0_2 / temp_t2;
                if (temp_v1_4 >= 0) {
                    phi_v0_3 = temp_v1_4;
                } else {
                    phi_v0_3 = -temp_v1_4;
                }
                if (temp_a2_2 >= sp7C[2]) {
                    D_801759A8 = temp_a2_2 - temp_t0_2;
                } else {
                    D_801759A8 = temp_a2_2 + temp_t0_2;
                }
                if (temp_a3_3 >= sp78) {
                    D_801759AC = temp_a3_3 - temp_a0_3;
                } else {
                    D_801759AC = temp_a3_3 + temp_a0_3;
                }
                if (temp_t1 >= temp_t3) {
                    D_801759AA = temp_t1 - (phi_v0_3 / temp_t2);
                } else {
                    D_801759AA = temp_t1 + (phi_v0_3 / temp_t2);
                }
                sp70 = temp_t3;
                temp_a1_2 = &D_80153CB4[D_80153CDC];
                temp_t8_2 = temp_a1_2->x;
                temp_a2_3 = D_801759AE;
                temp_v1_5 = temp_a2_3 - temp_t8_2;
                if (temp_v1_5 >= 0) {
                    phi_v0_4 = temp_v1_5;
                } else {
                    phi_v0_4 = -temp_v1_5;
                }
                temp_a3_4 = D_801759B2;
                temp_t9_5 = temp_a1_2->y;
                temp_v1_6 = temp_a3_4 - temp_t9_5;
                temp_t0_3 = phi_v0_4 / temp_t2;
                sp6C = temp_t9_5;
                if (temp_v1_6 >= 0) {
                    phi_v0_5 = temp_v1_6;
                } else {
                    phi_v0_5 = -temp_v1_6;
                }
                temp_t1_2 = D_801759B0;
                temp_t3_2 = temp_a1_2->z;
                temp_v1_7 = temp_t1_2 - temp_t3_2;
                temp_a0_4 = phi_v0_5 / temp_t2;
                sp64 = temp_t3_2;
                if (temp_v1_7 >= 0) {
                    phi_v0_13 = temp_v1_7;
                } else {
                    phi_v0_13 = -temp_v1_7;
                }
                temp_t3_3 = D_801759BA;
                if (temp_t3_3 >= temp_t8_2) {
                    D_801759AE = temp_a2_3 - temp_t0_3;
                } else {
                    D_801759AE = temp_a2_3 + temp_t0_3;
                }
                temp_t4 = D_801759BE;
                if (temp_t4 >= sp6C) {
                    D_801759B2 = temp_a3_4 - temp_a0_4;
                } else {
                    D_801759B2 = temp_a3_4 + temp_a0_4;
                }
                temp_t5 = D_801759BC;
                if (temp_t5 >= sp64) {
                    phi_t9 = temp_t1_2 - (phi_v0_13 / temp_t2);
                } else {
                    phi_t9 = temp_t1_2 + (phi_v0_13 / temp_t2);
                }
                D_801759B0 = phi_t9;
                temp_a1_3 = &D_80153CC0[D_80153CDC];
                temp_v0_10 = temp_a1_3->x;
                temp_a2_4 = D_801759B4;
                sp5C = temp_v0_10;
                temp_v1_8 = temp_a2_4 - temp_v0_10;
                if (temp_v1_8 >= 0) {
                    phi_v0_6 = temp_v1_8;
                } else {
                    phi_v0_6 = -temp_v1_8;
                }
                temp_a3_5 = D_801759B8;
                temp_a0_5 = temp_a1_3->y;
                temp_v1_9 = temp_a3_5 - temp_a0_5;
                temp_t0_4 = phi_v0_6 / temp_t2;
                sp54 = temp_a0_5;
                if (temp_v1_9 >= 0) {
                    phi_v0_7 = temp_v1_9;
                } else {
                    phi_v0_7 = -temp_v1_9;
                }
                temp_t1_3 = D_801759B6;
                temp_ra = temp_a1_3->z;
                temp_v1_10 = temp_t1_3 - temp_ra;
                temp_a0_6 = phi_v0_7 / temp_t2;
                if (temp_v1_10 >= 0) {
                    phi_v0_14 = temp_v1_10;
                } else {
                    phi_v0_14 = -temp_v1_10;
                }
                if (temp_a2_4 >= sp5C) {
                    D_801759B4 = temp_a2_4 - temp_t0_4;
                } else {
                    D_801759B4 = temp_a2_4 + temp_t0_4;
                }
                if (temp_a3_5 >= sp54) {
                    D_801759B8 = temp_a3_5 - temp_a0_6;
                } else {
                    D_801759B8 = temp_a3_5 + temp_a0_6;
                }
                if (temp_t1_3 >= temp_ra) {
                    phi_t9_2 = temp_t1_3 - (phi_v0_14 / temp_t2);
                } else {
                    phi_t9_2 = temp_t1_3 + (phi_v0_14 / temp_t2);
                }
                D_801759B6 = phi_t9_2;
                temp_a1_4 = &D_80153CCC[D_80153CDC];
                temp_t1_4 = temp_a1_4->x;
                temp_v1_11 = temp_t3_3 - temp_t1_4;
                if (temp_v1_11 >= 0) {
                    phi_v0_8 = temp_v1_11;
                } else {
                    phi_v0_8 = -temp_v1_11;
                }
                temp_a2_5 = temp_a1_4->y;
                temp_v1_12 = temp_t4 - temp_a2_5;
                temp_t0_5 = phi_v0_8 / temp_t2;
                if (temp_v1_12 >= 0) {
                    phi_v0_9 = temp_v1_12;
                } else {
                    phi_v0_9 = -temp_v1_12;
                }
                temp_a3_6 = temp_a1_4->z;
                temp_v1_13 = temp_t5 - temp_a3_6;
                temp_a0_7 = phi_v0_9 / temp_t2;
                if (temp_v1_13 >= 0) {
                    phi_v0_15 = temp_v1_13;
                } else {
                    phi_v0_15 = -temp_v1_13;
                }
                if (temp_t3_3 >= temp_t1_4) {
                    D_801759BA = temp_t3_3 - temp_t0_5;
                } else {
                    D_801759BA = temp_t3_3 + temp_t0_5;
                }
                if (temp_t4 >= temp_a2_5) {
                    D_801759BE = temp_t4 - temp_a0_7;
                } else {
                    D_801759BE = temp_t4 + temp_a0_7;
                }
                if (temp_t5 >= temp_a3_6) {
                    phi_t8_2 = temp_t5 - (phi_v0_15 / temp_t2);
                } else {
                    phi_t8_2 = temp_t5 + (phi_v0_15 / temp_t2);
                }
                D_801759BC = phi_t8_2;
                temp_t2 = temp_t2 - 1;
                D_80153CD8 = temp_t2;
                if (temp_t2 == 0) {
                    D_801759A8 = sp7C[2];
                    D_801759AC = sp78;
                    D_801759AA = sp70;
                    D_801759AE = sp7C;
                    D_801759B2 = sp6C;
                    D_801759B0 = sp64;
                    D_801759B4 = sp5C;
                    D_801759B8 = sp54;
                    D_801759B6 = temp_ra;
                    D_801759BA = temp_t1_4;
                    D_801759BE = temp_a2_5;
                    D_801759BC = temp_a3_6;
                    D_80153CDC ^= 1;
                    D_80153CD8 = 3;
                }
                temp_s1->unk_E3E7--;
                if (temp_s1->unk_E3E7 == 0) {
                    func_800ED858(0);
                    if (temp_s1->msgMode == 0xD) {
                        osSyncPrintf("正解模範演奏=%x\n", temp_s1->unk_E3EC);
                        func_8010B720(globalCtx, 0x86F);
                        temp_s1->msgMode = 0x11;
                        temp_s1->unk_E2FD = 3;
                        temp_s1->unk_E3E7 = 1;
                    } else if (temp_s1->msgMode == 0x1C) {
                        if (temp_s1->unk_E3EC >= 6) {
                            func_8010B720(globalCtx, 0x86F);
                            temp_s1->msgMode = 0x11;
                            temp_s1->unk_E2FD = 3;
                            temp_s1->unk_E3E7 = 1;
                        } else {
                            func_80106CCC(globalCtx);
                            globalCtx->msgCtx.unk_E3EE = 4;
                        }
                    } else {
                        func_80106CCC(globalCtx);
                        globalCtx->msgCtx.unk_E3EE = 3;
                    }
                }
                func_801086B0(globalCtx, &sp140);
                break;
            case 14:
            case 29:
                func_801086B0(globalCtx, &sp140);
            case 15:
                temp_s1->unk_E3E7--;
                if (temp_s1->unk_E3E7 == 0) {
                    VREG(51) = 1;
                    if (temp_s1->msgMode == 0x1D) {
                        osSyncPrintf("ここここここ\n");
                        func_8010B720(globalCtx, 0x88B);
                        func_80109B3C(globalCtx);
                        temp_s1->msgMode = 0x1E;
                    } else {
                        temp_s1->msgMode = 0x10;
                    }
                    osSyncPrintf("キャンセル\n");
                }
                break;
            case 16:
            case 30:
                for (phi_a3_3 = 0; phi_a3_3 < 5; phi_a3_3++) {
                    (&VREG(35))[phi_a3_3] += VREG(51);
                }
                VREG(51) += 2;
                if (VREG(51) >= 0x226) {
                    D_8015394C[0] = 0xFF;
                    D_80153958[8] = D_80153958[7] = D_80153958[6] = 
                        D_80153958[5] = D_80153958[4] = D_80153958[3] = 
                        D_80153958[2] = D_80153958[1] = D_80153958[0] = 0;
                    if (temp_s1->msgMode == 0x1E) {
                        temp_s1->msgMode = 0x1F;
                    } else {
                        temp_s1->msgMode = 9;
                    }
                }
                break;
            case 17:
                temp_s1->unk_E3E7--;
                if (temp_s1->unk_E3E7 == 0) {
                    func_800ED858(0);
                    osSyncPrintf("\x1b[32m");
                    osSyncPrintf("Na_StopOcarinaMode();\n");
                    osSyncPrintf("Na_StopOcarinaMode();\n");
                    osSyncPrintf("Na_StopOcarinaMode();\n");
                    osSyncPrintf("\x1b[m");
                    func_80109B3C(globalCtx);
                    temp_s1->msgMode = 0x12;
                    temp_s1->unk_E2B8 = func_800EE3D4();
                    D_8014B2F8 = 0;
                    temp_s1->unk_E2B8->pos = D_8014B2F8;
                    func_801069B0();
                    if (temp_s1->unk_E3EC >= 6 && temp_s1->unk_E3EC < 0xD) {
                        Actor_Spawn(&globalCtx->actorCtx, globalCtx, D_80153C68[temp_s1->unk_E3EC], 
                                    sp148->actor.world.pos.x, sp148->actor.world.pos.y, sp148->actor.world.pos.z, 
                                    0, 0, 0, D_80153C78[temp_s1->unk_E3EC]);
                    }
                }
                break;
            case 18:
                func_801086B0(globalCtx, &sp140);
                func_800ED858(1);
                func_800ED858(1);
                func_800ED93C(temp_s1->unk_E3EC + 1, 1);
                if (0xC != temp_s1->unk_E3EC) {
                    func_800F5C64(D_80153CE0[temp_s1->unk_E3EC]);
                    func_800F7260(0x20);
                }
                globalCtx->msgCtx.unk_E3EE = 1;
                if (temp_s1->unk_E3F0 == 1) {
                    temp_s1->unk_E3F0 = 0x29;
                }
                if (temp_s1->unk_E3F0 == 0x30) {
                    temp_s1->unk_E3F0 = 0x31;
                }
                D_8014B2F8 = 0;
                temp_s1->msgMode = 0x13;
                break;
            case 24:
                temp_s1->unk_E3E7--;
                if (temp_s1->unk_E3E7 == 0) {
                    osSyncPrintf("ocarina_no=%d  選曲=%d\n", temp_s1->unk_E3F0, 0x16);
                    if (temp_s1->unk_E3F0 < 8) {
                        func_800ED858(4);
                    } else if (temp_s1->unk_E3F0 == 9) {
                        func_800ED858(2);
                    } else if (temp_s1->unk_E3F0 == 0xA) {
                        func_800ED858(3);
                    } else if (temp_s1->unk_E3F0 == 0xD) {
                        func_800ED858(5);
                    } else {
                        func_800ED858(1);
                    }
                    osSyncPrintf("模範演奏=%x\n", temp_s1->unk_E3F0 - 2);
                    func_800ED93C(temp_s1->unk_E3F0 - 1, 2);
                    D_8014B2F8 = 0;
                    temp_s1->msgMode = 0x19;
                }
                func_801086B0(globalCtx, &sp140);
                break;
            case 20:
                func_8010B720(globalCtx, temp_s1->unk_E3EC + 0x893);
                func_80109B3C(globalCtx);
                temp_s1->msgMode = 0x15;
                temp_s1->unk_E3E7 = 0x14;
                func_801086B0(globalCtx, &sp140);
                break;
            case 21:
                temp_s1->unk_E3E7--;
                if (temp_s1->unk_E3E7 == 0) {
                    temp_s1->msgMode = 0x16;
                }
                func_801086B0(globalCtx, &sp140);
                break;
            case 22:
                func_800ED858(0);
                func_801069B0();
                temp_s1->msgMode = 0x17;
                temp_s1->unk_E3E7 = 2;
                func_801086B0(globalCtx, &sp140);
                break;
            case 23:
                temp_s1->unk_E3E7--;
                if (temp_s1->unk_E3E7 == 0) {
                    if (temp_s1->unk_E3EC < 6 && ((temp_s1->unk_E3F0 < 0xF) || (temp_s1->unk_E3F0 >= 0x15))) {
                        if ((temp_s1->unk_E40C != 0) || (globalCtx->interfaceCtx.restrictions.warpSongs == 3)) {
                            func_8010B680(globalCtx, 0x88C, NULL);
                            globalCtx->msgCtx.unk_E3EE = 4;
                        } else if ((gSaveContext.eventInf[0] & 0xF) != 1) {
                            func_8010B680(globalCtx, temp_s1->unk_E3EC + 0x88D, NULL);
                            globalCtx->msgCtx.unk_E3EE = 1;
                        } else {
                            func_80106CCC(globalCtx);
                            break;
                        }
                    }
                    func_80106CCC(globalCtx);
                    if (temp_s1->unk_E3EC == 7) {
                        DREG(53) = 1;
                    }
                    osSyncPrintf("\x1b[33m");
                    osSyncPrintf("☆☆☆ocarina=%d   message->ocarina_no=%d  ", temp_s1->unk_E3EC, temp_s1->unk_E3F0);
                    if (temp_s1->unk_E3F0 == 0x29) {
                        if (0xC == temp_s1->unk_E3EC) {
                            globalCtx->msgCtx.unk_E3EE = 0xB;
                        } else {
                            globalCtx->msgCtx.unk_E3EE = 1;
                        }
                    } else if (temp_s1->unk_E3F0 >= 0x1C) {
                        osSyncPrintf("\x1b[33m");
                        osSyncPrintf("Ocarina_PC_Wind=%d(%d) ☆☆☆   ", 0x1C, temp_s1->unk_E3F0 - 0x1C);
                        if (temp_s1->unk_E3F0 == (temp_s1->unk_E3EC + 0x1C)) {
                            globalCtx->msgCtx.unk_E3EE = 3;
                        } else {
                            globalCtx->msgCtx.unk_E3EE = temp_s1->unk_E3EC - 1;
                        }
                    } else {
                        osSyncPrintf("\x1b[32m");
                        osSyncPrintf("Ocarina_C_Wind=%d(%d) ☆☆☆   ", 0xF, temp_s1->unk_E3F0 - 0xF);
                        if (temp_s1->unk_E3F0 == (temp_s1->unk_E3EC + 0xF)) {
                            globalCtx->msgCtx.unk_E3EE = 3;
                        } else {
                            globalCtx->msgCtx.unk_E3EE = 4;
                        }
                    }
                    osSyncPrintf("\x1b[m");
                    osSyncPrintf("→  OCARINA_MODE=%d\n", globalCtx->msgCtx.unk_E3EE);
                }
                break;
            case 19:
            case 25:
                temp_s1->unk_E2B8 = func_800EE3F8();
                if (temp_s1->unk_E2B8->state == 0) {
                    if (temp_s1->msgMode == 0x13) {
                        temp_s1->msgMode = 0x14;
                    } else {
                        temp_s1->msgMode = 0x1A;
                    }
                    osSyncPrintf("onpu_buff[%d]=%x\n", temp_s1->unk_E2B8->pos, D_8015394C[temp_s1->unk_E2B8->pos]);
                } else {
                    if ((D_8014B2F8 != 0) && (temp_s1->unk_E2B8->pos == 1)) {
                        D_8014B2F8 = 0;
                    }
                    if ((temp_s1->unk_E2B8->pos != 0) && (temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1))) {
                        temp_v0_17 = temp_s1->unk_E2B8->noteIdx;
                        D_8015394C[temp_s1->unk_E2B8->pos - 1] = temp_v0_17;
                        temp_s1->unk_E410 = temp_v0_17;
                        D_8015394C[temp_s1->unk_E2B8->pos] = 0xFF;
                        D_8014B2F8++;
                    }
                }
            case 26:
                func_801086B0(globalCtx, &sp140);
                break;
            case 27:
                temp_s1->unk_E2B8 = func_800EE3D4();
                if (temp_s1->unk_E2B8->pos != 0) {
                    if (temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                        D_8015394C[temp_s1->unk_E2B8->pos - 1] = temp_s1->unk_E2B8->noteIdx;
                        D_8015394C[temp_s1->unk_E2B8->pos] = 0xFF;
                        D_8014B2F8++;
                    }
                }
                if (temp_s1->unk_E2B8->state < 0xD) {
                    osSyncPrintf("M_OCARINA20 : ocarina_no=%x    status=%x\n", temp_s1->unk_E3F0, temp_s1->unk_E2B8->state);
                    temp_s1->msgMode = 0x1C;
                    temp_s1->unk_E3EC = temp_s1->unk_E2B8->state;
                    Item_Give(globalCtx, D_8015396C[temp_s1->unk_E2B8->state] + 0x5A);
                    osSyncPrintf("\x1b[33m");
                    osSyncPrintf("z_message.c 取得メロディ＝%d\n", temp_s1->unk_E2B8->state + 0x5A);
                    osSyncPrintf("\x1b[m");
                    temp_s1->unk_E3E7 = 0x14;
                    Audio_PlaySoundGeneral(NA_SE_SY_TRE_BOX_APPEAR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                } else if (temp_s1->unk_E2B8->state == 0xFF) {
                    Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    temp_s1->unk_E3E7 = 0xA;
                    temp_s1->msgMode = 0x1D;
                }
                func_801086B0(globalCtx, &sp140);
                break;
            case 31:
                func_801086B0(globalCtx, &sp140);
                if (func_80106BC8(globalCtx) != 0) {
                    func_8010BD58(globalCtx, temp_s1->unk_E3F0);
                }
                break;
            case 33:
                osSyncPrintf("案山子録音 初期化\n");
                func_800EE170(1);
                func_800ED858(1);
                temp_s1->unk_E2B8 = func_800EE3C8();
                D_8014B2F8 = 0;
                temp_s1->unk_E2B8->pos = D_8014B2F8;
                D_8014B2FC = 0;
                func_801069B0();
                temp_s1->msgMode = 0x22;
                func_801086B0(globalCtx, &sp140);
                break;
            case 34:
                temp_s1->unk_E2B8 = func_800EE3C8();
                osSyncPrintf("\nonpu_pt=%d, locate=%d", D_8014B2F8, temp_s1->unk_E2B8->pos);
                if ((temp_s1->unk_E2B8->pos != 0) && (temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1))) {
                    for (phi_v0_10 = D_8014B2FC - 8, phi_a3_4 = 0; phi_a3_4 < 8; phi_v0_10++, phi_a3_4++) {
                        D_8015394C[phi_v0_10] = D_8015394C[phi_v0_10 + 1];
                    }
                    D_8014B2FC--;
                    osSyncPrintf("    入力ボタン【%d】=%d", D_8014B2FC, temp_s1->unk_E2B8->noteIdx);
                    D_8015394C[D_8014B2FC] = temp_s1->unk_E2B8->noteIdx;
                    temp_s1->unk_E410 = temp_s1->unk_E2B8->noteIdx;
                    D_8014B2FC++;
                    D_8015394C[D_8014B2FC] = 0xFF;
                    D_8014B2F8++;
                    if (temp_s1->unk_E2B8->pos == 8) {
                        D_8014B2F8 = 0;
                    }
                }
                if ((temp_s1->unk_E2B8->state == 0) || (~(globalCtx->state.input[0].press.button | ~0x4000) == 0)) {
                    if (D_8014B2FC != 0) {
                        osSyncPrintf("録音終了！！！！！！！！！  message->info->status=%d \n", temp_s1->unk_E2B8->state);
                        gSaveContext.scarecrowCustomSongSet = 1;
                    }
                    Audio_PlaySoundGeneral(0x4827, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    osSyncPrintf("aaaaaaaaaaaaaa\n");
                    func_800EE170(0);
                    temp_s1->unk_E3E7 = 0xA;
                    globalCtx->msgCtx.unk_E3EE = 4;
                    func_80106CCC(globalCtx);
                    osSyncPrintf("録音終了！！！！！！！！！録音終了\n");
                    osSyncPrintf("\x1b[33m");
                    osSyncPrintf("\n====================================================================\n");
                    MemCopy(gSaveContext.scarecrowCustomSong, gScarecrowCustomSongPtr, sizeof(gSaveContext.scarecrowCustomSong));
                    for (phi_a3_5 = 0; phi_a3_5 < sizeof(gSaveContext.scarecrowCustomSong); phi_a3_5++) {
                        osSyncPrintf("%d, ", gSaveContext.scarecrowCustomSong[phi_a3_5]);
                    }
                    osSyncPrintf("\x1b[m");
                    osSyncPrintf("\n====================================================================\n");
                }
                func_801086B0(globalCtx, &sp140);
                break;
            case 35:
            case 40:
                temp_s1->unk_E2B8 = func_800EE3F8();
                if (temp_s1->unk_E2B8->pos != 0 && temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                    for (phi_v0_11 = D_8014B2FC - 8, phi_a3_6 = 0; phi_a3_6 < 8; phi_v0_11++, phi_a3_6++) {
                        D_8015394C[phi_v0_11] = D_8015394C[phi_v0_11 + 1];
                    }
                    D_8014B2FC--;
                    D_8015394C[D_8014B2FC] = temp_s1->unk_E2B8->noteIdx;
                    D_8014B2FC++;
                    D_8015394C[D_8014B2FC] = 0xFF;
                    D_8014B2F8++;
                    if (temp_s1->unk_E2B8->pos == 8) {
                        D_8014B2FC = D_8014B2F8 = 0;
                    }
                }
                osSyncPrintf("status=%d (%d)\n", temp_s1->unk_E2B8->state, 0);
                if (temp_s1->unk_E3E7 == 0) {
                    if (temp_s1->unk_E2B8->state == 0) {
                        osSyncPrintf("bbbbbbbbbbb\n");
                        func_800ED858(0);
                        globalCtx->msgCtx.unk_E3EE = 0xF;
                        func_80106CCC(globalCtx);
                    }
                } else {
                    temp_s1->unk_E3E7--;
                }
                break;
            case 36:
                func_800EE170(2);
                func_800ED858(1);
                temp_s1->msgMode = 0x25;
                func_801086B0(globalCtx, &sp140);
                break;
            case 37:
                temp_s1->unk_E2B8 = func_800EE3C8();
                if (temp_s1->unk_E2B8->pos != 0) {
                    if (temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                        D_8015394C[D_8014B2F8] = temp_s1->unk_E2B8->noteIdx;
                        temp_s1->unk_E410 = temp_s1->unk_E2B8->noteIdx;
                        D_8014B2F8++;
                        D_8015394C[D_8014B2F8] = 0xFF;
                    }
                }
                if (temp_s1->unk_E2B8->state == 0) {
                    osSyncPrintf("８音録音ＯＫ！\n");
                    temp_s1->unk_E3E7 = 0x14;
                    gSaveContext.scarecrowSpawnSongSet = 1;
                    temp_s1->msgMode = 0x27;
                    Audio_PlaySoundGeneral(0x4807, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    osSyncPrintf("\x1b[33m");
                    osSyncPrintf("\n====================================================================\n");
                    MemCopy(gSaveContext.scarecrowSpawnSong, gScarecrowSpawnSongPtr, sizeof(gSaveContext.scarecrowSpawnSong));
                    for (phi_a3_7 = 0; phi_a3_7 < sizeof(gSaveContext.scarecrowSpawnSong); phi_a3_7++) {
                        osSyncPrintf("%d, ", gSaveContext.scarecrowSpawnSong[phi_a3_7]);
                    }
                    osSyncPrintf("\x1b[m");
                    osSyncPrintf("\n====================================================================\n");
                } else if ((temp_s1->unk_E2B8->state == 0xFF) || (~(globalCtx->state.input[0].press.button | ~0x4000) == 0)) {
                    osSyncPrintf("すでに存在する曲吹いた！！！ \n");
                    func_800EE170(0);
                    Audio_PlaySoundGeneral(NA_SE_SY_OCARINA_ERROR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    func_80106CCC(globalCtx);
                    temp_s1->msgMode = 0x26;
                }
                func_801086B0(globalCtx, &sp140);
                break;
            case 38:
                osSyncPrintf("cccccccccccc\n");
                func_800ED858(0);
                func_8010B680(globalCtx, 0x40AD, NULL); // Bonooru doesn't remember your song
                globalCtx->msgCtx.unk_E3EE = 4;
                break;
            case 41:
                func_800ED858(1);
                func_800ED858(6);
                func_800EE57C(gSaveContext.ocarinaGameReward);
                temp_s1->unk_E2B8 = func_800EE3F8();
                D_8014B2F8 = 0;
                temp_s1->unk_E2B8->pos = D_8014B2F8;
                func_801069B0();
                func_800ED93C(0xE, 1);
                temp_s1->msgMode = 0x2A;
                temp_s1->unk_E3E7 = 2;
                break;
            case 42:
            case 44:
                Audio_PlaySoundGeneral(0x4038, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                temp_s1->unk_E2B8 = func_800EE3F8();
                if (temp_s1->unk_E2B8->pos != 0) {
                    if (temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                        D_8015394C[temp_s1->unk_E2B8->pos - 1] = temp_s1->unk_E2B8->noteIdx;
                        D_8015394C[temp_s1->unk_E2B8->pos] = 0xFF;
                        D_8014B2F8++;
                    }
                }
                if (temp_s1->unk_E3E7 == 0) {
                    if (temp_s1->unk_E2B8->state == 0) {
                        if (temp_s1->msgMode == 0x2A) {
                            Audio_PlaySoundGeneral(NA_SE_SY_METRONOME, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                        } else {
                            Audio_PlaySoundGeneral(NA_SE_SY_METRONOME_2, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                        }
                        temp_s1->msgMode = temp_s1->msgMode + 1;
                    }
                } else {
                    temp_s1->unk_E3E7 = temp_s1->unk_E3E7 - 1;
                }
                break;
            case 43:
            case 45:
                temp_s1->unk_E2B8 = func_800EE3F8();
                if (temp_s1->unk_E2B8->pos != 0 && temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                    D_8015394C[temp_s1->unk_E2B8->pos - 1] = temp_s1->unk_E2B8->noteIdx;
                    D_8015394C[temp_s1->unk_E2B8->pos] = 0xFF;
                    D_8014B2F8 = D_8014B2F8 + 1;
                }
                break;
            case 46:
                Audio_PlaySoundGeneral(0x4038, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                temp_s1->unk_E2B8 = func_800EE3D4();
                if (temp_s1->unk_E2B8->pos != 0) {
                    if (temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                        D_8015394C[temp_s1->unk_E2B8->pos - 1] = temp_s1->unk_E2B8->noteIdx;
                        D_8015394C[temp_s1->unk_E2B8->pos] = 0xFF;
                        D_8014B2F8++;
                    }
                }
                if (temp_s1->unk_E2B8->state == 0xFF) {
                    osSyncPrintf("輪唱失敗！！！！！！！！！\n");
                    func_800ED858(0);
                    Audio_PlaySoundGeneral(0x4827, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    temp_s1->unk_E3E7 = 0xA;
                    globalCtx->msgCtx.unk_E3EE = 3;
                } else if (temp_s1->unk_E2B8->state == 0xD) {
                    osSyncPrintf("輪唱成功！！！！！！！！！\n");
                    Audio_PlaySoundGeneral(0x4824, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                    temp_s1->msgMode = 0x2F;
                    temp_s1->unk_E3E7 = 0x1E;
                }
                func_801086B0(globalCtx, &sp140);
                break;
            case 47:
                temp_s1->unk_E2B8 = func_800EE3D4();
                if (temp_s1->unk_E2B8->pos != 0) {
                    if (temp_s1->unk_E2B8->pos == (D_8014B2F8 + 1)) {
                        D_8015394C[temp_s1->unk_E2B8->pos - 1] = temp_s1->unk_E2B8->noteIdx;
                        D_8015394C[temp_s1->unk_E2B8->pos] = 0xFF;
                        D_8014B2F8++;
                    }
                }
                temp_s1->unk_E3E7--;
                if (temp_s1->unk_E3E7 == 0) {
                    if (func_800EE5EC() != 1) {
                        Audio_PlaySoundGeneral(NA_SE_SY_METRONOME, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                        temp_s1->unk_E2B8 = func_800EE3D4();
                        D_8014B2F8 = 0;
                        temp_s1->unk_E2B8->pos = D_8014B2F8;
                        func_801069B0();
                        temp_s1->msgMode = 0x30;
                    } else {
                        globalCtx->msgCtx.unk_E3EE = 0xF;
                    }
                }
                func_801086B0(globalCtx, &sp140);
                break;
            case 48:
                if (!func_800F8FF4(NA_SE_SY_METRONOME)) {
                    temp_s1->unk_E2B8 = func_800EE3F8();
                    D_8014B2F8 = 0;
                    temp_s1->unk_E2B8->pos = D_8014B2F8;
                    func_801069B0();
                    func_800ED93C(0xE, 1);
                }
                break;
            case 49:
                func_800ED858(1);
                temp_s1->unk_E2B8 = func_800EE3D4();
                D_8014B2F8 = 0;
                temp_s1->unk_E2B8->pos = D_8014B2F8;
                globalCtx->msgCtx.unk_E3EE = 1;
                func_801069B0();
                func_800ECC04(D_8014B31C + 0xC000);
                temp_s1->msgMode = 0x32;
                break;
            case 50:
                temp_s1->unk_E2B8 = func_800EE3D4();
                if (temp_s1->unk_E2B8->pos == 0 || temp_s1->unk_E2B8->pos == D_8014B2F8 + 1) {
                    temp_s1->unk_E410 = temp_s1->unk_E2B8->noteIdx;
                    D_8014B2F8 = 0;
                    temp_s1->unk_E2B8->pos = D_8014B2F8;
                    func_801069B0();
                    temp_s1->msgMode = 0x33;
                }
            case 51:
                break;
            case 53:
                func_801086B0(globalCtx, &sp140);
                switch (temp_s1->unk_E3E4) {
                    case 0x10:
                        func_80106D40(globalCtx, 1);
                        func_80107980(globalCtx, &sp140, temp_s1->unk_E3D8, temp_s1->unk_E3DA);
                        break;
                    case 0x20:
                        func_80106D40(globalCtx, 2);
                        func_80107980(globalCtx, &sp140, temp_s1->unk_E3D8, temp_s1->unk_E3DA);
                        break;
                    case 0x40:
                        if (temp_s1->unk_E2F8 >= 0x6D && temp_s1->unk_E2F8 < 0x73) {
                            temp_s1->unk_E3E7++;
                            if (temp_s1->unk_E3E7 >= 0x1F) {
                                temp_s1->unk_E3E7 = 2;
                                temp_s1->msgMode = 0x36;
                            }
                        }
                        break;
                    case 0x50:
                    case 0x60:
                        func_80107980(globalCtx, &sp140, XREG(64), XREG(65));
                        break;
                }
                break;
            case 54:
            case 55:
                break;
            case 32:
                temp_s1->msgMode = 6;
                break;
        }
        if (temp_s1->msgMode >= 0xC && temp_s1->msgMode < 0x34 && temp_s1->unk_E3F0 != 1 && temp_s1->unk_E3F0 != 0x30) {
            func_8009457C(&sp140);

            gDPSetCombineLERP(sp140++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 
                                        PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

            if (temp_s1->msgMode == 0x1B) {
                for (phi_a3_8 = 0; phi_a3_8 < D_80131C00[temp_s1->unk_E3F0 - 0xF].len; phi_a3_8++) {
                    temp_a0_9 = D_80131C00[temp_s1->unk_E3F0 - 0xF].notesIdx[phi_a3_8];

                    gDPPipeSync(sp140++);
                    gDPSetPrimColor(sp140++, 0, 0, 150, 150, 150, 150);
                    gDPSetEnvColor(sp140++, 10, 10, 10, 0);

                    // gDPLoadTextureBlock
                    gDPSetTextureImage(sp140++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, D_80153C94[temp_a0_9]);
                    gDPSetTile(sp140++, G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                    gDPLoadSync(sp140++);
                    gDPLoadBlock(sp140++, G_TX_LOADTILE, 0, 0, 127, 1024);
                    gDPPipeSync(sp140++);
                    gDPSetTile(sp140++, G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                    gDPSetTileSize(sp140++, G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C);

                    gSPTextureRectangle(sp140++, 
                        (VREG(28) * 4), 
                        ((&VREG(35))[temp_a0_9] * 4), 
                        ((VREG(28) + 0x10) * 4), 
                        (((&VREG(35))[temp_a0_9] + 0x10) * 4), 
                        G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);
                    VREG(28) += VREG(29);
                }
            }
            if (temp_s1->msgMode != 0x21 && temp_s1->msgMode != 0x29) {
                if (D_8015394C[phi_a3_9] != 0xFF) {
                    for (phi_a3_9 = 0; phi_a3_9 < 8; phi_a3_9++) {
                        if (D_80153958[phi_a3_9] != 0xFF) {
                            D_80153958[phi_a3_9] += VREG(50);
                            if (D_80153958[phi_a3_9] >= 0xFF) {
                                D_80153958[phi_a3_9] = 0xFF;
                            }
                        }

                        gDPPipeSync(sp140++);
                        if (D_8015394C[phi_a3_9] == 0) {
                            gDPSetPrimColor(sp140++, 0, 0, D_801759A8, D_801759AC, D_801759AA, D_80153958[phi_a3_9]);
                            gDPSetEnvColor(sp140++, D_801759AE, D_801759B2, D_801759B0, 0);
                        } else {
                            gDPSetPrimColor(sp140++, 0, 0, D_801759B4, D_801759B8, D_801759B6, D_80153958[phi_a3_9]);
                            gDPSetEnvColor(sp140++, D_801759BA, D_801759BE, D_801759BC, 0);
                        }

                        // gDPLoadTextureBlock
                        gDPSetTextureImage(sp140++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, D_80153C94[D_8015394C[phi_a3_9]]);
                        gDPSetTile(sp140++, G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                        gDPLoadSync(sp140++);
                        gDPLoadBlock(sp140++, G_TX_LOADTILE, 0, 0, 127, 1024);
                        gDPPipeSync(sp140++);
                        gDPSetTile(sp140++, G_IM_FMT_IA, G_IM_SIZ_8b, 2, 0x0000, G_TX_RENDERTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD);
                        gDPSetTileSize(sp140++, G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C);

                        gSPTextureRectangle(sp140++, 
                            (VREG(28) * 4), 
                            ((&VREG(35))[D_8015394C[phi_a3_9]] * 4), 
                            ((VREG(28) + 0x10) * 4), 
                            (((&VREG(35))[D_8015394C[phi_a3_9]] + 0x10) * 4), 
                            G_TX_RENDERTILE, 0, 0, 0x0400, 0x0400);
                        VREG(28) += VREG(29);
                    }
                }
            }
        }
    }
    *p = sp140;
}
#else
void func_8010C39C(GlobalContext* globalCtx, Gfx** p);
s16 D_80153C68[] = {
    0x0040, 0x0200, 0x0400, 0x0800, 0x1000, 0x0000, 0x0199, 0x0198,
};
s16 D_80153C78[] = {
    0x018A, 0x017E, 0x018A, 0x018B, 0x01CB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0001, 0x0000, 0x0000, 0x0000
};
// texture segment addrs
u32 D_80153C94[] = {
    0x02002940, 0x02002A40, 0x02002B40, 0x02002C40, 0x02002D40,
};
Vec3s D_80153CA8[] = {
    { 0x0050, 0x00FF, 0x0096 },
    { 0x0064, 0x00FF, 0x00C8 },
};
Vec3s D_80153CB4[] = {
    { 0x000A, 0x000A, 0x000A },
    { 0x0032, 0x00FF, 0x0032 },
};
Vec3s D_80153CC0[] = {
    { 0x00FF, 0x00FF, 0x0032 },
    { 0x00FF, 0x00FF, 0x00B4 },
};
Vec3s D_80153CCC[] = {
    { 0x000A, 0x000A, 0x000A },
    { 0x006E, 0x006E, 0x0032 },
};
s16 D_80153CD8 = 0x000C;
s16 D_80153CDC = 0x0001;
s16 D_80153CE0[] = {
    0x0034, 0x0033, 0x0035, 0x0036, 0x0037, 0x0025, 0x0044, 0x0045, 0x0046, 0x0047, 0x0048, 0x0049,
};
#pragma GLOBAL_ASM("asm/non_matchings/code/z_message_PAL/func_8010C39C.s")
#endif

// Message_DrawSetup ?
void func_8010F2CC(s16* arg0, GraphicsContext* gfxCtx) {
    static s16 D_80153CF8 = 0;
    static s16 D_80153CFC = 0;

    s32 pad;

    OPEN_DISPS(gfxCtx, "../z_message_PAL.c", 3485);

    if (D_80153CF8 != *arg0) {
        D_80153CF8 = *arg0;
        D_80153CFC = 0x1E;
    }
    if (D_80153CFC != 0) {
        D_80153CFC -= 1;
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetCycleType(POLY_OPA_DISP++, G_CYC_FILL);
        gDPSetRenderMode(POLY_OPA_DISP++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetFillColor(POLY_OPA_DISP++, RGBA8(0, 1, 0, 1));
        gDPFillRectangle(POLY_OPA_DISP++, 0, 110, 319, 150);
        gDPPipeSync(POLY_OPA_DISP++);
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetCycleType(POLY_OPA_DISP++, G_CYC_FILL);
        gDPSetRenderMode(POLY_OPA_DISP++, G_RM_NOOP, G_RM_NOOP2);
        gDPSetFillColor(POLY_OPA_DISP++, RGBA8(255, 255, 255, 255));
        gDPFillRectangle(POLY_OPA_DISP++, 40, 120, 60, 140);
        gDPPipeSync(POLY_OPA_DISP++);
    }
    CLOSE_DISPS(gfxCtx, "../z_message_PAL.c", 3513);
}

// Message_DrawDebug ?
void func_8010F494(GlobalContext* globalCtx, Gfx** p) {
    s32 pad;
    GfxPrint printer;
    s32 pad1;

    GfxPrint_Init(&printer);
    GfxPrint_Open(&printer, *p);
    GfxPrint_SetPos(&printer, 6, 26);
    GfxPrint_SetColor(&printer, 255, 60, 0, 255);
    GfxPrint_Printf(&printer, "%s", "MESSAGE");
    GfxPrint_SetPos(&printer, 14, 26);
    GfxPrint_Printf(&printer, "%s", "=");
    GfxPrint_SetPos(&printer, 16, 26);
    GfxPrint_Printf(&printer, "%x", globalCtx->msgCtx.unk_E2F8);
    *p = GfxPrint_Close(&printer);
    GfxPrint_Destroy(&printer);
}

// Message_Draw ?
void func_8010F58C(GlobalContext* globalCtx) {
    Gfx* plusOne;
    Gfx* polyOpaP;
    s16 sp4E;

    OPEN_DISPS(globalCtx->state.gfxCtx, "../z_message_PAL.c", 3554);
    sp4E = gSaveContext.scarecrowCustomSongSet;
    func_8010F2CC(&sp4E, globalCtx->state.gfxCtx);
    if (BREG(0) != 0 && globalCtx->msgCtx.unk_E2F8 != 0) {
        plusOne = Graph_GfxPlusOne(polyOpaP = POLY_OPA_DISP);
        gSPDisplayList(OVERLAY_DISP++, plusOne);
        func_8010F494(globalCtx, &plusOne);
        gSPEndDisplayList(plusOne++);
        Graph_BranchDlist(polyOpaP, plusOne);
        POLY_OPA_DISP = plusOne;
    }
    if (1) {}
    plusOne = Graph_GfxPlusOne(polyOpaP = POLY_OPA_DISP);
    gSPDisplayList(OVERLAY_DISP++, plusOne);
    func_8010C39C(globalCtx, &plusOne);
    gSPEndDisplayList(plusOne++);
    Graph_BranchDlist(polyOpaP, plusOne);
    POLY_OPA_DISP = plusOne;
    CLOSE_DISPS(globalCtx->state.gfxCtx, "../z_message_PAL.c", 3582);
}

// Message_Update ?
#ifdef NON_MATCHING
// Very small reorderings, regalloc, stack
void func_8010F6F0(GlobalContext *globalCtx) {
    static s16 D_80153D00[] = {
        0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022
    };
    static s16 D_80153D0C[] = {
        0x008E, 0x008E, 0x008E, 0x008E, 0x00AE, 0x008E
    };
    static s16 D_80153D18[] = {
        0x0026, 0x0026, 0x0026, 0x0026, 0x00AE, 0x0026
    };
    static s16 D_80153D24[] = {
        0x005A, 0x005A, 0x005A, 0x005A, 0x00AE, 0x005A
    };
    static s16 D_80153D30[] = {
        0x003B, 0x003B, 0x003B, 0x003B, 0x0022, 0x003B, 0x0400, 0x0400, 
        0x0200, 0x0000, 0x1038, 0x0008, 0x200A, 0x088B, 0x0007, 0x0009, 
        0x000A, 0x107E, 0x2008, 0x2007, 0x0015, 0x0016, 0x0017, 0x0003, 
        0x0000, 0x270B, 0x00C8, 0x012C, 0x012D, 0xFFDA, 0x0014, 0x0016, 
        0x0014, 0x0016
    };
    static u8 D_80153D74 = 0x00;
    static u16 D_80153D78 = 0x0000;

                                                      // globalCtx sp58
    InterfaceContext* interfaceCtx = &globalCtx->interfaceCtx;  // sp54
    Input *curInput = &globalCtx->state.input[0];               // sp50
    Player *player = PLAYER;                                    // sp4C
    s32 unk_E2FE;
    u8 unk_E2FD;                                                // sp47
    s8 phi_v1_2;                                                // sp46
    s16 sp44;                                                   // sp44
    s16 sp42;                                                   // sp42
    s16 sp40;                                                   // sp40
    s16 sp3E;                                                   // sp3E
    MessageContext *msgCtx = &globalCtx->msgCtx;                // sp30

    if (BREG(0) != 0) {
        if (CHECK_BTN_ALL(curInput->press.button, BTN_DDOWN) && CHECK_BTN_ALL(curInput->cur.button, BTN_L)) {
            osSyncPrintf("msgno=%d\n", D_80153D78);
            func_8010B680(globalCtx, YREG(79), NULL);
            D_80153D78 = (D_80153D78 + 1) % 10;
        }
        if (YREG(78) != 0) {
            while (YREG(79) != 0x8000) {
                MessageTableEntry* entry = &D_801538F0[0];
                while (entry->textId != 0xFFFD) {
                    if (entry->textId == YREG(79)) {
                        // The message was found! !! !!
                        osSyncPrintf(" メッセージが,見つかった！！！ = %x\n", YREG(79));
                        func_8010B680(globalCtx, YREG(79), NULL);
                        YREG(79)++;
                        YREG(78) = 0;
                        return;
                    }
                    entry++;
                }
                YREG(79)++;
            }
        }
    }

    if (msgCtx->unk_E300 != 0) {
        switch (msgCtx->msgMode) {
            case 1:
                D_8014B2F4++;
                if (1) {}
                phi_v1_2 = 0;
                if (YREG(15) == 0x40) {
                    if (D_8014B2F4 >= 4) {
                        phi_v1_2 = 1;
                    }
                } else if (YREG(15) != 0 || globalCtx->sceneNum == SCENE_HAIRAL_NIWA) {
                    phi_v1_2 = 1;
                } else if (D_8014B2F4 >= 4 || msgCtx->unk_E408 == 0) {
                    phi_v1_2 = 1;
                }
                if (phi_v1_2 != 0) {
                    if (msgCtx->unk_E408 != 0) {
                        func_8002F374(globalCtx, &PLAYER->actor, &sp44, &sp40);
                        func_8002F374(globalCtx, msgCtx->unk_E408, &sp44, &sp3E);
                        if (sp40 >= sp3E) {
                            sp42 = ((sp40 - sp3E) / 2) + sp3E;
                        } else {
                            sp42 = ((sp3E - sp40) / 2) + sp40;
                        }
                        osSyncPrintf("dxpos=%d   dypos=%d  dypos1  dypos2=%d\n", sp44, sp42, sp40, sp3E);
                    } else {
                        VREG(0) = XREG(72);
                        VREG(1) = XREG(73);
                    }
                    unk_E2FD = msgCtx->unk_E2FD;
                    if (msgCtx->unk_E2FE == 0) {
                        if (YREG(15) != 0 || globalCtx->sceneNum == SCENE_HAIRAL_NIWA) {
                            XREG(73) = (sp42 < XREG(92)) ? D_80153D0C[unk_E2FD] : D_80153D18[unk_E2FD];
                        } else if (globalCtx->sceneNum == SCENE_MARKET_DAY || globalCtx->sceneNum == SCENE_MARKET_NIGHT || globalCtx->sceneNum == SCENE_MARKET_RUINS) {
                            XREG(73) = (sp42 < XREG(93)) ? D_80153D0C[unk_E2FD] : D_80153D18[unk_E2FD];
                        } else {
                            XREG(73) = (sp42 < XREG(94)) ? D_80153D0C[unk_E2FD] : D_80153D18[unk_E2FD];
                        }
                    } else {
                        unk_E2FE = (s32)msgCtx->unk_E2FE;
                        if (msgCtx->unk_E2FE == POS_TOP) {
                            XREG(73) = D_80153D18[unk_E2FD];
                        } else if (unk_E2FE == POS_BOTTOM) {
                            XREG(73) = D_80153D24[unk_E2FD];
                        } else {
                            XREG(73) = D_80153D0C[unk_E2FD];
                        }
                    }
                    if (1) {}
                    XREG(72) = D_80153D00[unk_E2FD];
                    XREG(65) = D_80153D30[unk_E2FD] + XREG(73);
                    XREG(67) = XREG(73) + 0x14;
                    XREG(68) = XREG(73) + 0x20;
                    XREG(69) = XREG(73) + 0x2C;
                    osSyncPrintf("message->msg_disp_type=%x\n", msgCtx->unk_E2FC & 0xF0);
                    if (msgCtx->unk_E2FD == 4 || msgCtx->unk_E2FD == 5) {
                        msgCtx->msgMode = 3;
                        VREG(0) = XREG(72);
                        VREG(1) = XREG(73);
                        YREG(22) = 0x100;
                        YREG(23) = 0x40;
                        YREG(16) = 0x200;
                        YREG(17) = 0x200;
                    } else {
                        func_80107244(msgCtx);
                        func_800F691C(0);
                        msgCtx->unk_E3E7 = 0;
                        msgCtx->msgMode = 2;
                    }
                }
                break;
            case 2:
                func_80107244(msgCtx);
                break;
            case 3:
                msgCtx->msgMode = 4;
                if (YREG(31) == 0) {
                    Interface_SetDoAction(globalCtx, 0x10);
                }
                break;
            case 4:
                func_80109B3C(globalCtx);
                if (D_8014B2F0 != 0) {
                    Interface_ChangeAlpha(1);
                }
                if (D_80153D74 != 0) {
                    msgCtx->unk_E3D2 = msgCtx->unk_E3D4;
                    D_80153D74 = 0;
                }
                break;
            case 5:
                msgCtx->unk_E3E7--;
                if (msgCtx->unk_E3E7 == 0) {
                    func_80109B3C(globalCtx);
                }
                break;
            case 6:
                if (msgCtx->unk_E2FD != 4 && YREG(31) == 0 && CHECK_BTN_ALL(globalCtx->state.input[0].press.button, BTN_B) && msgCtx->unk_E3D6 == 0) {
                    D_8014B300 = 1;
                    msgCtx->unk_E3D2 = msgCtx->unk_E3D4;
                }
                break;
            case 7:
                if (YREG(31) == 0 && func_80106BC8(globalCtx) != 0) {
                    msgCtx->msgMode = 6;
                    msgCtx->unk_E3D2++;
                }
                break;
            case 8:
                msgCtx->unk_E3E7--;
                if (msgCtx->unk_E3E7 == 0) {
                    msgCtx->msgMode = 4;
                }
                break;
            case 52:
                if (func_80106BC8(globalCtx) != 0) {
                    msgCtx->msgMode = 4;
                    msgCtx->unk_E3D6 = 0;
                    msgCtx->unk_E3CE++;
                }
                break;
            case 53:
                if (msgCtx->unk_E3E4 == 0x60) {
                    msgCtx->unk_E3E7--;
                    if (msgCtx->unk_E3E7 == 0) {
                        func_80106CCC(globalCtx);
                    }
                } else if (msgCtx->unk_E3E4 != 0x40 && msgCtx->unk_E3E4 != 0x50) {
                    if (YREG(31) == 0) {
                        if (msgCtx->unk_E3E4 == 0x10 && globalCtx->msgCtx.unk_E3EE == 1) {
                            if (func_80106BC8(globalCtx) != 0) {
                                osSyncPrintf("OCARINA_MODE=%d -> ", globalCtx->msgCtx.unk_E3EE);
                                globalCtx->msgCtx.unk_E3EE = (msgCtx->choiceIndex == 0) ? 2 : 4;
                                osSyncPrintf("InRaceSeq=%d(%d) OCARINA_MODE=%d  -->  ", gSaveContext.eventInf[0] & 0xF, 1, globalCtx->msgCtx.unk_E3EE);
                                func_80106CCC(globalCtx);
                                osSyncPrintf("OCARINA_MODE=%d\n", globalCtx->msgCtx.unk_E3EE);
                            }
                        } else if (func_80106C88(globalCtx) != 0) {
                            osSyncPrintf("select=%d\n", msgCtx->unk_E3E4);
                            if (msgCtx->unk_E3E4 == 0x30) {
                                Audio_PlaySoundGeneral(NA_SE_SY_MESSAGE_PASS, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                func_8010B720(globalCtx, D_8014B304);
                            } else {
                                Audio_PlaySoundGeneral(NA_SE_SY_DECIDE, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                                func_80106CCC(globalCtx);
                            }
                        }
                    }
                }
                break;
            case 54:
                msgCtx->unk_E3E7--;
                if (msgCtx->unk_E3E7 != 0) {
                    break;
                }
                if ((msgCtx->unk_E2F8 >= 0xC2 && msgCtx->unk_E2F8 < 0xC7) || (msgCtx->unk_E2F8 >= 0xFA && msgCtx->unk_E2F8 < 0xFE)) {
                    gSaveContext.healthAccumulator = 0x140;
                }
                if ((msgCtx->unk_E2F8 == 0x301F) || 
                    (msgCtx->unk_E2F8 == 0xA) || 
                    (msgCtx->unk_E2F8 == 0xC) || 
                    (msgCtx->unk_E2F8 == 0xCF) || 
                    (msgCtx->unk_E2F8 == 0x21C) || 
                    (msgCtx->unk_E2F8 == 9) || 
                    (msgCtx->unk_E2F8 == 0x4078) || 
                    (msgCtx->unk_E2F8 == 0x2015) || 
                    (msgCtx->unk_E2F8 == 0x3040)) {
                    gSaveContext.unk_13EE = 0x32;
                }
                if (globalCtx->csCtx.state == 0) {
                    osSyncPrintf(VT_FGCOL(RED));
                    osSyncPrintf("day_time=%x  active_camera=%d  ", gSaveContext.cutsceneIndex, globalCtx->activeCamera);
                    if (msgCtx->unk_E2F8 != 0x2061 && msgCtx->unk_E2F8 != 0x2025 && msgCtx->unk_E2F8 != 0x208C &&
                        ((msgCtx->unk_E2F8 < 0x88D || msgCtx->unk_E2F8 >= 0x893) || msgCtx->choiceIndex != 0) &&
                        (msgCtx->unk_E2F8 != 0x3055 && gSaveContext.cutsceneIndex < 0xFFF0)) {
                        osSyncPrintf("=== day_time=%x ", ((void)0, gSaveContext.cutsceneIndex));
                        if (globalCtx->activeCamera == 0) {
                            if (gSaveContext.unk_13EE == 0 || gSaveContext.unk_13EE == 1 || gSaveContext.unk_13EE == 2) {
                                gSaveContext.unk_13EE = 0x32;
                            }
                            gSaveContext.unk_13EA = 0;
                            Interface_ChangeAlpha(gSaveContext.unk_13EE);
                        }
                    }
                }
                osSyncPrintf(VT_RST);
                msgCtx->unk_E300 = 0;
                msgCtx->msgMode = 0;
                interfaceCtx->unk_1FA = interfaceCtx->unk_1FC = 0;
                msgCtx->unk_E3E7 = 0;
                msgCtx->unk_E2F8 = msgCtx->unk_E3E7;

                if (msgCtx->unk_E3E4 == 0x40) {
                    msgCtx->unk_E3E4 = 0;
                    globalCtx->msgCtx.unk_E3EE = 2;
                } else {
                    msgCtx->unk_E3E4 = 0;
                }
                if ((s32)(gSaveContext.inventory.questItems & 0xF0000000) == 0x40000000) {
                    gSaveContext.inventory.questItems ^= 0x40000000;
                    gSaveContext.healthCapacity += 0x10;
                    gSaveContext.health += 0x10;
                }
                if (msgCtx->unk_E3F0 != 0x31) {
                    if (D_8014B310 == 6) {
                        player->naviTextId = -0xE0;
                        player->naviActor->flags |= 0x10000;
                    }
                    if (msgCtx->unk_E3F0 == 0x29 && (globalCtx->msgCtx.unk_E3EE == 1 || globalCtx->msgCtx.unk_E3EE == 0xB)) {
                        globalCtx->msgCtx.unk_E3EE = 4;
                        if (msgCtx->unk_E3F2 == 9) {
                            globalCtx->msgCtx.unk_E3EE = 1;
                        }
                    }
                }
                D_8014B310 = 0xFF;
                osSyncPrintf("OCARINA_MODE=%d   chk_ocarina_no=%d\n", globalCtx->msgCtx.unk_E3EE, msgCtx->unk_E3F2);
                break;
            case 55:
                break;
            default:
                msgCtx->unk_E410 = 0xFF;
                break;
        }
    }
}
#else
void func_8010F6F0(GlobalContext* globalCtx);
s16 D_80153D00[] = {
    0x0022, 0x0022, 0x0022, 0x0022, 0x0022, 0x0022
};
s16 D_80153D0C[] = {
    0x008E, 0x008E, 0x008E, 0x008E, 0x00AE, 0x008E
};
s16 D_80153D18[] = {
    0x0026, 0x0026, 0x0026, 0x0026, 0x00AE, 0x0026
};
s16 D_80153D24[] = {
    0x005A, 0x005A, 0x005A, 0x005A, 0x00AE, 0x005A
};
s16 D_80153D30[] = {
    0x003B, 0x003B, 0x003B, 0x003B, 0x0022, 0x003B, 0x0400, 0x0400, 
    0x0200, 0x0000, 0x1038, 0x0008, 0x200A, 0x088B, 0x0007, 0x0009, 
    0x000A, 0x107E, 0x2008, 0x2007, 0x0015, 0x0016, 0x0017, 0x0003, 
    0x0000, 0x270B, 0x00C8, 0x012C, 0x012D, 0xFFDA, 0x0014, 0x0016, 
    0x0014, 0x0016
};
u8 D_80153D74 = 0x00;
u16 D_80153D78 = 0x0000;
#pragma GLOBAL_ASM("asm/non_matchings/code/z_message_PAL/func_8010F6F0.s")
#endif

void func_8011040C(void) {
    D_801538F0 = &D_8014B320[0];
    D_801538F4 = &D_8014F548[0];
    D_801538F8 = &D_80151658[0];
    D_801538FC = &D_80153768[0];
}

UNK_TYPE D_80153D7C = 0x00000000;

s16 D_80153D80 = 0x0000;
