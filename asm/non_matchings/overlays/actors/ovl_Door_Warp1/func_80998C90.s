.late_rodata
glabel D_8099C724
    .word 0x3E99999A

.text
glabel func_80998C90
/* 00510 80998C90 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 00514 80998C94 AFB00028 */  sw      $s0, 0x0028($sp)           
/* 00518 80998C98 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 0051C 80998C9C AFA5003C */  sw      $a1, 0x003C($sp)           
/* 00520 80998CA0 00A02025 */  or      $a0, $a1, $zero            ## $a0 = 00000000
/* 00524 80998CA4 AFBF002C */  sw      $ra, 0x002C($sp)           
/* 00528 80998CA8 2605014C */  addiu   $a1, $s0, 0x014C           ## $a1 = 0000014C
/* 0052C 80998CAC 3C060600 */  lui     $a2, 0x0600                ## $a2 = 06000000
/* 00530 80998CB0 3C070600 */  lui     $a3, 0x0600                ## $a3 = 06000000
/* 00534 80998CB4 24E71374 */  addiu   $a3, $a3, 0x1374           ## $a3 = 06001374
/* 00538 80998CB8 24C62CA8 */  addiu   $a2, $a2, 0x2CA8           ## $a2 = 06002CA8
/* 0053C 80998CBC AFA50034 */  sw      $a1, 0x0034($sp)           
/* 00540 80998CC0 AFA00010 */  sw      $zero, 0x0010($sp)         
/* 00544 80998CC4 AFA00014 */  sw      $zero, 0x0014($sp)         
/* 00548 80998CC8 0C02915F */  jal     SkelAnime_Init
              
/* 0054C 80998CCC AFA00018 */  sw      $zero, 0x0018($sp)         
/* 00550 80998CD0 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 00554 80998CD4 44811000 */  mtc1    $at, $f2                   ## $f2 = 1.00
/* 00558 80998CD8 3C014220 */  lui     $at, 0x4220                ## $at = 42200000
/* 0055C 80998CDC 44812000 */  mtc1    $at, $f4                   ## $f4 = 40.00
/* 00560 80998CE0 3C050600 */  lui     $a1, 0x0600                ## $a1 = 06000000
/* 00564 80998CE4 240E0002 */  addiu   $t6, $zero, 0x0002         ## $t6 = 00000002
/* 00568 80998CE8 240F0001 */  addiu   $t7, $zero, 0x0001         ## $t7 = 00000001
/* 0056C 80998CEC 44061000 */  mfc1    $a2, $f2                   
/* 00570 80998CF0 44071000 */  mfc1    $a3, $f2                   
/* 00574 80998CF4 AFAF001C */  sw      $t7, 0x001C($sp)           
/* 00578 80998CF8 AFAE0014 */  sw      $t6, 0x0014($sp)           
/* 0057C 80998CFC 24A51374 */  addiu   $a1, $a1, 0x1374           ## $a1 = 06001374
/* 00580 80998D00 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 00584 80998D04 E7A20010 */  swc1    $f2, 0x0010($sp)           
/* 00588 80998D08 0C0293F9 */  jal     func_800A4FE4              
/* 0058C 80998D0C E7A40018 */  swc1    $f4, 0x0018($sp)           
/* 00590 80998D10 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 00594 80998D14 44811000 */  mtc1    $at, $f2                   ## $f2 = 1.00
/* 00598 80998D18 3C01809A */  lui     $at, %hi(D_8099C724)       ## $at = 809A0000
/* 0059C 80998D1C C42CC724 */  lwc1    $f12, %lo(D_8099C724)($at) 
/* 005A0 80998D20 2418FF74 */  addiu   $t8, $zero, 0xFF74         ## $t8 = FFFFFF74
/* 005A4 80998D24 2419FFB0 */  addiu   $t9, $zero, 0xFFB0         ## $t9 = FFFFFFB0
/* 005A8 80998D28 A60001AC */  sh      $zero, 0x01AC($s0)         ## 000001AC
/* 005AC 80998D2C A61801AE */  sh      $t8, 0x01AE($s0)           ## 000001AE
/* 005B0 80998D30 A61901B0 */  sh      $t9, 0x01B0($s0)           ## 000001B0
/* 005B4 80998D34 3C01809A */  lui     $at, %hi(D_8099CCA0)       ## $at = 809A0000
/* 005B8 80998D38 240800A0 */  addiu   $t0, $zero, 0x00A0         ## $t0 = 000000A0
/* 005BC 80998D3C A428CCA0 */  sh      $t0, %lo(D_8099CCA0)($at)  
/* 005C0 80998D40 3C01C3C8 */  lui     $at, 0xC3C8                ## $at = C3C80000
/* 005C4 80998D44 44813000 */  mtc1    $at, $f6                   ## $f6 = -400.00
/* 005C8 80998D48 C604002C */  lwc1    $f4, 0x002C($s0)           ## 0000002C
/* 005CC 80998D4C C6100028 */  lwc1    $f16, 0x0028($s0)          ## 00000028
/* 005D0 80998D50 C6080024 */  lwc1    $f8, 0x0024($s0)           ## 00000024
/* 005D4 80998D54 44800000 */  mtc1    $zero, $f0                 ## $f0 = 0.00
/* 005D8 80998D58 E60600BC */  swc1    $f6, 0x00BC($s0)           ## 000000BC
/* 005DC 80998D5C 4600218D */  trunc.w.s $f6, $f4                   
/* 005E0 80998D60 A6000192 */  sh      $zero, 0x0192($s0)         ## 00000192
/* 005E4 80998D64 E60201BC */  swc1    $f2, 0x01BC($s0)           ## 000001BC
/* 005E8 80998D68 4600848D */  trunc.w.s $f18, $f16                 
/* 005EC 80998D6C 44073000 */  mfc1    $a3, $f6                   
/* 005F0 80998D70 E60C0194 */  swc1    $f12, 0x0194($s0)          ## 00000194
/* 005F4 80998D74 4600428D */  trunc.w.s $f10, $f8                  
/* 005F8 80998D78 44069000 */  mfc1    $a2, $f18                  
/* 005FC 80998D7C E60C0198 */  swc1    $f12, 0x0198($s0)          ## 00000198
/* 00600 80998D80 E60001A0 */  swc1    $f0, 0x01A0($s0)           ## 000001A0
/* 00604 80998D84 44055000 */  mfc1    $a1, $f10                  
/* 00608 80998D88 E60001A4 */  swc1    $f0, 0x01A4($s0)           ## 000001A4
/* 0060C 80998D8C E60001A8 */  swc1    $f0, 0x01A8($s0)           ## 000001A8
/* 00610 80998D90 E600019C */  swc1    $f0, 0x019C($s0)           ## 0000019C
/* 00614 80998D94 240C00C8 */  addiu   $t4, $zero, 0x00C8         ## $t4 = 000000C8
/* 00618 80998D98 240D00FF */  addiu   $t5, $zero, 0x00FF         ## $t5 = 000000FF
/* 0061C 80998D9C 240E00FF */  addiu   $t6, $zero, 0x00FF         ## $t6 = 000000FF
/* 00620 80998DA0 240F00FF */  addiu   $t7, $zero, 0x00FF         ## $t7 = 000000FF
/* 00624 80998DA4 00073C00 */  sll     $a3, $a3, 16               
/* 00628 80998DA8 00063400 */  sll     $a2, $a2, 16               
/* 0062C 80998DAC 00052C00 */  sll     $a1, $a1, 16               
/* 00630 80998DB0 00052C03 */  sra     $a1, $a1, 16               
/* 00634 80998DB4 00063403 */  sra     $a2, $a2, 16               
/* 00638 80998DB8 00073C03 */  sra     $a3, $a3, 16               
/* 0063C 80998DBC AFAF001C */  sw      $t7, 0x001C($sp)           
/* 00640 80998DC0 AFAE0018 */  sw      $t6, 0x0018($sp)           
/* 00644 80998DC4 AFAD0014 */  sw      $t5, 0x0014($sp)           
/* 00648 80998DC8 AFAC0010 */  sw      $t4, 0x0010($sp)           
/* 0064C 80998DCC 0C01E763 */  jal     Lights_InitType0PositionalLight
              
/* 00650 80998DD0 260401C8 */  addiu   $a0, $s0, 0x01C8           ## $a0 = 000001C8
/* 00654 80998DD4 C6080024 */  lwc1    $f8, 0x0024($s0)           ## 00000024
/* 00658 80998DD8 C6100028 */  lwc1    $f16, 0x0028($s0)          ## 00000028
/* 0065C 80998DDC C604002C */  lwc1    $f4, 0x002C($s0)           ## 0000002C
/* 00660 80998DE0 4600428D */  trunc.w.s $f10, $f8                  
/* 00664 80998DE4 240900C8 */  addiu   $t1, $zero, 0x00C8         ## $t1 = 000000C8
/* 00668 80998DE8 240A00FF */  addiu   $t2, $zero, 0x00FF         ## $t2 = 000000FF
/* 0066C 80998DEC 4600848D */  trunc.w.s $f18, $f16                 
/* 00670 80998DF0 44055000 */  mfc1    $a1, $f10                  
/* 00674 80998DF4 240B00FF */  addiu   $t3, $zero, 0x00FF         ## $t3 = 000000FF
/* 00678 80998DF8 4600218D */  trunc.w.s $f6, $f4                   
/* 0067C 80998DFC 44069000 */  mfc1    $a2, $f18                  
/* 00680 80998E00 240C00FF */  addiu   $t4, $zero, 0x00FF         ## $t4 = 000000FF
/* 00684 80998E04 00052C00 */  sll     $a1, $a1, 16               
/* 00688 80998E08 44073000 */  mfc1    $a3, $f6                   
/* 0068C 80998E0C 00063400 */  sll     $a2, $a2, 16               
/* 00690 80998E10 00063403 */  sra     $a2, $a2, 16               
/* 00694 80998E14 00073C00 */  sll     $a3, $a3, 16               
/* 00698 80998E18 00073C03 */  sra     $a3, $a3, 16               
/* 0069C 80998E1C 00052C03 */  sra     $a1, $a1, 16               
/* 006A0 80998E20 AFAC001C */  sw      $t4, 0x001C($sp)           
/* 006A4 80998E24 AFAB0018 */  sw      $t3, 0x0018($sp)           
/* 006A8 80998E28 AFAA0014 */  sw      $t2, 0x0014($sp)           
/* 006AC 80998E2C AFA90010 */  sw      $t1, 0x0010($sp)           
/* 006B0 80998E30 0C01E763 */  jal     Lights_InitType0PositionalLight
              
/* 006B4 80998E34 260401DC */  addiu   $a0, $s0, 0x01DC           ## $a0 = 000001DC
/* 006B8 80998E38 3C05809A */  lui     $a1, %hi(func_8099A3A4)    ## $a1 = 809A0000
/* 006BC 80998E3C 24A5A3A4 */  addiu   $a1, $a1, %lo(func_8099A3A4) ## $a1 = 8099A3A4
/* 006C0 80998E40 0C2661E0 */  jal     func_80998780              
/* 006C4 80998E44 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 006C8 80998E48 8FBF002C */  lw      $ra, 0x002C($sp)           
/* 006CC 80998E4C 8FB00028 */  lw      $s0, 0x0028($sp)           
/* 006D0 80998E50 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
/* 006D4 80998E54 03E00008 */  jr      $ra                        
/* 006D8 80998E58 00000000 */  nop


