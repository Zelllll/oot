glabel func_80B36328
/* 02678 80B36328 27BDFFC8 */  addiu   $sp, $sp, 0xFFC8           ## $sp = FFFFFFC8
/* 0267C 80B3632C AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 02680 80B36330 AFB00020 */  sw      $s0, 0x0020($sp)           
/* 02684 80B36334 AFA5003C */  sw      $a1, 0x003C($sp)           
/* 02688 80B36338 8C8202E8 */  lw      $v0, 0x02E8($a0)           ## 000002E8
/* 0268C 80B3633C 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 02690 80B36340 8CA91C44 */  lw      $t1, 0x1C44($a1)           ## 00001C44
/* 02694 80B36344 10400004 */  beq     $v0, $zero, .L80B36358     
/* 02698 80B36348 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 0269C 80B3634C 244FFFFF */  addiu   $t7, $v0, 0xFFFF           ## $t7 = FFFFFFFF
/* 026A0 80B36350 10000004 */  beq     $zero, $zero, .L80B36364   
/* 026A4 80B36354 AC8F02E8 */  sw      $t7, 0x02E8($a0)           ## 000002E8
.L80B36358:
/* 026A8 80B36358 44812000 */  mtc1    $at, $f4                   ## $f4 = 1.00
/* 026AC 80B3635C 00000000 */  nop
/* 026B0 80B36360 E60401A4 */  swc1    $f4, 0x01A4($s0)           ## 000001A4
.L80B36364:
/* 026B4 80B36364 26040188 */  addiu   $a0, $s0, 0x0188           ## $a0 = 00000188
/* 026B8 80B36368 0C02927F */  jal     SkelAnime_Update
              
/* 026BC 80B3636C AFA90034 */  sw      $t1, 0x0034($sp)           
/* 026C0 80B36370 10400066 */  beq     $v0, $zero, .L80B3650C     
/* 026C4 80B36374 8FA90034 */  lw      $t1, 0x0034($sp)           
/* 026C8 80B36378 860800B6 */  lh      $t0, 0x00B6($s0)           ## 000000B6
/* 026CC 80B3637C 8618008A */  lh      $t8, 0x008A($s0)           ## 0000008A
/* 026D0 80B36380 03081023 */  subu    $v0, $t8, $t0              
/* 026D4 80B36384 00021400 */  sll     $v0, $v0, 16               
/* 026D8 80B36388 00021403 */  sra     $v0, $v0, 16               
/* 026DC 80B3638C 04400003 */  bltz    $v0, .L80B3639C            
/* 026E0 80B36390 00021823 */  subu    $v1, $zero, $v0            
/* 026E4 80B36394 10000001 */  beq     $zero, $zero, .L80B3639C   
/* 026E8 80B36398 00401825 */  or      $v1, $v0, $zero            ## $v1 = 00000000
.L80B3639C:
/* 026EC 80B3639C 28614001 */  slti    $at, $v1, 0x4001           
/* 026F0 80B363A0 10200056 */  beq     $at, $zero, .L80B364FC     
/* 026F4 80B363A4 3C014270 */  lui     $at, 0x4270                ## $at = 42700000
/* 026F8 80B363A8 44814000 */  mtc1    $at, $f8                   ## $f8 = 60.00
/* 026FC 80B363AC C6060090 */  lwc1    $f6, 0x0090($s0)           ## 00000090
/* 02700 80B363B0 3C014248 */  lui     $at, 0x4248                ## $at = 42480000
/* 02704 80B363B4 4608303C */  c.lt.s  $f6, $f8                   
/* 02708 80B363B8 00000000 */  nop
/* 0270C 80B363BC 4500004F */  bc1f    .L80B364FC                 
/* 02710 80B363C0 00000000 */  nop
/* 02714 80B363C4 C6000094 */  lwc1    $f0, 0x0094($s0)           ## 00000094
/* 02718 80B363C8 44805000 */  mtc1    $zero, $f10                ## $f10 = 0.00
/* 0271C 80B363CC 44818000 */  mtc1    $at, $f16                  ## $f16 = 50.00
/* 02720 80B363D0 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 02724 80B363D4 4600503E */  c.le.s  $f10, $f0                  
/* 02728 80B363D8 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 0272C 80B363DC 3C0642C8 */  lui     $a2, 0x42C8                ## $a2 = 42C80000
/* 02730 80B363E0 24072710 */  addiu   $a3, $zero, 0x2710         ## $a3 = 00002710
/* 02734 80B363E4 45000003 */  bc1f    .L80B363F4                 
/* 02738 80B363E8 24194000 */  addiu   $t9, $zero, 0x4000         ## $t9 = 00004000
/* 0273C 80B363EC 10000002 */  beq     $zero, $zero, .L80B363F8   
/* 02740 80B363F0 46000086 */  mov.s   $f2, $f0                   
.L80B363F4:
/* 02744 80B363F4 46000087 */  neg.s   $f2, $f0                   
.L80B363F8:
/* 02748 80B363F8 4610103C */  c.lt.s  $f2, $f16                  
/* 0274C 80B363FC 00000000 */  nop
/* 02750 80B36400 4500003E */  bc1f    .L80B364FC                 
/* 02754 80B36404 00000000 */  nop
/* 02758 80B36408 AFB90010 */  sw      $t9, 0x0010($sp)           
/* 0275C 80B3640C AFA80014 */  sw      $t0, 0x0014($sp)           
/* 02760 80B36410 0C00D52D */  jal     func_800354B4              
/* 02764 80B36414 AFA90034 */  sw      $t1, 0x0034($sp)           
/* 02768 80B36418 10400017 */  beq     $v0, $zero, .L80B36478     
/* 0276C 80B3641C 8FA90034 */  lw      $t1, 0x0034($sp)           
/* 02770 80B36420 812A0842 */  lb      $t2, 0x0842($t1)           ## 00000842
/* 02774 80B36424 24010011 */  addiu   $at, $zero, 0x0011         ## $at = 00000011
/* 02778 80B36428 8FAB003C */  lw      $t3, 0x003C($sp)           
/* 0277C 80B3642C 15410005 */  bne     $t2, $at, .L80B36444       
/* 02780 80B36430 3C0C0001 */  lui     $t4, 0x0001                ## $t4 = 00010000
/* 02784 80B36434 0C2CD8A2 */  jal     func_80B36288              
/* 02788 80B36438 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 0278C 80B3643C 10000056 */  beq     $zero, $zero, .L80B36598   
/* 02790 80B36440 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B36444:
/* 02794 80B36444 018B6021 */  addu    $t4, $t4, $t3              
/* 02798 80B36448 8D8C1DE4 */  lw      $t4, 0x1DE4($t4)           ## 00001DE4
/* 0279C 80B3644C 318D0001 */  andi    $t5, $t4, 0x0001           ## $t5 = 00000000
/* 027A0 80B36450 11A00005 */  beq     $t5, $zero, .L80B36468     
/* 027A4 80B36454 00000000 */  nop
/* 027A8 80B36458 0C2CD8A2 */  jal     func_80B36288              
/* 027AC 80B3645C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 027B0 80B36460 1000004D */  beq     $zero, $zero, .L80B36598   
/* 027B4 80B36464 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B36468:
/* 027B8 80B36468 0C2CD6E5 */  jal     func_80B35B94              
/* 027BC 80B3646C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 027C0 80B36470 10000049 */  beq     $zero, $zero, .L80B36598   
/* 027C4 80B36474 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B36478:
/* 027C8 80B36478 852E00B6 */  lh      $t6, 0x00B6($t1)           ## 000000B6
/* 027CC 80B3647C 860F00B6 */  lh      $t7, 0x00B6($s0)           ## 000000B6
/* 027D0 80B36480 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 027D4 80B36484 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 027D8 80B36488 01CF3023 */  subu    $a2, $t6, $t7              
/* 027DC 80B3648C 00063400 */  sll     $a2, $a2, 16               
/* 027E0 80B36490 00063403 */  sra     $a2, $a2, 16               
/* 027E4 80B36494 0C00CEAE */  jal     func_80033AB8              
/* 027E8 80B36498 A7A6002C */  sh      $a2, 0x002C($sp)           
/* 027EC 80B3649C 14400013 */  bne     $v0, $zero, .L80B364EC     
/* 027F0 80B364A0 87A6002C */  lh      $a2, 0x002C($sp)           
/* 027F4 80B364A4 8FB8003C */  lw      $t8, 0x003C($sp)           
/* 027F8 80B364A8 3C190001 */  lui     $t9, 0x0001                ## $t9 = 00010000
/* 027FC 80B364AC 0338C821 */  addu    $t9, $t9, $t8              
/* 02800 80B364B0 8F391DE4 */  lw      $t9, 0x1DE4($t9)           ## 00011DE4
/* 02804 80B364B4 332A0001 */  andi    $t2, $t9, 0x0001           ## $t2 = 00000000
/* 02808 80B364B8 15400008 */  bne     $t2, $zero, .L80B364DC     
/* 0280C 80B364BC 00000000 */  nop
/* 02810 80B364C0 04C00003 */  bltz    $a2, .L80B364D0            
/* 02814 80B364C4 00061823 */  subu    $v1, $zero, $a2            
/* 02818 80B364C8 10000001 */  beq     $zero, $zero, .L80B364D0   
/* 0281C 80B364CC 00C01825 */  or      $v1, $a2, $zero            ## $v1 = 00000000
.L80B364D0:
/* 02820 80B364D0 286138E0 */  slti    $at, $v1, 0x38E0           
/* 02824 80B364D4 10200005 */  beq     $at, $zero, .L80B364EC     
/* 02828 80B364D8 00000000 */  nop
.L80B364DC:
/* 0282C 80B364DC 0C2CD550 */  jal     func_80B35540              
/* 02830 80B364E0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02834 80B364E4 1000002C */  beq     $zero, $zero, .L80B36598   
/* 02838 80B364E8 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B364EC:
/* 0283C 80B364EC 0C2CD3CA */  jal     func_80B34F28              
/* 02840 80B364F0 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02844 80B364F4 10000028 */  beq     $zero, $zero, .L80B36598   
/* 02848 80B364F8 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B364FC:
/* 0284C 80B364FC 0C2CD3CA */  jal     func_80B34F28              
/* 02850 80B36500 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 02854 80B36504 10000024 */  beq     $zero, $zero, .L80B36598   
/* 02858 80B36508 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B3650C:
/* 0285C 80B3650C 8E0B02E8 */  lw      $t3, 0x02E8($s0)           ## 000002E8
/* 02860 80B36510 8FA4003C */  lw      $a0, 0x003C($sp)           
/* 02864 80B36514 02002825 */  or      $a1, $s0, $zero            ## $a1 = 00000000
/* 02868 80B36518 1560001E */  bne     $t3, $zero, .L80B36594     
/* 0286C 80B3651C 3C0642C8 */  lui     $a2, 0x42C8                ## $a2 = 42C80000
/* 02870 80B36520 240C4000 */  addiu   $t4, $zero, 0x4000         ## $t4 = 00004000
/* 02874 80B36524 AFAC0010 */  sw      $t4, 0x0010($sp)           
/* 02878 80B36528 860D00B6 */  lh      $t5, 0x00B6($s0)           ## 000000B6
/* 0287C 80B3652C AFA90034 */  sw      $t1, 0x0034($sp)           
/* 02880 80B36530 24072710 */  addiu   $a3, $zero, 0x2710         ## $a3 = 00002710
/* 02884 80B36534 0C00D52D */  jal     func_800354B4              
/* 02888 80B36538 AFAD0014 */  sw      $t5, 0x0014($sp)           
/* 0288C 80B3653C 10400015 */  beq     $v0, $zero, .L80B36594     
/* 02890 80B36540 8FA90034 */  lw      $t1, 0x0034($sp)           
/* 02894 80B36544 812E0842 */  lb      $t6, 0x0842($t1)           ## 00000842
/* 02898 80B36548 24010011 */  addiu   $at, $zero, 0x0011         ## $at = 00000011
/* 0289C 80B3654C 8FAF003C */  lw      $t7, 0x003C($sp)           
/* 028A0 80B36550 15C10005 */  bne     $t6, $at, .L80B36568       
/* 028A4 80B36554 3C180001 */  lui     $t8, 0x0001                ## $t8 = 00010000
/* 028A8 80B36558 0C2CD8A2 */  jal     func_80B36288              
/* 028AC 80B3655C 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 028B0 80B36560 1000000D */  beq     $zero, $zero, .L80B36598   
/* 028B4 80B36564 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B36568:
/* 028B8 80B36568 030FC021 */  addu    $t8, $t8, $t7              
/* 028BC 80B3656C 8F181DE4 */  lw      $t8, 0x1DE4($t8)           ## 00001DE4
/* 028C0 80B36570 33190001 */  andi    $t9, $t8, 0x0001           ## $t9 = 00000000
/* 028C4 80B36574 13200005 */  beq     $t9, $zero, .L80B3658C     
/* 028C8 80B36578 00000000 */  nop
/* 028CC 80B3657C 0C2CD8A2 */  jal     func_80B36288              
/* 028D0 80B36580 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 028D4 80B36584 10000004 */  beq     $zero, $zero, .L80B36598   
/* 028D8 80B36588 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B3658C:
/* 028DC 80B3658C 0C2CD6E5 */  jal     func_80B35B94              
/* 028E0 80B36590 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
.L80B36594:
/* 028E4 80B36594 8FBF0024 */  lw      $ra, 0x0024($sp)           
.L80B36598:
/* 028E8 80B36598 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 028EC 80B3659C 27BD0038 */  addiu   $sp, $sp, 0x0038           ## $sp = 00000000
/* 028F0 80B365A0 03E00008 */  jr      $ra                        
/* 028F4 80B365A4 00000000 */  nop
