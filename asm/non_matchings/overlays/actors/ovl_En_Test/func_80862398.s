glabel func_80862398
/* 02D48 80862398 27BDFFD8 */  addiu   $sp, $sp, 0xFFD8           ## $sp = FFFFFFD8
/* 02D4C 8086239C AFB00020 */  sw      $s0, 0x0020($sp)
/* 02D50 808623A0 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 02D54 808623A4 AFBF0024 */  sw      $ra, 0x0024($sp)
/* 02D58 808623A8 3C050600 */  lui     $a1, %hi(D_06000444)                ## $a1 = 06000000
/* 02D5C 808623AC 24A50444 */  addiu   $a1, $a1, %lo(D_06000444)           ## $a1 = 06000444
/* 02D60 808623B0 0C02947A */  jal     SkelAnime_ChangeAnimDefaultStop
/* 02D64 808623B4 24840188 */  addiu   $a0, $a0, 0x0188           ## $a0 = 00000188
/* 02D68 808623B8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02D6C 808623BC 0C00BE0A */  jal     Audio_PlayActorSound2

/* 02D70 808623C0 2405383A */  addiu   $a1, $zero, 0x383A         ## $a1 = 0000383A
/* 02D74 808623C4 3C01C000 */  lui     $at, 0xC000                ## $at = C0000000
/* 02D78 808623C8 44812000 */  mtc1    $at, $f4                   ## $f4 = -2.00
/* 02D7C 808623CC 240E0009 */  addiu   $t6, $zero, 0x0009         ## $t6 = 00000009
/* 02D80 808623D0 A20E07C8 */  sb      $t6, 0x07C8($s0)           ## 000007C8
/* 02D84 808623D4 240F0008 */  addiu   $t7, $zero, 0x0008         ## $t7 = 00000008
/* 02D88 808623D8 E6040068 */  swc1    $f4, 0x0068($s0)           ## 00000068
/* 02D8C 808623DC AFAF0010 */  sw      $t7, 0x0010($sp)
/* 02D90 808623E0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02D94 808623E4 24054000 */  addiu   $a1, $zero, 0x4000         ## $a1 = 00004000
/* 02D98 808623E8 240600FF */  addiu   $a2, $zero, 0x00FF         ## $a2 = 000000FF
/* 02D9C 808623EC 0C00D09B */  jal     func_8003426C
/* 02DA0 808623F0 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 02DA4 808623F4 3C058086 */  lui     $a1, %hi(func_80862418)    ## $a1 = 80860000
/* 02DA8 808623F8 24A52418 */  addiu   $a1, $a1, %lo(func_80862418) ## $a1 = 80862418
/* 02DAC 808623FC 0C217D94 */  jal     EnTest_SetupAction
/* 02DB0 80862400 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02DB4 80862404 8FBF0024 */  lw      $ra, 0x0024($sp)
/* 02DB8 80862408 8FB00020 */  lw      $s0, 0x0020($sp)
/* 02DBC 8086240C 27BD0028 */  addiu   $sp, $sp, 0x0028           ## $sp = 00000000
/* 02DC0 80862410 03E00008 */  jr      $ra
/* 02DC4 80862414 00000000 */  nop
