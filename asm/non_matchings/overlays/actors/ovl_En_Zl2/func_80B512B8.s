glabel func_80B512B8
/* 02928 80B512B8 27BDFFE0 */  addiu   $sp, $sp, 0xFFE0           ## $sp = FFFFFFE0
/* 0292C 80B512BC AFBF001C */  sw      $ra, 0x001C($sp)           
/* 02930 80B512C0 AFB00018 */  sw      $s0, 0x0018($sp)           
/* 02934 80B512C4 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 02938 80B512C8 0C2D3F33 */  jal     func_80B4FCCC              
/* 0293C 80B512CC AFA50024 */  sw      $a1, 0x0024($sp)           
/* 02940 80B512D0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02944 80B512D4 0C2D3B4B */  jal     func_80B4ED2C              
/* 02948 80B512D8 8FA50024 */  lw      $a1, 0x0024($sp)           
/* 0294C 80B512DC 0C2D3B5D */  jal     func_80B4ED74              
/* 02950 80B512E0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02954 80B512E4 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02958 80B512E8 0C2D407A */  jal     func_80B501E8              
/* 0295C 80B512EC 8FA50024 */  lw      $a1, 0x0024($sp)           
/* 02960 80B512F0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02964 80B512F4 0C2D4268 */  jal     func_80B509A0              
/* 02968 80B512F8 8FA50024 */  lw      $a1, 0x0024($sp)           
/* 0296C 80B512FC 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 02970 80B51300 8FB00018 */  lw      $s0, 0x0018($sp)           
/* 02974 80B51304 27BD0020 */  addiu   $sp, $sp, 0x0020           ## $sp = 00000000
/* 02978 80B51308 03E00008 */  jr      $ra                        
/* 0297C 80B5130C 00000000 */  nop
