glabel func_80873780
/* 00F50 80873780 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 00F54 80873784 AFBF002C */  sw      $ra, 0x002C($sp)
/* 00F58 80873788 AFB00028 */  sw      $s0, 0x0028($sp)
/* 00F5C 8087378C 84AE00A4 */  lh      $t6, 0x00A4($a1)           ## 000000A4
/* 00F60 80873790 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 00F64 80873794 2401003B */  addiu   $at, $zero, 0x003B         ## $at = 0000003B
/* 00F68 80873798 15C10015 */  bne     $t6, $at, .L808737F0
/* 00F6C 8087379C 3C040600 */  lui     $a0, 0x0600                ## $a0 = 06000000
/* 00F70 808737A0 3C040600 */  lui     $a0, 0x0600                ## $a0 = 06000000
/* 00F74 808737A4 0C028800 */  jal     SkelAnime_GetFrameCount

/* 00F78 808737A8 248469E8 */  addiu   $a0, $a0, 0x69E8           ## $a0 = 060069E8
/* 00F7C 808737AC 44822000 */  mtc1    $v0, $f4                   ## $f4 = 0.00
/* 00F80 808737B0 3C01C120 */  lui     $at, 0xC120                ## $at = C1200000
/* 00F84 808737B4 44813000 */  mtc1    $at, $f6                   ## $f6 = -10.00
/* 00F88 808737B8 46802020 */  cvt.s.w $f0, $f4
/* 00F8C 808737BC 3C050600 */  lui     $a1, 0x0600                ## $a1 = 06000000
/* 00F90 808737C0 240F0002 */  addiu   $t7, $zero, 0x0002         ## $t7 = 00000002
/* 00F94 808737C4 24A569E8 */  addiu   $a1, $a1, 0x69E8           ## $a1 = 060069E8
/* 00F98 808737C8 26040150 */  addiu   $a0, $s0, 0x0150           ## $a0 = 00000150
/* 00F9C 808737CC 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 00FA0 808737D0 E600032C */  swc1    $f0, 0x032C($s0)           ## 0000032C
/* 00FA4 808737D4 AFAF0014 */  sw      $t7, 0x0014($sp)
/* 00FA8 808737D8 E7A00010 */  swc1    $f0, 0x0010($sp)
/* 00FAC 808737DC 24070000 */  addiu   $a3, $zero, 0x0000         ## $a3 = 00000000
/* 00FB0 808737E0 0C029468 */  jal     SkelAnime_ChangeAnim

/* 00FB4 808737E4 E7A60018 */  swc1    $f6, 0x0018($sp)
/* 00FB8 808737E8 10000013 */  beq     $zero, $zero, .L80873838
/* 00FBC 808737EC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L808737F0:
/* 00FC0 808737F0 0C028800 */  jal     SkelAnime_GetFrameCount

/* 00FC4 808737F4 24845810 */  addiu   $a0, $a0, 0x5810           ## $a0 = 00005810
/* 00FC8 808737F8 44824000 */  mtc1    $v0, $f8                   ## $f8 = 0.00
/* 00FCC 808737FC 3C01C120 */  lui     $at, 0xC120                ## $at = C1200000
/* 00FD0 80873800 44815000 */  mtc1    $at, $f10                  ## $f10 = -10.00
/* 00FD4 80873804 46804020 */  cvt.s.w $f0, $f8
/* 00FD8 80873808 3C050600 */  lui     $a1, 0x0600                ## $a1 = 06000000
/* 00FDC 8087380C 24180002 */  addiu   $t8, $zero, 0x0002         ## $t8 = 00000002
/* 00FE0 80873810 24A55810 */  addiu   $a1, $a1, 0x5810           ## $a1 = 06005810
/* 00FE4 80873814 26040150 */  addiu   $a0, $s0, 0x0150           ## $a0 = 00000150
/* 00FE8 80873818 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 00FEC 8087381C E600032C */  swc1    $f0, 0x032C($s0)           ## 0000032C
/* 00FF0 80873820 AFB80014 */  sw      $t8, 0x0014($sp)
/* 00FF4 80873824 E7A00010 */  swc1    $f0, 0x0010($sp)
/* 00FF8 80873828 24070000 */  addiu   $a3, $zero, 0x0000         ## $a3 = 00000000
/* 00FFC 8087382C 0C029468 */  jal     SkelAnime_ChangeAnim

/* 01000 80873830 E7AA0018 */  swc1    $f10, 0x0018($sp)
/* 01004 80873834 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80873838:
/* 01008 80873838 0C00BE0A */  jal     Audio_PlayActorSound2

/* 0100C 8087383C 24056859 */  addiu   $a1, $zero, 0x6859         ## $a1 = 00006859
/* 01010 80873840 3C088087 */  lui     $t0, %hi(func_80873868)    ## $t0 = 80870000
/* 01014 80873844 24190001 */  addiu   $t9, $zero, 0x0001         ## $t9 = 00000001
/* 01018 80873848 25083868 */  addiu   $t0, $t0, %lo(func_80873868) ## $t0 = 80873868
/* 0101C 8087384C A61902F6 */  sh      $t9, 0x02F6($s0)           ## 000002F6
/* 01020 80873850 AE08014C */  sw      $t0, 0x014C($s0)           ## 0000014C
/* 01024 80873854 8FBF002C */  lw      $ra, 0x002C($sp)
/* 01028 80873858 8FB00028 */  lw      $s0, 0x0028($sp)
/* 0102C 8087385C 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 01030 80873860 03E00008 */  jr      $ra
/* 01034 80873864 00000000 */  nop
