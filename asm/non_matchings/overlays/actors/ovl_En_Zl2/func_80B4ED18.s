glabel func_80B4ED18
/* 00388 80B4ED18 AFA50004 */  sw      $a1, 0x0004($sp)           
/* 0038C 80B4ED1C 00052C00 */  sll     $a1, $a1, 16               
/* 00390 80B4ED20 00052C03 */  sra     $a1, $a1, 16               
/* 00394 80B4ED24 03E00008 */  jr      $ra                        
/* 00398 80B4ED28 A4850198 */  sh      $a1, 0x0198($a0)           ## 00000198
