glabel func_80987018
/* 02438 80987018 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 0243C 8098701C AFA50024 */  sw      $a1, 0x0024($sp)           
/* 02440 80987020 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 02444 80987024 3C050600 */  lui     $a1, 0x0600                ## $a1 = 06000000
/* 02448 80987028 24A51868 */  addiu   $a1, $a1, 0x1868           ## $a1 = 06001868
/* 0244C 8098702C AFA00010 */  sw      $zero, 0x0010($sp)         
/* 02450 80987030 AFA40020 */  sw      $a0, 0x0020($sp)           
/* 02454 80987034 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 02458 80987038 0C2614A0 */  jal     func_80985280              
/* 0245C 8098703C 24070000 */  addiu   $a3, $zero, 0x0000         ## $a3 = 00000000
/* 02460 80987040 8FA40020 */  lw      $a0, 0x0020($sp)           
/* 02464 80987044 240E001B */  addiu   $t6, $zero, 0x001B         ## $t6 = 0000001B
/* 02468 80987048 AC8E0260 */  sw      $t6, 0x0260($a0)           ## 00000260
/* 0246C 8098704C AC800264 */  sw      $zero, 0x0264($a0)         ## 00000264
/* 02470 80987050 A08000C8 */  sb      $zero, 0x00C8($a0)         ## 000000C8
/* 02474 80987054 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 02478 80987058 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 0247C 8098705C 03E00008 */  jr      $ra                        
/* 02480 80987060 00000000 */  nop
