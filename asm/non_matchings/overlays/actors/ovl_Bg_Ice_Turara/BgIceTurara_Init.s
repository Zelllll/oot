glabel BgIceTurara_Init
/* 00000 80891F20 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 00004 80891F24 AFA50034 */  sw      $a1, 0x0034($sp)           
/* 00008 80891F28 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 0000C 80891F2C AFB00018 */  sw      $s0, 0x0018($sp)           
/* 00010 80891F30 3C058089 */  lui     $a1, %hi(D_8089266C)       ## $a1 = 80890000
/* 00014 80891F34 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 00018 80891F38 AFA00024 */  sw      $zero, 0x0024($sp)         
/* 0001C 80891F3C 0C01E037 */  jal     Actor_ProcessInitChain
              
/* 00020 80891F40 24A5266C */  addiu   $a1, $a1, %lo(D_8089266C)  ## $a1 = 8089266C
/* 00024 80891F44 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00028 80891F48 0C010D20 */  jal     DynaPolyInfo_SetActorMove
              
/* 0002C 80891F4C 00002825 */  or      $a1, $zero, $zero          ## $a1 = 00000000
/* 00030 80891F50 3C040600 */  lui     $a0, 0x0600                ## $a0 = 06000000
/* 00034 80891F54 24842594 */  addiu   $a0, $a0, 0x2594           ## $a0 = 06002594
/* 00038 80891F58 0C010620 */  jal     DynaPolyInfo_Alloc
              
/* 0003C 80891F5C 27A50024 */  addiu   $a1, $sp, 0x0024           ## $a1 = FFFFFFF4
/* 00040 80891F60 2605016C */  addiu   $a1, $s0, 0x016C           ## $a1 = 0000016C
/* 00044 80891F64 AFA50020 */  sw      $a1, 0x0020($sp)           
/* 00048 80891F68 0C0170D9 */  jal     Collider_InitCylinder
              
/* 0004C 80891F6C 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 00050 80891F70 3C078089 */  lui     $a3, %hi(D_80892620)       ## $a3 = 80890000
/* 00054 80891F74 24E72620 */  addiu   $a3, $a3, %lo(D_80892620)  ## $a3 = 80892620
/* 00058 80891F78 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 0005C 80891F7C 8FA50020 */  lw      $a1, 0x0020($sp)           
/* 00060 80891F80 0C01712B */  jal     Collider_SetCylinder
              
/* 00064 80891F84 02003025 */  or      $a2, $s0, $zero            ## $a2 = 00000000
/* 00068 80891F88 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0006C 80891F8C 0C0189B7 */  jal     Collider_CylinderUpdate
              
/* 00070 80891F90 8FA50020 */  lw      $a1, 0x0020($sp)           
/* 00074 80891F94 8FA40034 */  lw      $a0, 0x0034($sp)           
/* 00078 80891F98 02003025 */  or      $a2, $s0, $zero            ## $a2 = 00000000
/* 0007C 80891F9C 8FA70024 */  lw      $a3, 0x0024($sp)           
/* 00080 80891FA0 0C00FA9D */  jal     DynaPolyInfo_RegisterActor
              ## DynaPolyInfo_setActor
/* 00084 80891FA4 24850810 */  addiu   $a1, $a0, 0x0810           ## $a1 = 00000810
/* 00088 80891FA8 860F001C */  lh      $t7, 0x001C($s0)           ## 0000001C
/* 0008C 80891FAC AE02014C */  sw      $v0, 0x014C($s0)           ## 0000014C
/* 00090 80891FB0 24198000 */  addiu   $t9, $zero, 0x8000         ## $t9 = FFFF8000
/* 00094 80891FB4 15E00005 */  bne     $t7, $zero, .L80891FCC     
/* 00098 80891FB8 3C014496 */  lui     $at, 0x4496                ## $at = 44960000
/* 0009C 80891FBC 3C188089 */  lui     $t8, %hi(func_80892220)    ## $t8 = 80890000
/* 000A0 80891FC0 27182220 */  addiu   $t8, $t8, %lo(func_80892220) ## $t8 = 80892220
/* 000A4 80891FC4 10000007 */  beq     $zero, $zero, .L80891FE4   
/* 000A8 80891FC8 AE180164 */  sw      $t8, 0x0164($s0)           ## 00000164
.L80891FCC:
/* 000AC 80891FCC 44812000 */  mtc1    $at, $f4                   ## $f4 = 1200.00
/* 000B0 80891FD0 3C088089 */  lui     $t0, %hi(func_80892280)    ## $t0 = 80890000
/* 000B4 80891FD4 25082280 */  addiu   $t0, $t0, %lo(func_80892280) ## $t0 = 80892280
/* 000B8 80891FD8 A61900B4 */  sh      $t9, 0x00B4($s0)           ## 000000B4
/* 000BC 80891FDC AE080164 */  sw      $t0, 0x0164($s0)           ## 00000164
/* 000C0 80891FE0 E60400BC */  swc1    $f4, 0x00BC($s0)           ## 000000BC
.L80891FE4:
/* 000C4 80891FE4 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 000C8 80891FE8 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 000CC 80891FEC 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 000D0 80891FF0 03E00008 */  jr      $ra                        
/* 000D4 80891FF4 00000000 */  nop
