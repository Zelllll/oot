.late_rodata
glabel D_808C0A84
 .word 0x462AA800
glabel D_808C0A88
 .word 0x3BEA0EA1
glabel D_808C0A8C
 .word 0x3F266666

.text
glabel func_808C012C
/* 00D1C 808C012C 27BDFF20 */  addiu   $sp, $sp, 0xFF20           ## $sp = FFFFFF20
/* 00D20 808C0130 AFBF009C */  sw      $ra, 0x009C($sp)           
/* 00D24 808C0134 AFBE0098 */  sw      $s8, 0x0098($sp)           
/* 00D28 808C0138 AFB70094 */  sw      $s7, 0x0094($sp)           
/* 00D2C 808C013C AFB60090 */  sw      $s6, 0x0090($sp)           
/* 00D30 808C0140 AFB5008C */  sw      $s5, 0x008C($sp)           
/* 00D34 808C0144 AFB40088 */  sw      $s4, 0x0088($sp)           
/* 00D38 808C0148 AFB30084 */  sw      $s3, 0x0084($sp)           
/* 00D3C 808C014C AFB20080 */  sw      $s2, 0x0080($sp)           
/* 00D40 808C0150 AFB1007C */  sw      $s1, 0x007C($sp)           
/* 00D44 808C0154 AFB00078 */  sw      $s0, 0x0078($sp)           
/* 00D48 808C0158 F7BE0070 */  sdc1    $f30, 0x0070($sp)          
/* 00D4C 808C015C F7BC0068 */  sdc1    $f28, 0x0068($sp)          
/* 00D50 808C0160 F7BA0060 */  sdc1    $f26, 0x0060($sp)          
/* 00D54 808C0164 F7B80058 */  sdc1    $f24, 0x0058($sp)          
/* 00D58 808C0168 F7B60050 */  sdc1    $f22, 0x0050($sp)          
/* 00D5C 808C016C F7B40048 */  sdc1    $f20, 0x0048($sp)          
/* 00D60 808C0170 AFA500E4 */  sw      $a1, 0x00E4($sp)           
/* 00D64 808C0174 8482016A */  lh      $v0, 0x016A($a0)           ## 0000016A
/* 00D68 808C0178 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 00D6C 808C017C 24010003 */  addiu   $at, $zero, 0x0003         ## $at = 00000003
/* 00D70 808C0180 10400003 */  beq     $v0, $zero, .L808C0190     
/* 00D74 808C0184 244EFFFF */  addiu   $t6, $v0, 0xFFFF           ## $t6 = FFFFFFFF
/* 00D78 808C0188 A48E016A */  sh      $t6, 0x016A($a0)           ## 0000016A
/* 00D7C 808C018C 8482016A */  lh      $v0, 0x016A($a0)           ## 0000016A
.L808C0190:
/* 00D80 808C0190 14400005 */  bne     $v0, $zero, .L808C01A8     
/* 00D84 808C0194 00000000 */  nop
/* 00D88 808C0198 0C00B55C */  jal     Actor_Kill
              
/* 00D8C 808C019C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00D90 808C01A0 1000009F */  beq     $zero, $zero, .L808C0420   
/* 00D94 808C01A4 8FBF009C */  lw      $ra, 0x009C($sp)           
.L808C01A8:
/* 00D98 808C01A8 0041001A */  div     $zero, $v0, $at            
/* 00D9C 808C01AC 00007810 */  mfhi    $t7                        
/* 00DA0 808C01B0 55E0009B */  bnel    $t7, $zero, .L808C0420     
/* 00DA4 808C01B4 8FBF009C */  lw      $ra, 0x009C($sp)           
/* 00DA8 808C01B8 0C03F66B */  jal     Math_Rand_ZeroOne
              ## Rand.Next() float
/* 00DAC 808C01BC 00000000 */  nop
/* 00DB0 808C01C0 3C01808C */  lui     $at, %hi(D_808C0A84)       ## $at = 808C0000
/* 00DB4 808C01C4 C4240A84 */  lwc1    $f4, %lo(D_808C0A84)($at)  
/* 00DB8 808C01C8 3C01808C */  lui     $at, %hi(D_808C0A88)       ## $at = 808C0000
/* 00DBC 808C01CC C43E0A88 */  lwc1    $f30, %lo(D_808C0A88)($at) 
/* 00DC0 808C01D0 46040182 */  mul.s   $f6, $f0, $f4              
/* 00DC4 808C01D4 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 00DC8 808C01D8 4481E000 */  mtc1    $at, $f28                  ## $f28 = 1.00
/* 00DCC 808C01DC 3C01430C */  lui     $at, 0x430C                ## $at = 430C0000
/* 00DD0 808C01E0 4481D000 */  mtc1    $at, $f26                  ## $f26 = 140.00
/* 00DD4 808C01E4 0000A025 */  or      $s4, $zero, $zero          ## $s4 = 00000000
/* 00DD8 808C01E8 26150008 */  addiu   $s5, $s0, 0x0008           ## $s5 = 00000008
/* 00DDC 808C01EC 4600320D */  trunc.w.s $f8, $f6                   
/* 00DE0 808C01F0 27BE00D4 */  addiu   $s8, $sp, 0x00D4           ## $s8 = FFFFFFF4
/* 00DE4 808C01F4 34178000 */  ori     $s7, $zero, 0x8000         ## $s7 = 00008000
/* 00DE8 808C01F8 27B600C8 */  addiu   $s6, $sp, 0x00C8           ## $s6 = FFFFFFE8
/* 00DEC 808C01FC 44134000 */  mfc1    $s3, $f8                   
/* 00DF0 808C0200 00000000 */  nop
/* 00DF4 808C0204 00139C00 */  sll     $s3, $s3, 16               
/* 00DF8 808C0208 00139C03 */  sra     $s3, $s3, 16               
.L808C020C:
/* 00DFC 808C020C 3C014620 */  lui     $at, 0x4620                ## $at = 46200000
/* 00E00 808C0210 44816000 */  mtc1    $at, $f12                  ## $f12 = 10240.00
/* 00E04 808C0214 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 00E08 808C0218 00000000 */  nop
/* 00E0C 808C021C 44935000 */  mtc1    $s3, $f10                  ## $f10 = 0.00
/* 00E10 808C0220 00000000 */  nop
/* 00E14 808C0224 46805420 */  cvt.s.w $f16, $f10                 
/* 00E18 808C0228 46100480 */  add.s   $f18, $f0, $f16            
/* 00E1C 808C022C 4600910D */  trunc.w.s $f4, $f18                  
/* 00E20 808C0230 44022000 */  mfc1    $v0, $f4                   
/* 00E24 808C0234 00000000 */  nop
/* 00E28 808C0238 00029400 */  sll     $s2, $v0, 16               
/* 00E2C 808C023C 00022400 */  sll     $a0, $v0, 16               
/* 00E30 808C0240 00129403 */  sra     $s2, $s2, 16               
/* 00E34 808C0244 0C01DE1C */  jal     Math_Sins
              ## sins?
/* 00E38 808C0248 00042403 */  sra     $a0, $a0, 16               
/* 00E3C 808C024C 00122400 */  sll     $a0, $s2, 16               
/* 00E40 808C0250 46000506 */  mov.s   $f20, $f0                  
/* 00E44 808C0254 0C01DE0D */  jal     Math_Coss
              ## coss?
/* 00E48 808C0258 00042403 */  sra     $a0, $a0, 16               
/* 00E4C 808C025C 46000586 */  mov.s   $f22, $f0                  
/* 00E50 808C0260 0C01DE0D */  jal     Math_Coss
              ## coss?
/* 00E54 808C0264 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 00E58 808C0268 46140602 */  mul.s   $f24, $f0, $f20            
/* 00E5C 808C026C 0C01DE1C */  jal     Math_Sins
              ## sins?
/* 00E60 808C0270 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 00E64 808C0274 4600A502 */  mul.s   $f20, $f20, $f0            
/* 00E68 808C0278 4616E480 */  add.s   $f18, $f28, $f22           
/* 00E6C 808C027C C6060024 */  lwc1    $f6, 0x0024($s0)           ## 00000024
/* 00E70 808C0280 4618D202 */  mul.s   $f8, $f26, $f24            
/* 00E74 808C0284 02A02025 */  or      $a0, $s5, $zero            ## $a0 = 00000008
/* 00E78 808C0288 02C02825 */  or      $a1, $s6, $zero            ## $a1 = FFFFFFE8
/* 00E7C 808C028C 4612D102 */  mul.s   $f4, $f26, $f18            
/* 00E80 808C0290 46083280 */  add.s   $f10, $f6, $f8             
/* 00E84 808C0294 E7AA00C8 */  swc1    $f10, 0x00C8($sp)          
/* 00E88 808C0298 C6100028 */  lwc1    $f16, 0x0028($s0)          ## 00000028
/* 00E8C 808C029C 4614D282 */  mul.s   $f10, $f26, $f20           
/* 00E90 808C02A0 46048180 */  add.s   $f6, $f16, $f4             
/* 00E94 808C02A4 E7A600CC */  swc1    $f6, 0x00CC($sp)           
/* 00E98 808C02A8 C608002C */  lwc1    $f8, 0x002C($s0)           ## 0000002C
/* 00E9C 808C02AC 460A4481 */  sub.s   $f18, $f8, $f10            
/* 00EA0 808C02B0 0C01DFE4 */  jal     Math_Vec3f_DistXYZ
              
/* 00EA4 808C02B4 E7B200D0 */  swc1    $f18, 0x00D0($sp)          
/* 00EA8 808C02B8 461E0302 */  mul.s   $f12, $f0, $f30            
/* 00EAC 808C02BC 3C01808C */  lui     $at, %hi(D_808C0A8C)       ## $at = 808C0000
/* 00EB0 808C02C0 C4300A8C */  lwc1    $f16, %lo(D_808C0A8C)($at) 
/* 00EB4 808C02C4 02578821 */  addu    $s1, $s2, $s7              
/* 00EB8 808C02C8 00118C00 */  sll     $s1, $s1, 16               
/* 00EBC 808C02CC 00118C03 */  sra     $s1, $s1, 16               
/* 00EC0 808C02D0 00112400 */  sll     $a0, $s1, 16               
/* 00EC4 808C02D4 4610603C */  c.lt.s  $f12, $f16                 
/* 00EC8 808C02D8 00000000 */  nop
/* 00ECC 808C02DC 45020021 */  bc1fl   .L808C0364                 
/* 00ED0 808C02E0 3C0140D0 */  lui     $at, 0x40D0                ## $at = 40D00000
/* 00ED4 808C02E4 0C01DE1C */  jal     Math_Sins
              ## sins?
/* 00ED8 808C02E8 00042403 */  sra     $a0, $a0, 16               
/* 00EDC 808C02EC 00112400 */  sll     $a0, $s1, 16               
/* 00EE0 808C02F0 46000506 */  mov.s   $f20, $f0                  
/* 00EE4 808C02F4 0C01DE0D */  jal     Math_Coss
              ## coss?
/* 00EE8 808C02F8 00042403 */  sra     $a0, $a0, 16               
/* 00EEC 808C02FC 46000586 */  mov.s   $f22, $f0                  
/* 00EF0 808C0300 0C01DE0D */  jal     Math_Coss
              ## coss?
/* 00EF4 808C0304 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 00EF8 808C0308 46140602 */  mul.s   $f24, $f0, $f20            
/* 00EFC 808C030C 0C01DE1C */  jal     Math_Sins
              ## sins?
/* 00F00 808C0310 860400B6 */  lh      $a0, 0x00B6($s0)           ## 000000B6
/* 00F04 808C0314 4600A502 */  mul.s   $f20, $f20, $f0            
/* 00F08 808C0318 4616E480 */  add.s   $f18, $f28, $f22           
/* 00F0C 808C031C C6040024 */  lwc1    $f4, 0x0024($s0)           ## 00000024
/* 00F10 808C0320 4618D182 */  mul.s   $f6, $f26, $f24            
/* 00F14 808C0324 02A02025 */  or      $a0, $s5, $zero            ## $a0 = 00000008
/* 00F18 808C0328 02C02825 */  or      $a1, $s6, $zero            ## $a1 = FFFFFFE8
/* 00F1C 808C032C 4612D402 */  mul.s   $f16, $f26, $f18           
/* 00F20 808C0330 46062200 */  add.s   $f8, $f4, $f6              
/* 00F24 808C0334 E7A800C8 */  swc1    $f8, 0x00C8($sp)           
/* 00F28 808C0338 C60A0028 */  lwc1    $f10, 0x0028($s0)          ## 00000028
/* 00F2C 808C033C 4614D202 */  mul.s   $f8, $f26, $f20            
/* 00F30 808C0340 46105100 */  add.s   $f4, $f10, $f16            
/* 00F34 808C0344 E7A400CC */  swc1    $f4, 0x00CC($sp)           
/* 00F38 808C0348 C606002C */  lwc1    $f6, 0x002C($s0)           ## 0000002C
/* 00F3C 808C034C 46083481 */  sub.s   $f18, $f6, $f8             
/* 00F40 808C0350 0C01DFE4 */  jal     Math_Vec3f_DistXYZ
              
/* 00F44 808C0354 E7B200D0 */  swc1    $f18, 0x00D0($sp)          
/* 00F48 808C0358 461E0302 */  mul.s   $f12, $f0, $f30            
/* 00F4C 808C035C 00000000 */  nop
/* 00F50 808C0360 3C0140D0 */  lui     $at, 0x40D0                ## $at = 40D00000
.L808C0364:
/* 00F54 808C0364 44810000 */  mtc1    $at, $f0                   ## $f0 = 6.50
/* 00F58 808C0368 3C01C0D0 */  lui     $at, 0xC0D0                ## $at = C0D00000
/* 00F5C 808C036C 44814000 */  mtc1    $at, $f8                   ## $f8 = -6.50
/* 00F60 808C0370 46180282 */  mul.s   $f10, $f0, $f24            
/* 00F64 808C0374 3C07808C */  lui     $a3, %hi(D_808C09DC)       ## $a3 = 808C0000
/* 00F68 808C0378 24080050 */  addiu   $t0, $zero, 0x0050         ## $t0 = 00000050
/* 00F6C 808C037C 24090006 */  addiu   $t1, $zero, 0x0006         ## $t1 = 00000006
/* 00F70 808C0380 240A00FF */  addiu   $t2, $zero, 0x00FF         ## $t2 = 000000FF
/* 00F74 808C0384 240B00FF */  addiu   $t3, $zero, 0x00FF         ## $t3 = 000000FF
/* 00F78 808C0388 240C0096 */  addiu   $t4, $zero, 0x0096         ## $t4 = 00000096
/* 00F7C 808C038C 460C5402 */  mul.s   $f16, $f10, $f12           
/* 00F80 808C0390 240D00AA */  addiu   $t5, $zero, 0x00AA         ## $t5 = 000000AA
/* 00F84 808C0394 240E00FF */  addiu   $t6, $zero, 0x00FF         ## $t6 = 000000FF
/* 00F88 808C0398 46160102 */  mul.s   $f4, $f0, $f22             
/* 00F8C 808C039C 240F0001 */  addiu   $t7, $zero, 0x0001         ## $t7 = 00000001
/* 00F90 808C03A0 2418000E */  addiu   $t8, $zero, 0x000E         ## $t8 = 0000000E
/* 00F94 808C03A4 24190001 */  addiu   $t9, $zero, 0x0001         ## $t9 = 00000001
/* 00F98 808C03A8 E7B000D4 */  swc1    $f16, 0x00D4($sp)          
/* 00F9C 808C03AC AFB9003C */  sw      $t9, 0x003C($sp)           
/* 00FA0 808C03B0 AFB80038 */  sw      $t8, 0x0038($sp)           
/* 00FA4 808C03B4 460C2182 */  mul.s   $f6, $f4, $f12             
/* 00FA8 808C03B8 AFAF0034 */  sw      $t7, 0x0034($sp)           
/* 00FAC 808C03BC AFAE0028 */  sw      $t6, 0x0028($sp)           
/* 00FB0 808C03C0 46144482 */  mul.s   $f18, $f8, $f20            
/* 00FB4 808C03C4 AFAD0024 */  sw      $t5, 0x0024($sp)           
/* 00FB8 808C03C8 AFAC0020 */  sw      $t4, 0x0020($sp)           
/* 00FBC 808C03CC AFAB001C */  sw      $t3, 0x001C($sp)           
/* 00FC0 808C03D0 E7A600D8 */  swc1    $f6, 0x00D8($sp)           
/* 00FC4 808C03D4 AFAA0018 */  sw      $t2, 0x0018($sp)           
/* 00FC8 808C03D8 AFA90014 */  sw      $t1, 0x0014($sp)           
/* 00FCC 808C03DC 460C9282 */  mul.s   $f10, $f18, $f12           
/* 00FD0 808C03E0 AFA80010 */  sw      $t0, 0x0010($sp)           
/* 00FD4 808C03E4 24E709DC */  addiu   $a3, $a3, %lo(D_808C09DC)  ## $a3 = 808C09DC
/* 00FD8 808C03E8 8FA400E4 */  lw      $a0, 0x00E4($sp)           
/* 00FDC 808C03EC 02A02825 */  or      $a1, $s5, $zero            ## $a1 = 00000008
/* 00FE0 808C03F0 03C03025 */  or      $a2, $s8, $zero            ## $a2 = FFFFFFF4
/* 00FE4 808C03F4 AFA0002C */  sw      $zero, 0x002C($sp)         
/* 00FE8 808C03F8 E7AA00DC */  swc1    $f10, 0x00DC($sp)          
/* 00FEC 808C03FC 0C00A9AE */  jal     EffectSsDeadDb_Spawn              
/* 00FF0 808C0400 AFA00030 */  sw      $zero, 0x0030($sp)         
/* 00FF4 808C0404 26732AAA */  addiu   $s3, $s3, 0x2AAA           ## $s3 = 00002AAA
/* 00FF8 808C0408 26940001 */  addiu   $s4, $s4, 0x0001           ## $s4 = 00000001
/* 00FFC 808C040C 24010006 */  addiu   $at, $zero, 0x0006         ## $at = 00000006
/* 01000 808C0410 00139C00 */  sll     $s3, $s3, 16               
/* 01004 808C0414 1681FF7D */  bne     $s4, $at, .L808C020C       
/* 01008 808C0418 00139C03 */  sra     $s3, $s3, 16               
/* 0100C 808C041C 8FBF009C */  lw      $ra, 0x009C($sp)           
.L808C0420:
/* 01010 808C0420 D7B40048 */  ldc1    $f20, 0x0048($sp)          
/* 01014 808C0424 D7B60050 */  ldc1    $f22, 0x0050($sp)          
/* 01018 808C0428 D7B80058 */  ldc1    $f24, 0x0058($sp)          
/* 0101C 808C042C D7BA0060 */  ldc1    $f26, 0x0060($sp)          
/* 01020 808C0430 D7BC0068 */  ldc1    $f28, 0x0068($sp)          
/* 01024 808C0434 D7BE0070 */  ldc1    $f30, 0x0070($sp)          
/* 01028 808C0438 8FB00078 */  lw      $s0, 0x0078($sp)           
/* 0102C 808C043C 8FB1007C */  lw      $s1, 0x007C($sp)           
/* 01030 808C0440 8FB20080 */  lw      $s2, 0x0080($sp)           
/* 01034 808C0444 8FB30084 */  lw      $s3, 0x0084($sp)           
/* 01038 808C0448 8FB40088 */  lw      $s4, 0x0088($sp)           
/* 0103C 808C044C 8FB5008C */  lw      $s5, 0x008C($sp)           
/* 01040 808C0450 8FB60090 */  lw      $s6, 0x0090($sp)           
/* 01044 808C0454 8FB70094 */  lw      $s7, 0x0094($sp)           
/* 01048 808C0458 8FBE0098 */  lw      $s8, 0x0098($sp)           
/* 0104C 808C045C 03E00008 */  jr      $ra                        
/* 01050 808C0460 27BD00E0 */  addiu   $sp, $sp, 0x00E0           ## $sp = 00000000
