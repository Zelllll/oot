.late_rodata
glabel D_808B46FC
 .word 0xBA83126F

.text
glabel func_808B3CA0
/* 00340 808B3CA0 27BDFFB8 */  addiu   $sp, $sp, 0xFFB8           ## $sp = FFFFFFB8
/* 00344 808B3CA4 AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 00348 808B3CA8 AFB00020 */  sw      $s0, 0x0020($sp)           
/* 0034C 808B3CAC 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 00350 808B3CB0 AFA5004C */  sw      $a1, 0x004C($sp)           
/* 00354 808B3CB4 0C22CE8D */  jal     func_808B3A34              
/* 00358 808B3CB8 AFA60050 */  sw      $a2, 0x0050($sp)           
/* 0035C 808B3CBC 3C014120 */  lui     $at, 0x4120                ## $at = 41200000
/* 00360 808B3CC0 44810000 */  mtc1    $at, $f0                   ## $f0 = 10.00
/* 00364 808B3CC4 8FAE0050 */  lw      $t6, 0x0050($sp)           
/* 00368 808B3CC8 C6060050 */  lwc1    $f6, 0x0050($s0)           ## 00000050
/* 0036C 808B3CCC 3C18808B */  lui     $t8, %hi(D_808B45DC)       ## $t8 = 808B0000
/* 00370 808B3CD0 000E7880 */  sll     $t7, $t6,  2               
/* 00374 808B3CD4 46003202 */  mul.s   $f8, $f6, $f0              
/* 00378 808B3CD8 01EE7823 */  subu    $t7, $t7, $t6              
/* 0037C 808B3CDC 000F7880 */  sll     $t7, $t7,  2               
/* 00380 808B3CE0 271845DC */  addiu   $t8, $t8, %lo(D_808B45DC)  ## $t8 = 808B45DC
/* 00384 808B3CE4 01F81021 */  addu    $v0, $t7, $t8              
/* 00388 808B3CE8 C4440000 */  lwc1    $f4, 0x0000($v0)           ## 00000000
/* 0038C 808B3CEC C4500004 */  lwc1    $f16, 0x0004($v0)          ## 00000004
/* 00390 808B3CF0 27A40038 */  addiu   $a0, $sp, 0x0038           ## $a0 = FFFFFFF0
/* 00394 808B3CF4 46082282 */  mul.s   $f10, $f4, $f8             
/* 00398 808B3CF8 C4480008 */  lwc1    $f8, 0x0008($v0)           ## 00000008
/* 0039C 808B3CFC 27A5002C */  addiu   $a1, $sp, 0x002C           ## $a1 = FFFFFFE4
/* 003A0 808B3D00 E7AA002C */  swc1    $f10, 0x002C($sp)          
/* 003A4 808B3D04 C6120054 */  lwc1    $f18, 0x0054($s0)          ## 00000054
/* 003A8 808B3D08 46009182 */  mul.s   $f6, $f18, $f0             
/* 003AC 808B3D0C 00000000 */  nop
/* 003B0 808B3D10 46068102 */  mul.s   $f4, $f16, $f6             
/* 003B4 808B3D14 E7A40030 */  swc1    $f4, 0x0030($sp)           
/* 003B8 808B3D18 C60A0058 */  lwc1    $f10, 0x0058($s0)          ## 00000058
/* 003BC 808B3D1C 46005482 */  mul.s   $f18, $f10, $f0            
/* 003C0 808B3D20 00000000 */  nop
/* 003C4 808B3D24 46124402 */  mul.s   $f16, $f8, $f18            
/* 003C8 808B3D28 E7B00034 */  swc1    $f16, 0x0034($sp)          
/* 003CC 808B3D2C 8E070170 */  lw      $a3, 0x0170($s0)           ## 00000170
/* 003D0 808B3D30 0C22CE7A */  jal     func_808B39E8              
/* 003D4 808B3D34 8E06016C */  lw      $a2, 0x016C($s0)           ## 0000016C
/* 003D8 808B3D38 C7A60038 */  lwc1    $f6, 0x0038($sp)           
/* 003DC 808B3D3C C6040024 */  lwc1    $f4, 0x0024($s0)           ## 00000024
/* 003E0 808B3D40 C7A8003C */  lwc1    $f8, 0x003C($sp)           
/* 003E4 808B3D44 8FA4004C */  lw      $a0, 0x004C($sp)           
/* 003E8 808B3D48 46043280 */  add.s   $f10, $f6, $f4             
/* 003EC 808B3D4C C7A60040 */  lwc1    $f6, 0x0040($sp)           
/* 003F0 808B3D50 27B90038 */  addiu   $t9, $sp, 0x0038           ## $t9 = FFFFFFF0
/* 003F4 808B3D54 26050078 */  addiu   $a1, $s0, 0x0078           ## $a1 = 00000078
/* 003F8 808B3D58 E7AA0038 */  swc1    $f10, 0x0038($sp)          
/* 003FC 808B3D5C C6120104 */  lwc1    $f18, 0x0104($s0)          ## 00000104
/* 00400 808B3D60 26060180 */  addiu   $a2, $s0, 0x0180           ## $a2 = 00000180
/* 00404 808B3D64 02003825 */  or      $a3, $s0, $zero            ## $a3 = 00000000
/* 00408 808B3D68 46124400 */  add.s   $f16, $f8, $f18            
/* 0040C 808B3D6C 44804000 */  mtc1    $zero, $f8                 ## $f8 = 0.00
/* 00410 808B3D70 248407C0 */  addiu   $a0, $a0, 0x07C0           ## $a0 = 000007C0
/* 00414 808B3D74 E7B0003C */  swc1    $f16, 0x003C($sp)          
/* 00418 808B3D78 C604002C */  lwc1    $f4, 0x002C($s0)           ## 0000002C
/* 0041C 808B3D7C AFB90010 */  sw      $t9, 0x0010($sp)           
/* 00420 808B3D80 E7A80014 */  swc1    $f8, 0x0014($sp)           
/* 00424 808B3D84 46043280 */  add.s   $f10, $f6, $f4             
/* 00428 808B3D88 0C00F299 */  jal     func_8003CA64              
/* 0042C 808B3D8C E7AA0040 */  swc1    $f10, 0x0040($sp)          
/* 00430 808B3D90 C6120028 */  lwc1    $f18, 0x0028($s0)          ## 00000028
/* 00434 808B3D94 E6000080 */  swc1    $f0, 0x0080($s0)           ## 00000080
/* 00438 808B3D98 3C01808B */  lui     $at, %hi(D_808B46FC)       ## $at = 808B0000
/* 0043C 808B3D9C 46120401 */  sub.s   $f16, $f0, $f18            
/* 00440 808B3DA0 C42646FC */  lwc1    $f6, %lo(D_808B46FC)($at)  
/* 00444 808B3DA4 00001025 */  or      $v0, $zero, $zero          ## $v0 = 00000000
/* 00448 808B3DA8 4610303E */  c.le.s  $f6, $f16                  
/* 0044C 808B3DAC 00000000 */  nop
/* 00450 808B3DB0 45000005 */  bc1f    .L808B3DC8                 
/* 00454 808B3DB4 00000000 */  nop
/* 00458 808B3DB8 C6040080 */  lwc1    $f4, 0x0080($s0)           ## 00000080
/* 0045C 808B3DBC 24020001 */  addiu   $v0, $zero, 0x0001         ## $v0 = 00000001
/* 00460 808B3DC0 10000001 */  beq     $zero, $zero, .L808B3DC8   
/* 00464 808B3DC4 E6040028 */  swc1    $f4, 0x0028($s0)           ## 00000028
.L808B3DC8:
/* 00468 808B3DC8 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 0046C 808B3DCC 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 00470 808B3DD0 27BD0048 */  addiu   $sp, $sp, 0x0048           ## $sp = 00000000
/* 00474 808B3DD4 03E00008 */  jr      $ra                        
/* 00478 808B3DD8 00000000 */  nop
