.late_rodata
glabel D_80A21CD8
 .word 0x3BC49BA6
glabel D_80A21CDC
 .word 0x39D1B717
glabel D_80A21CE0
 .word 0x3B83126F

.text
glabel func_80A20DBC
/* 00FFC 80A20DBC 27BDFFE8 */  addiu   $sp, $sp, 0xFFE8           ## $sp = FFFFFFE8
/* 01000 80A20DC0 AFA5001C */  sw      $a1, 0x001C($sp)           
/* 01004 80A20DC4 AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 01008 80A20DC8 00803825 */  or      $a3, $a0, $zero            ## $a3 = 00000000
/* 0100C 80A20DCC 3C053A1D */  lui     $a1, 0x3A1D                ## $a1 = 3A1D0000
/* 01010 80A20DD0 3C063951 */  lui     $a2, 0x3951                ## $a2 = 39510000
/* 01014 80A20DD4 34C6B717 */  ori     $a2, $a2, 0xB717           ## $a2 = 3951B717
/* 01018 80A20DD8 34A54952 */  ori     $a1, $a1, 0x4952           ## $a1 = 3A1D4952
/* 0101C 80A20DDC AFA70018 */  sw      $a3, 0x0018($sp)           
/* 01020 80A20DE0 0C01DE80 */  jal     Math_ApproxF
              
/* 01024 80A20DE4 24840054 */  addiu   $a0, $a0, 0x0054           ## $a0 = 00000054
/* 01028 80A20DE8 8FA70018 */  lw      $a3, 0x0018($sp)           
/* 0102C 80A20DEC 3C0180A2 */  lui     $at, %hi(D_80A21CD8)       ## $at = 80A20000
/* 01030 80A20DF0 C4241CD8 */  lwc1    $f4, %lo(D_80A21CD8)($at)  
/* 01034 80A20DF4 C4E00054 */  lwc1    $f0, 0x0054($a3)           ## 00000054
/* 01038 80A20DF8 3C0180A2 */  lui     $at, %hi(D_80A21CDC)       ## $at = 80A20000
/* 0103C 80A20DFC 00E02025 */  or      $a0, $a3, $zero            ## $a0 = 00000000
/* 01040 80A20E00 4604003C */  c.lt.s  $f0, $f4                   
/* 01044 80A20E04 00000000 */  nop
/* 01048 80A20E08 45000009 */  bc1f    .L80A20E30                 
/* 0104C 80A20E0C 00000000 */  nop
/* 01050 80A20E10 C4221CDC */  lwc1    $f2, %lo(D_80A21CDC)($at)  
/* 01054 80A20E14 C4E60050 */  lwc1    $f6, 0x0050($a3)           ## 00000050
/* 01058 80A20E18 C4EA0058 */  lwc1    $f10, 0x0058($a3)          ## 00000058
/* 0105C 80A20E1C C4E00054 */  lwc1    $f0, 0x0054($a3)           ## 00000054
/* 01060 80A20E20 46023200 */  add.s   $f8, $f6, $f2              
/* 01064 80A20E24 46025400 */  add.s   $f16, $f10, $f2            
/* 01068 80A20E28 E4E80050 */  swc1    $f8, 0x0050($a3)           ## 00000050
/* 0106C 80A20E2C E4F00058 */  swc1    $f16, 0x0058($a3)          ## 00000058
.L80A20E30:
/* 01070 80A20E30 3C0180A2 */  lui     $at, %hi(D_80A21CE0)       ## $at = 80A20000
/* 01074 80A20E34 C4321CE0 */  lwc1    $f18, %lo(D_80A21CE0)($at) 
/* 01078 80A20E38 4612003C */  c.lt.s  $f0, $f18                  
/* 0107C 80A20E3C 00000000 */  nop
/* 01080 80A20E40 45020008 */  bc1fl   .L80A20E64                 
/* 01084 80A20E44 8CF90258 */  lw      $t9, 0x0258($a3)           ## 00000258
/* 01088 80A20E48 8CEE0258 */  lw      $t6, 0x0258($a3)           ## 00000258
/* 0108C 80A20E4C 25CFFFF8 */  addiu   $t7, $t6, 0xFFF8           ## $t7 = FFFFFFF8
/* 01090 80A20E50 2DE10100 */  sltiu   $at, $t7, 0x0100           
/* 01094 80A20E54 14200002 */  bne     $at, $zero, .L80A20E60     
/* 01098 80A20E58 ACEF0258 */  sw      $t7, 0x0258($a3)           ## 00000258
/* 0109C 80A20E5C ACE00258 */  sw      $zero, 0x0258($a3)         ## 00000258
.L80A20E60:
/* 010A0 80A20E60 8CF90258 */  lw      $t9, 0x0258($a3)           ## 00000258
.L80A20E64:
/* 010A4 80A20E64 57200004 */  bnel    $t9, $zero, .L80A20E78     
/* 010A8 80A20E68 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 010AC 80A20E6C 0C28832B */  jal     func_80A20CAC              
/* 010B0 80A20E70 8FA5001C */  lw      $a1, 0x001C($sp)           
/* 010B4 80A20E74 8FBF0014 */  lw      $ra, 0x0014($sp)           
.L80A20E78:
/* 010B8 80A20E78 27BD0018 */  addiu   $sp, $sp, 0x0018           ## $sp = 00000000
/* 010BC 80A20E7C 03E00008 */  jr      $ra                        
/* 010C0 80A20E80 00000000 */  nop
