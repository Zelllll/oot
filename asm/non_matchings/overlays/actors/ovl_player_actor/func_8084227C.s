glabel func_8084227C
/* 1006C 8084227C 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 10070 80842280 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 10074 80842284 AFB00020 */  sw      $s0, 0x0020($sp)           
/* 10078 80842288 AFA50034 */  sw      $a1, 0x0034($sp)           
/* 1007C 8084228C 8C8E0680 */  lw      $t6, 0x0680($a0)           ## 00000680
/* 10080 80842290 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 10084 80842294 35CF0020 */  ori     $t7, $t6, 0x0020           ## $t7 = 00000020
/* 10088 80842298 AC8F0680 */  sw      $t7, 0x0680($a0)           ## 00000680
/* 1008C 8084229C 0C2107B9 */  jal     func_80841EE4              
/* 10090 808422A0 8FA50034 */  lw      $a1, 0x0034($sp)           
/* 10094 808422A4 3C068085 */  lui     $a2, %hi(D_80854430)       ## $a2 = 80850000
/* 10098 808422A8 24C64430 */  addiu   $a2, $a2, %lo(D_80854430)  ## $a2 = 80854430
/* 1009C 808422AC 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 100A0 808422B0 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 100A4 808422B4 0C20DCD2 */  jal     func_80837348              
/* 100A8 808422B8 24070001 */  addiu   $a3, $zero, 0x0001         ## $a3 = 00000001
/* 100AC 808422BC 54400047 */  bnel    $v0, $zero, .L808423DC     
/* 100B0 808422C0 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 100B4 808422C4 0C20CF01 */  jal     func_80833C04              
/* 100B8 808422C8 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 100BC 808422CC 14400006 */  bne     $v0, $zero, .L808422E8     
/* 100C0 808422D0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 100C4 808422D4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 100C8 808422D8 0C20F216 */  jal     func_8083C858              
/* 100CC 808422DC 8FA50034 */  lw      $a1, 0x0034($sp)           
/* 100D0 808422E0 1000003E */  beq     $zero, $zero, .L808423DC   
/* 100D4 808422E4 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L808422E8:
/* 100D8 808422E8 8FB80034 */  lw      $t8, 0x0034($sp)           
/* 100DC 808422EC 27A5002C */  addiu   $a1, $sp, 0x002C           ## $a1 = FFFFFFFC
/* 100E0 808422F0 27A6002A */  addiu   $a2, $sp, 0x002A           ## $a2 = FFFFFFFA
/* 100E4 808422F4 24070000 */  addiu   $a3, $zero, 0x0000         ## $a3 = 00000000
/* 100E8 808422F8 0C20DC9A */  jal     func_80837268              
/* 100EC 808422FC AFB80010 */  sw      $t8, 0x0010($sp)           
/* 100F0 80842300 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 100F4 80842304 27A5002C */  addiu   $a1, $sp, 0x002C           ## $a1 = FFFFFFFC
/* 100F8 80842308 0C20F121 */  jal     func_8083C484              
/* 100FC 8084230C 27A6002A */  addiu   $a2, $sp, 0x002A           ## $a2 = FFFFFFFA
/* 10100 80842310 54400032 */  bnel    $v0, $zero, .L808423DC     
/* 10104 80842314 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 10108 80842318 0C20CECB */  jal     func_80833B2C              
/* 1010C 8084231C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 10110 80842320 1040000C */  beq     $v0, $zero, .L80842354     
/* 10114 80842324 C7A4002C */  lwc1    $f4, 0x002C($sp)           
/* 10118 80842328 44803000 */  mtc1    $zero, $f6                 ## $f6 = 0.00
/* 1011C 8084232C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 10120 80842330 27A5002C */  addiu   $a1, $sp, 0x002C           ## $a1 = FFFFFFFC
/* 10124 80842334 46062032 */  c.eq.s  $f4, $f6                   
/* 10128 80842338 27A6002A */  addiu   $a2, $sp, 0x002A           ## $a2 = FFFFFFFA
/* 1012C 8084233C 45010005 */  bc1t    .L80842354                 
/* 10130 80842340 00000000 */  nop
/* 10134 80842344 0C20FF5E */  jal     func_8083FD78              
/* 10138 80842348 8FA70034 */  lw      $a3, 0x0034($sp)           
/* 1013C 8084234C 5840000A */  blezl   $v0, .L80842378            
/* 10140 80842350 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80842354:
/* 10144 80842354 0C20CECB */  jal     func_80833B2C              
/* 10148 80842358 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 1014C 8084235C 1440000A */  bne     $v0, $zero, .L80842388     
/* 10150 80842360 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 10154 80842364 8FA5002C */  lw      $a1, 0x002C($sp)           
/* 10158 80842368 0C20FF1A */  jal     func_8083FC68              
/* 1015C 8084236C 87A6002A */  lh      $a2, 0x002A($sp)           
/* 10160 80842370 1C400005 */  bgtz    $v0, .L80842388            
/* 10164 80842374 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80842378:
/* 10168 80842378 0C20E7E4 */  jal     func_80839F90              
/* 1016C 8084237C 8FA50034 */  lw      $a1, 0x0034($sp)           
/* 10170 80842380 10000016 */  beq     $zero, $zero, .L808423DC   
/* 10174 80842384 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80842388:
/* 10178 80842388 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 1017C 8084238C 8FA5002C */  lw      $a1, 0x002C($sp)           
/* 10180 80842390 0C20F7DA */  jal     func_8083DF68              
/* 10184 80842394 87A6002A */  lh      $a2, 0x002A($sp)           
/* 10188 80842398 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 1018C 8084239C 0C20F772 */  jal     func_8083DDC8              
/* 10190 808423A0 8FA50034 */  lw      $a1, 0x0034($sp)           
/* 10194 808423A4 44800000 */  mtc1    $zero, $f0                 ## $f0 = 0.00
/* 10198 808423A8 C6080838 */  lwc1    $f8, 0x0838($s0)           ## 00000838
/* 1019C 808423AC C7AA002C */  lwc1    $f10, 0x002C($sp)          
/* 101A0 808423B0 46080032 */  c.eq.s  $f0, $f8                   
/* 101A4 808423B4 00000000 */  nop
/* 101A8 808423B8 45020008 */  bc1fl   .L808423DC                 
/* 101AC 808423BC 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 101B0 808423C0 46005032 */  c.eq.s  $f10, $f0                  
/* 101B4 808423C4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 101B8 808423C8 45020004 */  bc1fl   .L808423DC                 
/* 101BC 808423CC 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 101C0 808423D0 0C20E7E4 */  jal     func_80839F90              
/* 101C4 808423D4 8FA50034 */  lw      $a1, 0x0034($sp)           
/* 101C8 808423D8 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L808423DC:
/* 101CC 808423DC 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 101D0 808423E0 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 101D4 808423E4 03E00008 */  jr      $ra                        
/* 101D8 808423E8 00000000 */  nop
