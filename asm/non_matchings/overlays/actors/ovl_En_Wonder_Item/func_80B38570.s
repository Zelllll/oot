glabel func_80B38570
/* 00510 80B38570 27BDFF70 */  addiu   $sp, $sp, 0xFF70           ## $sp = FFFFFF70
/* 00514 80B38574 AFBF008C */  sw      $ra, 0x008C($sp)           
/* 00518 80B38578 AFBE0088 */  sw      $s8, 0x0088($sp)           
/* 0051C 80B3857C AFB70084 */  sw      $s7, 0x0084($sp)           
/* 00520 80B38580 AFB60080 */  sw      $s6, 0x0080($sp)           
/* 00524 80B38584 AFB5007C */  sw      $s5, 0x007C($sp)           
/* 00528 80B38588 AFB40078 */  sw      $s4, 0x0078($sp)           
/* 0052C 80B3858C AFB30074 */  sw      $s3, 0x0074($sp)           
/* 00530 80B38590 AFB20070 */  sw      $s2, 0x0070($sp)           
/* 00534 80B38594 AFB1006C */  sw      $s1, 0x006C($sp)           
/* 00538 80B38598 AFB00068 */  sw      $s0, 0x0068($sp)           
/* 0053C 80B3859C F7BA0060 */  sdc1    $f26, 0x0060($sp)          
/* 00540 80B385A0 F7B80058 */  sdc1    $f24, 0x0058($sp)          
/* 00544 80B385A4 F7B60050 */  sdc1    $f22, 0x0050($sp)          
/* 00548 80B385A8 F7B40048 */  sdc1    $f20, 0x0048($sp)          
/* 0054C 80B385AC 84830158 */  lh      $v1, 0x0158($a0)           ## 00000158
/* 00550 80B385B0 00809025 */  or      $s2, $a0, $zero            ## $s2 = 00000000
/* 00554 80B385B4 00A0F025 */  or      $s8, $a1, $zero            ## $s8 = 00000000
/* 00558 80B385B8 8CB31C44 */  lw      $s3, 0x1C44($a1)           ## 00001C44
/* 0055C 80B385BC 8494015E */  lh      $s4, 0x015E($a0)           ## 0000015E
/* 00560 80B385C0 00008025 */  or      $s0, $zero, $zero          ## $s0 = 00000000
/* 00564 80B385C4 1860004C */  blez    $v1, .L80B386F8            
/* 00568 80B385C8 24110001 */  addiu   $s1, $zero, 0x0001         ## $s1 = 00000001
/* 0056C 80B385CC 3C014248 */  lui     $at, 0x4248                ## $at = 42480000
/* 00570 80B385D0 4481D000 */  mtc1    $at, $f26                  ## $f26 = 50.00
/* 00574 80B385D4 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 00578 80B385D8 3C178016 */  lui     $s7, %hi(gGameInfo)
/* 0057C 80B385DC 3C1580B4 */  lui     $s5, %hi(D_80B39010)       ## $s5 = 80B40000
/* 00580 80B385E0 4481C000 */  mtc1    $at, $f24                  ## $f24 = 1.00
/* 00584 80B385E4 26B59010 */  addiu   $s5, $s5, %lo(D_80B39010)  ## $s5 = 80B39010
/* 00588 80B385E8 26F7FA90 */  addiu   $s7, %lo(gGameInfo)
/* 0058C 80B385EC 2416000C */  addiu   $s6, $zero, 0x000C         ## $s6 = 0000000C
.L80B385F0:
/* 00590 80B385F0 02917024 */  and     $t6, $s4, $s1              
/* 00594 80B385F4 55C0003D */  bnel    $t6, $zero, .L80B386EC     
/* 00598 80B385F8 26100001 */  addiu   $s0, $s0, 0x0001           ## $s0 = 00000001
/* 0059C 80B385FC 02160019 */  multu   $s0, $s6                   
/* 005A0 80B38600 C6640024 */  lwc1    $f4, 0x0024($s3)           ## 00000024
/* 005A4 80B38604 C6660028 */  lwc1    $f6, 0x0028($s3)           ## 00000028
/* 005A8 80B38608 C668002C */  lwc1    $f8, 0x002C($s3)           ## 0000002C
/* 005AC 80B3860C 241800FF */  addiu   $t8, $zero, 0x00FF         ## $t8 = 000000FF
/* 005B0 80B38610 241900FF */  addiu   $t9, $zero, 0x00FF         ## $t9 = 000000FF
/* 005B4 80B38614 24080004 */  addiu   $t0, $zero, 0x0004         ## $t0 = 00000004
/* 005B8 80B38618 00007812 */  mflo    $t7                        
/* 005BC 80B3861C 02AF1021 */  addu    $v0, $s5, $t7              
/* 005C0 80B38620 C4540000 */  lwc1    $f20, 0x0000($v0)          ## 00000000
/* 005C4 80B38624 C4560004 */  lwc1    $f22, 0x0004($v0)          ## 00000004
/* 005C8 80B38628 C4500008 */  lwc1    $f16, 0x0008($v0)          ## 00000008
/* 005CC 80B3862C 46142081 */  sub.s   $f2, $f4, $f20             
/* 005D0 80B38630 46163301 */  sub.s   $f12, $f6, $f22            
/* 005D4 80B38634 46021282 */  mul.s   $f10, $f2, $f2             
/* 005D8 80B38638 46104381 */  sub.s   $f14, $f8, $f16            
/* 005DC 80B3863C 460C6482 */  mul.s   $f18, $f12, $f12           
/* 005E0 80B38640 46125100 */  add.s   $f4, $f10, $f18            
/* 005E4 80B38644 460E7182 */  mul.s   $f6, $f14, $f14            
/* 005E8 80B38648 46062000 */  add.s   $f0, $f4, $f6              
/* 005EC 80B3864C 46000004 */  sqrt.s  $f0, $f0                   
/* 005F0 80B38650 461A003C */  c.lt.s  $f0, $f26                  
/* 005F4 80B38654 00000000 */  nop
/* 005F8 80B38658 4502000C */  bc1fl   .L80B3868C                 
/* 005FC 80B3865C 8EEC0000 */  lw      $t4, 0x0000($s7)           ## 8015FA90
/* 00600 80B38660 8658015E */  lh      $t8, 0x015E($s2)           ## 0000015E
/* 00604 80B38664 86480160 */  lh      $t0, 0x0160($s2)           ## 00000160
/* 00608 80B38668 864A016A */  lh      $t2, 0x016A($s2)           ## 0000016A
/* 0060C 80B3866C 0311C825 */  or      $t9, $t8, $s1              ## $t9 = 000000FF
/* 00610 80B38670 25090001 */  addiu   $t1, $t0, 0x0001           ## $t1 = 00000005
/* 00614 80B38674 254B0051 */  addiu   $t3, $t2, 0x0051           ## $t3 = 00000051
/* 00618 80B38678 A659015E */  sh      $t9, 0x015E($s2)           ## 0000015E
/* 0061C 80B3867C A6490160 */  sh      $t1, 0x0160($s2)           ## 00000160
/* 00620 80B38680 10000031 */  beq     $zero, $zero, .L80B38748   
/* 00624 80B38684 A64B015C */  sh      $t3, 0x015C($s2)           ## 0000015C
/* 00628 80B38688 8EEC0000 */  lw      $t4, 0x0000($s7)           ## 8015FA90
.L80B3868C:
/* 0062C 80B3868C 858D12D4 */  lh      $t5, 0x12D4($t4)           ## 000012D4
/* 00630 80B38690 51A00016 */  beql    $t5, $zero, .L80B386EC     
/* 00634 80B38694 26100001 */  addiu   $s0, $s0, 0x0001           ## $s0 = 00000002
/* 00638 80B38698 864E0032 */  lh      $t6, 0x0032($s2)           ## 00000032
/* 0063C 80B3869C 86470030 */  lh      $a3, 0x0030($s2)           ## 00000030
/* 00640 80B386A0 44068000 */  mfc1    $a2, $f16                  
/* 00644 80B386A4 AFAE0010 */  sw      $t6, 0x0010($sp)           
/* 00648 80B386A8 864F0034 */  lh      $t7, 0x0034($s2)           ## 00000034
/* 0064C 80B386AC AFA80034 */  sw      $t0, 0x0034($sp)           
/* 00650 80B386B0 AFB90030 */  sw      $t9, 0x0030($sp)           
/* 00654 80B386B4 AFA0002C */  sw      $zero, 0x002C($sp)         
/* 00658 80B386B8 AFB80028 */  sw      $t8, 0x0028($sp)           
/* 0065C 80B386BC AFA00024 */  sw      $zero, 0x0024($sp)         
/* 00660 80B386C0 E7B80020 */  swc1    $f24, 0x0020($sp)          
/* 00664 80B386C4 E7B8001C */  swc1    $f24, 0x001C($sp)          
/* 00668 80B386C8 E7B80018 */  swc1    $f24, 0x0018($sp)          
/* 0066C 80B386CC AFAF0014 */  sw      $t7, 0x0014($sp)           
/* 00670 80B386D0 8FC90000 */  lw      $t1, 0x0000($s8)           ## 00000000
/* 00674 80B386D4 4600A306 */  mov.s   $f12, $f20                 
/* 00678 80B386D8 4600B386 */  mov.s   $f14, $f22                 
/* 0067C 80B386DC 0C018FA7 */  jal     DebugDisplay_AddObject
              
/* 00680 80B386E0 AFA90038 */  sw      $t1, 0x0038($sp)           
/* 00684 80B386E4 86430158 */  lh      $v1, 0x0158($s2)           ## 00000158
/* 00688 80B386E8 26100001 */  addiu   $s0, $s0, 0x0001           ## $s0 = 00000003
.L80B386EC:
/* 0068C 80B386EC 0203082A */  slt     $at, $s0, $v1              
/* 00690 80B386F0 1420FFBF */  bne     $at, $zero, .L80B385F0     
/* 00694 80B386F4 00118840 */  sll     $s1, $s1,  1               
.L80B386F8:
/* 00698 80B386F8 864A015C */  lh      $t2, 0x015C($s2)           ## 0000015C
/* 0069C 80B386FC 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 006A0 80B38700 55410006 */  bnel    $t2, $at, .L80B3871C       
/* 006A4 80B38704 864B0160 */  lh      $t3, 0x0160($s2)           ## 00000160
/* 006A8 80B38708 0C00B55C */  jal     Actor_Kill
              
/* 006AC 80B3870C 02402025 */  or      $a0, $s2, $zero            ## $a0 = 00000000
/* 006B0 80B38710 1000000E */  beq     $zero, $zero, .L80B3874C   
/* 006B4 80B38714 8FBF008C */  lw      $ra, 0x008C($sp)           
/* 006B8 80B38718 864B0160 */  lh      $t3, 0x0160($s2)           ## 00000160
.L80B3871C:
/* 006BC 80B3871C 546B000B */  bnel    $v1, $t3, .L80B3874C       
/* 006C0 80B38720 8FBF008C */  lw      $ra, 0x008C($sp)           
/* 006C4 80B38724 86450162 */  lh      $a1, 0x0162($s2)           ## 00000162
/* 006C8 80B38728 04A20004 */  bltzl   $a1, .L80B3873C            
/* 006CC 80B3872C 02402025 */  or      $a0, $s2, $zero            ## $a0 = 00000000
/* 006D0 80B38730 0C00B2DD */  jal     Flags_SetSwitch
              
/* 006D4 80B38734 03C02025 */  or      $a0, $s8, $zero            ## $a0 = 00000000
/* 006D8 80B38738 02402025 */  or      $a0, $s2, $zero            ## $a0 = 00000000
.L80B3873C:
/* 006DC 80B3873C 03C02825 */  or      $a1, $s8, $zero            ## $a1 = 00000000
/* 006E0 80B38740 0C2CE028 */  jal     func_80B380A0              
/* 006E4 80B38744 24060001 */  addiu   $a2, $zero, 0x0001         ## $a2 = 00000001
.L80B38748:
/* 006E8 80B38748 8FBF008C */  lw      $ra, 0x008C($sp)           
.L80B3874C:
/* 006EC 80B3874C D7B40048 */  ldc1    $f20, 0x0048($sp)          
/* 006F0 80B38750 D7B60050 */  ldc1    $f22, 0x0050($sp)          
/* 006F4 80B38754 D7B80058 */  ldc1    $f24, 0x0058($sp)          
/* 006F8 80B38758 D7BA0060 */  ldc1    $f26, 0x0060($sp)          
/* 006FC 80B3875C 8FB00068 */  lw      $s0, 0x0068($sp)           
/* 00700 80B38760 8FB1006C */  lw      $s1, 0x006C($sp)           
/* 00704 80B38764 8FB20070 */  lw      $s2, 0x0070($sp)           
/* 00708 80B38768 8FB30074 */  lw      $s3, 0x0074($sp)           
/* 0070C 80B3876C 8FB40078 */  lw      $s4, 0x0078($sp)           
/* 00710 80B38770 8FB5007C */  lw      $s5, 0x007C($sp)           
/* 00714 80B38774 8FB60080 */  lw      $s6, 0x0080($sp)           
/* 00718 80B38778 8FB70084 */  lw      $s7, 0x0084($sp)           
/* 0071C 80B3877C 8FBE0088 */  lw      $s8, 0x0088($sp)           
/* 00720 80B38780 03E00008 */  jr      $ra                        
/* 00724 80B38784 27BD0090 */  addiu   $sp, $sp, 0x0090           ## $sp = 00000000
