glabel func_8097670C
/* 057BC 8097670C 27BDFFD0 */  addiu   $sp, $sp, 0xFFD0           ## $sp = FFFFFFD0
/* 057C0 80976710 0006C080 */  sll     $t8, $a2,  2               
/* 057C4 80976714 AFBF001C */  sw      $ra, 0x001C($sp)           
/* 057C8 80976718 AFA40030 */  sw      $a0, 0x0030($sp)           
/* 057CC 8097671C AFA50034 */  sw      $a1, 0x0034($sp)           
/* 057D0 80976720 AFA60038 */  sw      $a2, 0x0038($sp)           
/* 057D4 80976724 00B81021 */  addu    $v0, $a1, $t8              
/* 057D8 80976728 8C591D8C */  lw      $t9, 0x1D8C($v0)           ## 00001D8C
/* 057DC 8097672C 27AD0024 */  addiu   $t5, $sp, 0x0024           ## $t5 = FFFFFFF4
/* 057E0 80976730 44876000 */  mtc1    $a3, $f12                  ## $f12 = 0.00
/* 057E4 80976734 8F280018 */  lw      $t0, 0x0018($t9)           ## 00000018
/* 057E8 80976738 00803825 */  or      $a3, $a0, $zero            ## $a3 = 00000000
/* 057EC 8097673C 44882000 */  mtc1    $t0, $f4                   ## $f4 = 0.00
/* 057F0 80976740 00000000 */  nop
/* 057F4 80976744 468021A0 */  cvt.s.w $f6, $f4                   
/* 057F8 80976748 E7A60024 */  swc1    $f6, 0x0024($sp)           
/* 057FC 8097674C 8C491D8C */  lw      $t1, 0x1D8C($v0)           ## 00001D8C
/* 05800 80976750 8D2A001C */  lw      $t2, 0x001C($t1)           ## 0000001C
/* 05804 80976754 448A4000 */  mtc1    $t2, $f8                   ## $f8 = 0.00
/* 05808 80976758 00000000 */  nop
/* 0580C 8097675C 468042A0 */  cvt.s.w $f10, $f8                  
/* 05810 80976760 E7AA0028 */  swc1    $f10, 0x0028($sp)          
/* 05814 80976764 8C4B1D8C */  lw      $t3, 0x1D8C($v0)           ## 00001D8C
/* 05818 80976768 8D6C0020 */  lw      $t4, 0x0020($t3)           ## 00000020
/* 0581C 8097676C 448C8000 */  mtc1    $t4, $f16                  ## $f16 = 0.00
/* 05820 80976770 00000000 */  nop
/* 05824 80976774 468084A0 */  cvt.s.w $f18, $f16                 
/* 05828 80976778 E7B2002C */  swc1    $f18, 0x002C($sp)          
/* 0582C 8097677C 8DAE0000 */  lw      $t6, 0x0000($t5)           ## FFFFFFF4
/* 05830 80976780 AFAE0000 */  sw      $t6, 0x0000($sp)           
/* 05834 80976784 8DA50004 */  lw      $a1, 0x0004($t5)           ## FFFFFFF8
/* 05838 80976788 8FA40000 */  lw      $a0, 0x0000($sp)           
/* 0583C 8097678C AFA50004 */  sw      $a1, 0x0004($sp)           
/* 05840 80976790 8DA60008 */  lw      $a2, 0x0008($t5)           ## FFFFFFFC
/* 05844 80976794 E7AC0010 */  swc1    $f12, 0x0010($sp)          
/* 05848 80976798 0C25CCF2 */  jal     func_809733C8              
/* 0584C 8097679C AFA60008 */  sw      $a2, 0x0008($sp)           
/* 05850 809767A0 8FBF001C */  lw      $ra, 0x001C($sp)           
/* 05854 809767A4 27BD0030 */  addiu   $sp, $sp, 0x0030           ## $sp = 00000000
/* 05858 809767A8 03E00008 */  jr      $ra                        
/* 0585C 809767AC 00000000 */  nop
