glabel func_809A0BB8
/* 00118 809A0BB8 27BDFEE8 */  addiu   $sp, $sp, 0xFEE8           ## $sp = FFFFFEE8
/* 0011C 809A0BBC AFB00014 */  sw      $s0, 0x0014($sp)           
/* 00120 809A0BC0 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 00124 809A0BC4 AFB10018 */  sw      $s1, 0x0018($sp)           
/* 00128 809A0BC8 AFA40118 */  sw      $a0, 0x0118($sp)           
/* 0012C 809A0BCC AFA5011C */  sw      $a1, 0x011C($sp)           
/* 00130 809A0BD0 8C910000 */  lw      $s1, 0x0000($a0)           ## 00000000
/* 00134 809A0BD4 00C08025 */  or      $s0, $a2, $zero            ## $s0 = 00000000
/* 00138 809A0BD8 3C06809A */  lui     $a2, %hi(D_809A0F50)       ## $a2 = 809A0000
/* 0013C 809A0BDC 24C60F50 */  addiu   $a2, $a2, %lo(D_809A0F50)  ## $a2 = 809A0F50
/* 00140 809A0BE0 27A40038 */  addiu   $a0, $sp, 0x0038           ## $a0 = FFFFFF20
/* 00144 809A0BE4 240700C9 */  addiu   $a3, $zero, 0x00C9         ## $a3 = 000000C9
/* 00148 809A0BE8 0C031AB1 */  jal     Graph_OpenDisps              
/* 0014C 809A0BEC 02202825 */  or      $a1, $s1, $zero            ## $a1 = 00000000
/* 00150 809A0BF0 860F0040 */  lh      $t7, 0x0040($s0)           ## 00000040
/* 00154 809A0BF4 3C01809A */  lui     $at, %hi(D_809A0F80)       ## $at = 809A0000
/* 00158 809A0BF8 C4280F80 */  lwc1    $f8, %lo(D_809A0F80)($at)  
/* 0015C 809A0BFC 448F2000 */  mtc1    $t7, $f4                   ## $f4 = 0.00
/* 00160 809A0C00 8E050000 */  lw      $a1, 0x0000($s0)           ## 00000000
/* 00164 809A0C04 8E060004 */  lw      $a2, 0x0004($s0)           ## 00000004
/* 00168 809A0C08 468021A0 */  cvt.s.w $f6, $f4                   
/* 0016C 809A0C0C 8E070008 */  lw      $a3, 0x0008($s0)           ## 00000008
/* 00170 809A0C10 27A400D4 */  addiu   $a0, $sp, 0x00D4           ## $a0 = FFFFFFBC
/* 00174 809A0C14 46083002 */  mul.s   $f0, $f6, $f8              
/* 00178 809A0C18 0C029E89 */  jal     func_800A7A24              
/* 0017C 809A0C1C E7A0004C */  swc1    $f0, 0x004C($sp)           
/* 00180 809A0C20 C7A0004C */  lwc1    $f0, 0x004C($sp)           
/* 00184 809A0C24 27A40094 */  addiu   $a0, $sp, 0x0094           ## $a0 = FFFFFF7C
/* 00188 809A0C28 44050000 */  mfc1    $a1, $f0                   
/* 0018C 809A0C2C 44060000 */  mfc1    $a2, $f0                   
/* 00190 809A0C30 44070000 */  mfc1    $a3, $f0                   
/* 00194 809A0C34 0C029DA9 */  jal     func_800A76A4              
/* 00198 809A0C38 00000000 */  nop
/* 0019C 809A0C3C 27A400D4 */  addiu   $a0, $sp, 0x00D4           ## $a0 = FFFFFFBC
/* 001A0 809A0C40 27A50094 */  addiu   $a1, $sp, 0x0094           ## $a1 = FFFFFF7C
/* 001A4 809A0C44 0C029BE8 */  jal     func_800A6FA0              
/* 001A8 809A0C48 27A60054 */  addiu   $a2, $sp, 0x0054           ## $a2 = FFFFFF3C
/* 001AC 809A0C4C 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 001B0 809A0C50 0C029F9C */  jal     func_800A7E70              
/* 001B4 809A0C54 27A50054 */  addiu   $a1, $sp, 0x0054           ## $a1 = FFFFFF3C
/* 001B8 809A0C58 1040004B */  beq     $v0, $zero, .L809A0D88     
/* 001BC 809A0C5C 3C19DA38 */  lui     $t9, 0xDA38                ## $t9 = DA380000
/* 001C0 809A0C60 8E2302D0 */  lw      $v1, 0x02D0($s1)           ## 000002D0
/* 001C4 809A0C64 37390003 */  ori     $t9, $t9, 0x0003           ## $t9 = DA380003
/* 001C8 809A0C68 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 001CC 809A0C6C 24780008 */  addiu   $t8, $v1, 0x0008           ## $t8 = 00000008
/* 001D0 809A0C70 AE3802D0 */  sw      $t8, 0x02D0($s1)           ## 000002D0
/* 001D4 809A0C74 AC620004 */  sw      $v0, 0x0004($v1)           ## 00000004
/* 001D8 809A0C78 0C0252F1 */  jal     func_80094BC4              
/* 001DC 809A0C7C AC790000 */  sw      $t9, 0x0000($v1)           ## 00000000
/* 001E0 809A0C80 8E2302D0 */  lw      $v1, 0x02D0($s1)           ## 000002D0
/* 001E4 809A0C84 3C09FB00 */  lui     $t1, 0xFB00                ## $t1 = FB000000
/* 001E8 809A0C88 3C0DFA00 */  lui     $t5, 0xFA00                ## $t5 = FA000000
/* 001EC 809A0C8C 24680008 */  addiu   $t0, $v1, 0x0008           ## $t0 = 00000008
/* 001F0 809A0C90 AE2802D0 */  sw      $t0, 0x02D0($s1)           ## 000002D0
/* 001F4 809A0C94 AC690000 */  sw      $t1, 0x0000($v1)           ## 00000000
/* 001F8 809A0C98 860A0050 */  lh      $t2, 0x0050($s0)           ## 00000050
/* 001FC 809A0C9C 8619004E */  lh      $t9, 0x004E($s0)           ## 0000004E
/* 00200 809A0CA0 860E004C */  lh      $t6, 0x004C($s0)           ## 0000004C
/* 00204 809A0CA4 314B00FF */  andi    $t3, $t2, 0x00FF           ## $t3 = 00000000
/* 00208 809A0CA8 000B6200 */  sll     $t4, $t3,  8               
/* 0020C 809A0CAC 332800FF */  andi    $t0, $t9, 0x00FF           ## $t0 = 00000000
/* 00210 809A0CB0 000E7E00 */  sll     $t7, $t6, 24               
/* 00214 809A0CB4 018FC025 */  or      $t8, $t4, $t7              ## $t8 = 00000000
/* 00218 809A0CB8 00084C00 */  sll     $t1, $t0, 16               
/* 0021C 809A0CBC 03095025 */  or      $t2, $t8, $t1              ## $t2 = FB000000
/* 00220 809A0CC0 AC6A0004 */  sw      $t2, 0x0004($v1)           ## 00000004
/* 00224 809A0CC4 8E2302D0 */  lw      $v1, 0x02D0($s1)           ## 000002D0
/* 00228 809A0CC8 3C04809A */  lui     $a0, %hi(D_809A0F28)       ## $a0 = 809A0000
/* 0022C 809A0CCC 3C0100FF */  lui     $at, 0x00FF                ## $at = 00FF0000
/* 00230 809A0CD0 246B0008 */  addiu   $t3, $v1, 0x0008           ## $t3 = 00000008
/* 00234 809A0CD4 AE2B02D0 */  sw      $t3, 0x02D0($s1)           ## 000002D0
/* 00238 809A0CD8 AC6D0000 */  sw      $t5, 0x0000($v1)           ## 00000000
/* 0023C 809A0CDC 860E004A */  lh      $t6, 0x004A($s0)           ## 0000004A
/* 00240 809A0CE0 86090046 */  lh      $t1, 0x0046($s0)           ## 00000046
/* 00244 809A0CE4 86190044 */  lh      $t9, 0x0044($s0)           ## 00000044
/* 00248 809A0CE8 31CC00FF */  andi    $t4, $t6, 0x00FF           ## $t4 = 00000000
/* 0024C 809A0CEC 860E0048 */  lh      $t6, 0x0048($s0)           ## 00000048
/* 00250 809A0CF0 312A00FF */  andi    $t2, $t1, 0x00FF           ## $t2 = 00000000
/* 00254 809A0CF4 00194600 */  sll     $t0, $t9, 24               
/* 00258 809A0CF8 0188C025 */  or      $t8, $t4, $t0              ## $t8 = 00000000
/* 0025C 809A0CFC 000A5C00 */  sll     $t3, $t2, 16               
/* 00260 809A0D00 31CF00FF */  andi    $t7, $t6, 0x00FF           ## $t7 = 00000000
/* 00264 809A0D04 000FCA00 */  sll     $t9, $t7,  8               
/* 00268 809A0D08 030B6825 */  or      $t5, $t8, $t3              ## $t5 = 00000008
/* 0026C 809A0D0C 01B96025 */  or      $t4, $t5, $t9              ## $t4 = 00000008
/* 00270 809A0D10 AC6C0004 */  sw      $t4, 0x0004($v1)           ## 00000004
/* 00274 809A0D14 8E2302D0 */  lw      $v1, 0x02D0($s1)           ## 000002D0
/* 00278 809A0D18 3C09DB06 */  lui     $t1, 0xDB06                ## $t1 = DB060000
/* 0027C 809A0D1C 35290020 */  ori     $t1, $t1, 0x0020           ## $t1 = DB060020
/* 00280 809A0D20 24680008 */  addiu   $t0, $v1, 0x0008           ## $t0 = 00000008
/* 00284 809A0D24 AE2802D0 */  sw      $t0, 0x02D0($s1)           ## 000002D0
/* 00288 809A0D28 AC690000 */  sw      $t1, 0x0000($v1)           ## 00000000
/* 0028C 809A0D2C 860A0042 */  lh      $t2, 0x0042($s0)           ## 00000042
/* 00290 809A0D30 3C198016 */  lui     $t9, %hi(gSegments)
/* 00294 809A0D34 3421FFFF */  ori     $at, $at, 0xFFFF           ## $at = 00FFFFFF
/* 00298 809A0D38 000AC080 */  sll     $t8, $t2,  2               
/* 0029C 809A0D3C 00982021 */  addu    $a0, $a0, $t8              
/* 002A0 809A0D40 8C840F28 */  lw      $a0, %lo(D_809A0F28)($a0)  
/* 002A4 809A0D44 3C0ADE00 */  lui     $t2, 0xDE00                ## $t2 = DE000000
/* 002A8 809A0D48 00047100 */  sll     $t6, $a0,  4               
/* 002AC 809A0D4C 000E7F02 */  srl     $t7, $t6, 28               
/* 002B0 809A0D50 000F6880 */  sll     $t5, $t7,  2               
/* 002B4 809A0D54 032DC821 */  addu    $t9, $t9, $t5              
/* 002B8 809A0D58 8F396FA8 */  lw      $t9, %lo(gSegments)($t9)
/* 002BC 809A0D5C 00815824 */  and     $t3, $a0, $at              
/* 002C0 809A0D60 3C018000 */  lui     $at, 0x8000                ## $at = 80000000
/* 002C4 809A0D64 01796021 */  addu    $t4, $t3, $t9              
/* 002C8 809A0D68 01814021 */  addu    $t0, $t4, $at              
/* 002CC 809A0D6C AC680004 */  sw      $t0, 0x0004($v1)           ## 00000004
/* 002D0 809A0D70 8E2302D0 */  lw      $v1, 0x02D0($s1)           ## 000002D0
/* 002D4 809A0D74 24690008 */  addiu   $t1, $v1, 0x0008           ## $t1 = 00000008
/* 002D8 809A0D78 AE2902D0 */  sw      $t1, 0x02D0($s1)           ## 000002D0
/* 002DC 809A0D7C AC6A0000 */  sw      $t2, 0x0000($v1)           ## 00000000
/* 002E0 809A0D80 8E180038 */  lw      $t8, 0x0038($s0)           ## 00000038
/* 002E4 809A0D84 AC780004 */  sw      $t8, 0x0004($v1)           ## 00000004
.L809A0D88:
/* 002E8 809A0D88 3C06809A */  lui     $a2, %hi(D_809A0F68)       ## $a2 = 809A0000
/* 002EC 809A0D8C 24C60F68 */  addiu   $a2, $a2, %lo(D_809A0F68)  ## $a2 = 809A0F68
/* 002F0 809A0D90 27A40038 */  addiu   $a0, $sp, 0x0038           ## $a0 = FFFFFF20
/* 002F4 809A0D94 02202825 */  or      $a1, $s1, $zero            ## $a1 = 00000000
/* 002F8 809A0D98 0C031AD5 */  jal     Graph_CloseDisps              
/* 002FC 809A0D9C 240700F7 */  addiu   $a3, $zero, 0x00F7         ## $a3 = 000000F7
/* 00300 809A0DA0 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 00304 809A0DA4 8FB00014 */  lw      $s0, 0x0014($sp)           
/* 00308 809A0DA8 8FB10018 */  lw      $s1, 0x0018($sp)           
/* 0030C 809A0DAC 03E00008 */  jr      $ra                        
/* 00310 809A0DB0 27BD0118 */  addiu   $sp, $sp, 0x0118           ## $sp = 00000000
