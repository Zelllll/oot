glabel func_80B588E8
/* 05538 80B588E8 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 0553C 80B588EC AFA50024 */  sw      $a1, 0x0024($sp)           
/* 05540 80B588F0 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 05544 80B588F4 3C050601 */  lui     $a1, 0x0601                ## $a1 = 06010000
/* 05548 80B588F8 AFA40020 */  sw      $a0, 0x0020($sp)           
/* 0554C 80B588FC 24A59BE4 */  addiu   $a1, $a1, 0x9BE4           ## $a1 = 06009BE4
/* 05550 80B58900 AFA00010 */  sw      $zero, 0x0010($sp)         
/* 05554 80B58904 00003025 */  or      $a2, $zero, $zero          ## $a2 = 00000000
/* 05558 80B58908 0C2D5385 */  jal     func_80B54E14              
/* 0555C 80B5890C 3C07C100 */  lui     $a3, 0xC100                ## $a3 = C1000000
/* 05560 80B58910 8FA40020 */  lw      $a0, 0x0020($sp)           
/* 05564 80B58914 0C2D5EB8 */  jal     func_80B57AE0              
/* 05568 80B58918 8FA50024 */  lw      $a1, 0x0024($sp)           
/* 0556C 80B5891C 8FAF0020 */  lw      $t7, 0x0020($sp)           
/* 05570 80B58920 240E0027 */  addiu   $t6, $zero, 0x0027         ## $t6 = 00000027
/* 05574 80B58924 ADEE024C */  sw      $t6, 0x024C($t7)           ## 0000024C
/* 05578 80B58928 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 0557C 80B5892C 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 05580 80B58930 03E00008 */  jr      $ra                        
/* 05584 80B58934 00000000 */  nop
