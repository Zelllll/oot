.late_rodata
glabel D_809BBC80
    .float 0.1
glabel D_809BBC84
    .float 0.1

.text
glabel func_809B8984
/* 006A4 809B8984 27BDFFD8 */  addiu   $sp, $sp, 0xFFD8           ## $sp = FFFFFFD8
/* 006A8 809B8988 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 006AC 809B898C AFB00020 */  sw      $s0, 0x0020($sp)           
/* 006B0 809B8990 848E001C */  lh      $t6, 0x001C($a0)           ## 0000001C
/* 006B4 809B8994 2401000B */  addiu   $at, $zero, 0x000B         ## $at = 0000000B
/* 006B8 809B8998 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 006BC 809B899C 55C10009 */  bnel    $t6, $at, .L809B89C4       
/* 006C0 809B89A0 8E040260 */  lw      $a0, 0x0260($s0)           ## 00000260
/* 006C4 809B89A4 8C830118 */  lw      $v1, 0x0118($a0)           ## 00000118
/* 006C8 809B89A8 1460004C */  bne     $v1, $zero, .L809B8ADC     
/* 006CC 809B89AC 00000000 */  nop
/* 006D0 809B89B0 0C26E2C0 */  jal     func_809B8B00              
/* 006D4 809B89B4 00000000 */  nop
/* 006D8 809B89B8 10000048 */  beq     $zero, $zero, .L809B8ADC   
/* 006DC 809B89BC 8E030118 */  lw      $v1, 0x0118($s0)           ## 00000118
/* 006E0 809B89C0 8E040260 */  lw      $a0, 0x0260($s0)           ## 00000260
.L809B89C4:
/* 006E4 809B89C4 54800040 */  bnel    $a0, $zero, .L809B8AC8     
/* 006E8 809B89C8 8E030118 */  lw      $v1, 0x0118($s0)           ## 00000118
/* 006EC 809B89CC 8E0F0324 */  lw      $t7, 0x0324($s0)           ## 00000324
/* 006F0 809B89D0 44801000 */  mtc1    $zero, $f2                 ## $f2 = 0.00
/* 006F4 809B89D4 3C01809C */  lui     $at, %hi(D_809BBC80)       ## $at = 809C0000
/* 006F8 809B89D8 C5E40288 */  lwc1    $f4, 0x0288($t7)           ## 00000288
/* 006FC 809B89DC 46041032 */  c.eq.s  $f2, $f4                   
/* 00700 809B89E0 00000000 */  nop
/* 00704 809B89E4 45030022 */  bc1tl   .L809B8A70                 
/* 00708 809B89E8 9203029F */  lbu     $v1, 0x029F($s0)           ## 0000029F
/* 0070C 809B89EC C6000054 */  lwc1    $f0, 0x0054($s0)           ## 00000054
/* 00710 809B89F0 C426BC80 */  lwc1    $f6, %lo(D_809BBC80)($at)  
/* 00714 809B89F4 E7A20010 */  swc1    $f2, 0x0010($sp)           
/* 00718 809B89F8 44050000 */  mfc1    $a1, $f0                   
/* 0071C 809B89FC 46060202 */  mul.s   $f8, $f0, $f6              
/* 00720 809B8A00 26040288 */  addiu   $a0, $s0, 0x0288           ## $a0 = 00000288
/* 00724 809B8A04 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 00728 809B8A08 44074000 */  mfc1    $a3, $f8                   
/* 0072C 809B8A0C 0C01E0C4 */  jal     Math_SmoothScaleMaxMinF
              
/* 00730 809B8A10 00000000 */  nop
/* 00734 809B8A14 3C01809C */  lui     $at, %hi(D_809BBC84)       ## $at = 809C0000
/* 00738 809B8A18 C42ABC84 */  lwc1    $f10, %lo(D_809BBC84)($at) 
/* 0073C 809B8A1C C6000058 */  lwc1    $f0, 0x0058($s0)           ## 00000058
/* 00740 809B8A20 44809000 */  mtc1    $zero, $f18                ## $f18 = 0.00
/* 00744 809B8A24 2604028C */  addiu   $a0, $s0, 0x028C           ## $a0 = 0000028C
/* 00748 809B8A28 460A0402 */  mul.s   $f16, $f0, $f10            
/* 0074C 809B8A2C 44050000 */  mfc1    $a1, $f0                   
/* 00750 809B8A30 3C063F80 */  lui     $a2, 0x3F80                ## $a2 = 3F800000
/* 00754 809B8A34 E7B20010 */  swc1    $f18, 0x0010($sp)          
/* 00758 809B8A38 44078000 */  mfc1    $a3, $f16                  
/* 0075C 809B8A3C 0C01E0C4 */  jal     Math_SmoothScaleMaxMinF
              
/* 00760 809B8A40 00000000 */  nop
/* 00764 809B8A44 9202029F */  lbu     $v0, 0x029F($s0)           ## 0000029F
/* 00768 809B8A48 8603026E */  lh      $v1, 0x026E($s0)           ## 0000026E
/* 0076C 809B8A4C 2458000A */  addiu   $t8, $v0, 0x000A           ## $t8 = 0000000A
/* 00770 809B8A50 10620013 */  beq     $v1, $v0, .L809B8AA0       
/* 00774 809B8A54 331900FF */  andi    $t9, $t8, 0x00FF           ## $t9 = 0000000A
/* 00778 809B8A58 0079082A */  slt     $at, $v1, $t9              
/* 0077C 809B8A5C 10200010 */  beq     $at, $zero, .L809B8AA0     
/* 00780 809B8A60 A218029F */  sb      $t8, 0x029F($s0)           ## 0000029F
/* 00784 809B8A64 1000000E */  beq     $zero, $zero, .L809B8AA0   
/* 00788 809B8A68 A203029F */  sb      $v1, 0x029F($s0)           ## 0000029F
/* 0078C 809B8A6C 9203029F */  lbu     $v1, 0x029F($s0)           ## 0000029F
.L809B8A70:
/* 00790 809B8A70 14600005 */  bne     $v1, $zero, .L809B8A88     
/* 00794 809B8A74 28610015 */  slti    $at, $v1, 0x0015           
/* 00798 809B8A78 0C00B55C */  jal     Actor_Kill
              
/* 0079C 809B8A7C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 007A0 809B8A80 1000001B */  beq     $zero, $zero, .L809B8AF0   
/* 007A4 809B8A84 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L809B8A88:
/* 007A8 809B8A88 10200003 */  beq     $at, $zero, .L809B8A98     
/* 007AC 809B8A8C 00601025 */  or      $v0, $v1, $zero            ## $v0 = 00000000
/* 007B0 809B8A90 10000003 */  beq     $zero, $zero, .L809B8AA0   
/* 007B4 809B8A94 A200029F */  sb      $zero, 0x029F($s0)         ## 0000029F
.L809B8A98:
/* 007B8 809B8A98 2448FFEC */  addiu   $t0, $v0, 0xFFEC           ## $t0 = FFFFFFEC
/* 007BC 809B8A9C A208029F */  sb      $t0, 0x029F($s0)           ## 0000029F
.L809B8AA0:
/* 007C0 809B8AA0 8E090118 */  lw      $t1, 0x0118($s0)           ## 00000118
/* 007C4 809B8AA4 8E030118 */  lw      $v1, 0x0118($s0)           ## 00000118
/* 007C8 809B8AA8 8D2B0100 */  lw      $t3, 0x0100($t1)           ## 00000100
/* 007CC 809B8AAC AE0B0024 */  sw      $t3, 0x0024($s0)           ## 00000024
/* 007D0 809B8AB0 8D2A0104 */  lw      $t2, 0x0104($t1)           ## 00000104
/* 007D4 809B8AB4 AE0A0028 */  sw      $t2, 0x0028($s0)           ## 00000028
/* 007D8 809B8AB8 8D2B0108 */  lw      $t3, 0x0108($t1)           ## 00000108
/* 007DC 809B8ABC 10000007 */  beq     $zero, $zero, .L809B8ADC   
/* 007E0 809B8AC0 AE0B002C */  sw      $t3, 0x002C($s0)           ## 0000002C
/* 007E4 809B8AC4 8E030118 */  lw      $v1, 0x0118($s0)           ## 00000118
.L809B8AC8:
/* 007E8 809B8AC8 248CFFFF */  addiu   $t4, $a0, 0xFFFF           ## $t4 = FFFFFFFF
/* 007EC 809B8ACC AE0C0260 */  sw      $t4, 0x0260($s0)           ## 00000260
/* 007F0 809B8AD0 84620032 */  lh      $v0, 0x0032($v1)           ## 00000032
/* 007F4 809B8AD4 A6020032 */  sh      $v0, 0x0032($s0)           ## 00000032
/* 007F8 809B8AD8 A60200B6 */  sh      $v0, 0x00B6($s0)           ## 000000B6
.L809B8ADC:
/* 007FC 809B8ADC 50600004 */  beql    $v1, $zero, .L809B8AF0     
/* 00800 809B8AE0 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 00804 809B8AE4 C4640060 */  lwc1    $f4, 0x0060($v1)           ## 00000060
/* 00808 809B8AE8 E6040060 */  swc1    $f4, 0x0060($s0)           ## 00000060
/* 0080C 809B8AEC 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L809B8AF0:
/* 00810 809B8AF0 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 00814 809B8AF4 27BD0028 */  addiu   $sp, $sp, 0x0028           ## $sp = 00000000
/* 00818 809B8AF8 03E00008 */  jr      $ra                        
/* 0081C 809B8AFC 00000000 */  nop
