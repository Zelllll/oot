glabel func_80A20774
/* 009B4 80A20774 27BDFFD8 */  addiu   $sp, $sp, 0xFFD8           ## $sp = FFFFFFD8
/* 009B8 80A20778 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 009BC 80A2077C AFB00020 */  sw      $s0, 0x0020($sp)           
/* 009C0 80A20780 AFA5002C */  sw      $a1, 0x002C($sp)           
/* 009C4 80A20784 8C8E0258 */  lw      $t6, 0x0258($a0)           ## 00000258
/* 009C8 80A20788 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 009CC 80A2078C 24050000 */  addiu   $a1, $zero, 0x0000         ## $a1 = 00000000
/* 009D0 80A20790 25CFFFF0 */  addiu   $t7, $t6, 0xFFF0           ## $t7 = FFFFFFF0
/* 009D4 80A20794 2DE10100 */  sltiu   $at, $t7, 0x0100           
/* 009D8 80A20798 14200002 */  bne     $at, $zero, .L80A207A4     
/* 009DC 80A2079C AC8F0258 */  sw      $t7, 0x0258($a0)           ## 00000258
/* 009E0 80A207A0 AC800258 */  sw      $zero, 0x0258($a0)         ## 00000258
.L80A207A4:
/* 009E4 80A207A4 44802000 */  mtc1    $zero, $f4                 ## $f4 = 0.00
/* 009E8 80A207A8 3C073A03 */  lui     $a3, 0x3A03                ## $a3 = 3A030000
/* 009EC 80A207AC 34E7126F */  ori     $a3, $a3, 0x126F           ## $a3 = 3A03126F
/* 009F0 80A207B0 26040054 */  addiu   $a0, $s0, 0x0054           ## $a0 = 00000054
/* 009F4 80A207B4 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 009F8 80A207B8 0C01E0C4 */  jal     Math_SmoothStepToF
              
/* 009FC 80A207BC E7A40010 */  swc1    $f4, 0x0010($sp)           
/* 00A00 80A207C0 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 00A04 80A207C4 00000000 */  nop
/* 00A08 80A207C8 46060032 */  c.eq.s  $f0, $f6                   
/* 00A0C 80A207CC 00000000 */  nop
/* 00A10 80A207D0 45020004 */  bc1fl   .L80A207E4                 
/* 00A14 80A207D4 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 00A18 80A207D8 0C2881FD */  jal     func_80A207F4              
/* 00A1C 80A207DC 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00A20 80A207E0 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80A207E4:
/* 00A24 80A207E4 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 00A28 80A207E8 27BD0028 */  addiu   $sp, $sp, 0x0028           ## $sp = 00000000
/* 00A2C 80A207EC 03E00008 */  jr      $ra                        
/* 00A30 80A207F0 00000000 */  nop
