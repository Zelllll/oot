glabel func_808634F8
/* 03EA8 808634F8 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 03EAC 808634FC AFBF001C */  sw      $ra, 0x001C($sp)           
/* 03EB0 80863500 AFB00018 */  sw      $s0, 0x0018($sp)           
/* 03EB4 80863504 AFA50024 */  sw      $a1, 0x0024($sp)           
/* 03EB8 80863508 908208ED */  lbu     $v0, 0x08ED($a0)           ## 000008ED
/* 03EBC 8086350C 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 03EC0 80863510 8CA71C44 */  lw      $a3, 0x1C44($a1)           ## 00001C44
/* 03EC4 80863514 304F0080 */  andi    $t7, $v0, 0x0080           ## $t7 = 00000000
/* 03EC8 80863518 11E0000C */  beq     $t7, $zero, .L8086354C     
/* 03ECC 8086351C 3058FF7F */  andi    $t8, $v0, 0xFF7F           ## $t8 = 00000000
/* 03ED0 80863520 90990821 */  lbu     $t9, 0x0821($a0)           ## 00000821
/* 03ED4 80863524 908907C8 */  lbu     $t1, 0x07C8($a0)           ## 000007C8
/* 03ED8 80863528 A09808ED */  sb      $t8, 0x08ED($a0)           ## 000008ED
/* 03EDC 8086352C 3328FFFD */  andi    $t0, $t9, 0xFFFD           ## $t0 = 00000000
/* 03EE0 80863530 2921000A */  slti    $at, $t1, 0x000A           
/* 03EE4 80863534 14200052 */  bne     $at, $zero, .L80863680     
/* 03EE8 80863538 A0880821 */  sb      $t0, 0x0821($a0)           ## 00000821
/* 03EEC 8086353C 3C01C080 */  lui     $at, 0xC080                ## $at = C0800000
/* 03EF0 80863540 44812000 */  mtc1    $at, $f4                   ## $f4 = -4.00
/* 03EF4 80863544 1000004E */  beq     $zero, $zero, .L80863680   
/* 03EF8 80863548 E4840068 */  swc1    $f4, 0x0068($a0)           ## 00000068
.L8086354C:
/* 03EFC 8086354C 92030821 */  lbu     $v1, 0x0821($s0)           ## 00000821
/* 03F00 80863550 306A0002 */  andi    $t2, $v1, 0x0002           ## $t2 = 00000000
/* 03F04 80863554 5140004B */  beql    $t2, $zero, .L80863684     
/* 03F08 80863558 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 03F0C 8086355C 920400B1 */  lbu     $a0, 0x00B1($s0)           ## 000000B1
/* 03F10 80863560 306BFFFD */  andi    $t3, $v1, 0xFFFD           ## $t3 = 00000000
/* 03F14 80863564 2401000D */  addiu   $at, $zero, 0x000D         ## $at = 0000000D
/* 03F18 80863568 10810045 */  beq     $a0, $at, .L80863680       
/* 03F1C 8086356C A20B0821 */  sb      $t3, 0x0821($s0)           ## 00000821
/* 03F20 80863570 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 03F24 80863574 10810042 */  beq     $a0, $at, .L80863680       
/* 03F28 80863578 26050828 */  addiu   $a1, $s0, 0x0828           ## $a1 = 00000828
/* 03F2C 8086357C 820C0808 */  lb      $t4, 0x0808($s0)           ## 00000808
/* 03F30 80863580 A20407E2 */  sb      $a0, 0x07E2($s0)           ## 000007E2
/* 03F34 80863584 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 03F38 80863588 59800003 */  blezl   $t4, .L80863598            
/* 03F3C 8086358C 90ED0845 */  lbu     $t5, 0x0845($a3)           ## 00000845
/* 03F40 80863590 A2000808 */  sb      $zero, 0x0808($s0)         ## 00000808
/* 03F44 80863594 90ED0845 */  lbu     $t5, 0x0845($a3)           ## 00000845
.L80863598:
/* 03F48 80863598 860E008A */  lh      $t6, 0x008A($s0)           ## 0000008A
/* 03F4C 8086359C 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 03F50 808635A0 A20D07DC */  sb      $t5, 0x07DC($s0)           ## 000007DC
/* 03F54 808635A4 0C00D594 */  jal     func_80035650              
/* 03F58 808635A8 A60E0032 */  sh      $t6, 0x0032($s0)           ## 00000032
/* 03F5C 808635AC 260400E4 */  addiu   $a0, $s0, 0x00E4           ## $a0 = 000000E4
/* 03F60 808635B0 0C03E291 */  jal     func_800F8A44              
/* 03F64 808635B4 24053838 */  addiu   $a1, $zero, 0x3838         ## $a1 = 00003838
/* 03F68 808635B8 920200B1 */  lbu     $v0, 0x00B1($s0)           ## 000000B1
/* 03F6C 808635BC 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 03F70 808635C0 10410005 */  beq     $v0, $at, .L808635D8       
/* 03F74 808635C4 2401000F */  addiu   $at, $zero, 0x000F         ## $at = 0000000F
/* 03F78 808635C8 10410003 */  beq     $v0, $at, .L808635D8       
/* 03F7C 808635CC 2401000E */  addiu   $at, $zero, 0x000E         ## $at = 0000000E
/* 03F80 808635D0 1441000B */  bne     $v0, $at, .L80863600       
/* 03F84 808635D4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L808635D8:
/* 03F88 808635D8 920F07C8 */  lbu     $t7, 0x07C8($s0)           ## 000007C8
/* 03F8C 808635DC 2401000B */  addiu   $at, $zero, 0x000B         ## $at = 0000000B
/* 03F90 808635E0 51E10028 */  beql    $t7, $at, .L80863684       
/* 03F94 808635E4 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 03F98 808635E8 0C00D58A */  jal     Actor_ApplyDamage
              
/* 03F9C 808635EC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 03FA0 808635F0 0C21895E */  jal     func_80862578              
/* 03FA4 808635F4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 03FA8 808635F8 10000022 */  beq     $zero, $zero, .L80863684   
/* 03FAC 808635FC 8FBF001C */  lw      $ra, 0x001C($sp)           
.L80863600:
/* 03FB0 80863600 0C00B821 */  jal     func_8002E084              
/* 03FB4 80863604 24054000 */  addiu   $a1, $zero, 0x4000         ## $a1 = 00004000
/* 03FB8 80863608 10400010 */  beq     $v0, $zero, .L8086364C     
/* 03FBC 8086360C 00000000 */  nop
/* 03FC0 80863610 0C00D58A */  jal     Actor_ApplyDamage
              
/* 03FC4 80863614 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 03FC8 80863618 14400008 */  bne     $v0, $zero, .L8086363C     
/* 03FCC 8086361C 8FA40024 */  lw      $a0, 0x0024($sp)           
/* 03FD0 80863620 0C00CB1F */  jal     func_80032C7C              
/* 03FD4 80863624 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 03FD8 80863628 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 03FDC 8086362C 0C218BEA */  jal     func_80862FA8              
/* 03FE0 80863630 8FA50024 */  lw      $a1, 0x0024($sp)           
/* 03FE4 80863634 10000013 */  beq     $zero, $zero, .L80863684   
/* 03FE8 80863638 8FBF001C */  lw      $ra, 0x001C($sp)           
.L8086363C:
/* 03FEC 8086363C 0C218855 */  jal     func_80862154              
/* 03FF0 80863640 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 03FF4 80863644 1000000F */  beq     $zero, $zero, .L80863684   
/* 03FF8 80863648 8FBF001C */  lw      $ra, 0x001C($sp)           
.L8086364C:
/* 03FFC 8086364C 0C00D58A */  jal     Actor_ApplyDamage
              
/* 04000 80863650 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 04004 80863654 14400008 */  bne     $v0, $zero, .L80863678     
/* 04008 80863658 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0400C 8086365C 0C218C3C */  jal     func_808630F0              
/* 04010 80863660 8FA50024 */  lw      $a1, 0x0024($sp)           
/* 04014 80863664 8FA40024 */  lw      $a0, 0x0024($sp)           
/* 04018 80863668 0C00CB1F */  jal     func_80032C7C              
/* 0401C 8086366C 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 04020 80863670 10000004 */  beq     $zero, $zero, .L80863684   
/* 04024 80863674 8FBF001C */  lw      $ra, 0x001C($sp)           
.L80863678:
/* 04028 80863678 0C2188E6 */  jal     func_80862398              
/* 0402C 8086367C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80863680:
/* 04030 80863680 8FBF001C */  lw      $ra, 0x001C($sp)           
.L80863684:
/* 04034 80863684 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 04038 80863688 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 0403C 8086368C 03E00008 */  jr      $ra                        
/* 04040 80863690 00000000 */  nop
