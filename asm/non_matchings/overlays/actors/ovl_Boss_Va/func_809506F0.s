glabel func_809506F0
/* 01430 809506F0 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 01434 809506F4 AFB00028 */  sw      $s0, 0x0028($sp)
/* 01438 809506F8 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 0143C 809506FC AFBF002C */  sw      $ra, 0x002C($sp)
/* 01440 80950700 3C040600 */  lui     $a0, 0x0600                ## $a0 = 06000000
/* 01444 80950704 0C028800 */  jal     SkelAnime_GetFrameCount

/* 01448 80950708 24845184 */  addiu   $a0, $a0, 0x5184           ## $a0 = 06005184
/* 0144C 8095070C 44822000 */  mtc1    $v0, $f4                   ## $f4 = 0.00
/* 01450 80950710 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 01454 80950714 3C050600 */  lui     $a1, 0x0600                ## $a1 = 06000000
/* 01458 80950718 46802020 */  cvt.s.w $f0, $f4
/* 0145C 8095071C 240E0002 */  addiu   $t6, $zero, 0x0002         ## $t6 = 00000002
/* 01460 80950720 AFAE0014 */  sw      $t6, 0x0014($sp)
/* 01464 80950724 24A55184 */  addiu   $a1, $a1, 0x5184           ## $a1 = 06005184
/* 01468 80950728 2604014C */  addiu   $a0, $s0, 0x014C           ## $a0 = 0000014C
/* 0146C 8095072C 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 01470 80950730 44070000 */  mfc1    $a3, $f0
/* 01474 80950734 E7A00010 */  swc1    $f0, 0x0010($sp)
/* 01478 80950738 0C029468 */  jal     SkelAnime_ChangeAnim

/* 0147C 8095073C E7A60018 */  swc1    $f6, 0x0018($sp)
/* 01480 80950740 8E0F0004 */  lw      $t7, 0x0004($s0)           ## 00000004
/* 01484 80950744 3C01C3E1 */  lui     $at, 0xC3E1                ## $at = C3E10000
/* 01488 80950748 44814000 */  mtc1    $at, $f8                   ## $f8 = -450.00
/* 0148C 8095074C 2401FFFE */  addiu   $at, $zero, 0xFFFE         ## $at = FFFFFFFE
/* 01490 80950750 3C058095 */  lui     $a1, %hi(func_80950780)    ## $a1 = 80950000
/* 01494 80950754 01E1C024 */  and     $t8, $t7, $at
/* 01498 80950758 AE180004 */  sw      $t8, 0x0004($s0)           ## 00000004
/* 0149C 8095075C 24A50780 */  addiu   $a1, $a1, %lo(func_80950780) ## $a1 = 80950780
/* 014A0 80950760 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 014A4 80950764 0C253CB0 */  jal     func_8094F2C0
/* 014A8 80950768 E60800BC */  swc1    $f8, 0x00BC($s0)           ## 000000BC
/* 014AC 8095076C 8FBF002C */  lw      $ra, 0x002C($sp)
/* 014B0 80950770 8FB00028 */  lw      $s0, 0x0028($sp)
/* 014B4 80950774 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 014B8 80950778 03E00008 */  jr      $ra
/* 014BC 8095077C 00000000 */  nop
