.late_rodata
glabel D_80B07224
    .float 1.4

glabel D_80B07228
    .float 0.04

.text
glabel func_80B05988
/* 010F8 80B05988 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 010FC 80B0598C AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 01100 80B05990 848E001C */  lh      $t6, 0x001C($a0)           ## 0000001C
/* 01104 80B05994 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 01108 80B05998 44817000 */  mtc1    $at, $f14                  ## $f14 = 1.00
/* 0110C 80B0599C 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 01110 80B059A0 15C10003 */  bne     $t6, $at, .L80B059B0       
/* 01114 80B059A4 00803025 */  or      $a2, $a0, $zero            ## $a2 = 00000000
/* 01118 80B059A8 3C0180B0 */  lui     $at, %hi(D_80B07224)       ## $at = 80B00000
/* 0111C 80B059AC C42E7224 */  lwc1    $f14, %lo(D_80B07224)($at) 
.L80B059B0:
/* 01120 80B059B0 8CC40378 */  lw      $a0, 0x0378($a2)           ## 00000378
/* 01124 80B059B4 00001825 */  or      $v1, $zero, $zero          ## $v1 = 00000000
/* 01128 80B059B8 00C01025 */  or      $v0, $a2, $zero            ## $v0 = 00000000
/* 0112C 80B059BC 848F002E */  lh      $t7, 0x002E($a0)           ## 0000002E
/* 01130 80B059C0 448F2000 */  mtc1    $t7, $f4                   ## $f4 = 0.00
/* 01134 80B059C4 00000000 */  nop
/* 01138 80B059C8 46802320 */  cvt.s.w $f12, $f4                  
/* 0113C 80B059CC 460E6302 */  mul.s   $f12, $f12, $f14           
/* 01140 80B059D0 4600618D */  trunc.w.s $f6, $f12                  
/* 01144 80B059D4 44193000 */  mfc1    $t9, $f6                   
/* 01148 80B059D8 00000000 */  nop
/* 0114C 80B059DC A499002E */  sh      $t9, 0x002E($a0)           ## 0000002E
/* 01150 80B059E0 240401C8 */  addiu   $a0, $zero, 0x01C8         ## $a0 = 000001C8
/* 01154 80B059E4 2463004C */  addiu   $v1, $v1, 0x004C           ## $v1 = 0000004C
/* 01158 80B059E8 10640019 */  beq     $v1, $a0, .L80B05A50       
/* 0115C 80B059EC 844801D8 */  lh      $t0, 0x01D8($v0)           ## 000001D8
.L80B059F0:
/* 01160 80B059F0 844901D4 */  lh      $t1, 0x01D4($v0)           ## 000001D4
/* 01164 80B059F4 44889000 */  mtc1    $t0, $f18                  ## $f18 = 0.00
/* 01168 80B059F8 844A01D6 */  lh      $t2, 0x01D6($v0)           ## 000001D6
/* 0116C 80B059FC 44898000 */  mtc1    $t1, $f16                  ## $f16 = 0.00
/* 01170 80B05A00 468094A0 */  cvt.s.w $f18, $f18                 
/* 01174 80B05A04 448A6000 */  mtc1    $t2, $f12                  ## $f12 = 0.00
/* 01178 80B05A08 2463004C */  addiu   $v1, $v1, 0x004C           ## $v1 = 00000098
/* 0117C 80B05A0C 2442004C */  addiu   $v0, $v0, 0x004C           ## $v0 = 0000004C
/* 01180 80B05A10 844801D8 */  lh      $t0, 0x01D8($v0)           ## 00000224
/* 01184 80B05A14 46808420 */  cvt.s.w $f16, $f16                 
/* 01188 80B05A18 460E9482 */  mul.s   $f18, $f18, $f14           
/* 0118C 80B05A1C 46806320 */  cvt.s.w $f12, $f12                 
/* 01190 80B05A20 460E8402 */  mul.s   $f16, $f16, $f14           
/* 01194 80B05A24 4600948D */  trunc.w.s $f18, $f18                 
/* 01198 80B05A28 460E6302 */  mul.s   $f12, $f12, $f14           
/* 0119C 80B05A2C 440C9000 */  mfc1    $t4, $f18                  
/* 011A0 80B05A30 4600840D */  trunc.w.s $f16, $f16                 
/* 011A4 80B05A34 A44C018C */  sh      $t4, 0x018C($v0)           ## 000001D8
/* 011A8 80B05A38 4600630D */  trunc.w.s $f12, $f12                 
/* 011AC 80B05A3C 440E8000 */  mfc1    $t6, $f16                  
/* 011B0 80B05A40 44186000 */  mfc1    $t8, $f12                  
/* 011B4 80B05A44 A44E0188 */  sh      $t6, 0x0188($v0)           ## 000001D4
/* 011B8 80B05A48 1464FFE9 */  bne     $v1, $a0, .L80B059F0       
/* 011BC 80B05A4C A458018A */  sh      $t8, 0x018A($v0)           ## 000001D6
.L80B05A50:
/* 011C0 80B05A50 44889000 */  mtc1    $t0, $f18                  ## $f18 = 0.00
/* 011C4 80B05A54 844901D4 */  lh      $t1, 0x01D4($v0)           ## 00000220
/* 011C8 80B05A58 844A01D6 */  lh      $t2, 0x01D6($v0)           ## 00000222
/* 011CC 80B05A5C 468094A0 */  cvt.s.w $f18, $f18                 
/* 011D0 80B05A60 44898000 */  mtc1    $t1, $f16                  ## $f16 = 0.00
/* 011D4 80B05A64 448A6000 */  mtc1    $t2, $f12                  ## $f12 = 0.00
/* 011D8 80B05A68 2442004C */  addiu   $v0, $v0, 0x004C           ## $v0 = 00000098
/* 011DC 80B05A6C 46808420 */  cvt.s.w $f16, $f16                 
/* 011E0 80B05A70 460E9482 */  mul.s   $f18, $f18, $f14           
/* 011E4 80B05A74 00000000 */  nop
/* 011E8 80B05A78 460E8402 */  mul.s   $f16, $f16, $f14           
/* 011EC 80B05A7C 46806320 */  cvt.s.w $f12, $f12                 
/* 011F0 80B05A80 4600948D */  trunc.w.s $f18, $f18                 
/* 011F4 80B05A84 460E6302 */  mul.s   $f12, $f12, $f14           
/* 011F8 80B05A88 440C9000 */  mfc1    $t4, $f18                  
/* 011FC 80B05A8C 4600840D */  trunc.w.s $f16, $f16                 
/* 01200 80B05A90 A44C018C */  sh      $t4, 0x018C($v0)           ## 00000224
/* 01204 80B05A94 4600630D */  trunc.w.s $f12, $f12                 
/* 01208 80B05A98 440E8000 */  mfc1    $t6, $f16                  
/* 0120C 80B05A9C 44186000 */  mfc1    $t8, $f12                  
/* 01210 80B05AA0 A44E0188 */  sh      $t6, 0x0188($v0)           ## 00000220
/* 01214 80B05AA4 A458018A */  sh      $t8, 0x018A($v0)           ## 00000222
/* 01218 80B05AA8 3C0180B0 */  lui     $at, %hi(D_80B07228)       ## $at = 80B00000
/* 0121C 80B05AAC C4287228 */  lwc1    $f8, %lo(D_80B07228)($at)  
/* 01220 80B05AB0 00C02025 */  or      $a0, $a2, $zero            ## $a0 = 00000000
/* 01224 80B05AB4 AFA60020 */  sw      $a2, 0x0020($sp)           
/* 01228 80B05AB8 460E4282 */  mul.s   $f10, $f8, $f14            
/* 0122C 80B05ABC E7AE001C */  swc1    $f14, 0x001C($sp)          
/* 01230 80B05AC0 44055000 */  mfc1    $a1, $f10                  
/* 01234 80B05AC4 0C00B58B */  jal     Actor_SetScale
              
/* 01238 80B05AC8 00000000 */  nop
/* 0123C 80B05ACC 3C014200 */  lui     $at, 0x4200                ## $at = 42000000
/* 01240 80B05AD0 C7AE001C */  lwc1    $f14, 0x001C($sp)          
/* 01244 80B05AD4 44818000 */  mtc1    $at, $f16                  ## $f16 = 32.00
/* 01248 80B05AD8 8FA60020 */  lw      $a2, 0x0020($sp)           
/* 0124C 80B05ADC 460E8482 */  mul.s   $f18, $f16, $f14           
/* 01250 80B05AE0 E4CE0408 */  swc1    $f14, 0x0408($a2)          ## 00000408
/* 01254 80B05AE4 E4D2040C */  swc1    $f18, 0x040C($a2)          ## 0000040C
/* 01258 80B05AE8 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 0125C 80B05AEC 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 01260 80B05AF0 03E00008 */  jr      $ra                        
/* 01264 80B05AF4 00000000 */  nop
