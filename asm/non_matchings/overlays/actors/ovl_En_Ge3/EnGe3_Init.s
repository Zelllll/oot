glabel EnGe3_Init
/* 000A4 80A346C4 27BDFFC0 */  addiu   $sp, $sp, 0xFFC0           ## $sp = FFFFFFC0
/* 000A8 80A346C8 AFB00028 */  sw      $s0, 0x0028($sp)
/* 000AC 80A346CC 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 000B0 80A346D0 AFBF002C */  sw      $ra, 0x002C($sp)
/* 000B4 80A346D4 AFA50044 */  sw      $a1, 0x0044($sp)
/* 000B8 80A346D8 3C068003 */  lui     $a2, %hi(ActorShadow_DrawFunc_Circle)
/* 000BC 80A346DC 24C6B5EC */  addiu   $a2, %lo(ActorShadow_DrawFunc_Circle)
/* 000C0 80A346E0 24050000 */  addiu   $a1, $zero, 0x0000         ## $a1 = 00000000
/* 000C4 80A346E4 248400B4 */  addiu   $a0, $a0, 0x00B4           ## $a0 = 000000B4
/* 000C8 80A346E8 0C00AC78 */  jal     ActorShape_Init

/* 000CC 80A346EC 3C074210 */  lui     $a3, 0x4210                ## $a3 = 42100000
/* 000D0 80A346F0 26050198 */  addiu   $a1, $s0, 0x0198           ## $a1 = 00000198
/* 000D4 80A346F4 3C060601 */  lui     $a2, %hi(D_0600A458)                ## $a2 = 06010000
/* 000D8 80A346F8 260E01DC */  addiu   $t6, $s0, 0x01DC           ## $t6 = 000001DC
/* 000DC 80A346FC 260F026C */  addiu   $t7, $s0, 0x026C           ## $t7 = 0000026C
/* 000E0 80A34700 24180018 */  addiu   $t8, $zero, 0x0018         ## $t8 = 00000018
/* 000E4 80A34704 AFB80018 */  sw      $t8, 0x0018($sp)
/* 000E8 80A34708 AFAF0014 */  sw      $t7, 0x0014($sp)
/* 000EC 80A3470C AFAE0010 */  sw      $t6, 0x0010($sp)
/* 000F0 80A34710 24C6A458 */  addiu   $a2, $a2, %lo(D_0600A458)           ## $a2 = 0600A458
/* 000F4 80A34714 AFA50034 */  sw      $a1, 0x0034($sp)
/* 000F8 80A34718 8FA40044 */  lw      $a0, 0x0044($sp)
/* 000FC 80A3471C 0C0291BE */  jal     SkelAnime_InitFlex
/* 00100 80A34720 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 00104 80A34724 3C050601 */  lui     $a1, %hi(D_0600B07C)                ## $a1 = 06010000
/* 00108 80A34728 24A5B07C */  addiu   $a1, $a1, %lo(D_0600B07C)           ## $a1 = 0600B07C
/* 0010C 80A3472C 0C0294BE */  jal     Animation_PlayLoop
/* 00110 80A34730 8FA40034 */  lw      $a0, 0x0034($sp)
/* 00114 80A34734 2605014C */  addiu   $a1, $s0, 0x014C           ## $a1 = 0000014C
/* 00118 80A34738 AFA50034 */  sw      $a1, 0x0034($sp)
/* 0011C 80A3473C 0C0170D9 */  jal     Collider_InitCylinder

/* 00120 80A34740 8FA40044 */  lw      $a0, 0x0044($sp)
/* 00124 80A34744 3C0780A3 */  lui     $a3, %hi(D_80A35190)       ## $a3 = 80A30000
/* 00128 80A34748 8FA50034 */  lw      $a1, 0x0034($sp)
/* 0012C 80A3474C 24E75190 */  addiu   $a3, $a3, %lo(D_80A35190)  ## $a3 = 80A35190
/* 00130 80A34750 8FA40044 */  lw      $a0, 0x0044($sp)
/* 00134 80A34754 0C01712B */  jal     Collider_SetCylinder

/* 00138 80A34758 02003025 */  or      $a2, $s0, $zero            ## $a2 = 00000000
/* 0013C 80A3475C 241900FF */  addiu   $t9, $zero, 0x00FF         ## $t9 = 000000FF
/* 00140 80A34760 3C053C23 */  lui     $a1, 0x3C23                ## $a1 = 3C230000
/* 00144 80A34764 A21900AE */  sb      $t9, 0x00AE($s0)           ## 000000AE
/* 00148 80A34768 34A5D70A */  ori     $a1, $a1, 0xD70A           ## $a1 = 3C23D70A
/* 0014C 80A3476C 0C00B58B */  jal     Actor_SetScale

/* 00150 80A34770 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00154 80A34774 A6000034 */  sh      $zero, 0x0034($s0)         ## 00000034
/* 00158 80A34778 A60000B8 */  sh      $zero, 0x00B8($s0)         ## 000000B8
/* 0015C 80A3477C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00160 80A34780 0C28D188 */  jal     func_80A34620
/* 00164 80A34784 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 00168 80A34788 3C01C080 */  lui     $at, 0xC080                ## $at = C0800000
/* 0016C 80A3478C 44812000 */  mtc1    $at, $f4                   ## $f4 = -4.00
/* 00170 80A34790 3C01BF80 */  lui     $at, 0xBF80                ## $at = BF800000
/* 00174 80A34794 44813000 */  mtc1    $at, $f6                   ## $f6 = -1.00
/* 00178 80A34798 3C0880A3 */  lui     $t0, %hi(func_80A34B90)    ## $t0 = 80A30000
/* 0017C 80A3479C 25084B90 */  addiu   $t0, $t0, %lo(func_80A34B90) ## $t0 = 80A34B90
/* 00180 80A347A0 24090006 */  addiu   $t1, $zero, 0x0006         ## $t1 = 00000006
/* 00184 80A347A4 AE080310 */  sw      $t0, 0x0310($s0)           ## 00000310
/* 00188 80A347A8 A600030C */  sh      $zero, 0x030C($s0)         ## 0000030C
/* 0018C 80A347AC A209001F */  sb      $t1, 0x001F($s0)           ## 0000001F
/* 00190 80A347B0 E6040070 */  swc1    $f4, 0x0070($s0)           ## 00000070
/* 00194 80A347B4 E606006C */  swc1    $f6, 0x006C($s0)           ## 0000006C
/* 00198 80A347B8 8FBF002C */  lw      $ra, 0x002C($sp)
/* 0019C 80A347BC 8FB00028 */  lw      $s0, 0x0028($sp)
/* 001A0 80A347C0 27BD0040 */  addiu   $sp, $sp, 0x0040           ## $sp = 00000000
/* 001A4 80A347C4 03E00008 */  jr      $ra
/* 001A8 80A347C8 00000000 */  nop
