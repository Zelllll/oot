.late_rodata
glabel D_80976D3C
    .float -0.1

.text
glabel func_8097414C
/* 031FC 8097414C 27BDFF78 */  addiu   $sp, $sp, 0xFF78           ## $sp = FFFFFF78
/* 03200 80974150 44800000 */  mtc1    $zero, $f0                 ## $f0 = 0.00
/* 03204 80974154 3C018097 */  lui     $at, %hi(D_80976D3C)       ## $at = 80970000
/* 03208 80974158 C4246D3C */  lwc1    $f4, %lo(D_80976D3C)($at)  
/* 0320C 8097415C AFBF0054 */  sw      $ra, 0x0054($sp)           
/* 03210 80974160 AFB70050 */  sw      $s7, 0x0050($sp)           
/* 03214 80974164 AFB6004C */  sw      $s6, 0x004C($sp)           
/* 03218 80974168 AFB50048 */  sw      $s5, 0x0048($sp)           
/* 0321C 8097416C AFB40044 */  sw      $s4, 0x0044($sp)           
/* 03220 80974170 AFB30040 */  sw      $s3, 0x0040($sp)           
/* 03224 80974174 AFB2003C */  sw      $s2, 0x003C($sp)           
/* 03228 80974178 AFB10038 */  sw      $s1, 0x0038($sp)           
/* 0322C 8097417C AFB00034 */  sw      $s0, 0x0034($sp)           
/* 03230 80974180 F7B60028 */  sdc1    $f22, 0x0028($sp)          
/* 03234 80974184 F7B40020 */  sdc1    $f20, 0x0020($sp)          
/* 03238 80974188 E7A00080 */  swc1    $f0, 0x0080($sp)           
/* 0323C 8097418C E7A00070 */  swc1    $f0, 0x0070($sp)           
/* 03240 80974190 E7A00078 */  swc1    $f0, 0x0078($sp)           
/* 03244 80974194 E7A40074 */  swc1    $f4, 0x0074($sp)           
/* 03248 80974198 908E0184 */  lbu     $t6, 0x0184($a0)           ## 00000184
/* 0324C 8097419C 3C198097 */  lui     $t9, %hi(D_80976860)       ## $t9 = 80970000
/* 03250 809741A0 27396860 */  addiu   $t9, $t9, %lo(D_80976860)  ## $t9 = 80976860
/* 03254 809741A4 000E7880 */  sll     $t7, $t6,  2               
/* 03258 809741A8 01EE7823 */  subu    $t7, $t7, $t6              
/* 0325C 809741AC 000F7840 */  sll     $t7, $t7,  1               
/* 03260 809741B0 25F8FF8E */  addiu   $t8, $t7, 0xFF8E           ## $t8 = FFFFFF8E
/* 03264 809741B4 03191021 */  addu    $v0, $t8, $t9              
/* 03268 809741B8 90480000 */  lbu     $t0, 0x0000($v0)           ## 00000000
/* 0326C 809741BC 00C0B025 */  or      $s6, $a2, $zero            ## $s6 = 00000000
/* 03270 809741C0 00A0B825 */  or      $s7, $a1, $zero            ## $s7 = 00000000
/* 03274 809741C4 A3A8006C */  sb      $t0, 0x006C($sp)           
/* 03278 809741C8 90490001 */  lbu     $t1, 0x0001($v0)           ## 00000001
/* 0327C 809741CC 00008025 */  or      $s0, $zero, $zero          ## $s0 = 00000000
/* 03280 809741D0 24910024 */  addiu   $s1, $a0, 0x0024           ## $s1 = 00000024
/* 03284 809741D4 A3A9006D */  sb      $t1, 0x006D($sp)           
/* 03288 809741D8 904A0002 */  lbu     $t2, 0x0002($v0)           ## 00000002
/* 0328C 809741DC 27B30070 */  addiu   $s3, $sp, 0x0070           ## $s3 = FFFFFFE8
/* 03290 809741E0 27B4006C */  addiu   $s4, $sp, 0x006C           ## $s4 = FFFFFFE4
/* 03294 809741E4 A3AA006E */  sb      $t2, 0x006E($sp)           
/* 03298 809741E8 904B0003 */  lbu     $t3, 0x0003($v0)           ## 00000003
/* 0329C 809741EC 27B50068 */  addiu   $s5, $sp, 0x0068           ## $s5 = FFFFFFE0
/* 032A0 809741F0 3C013FC0 */  lui     $at, 0x3FC0                ## $at = 3FC00000
/* 032A4 809741F4 A3AB0068 */  sb      $t3, 0x0068($sp)           
/* 032A8 809741F8 904C0004 */  lbu     $t4, 0x0004($v0)           ## 00000004
/* 032AC 809741FC A3AC0069 */  sb      $t4, 0x0069($sp)           
/* 032B0 80974200 904D0005 */  lbu     $t5, 0x0005($v0)           ## 00000005
/* 032B4 80974204 A3A0006F */  sb      $zero, 0x006F($sp)         
/* 032B8 80974208 18C0001C */  blez    $a2, .L8097427C            
/* 032BC 8097420C A3AD006A */  sb      $t5, 0x006A($sp)           
/* 032C0 80974210 4481B000 */  mtc1    $at, $f22                  ## $f22 = 1.50
/* 032C4 80974214 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 032C8 80974218 4481A000 */  mtc1    $at, $f20                  ## $f20 = 0.50
/* 032CC 8097421C 27B2007C */  addiu   $s2, $sp, 0x007C           ## $s2 = FFFFFFF4
.L80974220:
/* 032D0 80974220 0C03F66B */  jal     Math_Rand_ZeroOne
              ## Rand.Next() float
/* 032D4 80974224 00000000 */  nop
/* 032D8 80974228 46140181 */  sub.s   $f6, $f0, $f20             
/* 032DC 8097422C 46163202 */  mul.s   $f8, $f6, $f22             
/* 032E0 80974230 0C03F66B */  jal     Math_Rand_ZeroOne
              ## Rand.Next() float
/* 032E4 80974234 E7A8007C */  swc1    $f8, 0x007C($sp)           
/* 032E8 80974238 46140281 */  sub.s   $f10, $f0, $f20            
/* 032EC 8097423C 240E0BB8 */  addiu   $t6, $zero, 0x0BB8         ## $t6 = 00000BB8
/* 032F0 80974240 240F0010 */  addiu   $t7, $zero, 0x0010         ## $t7 = 00000010
/* 032F4 80974244 AFAF001C */  sw      $t7, 0x001C($sp)           
/* 032F8 80974248 46165402 */  mul.s   $f16, $f10, $f22           
/* 032FC 8097424C AFAE0018 */  sw      $t6, 0x0018($sp)           
/* 03300 80974250 02E02025 */  or      $a0, $s7, $zero            ## $a0 = 00000000
/* 03304 80974254 02202825 */  or      $a1, $s1, $zero            ## $a1 = 00000024
/* 03308 80974258 02403025 */  or      $a2, $s2, $zero            ## $a2 = FFFFFFF4
/* 0330C 8097425C 02603825 */  or      $a3, $s3, $zero            ## $a3 = FFFFFFE8
/* 03310 80974260 AFB40010 */  sw      $s4, 0x0010($sp)           
/* 03314 80974264 E7B00084 */  swc1    $f16, 0x0084($sp)          
/* 03318 80974268 0C00A2EC */  jal     func_80028BB0              
/* 0331C 8097426C AFB50014 */  sw      $s5, 0x0014($sp)           
/* 03320 80974270 26100001 */  addiu   $s0, $s0, 0x0001           ## $s0 = 00000001
/* 03324 80974274 1616FFEA */  bne     $s0, $s6, .L80974220       
/* 03328 80974278 00000000 */  nop
.L8097427C:
/* 0332C 8097427C 8FBF0054 */  lw      $ra, 0x0054($sp)           
/* 03330 80974280 D7B40020 */  ldc1    $f20, 0x0020($sp)          
/* 03334 80974284 D7B60028 */  ldc1    $f22, 0x0028($sp)          
/* 03338 80974288 8FB00034 */  lw      $s0, 0x0034($sp)           
/* 0333C 8097428C 8FB10038 */  lw      $s1, 0x0038($sp)           
/* 03340 80974290 8FB2003C */  lw      $s2, 0x003C($sp)           
/* 03344 80974294 8FB30040 */  lw      $s3, 0x0040($sp)           
/* 03348 80974298 8FB40044 */  lw      $s4, 0x0044($sp)           
/* 0334C 8097429C 8FB50048 */  lw      $s5, 0x0048($sp)           
/* 03350 809742A0 8FB6004C */  lw      $s6, 0x004C($sp)           
/* 03354 809742A4 8FB70050 */  lw      $s7, 0x0050($sp)           
/* 03358 809742A8 03E00008 */  jr      $ra                        
/* 0335C 809742AC 27BD0088 */  addiu   $sp, $sp, 0x0088           ## $sp = 00000000
