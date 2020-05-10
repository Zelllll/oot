.late_rodata
glabel D_8094B014
    .float 0.3

glabel D_8094B018
    .float 0.4

glabel D_8094B01C
    .float 0.4

.text
glabel BossTw_Update
/* 07A04 809406D4 27BDFF70 */  addiu   $sp, $sp, 0xFF70           ## $sp = FFFFFF70
/* 07A08 809406D8 AFBF004C */  sw      $ra, 0x004C($sp)           
/* 07A0C 809406DC AFB30048 */  sw      $s3, 0x0048($sp)           
/* 07A10 809406E0 AFB20044 */  sw      $s2, 0x0044($sp)           
/* 07A14 809406E4 AFB10040 */  sw      $s1, 0x0040($sp)           
/* 07A18 809406E8 AFB0003C */  sw      $s0, 0x003C($sp)           
/* 07A1C 809406EC F7B80030 */  sdc1    $f24, 0x0030($sp)          
/* 07A20 809406F0 F7B60028 */  sdc1    $f22, 0x0028($sp)          
/* 07A24 809406F4 F7B40020 */  sdc1    $f20, 0x0020($sp)          
/* 07A28 809406F8 8CB21C44 */  lw      $s2, 0x1C44($a1)           ## 00001C44
/* 07A2C 809406FC 240E0003 */  addiu   $t6, $zero, 0x0003         ## $t6 = 00000003
/* 07A30 80940700 A08E05C0 */  sb      $t6, 0x05C0($a0)           ## 000005C0
/* 07A34 80940704 90AF07AF */  lbu     $t7, 0x07AF($a1)           ## 000007AF
/* 07A38 80940708 3C014120 */  lui     $at, 0x4120                ## $at = 41200000
/* 07A3C 8094070C 4481A000 */  mtc1    $at, $f20                  ## $f20 = 10.00
/* 07A40 80940710 448F2000 */  mtc1    $t7, $f4                   ## $f4 = 0.00
/* 07A44 80940714 3C013F80 */  lui     $at, 0x3F80                ## $at = 3F800000
/* 07A48 80940718 4481B000 */  mtc1    $at, $f22                  ## $f22 = 1.00
/* 07A4C 8094071C 00808825 */  or      $s1, $a0, $zero            ## $s1 = 00000000
/* 07A50 80940720 00A09825 */  or      $s3, $a1, $zero            ## $s3 = 00000000
/* 07A54 80940724 248401D4 */  addiu   $a0, $a0, 0x01D4           ## $a0 = 000001D4
/* 07A58 80940728 05E10005 */  bgez    $t7, .L80940740            
/* 07A5C 8094072C 46802120 */  cvt.s.w $f4, $f4                   
/* 07A60 80940730 3C014F80 */  lui     $at, 0x4F80                ## $at = 4F800000
/* 07A64 80940734 44813000 */  mtc1    $at, $f6                   ## $f6 = 4294967296.00
/* 07A68 80940738 00000000 */  nop
/* 07A6C 8094073C 46062100 */  add.s   $f4, $f4, $f6              
.L80940740:
/* 07A70 80940740 44052000 */  mfc1    $a1, $f4                   
/* 07A74 80940744 4406B000 */  mfc1    $a2, $f22                  
/* 07A78 80940748 4407A000 */  mfc1    $a3, $f20                  
/* 07A7C 8094074C 0C01E107 */  jal     Math_SmoothScaleMaxF
              
/* 07A80 80940750 00000000 */  nop
/* 07A84 80940754 927807B0 */  lbu     $t8, 0x07B0($s3)           ## 000007B0
/* 07A88 80940758 4406B000 */  mfc1    $a2, $f22                  
/* 07A8C 8094075C 4407A000 */  mfc1    $a3, $f20                  
/* 07A90 80940760 44984000 */  mtc1    $t8, $f8                   ## $f8 = 0.00
/* 07A94 80940764 262401D8 */  addiu   $a0, $s1, 0x01D8           ## $a0 = 000001D8
/* 07A98 80940768 07010005 */  bgez    $t8, .L80940780            
/* 07A9C 8094076C 46804220 */  cvt.s.w $f8, $f8                   
/* 07AA0 80940770 3C014F80 */  lui     $at, 0x4F80                ## $at = 4F800000
/* 07AA4 80940774 44815000 */  mtc1    $at, $f10                  ## $f10 = 4294967296.00
/* 07AA8 80940778 00000000 */  nop
/* 07AAC 8094077C 460A4200 */  add.s   $f8, $f8, $f10             
.L80940780:
/* 07AB0 80940780 44054000 */  mfc1    $a1, $f8                   
/* 07AB4 80940784 0C01E107 */  jal     Math_SmoothScaleMaxF
              
/* 07AB8 80940788 00000000 */  nop
/* 07ABC 8094078C 927907B1 */  lbu     $t9, 0x07B1($s3)           ## 000007B1
/* 07AC0 80940790 4406B000 */  mfc1    $a2, $f22                  
/* 07AC4 80940794 4407A000 */  mfc1    $a3, $f20                  
/* 07AC8 80940798 44998000 */  mtc1    $t9, $f16                  ## $f16 = 0.00
/* 07ACC 8094079C 262401DC */  addiu   $a0, $s1, 0x01DC           ## $a0 = 000001DC
/* 07AD0 809407A0 07210005 */  bgez    $t9, .L809407B8            
/* 07AD4 809407A4 46808420 */  cvt.s.w $f16, $f16                 
/* 07AD8 809407A8 3C014F80 */  lui     $at, 0x4F80                ## $at = 4F800000
/* 07ADC 809407AC 44819000 */  mtc1    $at, $f18                  ## $f18 = 4294967296.00
/* 07AE0 809407B0 00000000 */  nop
/* 07AE4 809407B4 46128400 */  add.s   $f16, $f16, $f18           
.L809407B8:
/* 07AE8 809407B8 44058000 */  mfc1    $a1, $f16                  
/* 07AEC 809407BC 0C01E107 */  jal     Math_SmoothScaleMaxF
              
/* 07AF0 809407C0 00000000 */  nop
/* 07AF4 809407C4 866807B2 */  lh      $t0, 0x07B2($s3)           ## 000007B2
/* 07AF8 809407C8 4406B000 */  mfc1    $a2, $f22                  
/* 07AFC 809407CC 4407A000 */  mfc1    $a3, $f20                  
/* 07B00 809407D0 44882000 */  mtc1    $t0, $f4                   ## $f4 = 0.00
/* 07B04 809407D4 262401E0 */  addiu   $a0, $s1, 0x01E0           ## $a0 = 000001E0
/* 07B08 809407D8 46802120 */  cvt.s.w $f4, $f4                   
/* 07B0C 809407DC 44052000 */  mfc1    $a1, $f4                   
/* 07B10 809407E0 0C01E107 */  jal     Math_SmoothScaleMaxF
              
/* 07B14 809407E4 00000000 */  nop
/* 07B18 809407E8 4406B000 */  mfc1    $a2, $f22                  
/* 07B1C 809407EC 4407A000 */  mfc1    $a3, $f20                  
/* 07B20 809407F0 262401E4 */  addiu   $a0, $s1, 0x01E4           ## $a0 = 000001E4
/* 07B24 809407F4 0C01E107 */  jal     Math_SmoothScaleMaxF
              
/* 07B28 809407F8 3C05447A */  lui     $a1, 0x447A                ## $a1 = 447A0000
/* 07B2C 809407FC 862D0156 */  lh      $t5, 0x0156($s1)           ## 00000156
/* 07B30 80940800 86290150 */  lh      $t1, 0x0150($s1)           ## 00000150
/* 07B34 80940804 862B0152 */  lh      $t3, 0x0152($s1)           ## 00000152
/* 07B38 80940808 25AE0001 */  addiu   $t6, $t5, 0x0001           ## $t6 = 00000001
/* 07B3C 8094080C A62E0156 */  sh      $t6, 0x0156($s1)           ## 00000156
/* 07B40 80940810 86220156 */  lh      $v0, 0x0156($s1)           ## 00000156
/* 07B44 80940814 252A0001 */  addiu   $t2, $t1, 0x0001           ## $t2 = 00000001
/* 07B48 80940818 256C0001 */  addiu   $t4, $t3, 0x0001           ## $t4 = 00000001
/* 07B4C 8094081C 28410032 */  slti    $at, $v0, 0x0032           
/* 07B50 80940820 A62A0150 */  sh      $t2, 0x0150($s1)           ## 00000150
/* 07B54 80940824 14200003 */  bne     $at, $zero, .L80940834     
/* 07B58 80940828 A62C0152 */  sh      $t4, 0x0152($s1)           ## 00000152
/* 07B5C 8094082C A6200156 */  sh      $zero, 0x0156($s1)         ## 00000156
/* 07B60 80940830 86220156 */  lh      $v0, 0x0156($s1)           ## 00000156
.L80940834:
/* 07B64 80940834 00027880 */  sll     $t7, $v0,  2               
/* 07B68 80940838 8E280024 */  lw      $t0, 0x0024($s1)           ## 00000024
/* 07B6C 8094083C 01E27823 */  subu    $t7, $t7, $v0              
/* 07B70 80940840 000F7880 */  sll     $t7, $t7,  2               
/* 07B74 80940844 022FC021 */  addu    $t8, $s1, $t7              
/* 07B78 80940848 AF0801E8 */  sw      $t0, 0x01E8($t8)           ## 000001E8
/* 07B7C 8094084C 8E390028 */  lw      $t9, 0x0028($s1)           ## 00000028
/* 07B80 80940850 3C0E8094 */  lui     $t6, %hi(func_8093C700)    ## $t6 = 80940000
/* 07B84 80940854 00008025 */  or      $s0, $zero, $zero          ## $s0 = 00000000
/* 07B88 80940858 AF1901EC */  sw      $t9, 0x01EC($t8)           ## 000001EC
/* 07B8C 8094085C 8E28002C */  lw      $t0, 0x002C($s1)           ## 0000002C
/* 07B90 80940860 25CEC700 */  addiu   $t6, $t6, %lo(func_8093C700) ## $t6 = 8093C700
/* 07B94 80940864 AF0801F0 */  sw      $t0, 0x01F0($t8)           ## 000001F0
/* 07B98 80940868 00104840 */  sll     $t1, $s0,  1               
.L8094086C:
/* 07B9C 8094086C 02291021 */  addu    $v0, $s1, $t1              
/* 07BA0 80940870 84430178 */  lh      $v1, 0x0178($v0)           ## 00000178
/* 07BA4 80940874 26100001 */  addiu   $s0, $s0, 0x0001           ## $s0 = 00000001
/* 07BA8 80940878 00108400 */  sll     $s0, $s0, 16               
/* 07BAC 8094087C 10600003 */  beq     $v1, $zero, .L8094088C     
/* 07BB0 80940880 00108403 */  sra     $s0, $s0, 16               
/* 07BB4 80940884 246AFFFF */  addiu   $t2, $v1, 0xFFFF           ## $t2 = FFFFFFFF
/* 07BB8 80940888 A44A0178 */  sh      $t2, 0x0178($v0)           ## 00000178
.L8094088C:
/* 07BBC 8094088C 2A010005 */  slti    $at, $s0, 0x0005           
/* 07BC0 80940890 5420FFF6 */  bnel    $at, $zero, .L8094086C     
/* 07BC4 80940894 00104840 */  sll     $t1, $s0,  1               
/* 07BC8 80940898 8622015A */  lh      $v0, 0x015A($s1)           ## 0000015A
/* 07BCC 8094089C 10400002 */  beq     $v0, $zero, .L809408A8     
/* 07BD0 809408A0 244BFFFF */  addiu   $t3, $v0, 0xFFFF           ## $t3 = FFFFFFFF
/* 07BD4 809408A4 A62B015A */  sh      $t3, 0x015A($s1)           ## 0000015A
.L809408A8:
/* 07BD8 809408A8 8622015C */  lh      $v0, 0x015C($s1)           ## 0000015C
/* 07BDC 809408AC 10400002 */  beq     $v0, $zero, .L809408B8     
/* 07BE0 809408B0 244CFFFF */  addiu   $t4, $v0, 0xFFFF           ## $t4 = FFFFFFFF
/* 07BE4 809408B4 A62C015C */  sh      $t4, 0x015C($s1)           ## 0000015C
.L809408B8:
/* 07BE8 809408B8 8E30014C */  lw      $s0, 0x014C($s1)           ## 0000014C
/* 07BEC 809408BC 3C0D8094 */  lui     $t5, %hi(func_8093A2AC)    ## $t5 = 80940000
/* 07BF0 809408C0 25ADA2AC */  addiu   $t5, $t5, %lo(func_8093A2AC) ## $t5 = 8093A2AC
/* 07BF4 809408C4 51B00007 */  beql    $t5, $s0, .L809408E4       
/* 07BF8 809408C8 865800B6 */  lh      $t8, 0x00B6($s2)           ## 000000B6
/* 07BFC 809408CC 11D00004 */  beq     $t6, $s0, .L809408E0       
/* 07C00 809408D0 3C0F8094 */  lui     $t7, %hi(func_80939F88)    ## $t7 = 80940000
/* 07C04 809408D4 25EF9F88 */  addiu   $t7, $t7, %lo(func_80939F88) ## $t7 = 80939F88
/* 07C08 809408D8 55F00015 */  bnel    $t7, $s0, .L80940930       
/* 07C0C 809408DC 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
.L809408E0:
/* 07C10 809408E0 865800B6 */  lh      $t8, 0x00B6($s2)           ## 000000B6
.L809408E4:
/* 07C14 809408E4 8639008A */  lh      $t9, 0x008A($s1)           ## 0000008A
/* 07C18 809408E8 34018000 */  ori     $at, $zero, 0x8000         ## $at = 00008000
/* 07C1C 809408EC 03191023 */  subu    $v0, $t8, $t9              
/* 07C20 809408F0 00411021 */  addu    $v0, $v0, $at              
/* 07C24 809408F4 00021400 */  sll     $v0, $v0, 16               
/* 07C28 809408F8 00021403 */  sra     $v0, $v0, 16               
/* 07C2C 809408FC 28411000 */  slti    $at, $v0, 0x1000           
/* 07C30 80940900 1020000A */  beq     $at, $zero, .L8094092C     
/* 07C34 80940904 2841F001 */  slti    $at, $v0, 0xF001           
/* 07C38 80940908 54200009 */  bnel    $at, $zero, .L80940930     
/* 07C3C 8094090C 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 07C40 80940910 92480A73 */  lbu     $t0, 0x0A73($s2)           ## 00000A73
/* 07C44 80940914 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 07C48 80940918 51000005 */  beql    $t0, $zero, .L80940930     
/* 07C4C 8094091C 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 07C50 80940920 0C24F1A1 */  jal     func_8093C684              
/* 07C54 80940924 02602825 */  or      $a1, $s3, $zero            ## $a1 = 00000000
/* 07C58 80940928 8E30014C */  lw      $s0, 0x014C($s1)           ## 0000014C
.L8094092C:
/* 07C5C 8094092C 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
.L80940930:
/* 07C60 80940930 0200F809 */  jalr    $ra, $s0                   
/* 07C64 80940934 02602825 */  or      $a1, $s3, $zero            ## $a1 = 00000000
/* 07C68 80940938 8E30014C */  lw      $s0, 0x014C($s1)           ## 0000014C
/* 07C6C 8094093C 3C098094 */  lui     $t1, %hi(func_8093C858)    ## $t1 = 80940000
/* 07C70 80940940 2529C858 */  addiu   $t1, $t1, %lo(func_8093C858) ## $t1 = 8093C858
/* 07C74 80940944 113000F6 */  beq     $t1, $s0, .L80940D20       
/* 07C78 80940948 240A002D */  addiu   $t2, $zero, 0x002D         ## $t2 = 0000002D
/* 07C7C 8094094C 3C0B8094 */  lui     $t3, %hi(func_8093C700)    ## $t3 = 80940000
/* 07C80 80940950 256BC700 */  addiu   $t3, $t3, %lo(func_8093C700) ## $t3 = 8093C700
/* 07C84 80940954 15700004 */  bne     $t3, $s0, .L80940968       
/* 07C88 80940958 A62A05EC */  sh      $t2, 0x05EC($s1)           ## 000005EC
/* 07C8C 8094095C 862C05EC */  lh      $t4, 0x05EC($s1)           ## 000005EC
/* 07C90 80940960 000C6840 */  sll     $t5, $t4,  1               
/* 07C94 80940964 A62D05EC */  sh      $t5, 0x05EC($s1)           ## 000005EC
.L80940968:
/* 07C98 80940968 8638015A */  lh      $t8, 0x015A($s1)           ## 0000015A
/* 07C9C 8094096C 240E0078 */  addiu   $t6, $zero, 0x0078         ## $t6 = 00000078
/* 07CA0 80940970 240FFFE2 */  addiu   $t7, $zero, 0xFFE2         ## $t7 = FFFFFFE2
/* 07CA4 80940974 A62E05EE */  sh      $t6, 0x05EE($s1)           ## 000005EE
/* 07CA8 80940978 17000015 */  bne     $t8, $zero, .L809409D0     
/* 07CAC 8094097C A62F05F0 */  sh      $t7, 0x05F0($s1)           ## 000005F0
/* 07CB0 80940980 922205BD */  lbu     $v0, 0x05BD($s1)           ## 000005BD
/* 07CB4 80940984 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 07CB8 80940988 263005AC */  addiu   $s0, $s1, 0x05AC           ## $s0 = 000005AC
/* 07CBC 8094098C 30590002 */  andi    $t9, $v0, 0x0002           ## $t9 = 00000000
/* 07CC0 80940990 13200002 */  beq     $t9, $zero, .L8094099C     
/* 07CC4 80940994 3048FFFD */  andi    $t0, $v0, 0xFFFD           ## $t0 = 00000000
/* 07CC8 80940998 A22805BD */  sb      $t0, 0x05BD($s1)           ## 000005BD
.L8094099C:
/* 07CCC 8094099C 0C0189B7 */  jal     Collider_CylinderUpdate
              
/* 07CD0 809409A0 02002825 */  or      $a1, $s0, $zero            ## $a1 = 000005AC
/* 07CD4 809409A4 3C010001 */  lui     $at, 0x0001                ## $at = 00010000
/* 07CD8 809409A8 34211E60 */  ori     $at, $at, 0x1E60           ## $at = 00011E60
/* 07CDC 809409AC 02619021 */  addu    $s2, $s3, $at              
/* 07CE0 809409B0 02402825 */  or      $a1, $s2, $zero            ## $a1 = 00000000
/* 07CE4 809409B4 02602025 */  or      $a0, $s3, $zero            ## $a0 = 00000000
/* 07CE8 809409B8 0C01767D */  jal     CollisionCheck_SetAC
              ## CollisionCheck_setAC
/* 07CEC 809409BC 02003025 */  or      $a2, $s0, $zero            ## $a2 = 000005AC
/* 07CF0 809409C0 02602025 */  or      $a0, $s3, $zero            ## $a0 = 00000000
/* 07CF4 809409C4 02402825 */  or      $a1, $s2, $zero            ## $a1 = 00000000
/* 07CF8 809409C8 0C0175E7 */  jal     CollisionCheck_SetAT
              ## CollisionCheck_setAT
/* 07CFC 809409CC 02003025 */  or      $a2, $s0, $zero            ## $a2 = 000005AC
.L809409D0:
/* 07D00 809409D0 8629001C */  lh      $t1, 0x001C($s1)           ## 0000001C
/* 07D04 809409D4 3C01C170 */  lui     $at, 0xC170                ## $at = C1700000
/* 07D08 809409D8 5520000E */  bnel    $t1, $zero, .L80940A14     
/* 07D0C 809409DC C6280188 */  lwc1    $f8, 0x0188($s1)           ## 00000188
/* 07D10 809409E0 C6260188 */  lwc1    $f6, 0x0188($s1)           ## 00000188
/* 07D14 809409E4 3C0140E0 */  lui     $at, 0x40E0                ## $at = 40E00000
/* 07D18 809409E8 44818000 */  mtc1    $at, $f16                  ## $f16 = 7.00
/* 07D1C 809409EC C62A0198 */  lwc1    $f10, 0x0198($s1)          ## 00000198
/* 07D20 809409F0 C624019C */  lwc1    $f4, 0x019C($s1)           ## 0000019C
/* 07D24 809409F4 46163200 */  add.s   $f8, $f6, $f22             
/* 07D28 809409F8 46105481 */  sub.s   $f18, $f10, $f16           
/* 07D2C 809409FC E6280188 */  swc1    $f8, 0x0188($s1)           ## 00000188
/* 07D30 80940A00 46162180 */  add.s   $f6, $f4, $f22             
/* 07D34 80940A04 E6320198 */  swc1    $f18, 0x0198($s1)          ## 00000198
/* 07D38 80940A08 1000000E */  beq     $zero, $zero, .L80940A44   
/* 07D3C 80940A0C E626019C */  swc1    $f6, 0x019C($s1)           ## 0000019C
/* 07D40 80940A10 C6280188 */  lwc1    $f8, 0x0188($s1)           ## 00000188
.L80940A14:
/* 07D44 80940A14 44819000 */  mtc1    $at, $f18                  ## $f18 = 7.00
/* 07D48 80940A18 C62A0190 */  lwc1    $f10, 0x0190($s1)          ## 00000190
/* 07D4C 80940A1C 3C01C120 */  lui     $at, 0xC120                ## $at = C1200000
/* 07D50 80940A20 E6280188 */  swc1    $f8, 0x0188($s1)           ## 00000188
/* 07D54 80940A24 C6300198 */  lwc1    $f16, 0x0198($s1)          ## 00000198
/* 07D58 80940A28 44814000 */  mtc1    $at, $f8                   ## $f8 = -10.00
/* 07D5C 80940A2C C62601A0 */  lwc1    $f6, 0x01A0($s1)           ## 000001A0
/* 07D60 80940A30 E62A0190 */  swc1    $f10, 0x0190($s1)          ## 00000190
/* 07D64 80940A34 46128100 */  add.s   $f4, $f16, $f18            
/* 07D68 80940A38 46083280 */  add.s   $f10, $f6, $f8             
/* 07D6C 80940A3C E6240198 */  swc1    $f4, 0x0198($s1)           ## 00000198
/* 07D70 80940A40 E62A01A0 */  swc1    $f10, 0x01A0($s1)          ## 000001A0
.L80940A44:
/* 07D74 80940A44 862A0152 */  lh      $t2, 0x0152($s1)           ## 00000152
/* 07D78 80940A48 314B001F */  andi    $t3, $t2, 0x001F           ## $t3 = 00000000
/* 07D7C 80940A4C 5560000C */  bnel    $t3, $zero, .L80940A80     
/* 07D80 80940A50 86220158 */  lh      $v0, 0x0158($s1)           ## 00000158
/* 07D84 80940A54 0C03F66B */  jal     Math_Rand_ZeroOne
              ## Rand.Next() float
/* 07D88 80940A58 00000000 */  nop
/* 07D8C 80940A5C 3C018095 */  lui     $at, %hi(D_8094B014)       ## $at = 80950000
/* 07D90 80940A60 C430B014 */  lwc1    $f16, %lo(D_8094B014)($at) 
/* 07D94 80940A64 240C0004 */  addiu   $t4, $zero, 0x0004         ## $t4 = 00000004
/* 07D98 80940A68 4610003C */  c.lt.s  $f0, $f16                  
/* 07D9C 80940A6C 00000000 */  nop
/* 07DA0 80940A70 45020003 */  bc1fl   .L80940A80                 
/* 07DA4 80940A74 86220158 */  lh      $v0, 0x0158($s1)           ## 00000158
/* 07DA8 80940A78 A62C0158 */  sh      $t4, 0x0158($s1)           ## 00000158
/* 07DAC 80940A7C 86220158 */  lh      $v0, 0x0158($s1)           ## 00000158
.L80940A80:
/* 07DB0 80940A80 3C0E8095 */  lui     $t6, %hi(D_8094A900)       ## $t6 = 80950000
/* 07DB4 80940A84 00026840 */  sll     $t5, $v0,  1               
/* 07DB8 80940A88 01CD7021 */  addu    $t6, $t6, $t5              
/* 07DBC 80940A8C 85CEA900 */  lh      $t6, %lo(D_8094A900)($t6)  
/* 07DC0 80940A90 244FFFFF */  addiu   $t7, $v0, 0xFFFF           ## $t7 = FFFFFFFF
/* 07DC4 80940A94 10400002 */  beq     $v0, $zero, .L80940AA0     
/* 07DC8 80940A98 A62E04CC */  sh      $t6, 0x04CC($s1)           ## 000004CC
/* 07DCC 80940A9C A62F0158 */  sh      $t7, 0x0158($s1)           ## 00000158
.L80940AA0:
/* 07DD0 80940AA0 8E39014C */  lw      $t9, 0x014C($s1)           ## 0000014C
/* 07DD4 80940AA4 3C188094 */  lui     $t8, %hi(func_8093C7E4)    ## $t8 = 80940000
/* 07DD8 80940AA8 2718C7E4 */  addiu   $t8, $t8, %lo(func_8093C7E4) ## $t8 = 8093C7E4
/* 07DDC 80940AAC 5319009D */  beql    $t8, $t9, .L80940D24       
/* 07DE0 80940AB0 8FBF004C */  lw      $ra, 0x004C($sp)           
/* 07DE4 80940AB4 922805F8 */  lbu     $t0, 0x05F8($s1)           ## 000005F8
/* 07DE8 80940AB8 3C0A8095 */  lui     $t2, %hi(D_8094A920)       ## $t2 = 80950000
/* 07DEC 80940ABC 254AA920 */  addiu   $t2, $t2, %lo(D_8094A920)  ## $t2 = 8094A920
/* 07DF0 80940AC0 11000097 */  beq     $t0, $zero, .L80940D20     
/* 07DF4 80940AC4 27A90068 */  addiu   $t1, $sp, 0x0068           ## $t1 = FFFFFFD8
/* 07DF8 80940AC8 8D4C0000 */  lw      $t4, 0x0000($t2)           ## 8094A920
/* 07DFC 80940ACC 8D4B0004 */  lw      $t3, 0x0004($t2)           ## 8094A924
/* 07E00 80940AD0 3C0E8095 */  lui     $t6, %hi(D_8094A92C)       ## $t6 = 80950000
/* 07E04 80940AD4 AD2C0000 */  sw      $t4, 0x0000($t1)           ## FFFFFFD8
/* 07E08 80940AD8 8D4C0008 */  lw      $t4, 0x0008($t2)           ## 8094A928
/* 07E0C 80940ADC 25CEA92C */  addiu   $t6, $t6, %lo(D_8094A92C)  ## $t6 = 8094A92C
/* 07E10 80940AE0 AD2B0004 */  sw      $t3, 0x0004($t1)           ## FFFFFFDC
/* 07E14 80940AE4 AD2C0008 */  sw      $t4, 0x0008($t1)           ## FFFFFFE0
/* 07E18 80940AE8 8DD80000 */  lw      $t8, 0x0000($t6)           ## 8094A92C
/* 07E1C 80940AEC 27AD005C */  addiu   $t5, $sp, 0x005C           ## $t5 = FFFFFFCC
/* 07E20 80940AF0 8DCF0004 */  lw      $t7, 0x0004($t6)           ## 8094A930
/* 07E24 80940AF4 ADB80000 */  sw      $t8, 0x0000($t5)           ## FFFFFFCC
/* 07E28 80940AF8 8DD80008 */  lw      $t8, 0x0008($t6)           ## 8094A934
/* 07E2C 80940AFC ADAF0004 */  sw      $t7, 0x0004($t5)           ## FFFFFFD0
/* 07E30 80940B00 44809000 */  mtc1    $zero, $f18                ## $f18 = 0.00
/* 07E34 80940B04 ADB80008 */  sw      $t8, 0x0008($t5)           ## FFFFFFD4
/* 07E38 80940B08 C62404D0 */  lwc1    $f4, 0x04D0($s1)           ## 000004D0
/* 07E3C 80940B0C 00008025 */  or      $s0, $zero, $zero          ## $s0 = 00000000
/* 07E40 80940B10 26220450 */  addiu   $v0, $s1, 0x0450           ## $v0 = 00000450
/* 07E44 80940B14 4604903C */  c.lt.s  $f18, $f4                  
/* 07E48 80940B18 3C018095 */  lui     $at, %hi(D_8094B018)       ## $at = 80950000
/* 07E4C 80940B1C 27B20074 */  addiu   $s2, $sp, 0x0074           ## $s2 = FFFFFFE4
/* 07E50 80940B20 4502003F */  bc1fl   .L80940C20                 
/* 07E54 80940B24 3C01428C */  lui     $at, 0x428C                ## $at = 428C0000
/* 07E58 80940B28 C438B018 */  lwc1    $f24, %lo(D_8094B018)($at) 
/* 07E5C 80940B2C 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 07E60 80940B30 4481B000 */  mtc1    $at, $f22                  ## $f22 = 0.50
/* 07E64 80940B34 3C01428C */  lui     $at, 0x428C                ## $at = 428C0000
/* 07E68 80940B38 4481A000 */  mtc1    $at, $f20                  ## $f20 = 70.00
/* 07E6C 80940B3C AFA20054 */  sw      $v0, 0x0054($sp)           
/* 07E70 80940B40 8FA20054 */  lw      $v0, 0x0054($sp)           
.L80940B44:
/* 07E74 80940B44 4600A306 */  mov.s   $f12, $f20                 
/* 07E78 80940B48 8C480000 */  lw      $t0, 0x0000($v0)           ## 00000450
/* 07E7C 80940B4C AE480000 */  sw      $t0, 0x0000($s2)           ## FFFFFFE4
/* 07E80 80940B50 8C590004 */  lw      $t9, 0x0004($v0)           ## 00000454
/* 07E84 80940B54 AE590004 */  sw      $t9, 0x0004($s2)           ## FFFFFFE8
/* 07E88 80940B58 8C480008 */  lw      $t0, 0x0008($v0)           ## 00000458
/* 07E8C 80940B5C 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07E90 80940B60 AE480008 */  sw      $t0, 0x0008($s2)           ## FFFFFFEC
/* 07E94 80940B64 C7A60074 */  lwc1    $f6, 0x0074($sp)           
/* 07E98 80940B68 4600A306 */  mov.s   $f12, $f20                 
/* 07E9C 80940B6C 46003200 */  add.s   $f8, $f6, $f0              
/* 07EA0 80940B70 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07EA4 80940B74 E7A80074 */  swc1    $f8, 0x0074($sp)           
/* 07EA8 80940B78 C7AA0078 */  lwc1    $f10, 0x0078($sp)          
/* 07EAC 80940B7C 4600A306 */  mov.s   $f12, $f20                 
/* 07EB0 80940B80 46005400 */  add.s   $f16, $f10, $f0            
/* 07EB4 80940B84 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07EB8 80940B88 E7B00078 */  swc1    $f16, 0x0078($sp)          
/* 07EBC 80940B8C C7B2007C */  lwc1    $f18, 0x007C($sp)          
/* 07EC0 80940B90 E7B80060 */  swc1    $f24, 0x0060($sp)          
/* 07EC4 80940B94 4600B306 */  mov.s   $f12, $f22                 
/* 07EC8 80940B98 46009100 */  add.s   $f4, $f18, $f0             
/* 07ECC 80940B9C 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07ED0 80940BA0 E7A4007C */  swc1    $f4, 0x007C($sp)           
/* 07ED4 80940BA4 E7A0005C */  swc1    $f0, 0x005C($sp)           
/* 07ED8 80940BA8 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07EDC 80940BAC 4600B306 */  mov.s   $f12, $f22                 
/* 07EE0 80940BB0 3C014000 */  lui     $at, 0x4000                ## $at = 40000000
/* 07EE4 80940BB4 44816000 */  mtc1    $at, $f12                  ## $f12 = 2.00
/* 07EE8 80940BB8 0C00CFBE */  jal     Math_Rand_ZeroFloat
              
/* 07EEC 80940BBC E7A00064 */  swc1    $f0, 0x0064($sp)           
/* 07EF0 80940BC0 4600018D */  trunc.w.s $f6, $f0                   
/* 07EF4 80940BC4 240F0025 */  addiu   $t7, $zero, 0x0025         ## $t7 = 00000025
/* 07EF8 80940BC8 02602025 */  or      $a0, $s3, $zero            ## $a0 = 00000000
/* 07EFC 80940BCC 02402825 */  or      $a1, $s2, $zero            ## $a1 = FFFFFFE4
/* 07F00 80940BD0 440A3000 */  mfc1    $t2, $f6                   
/* 07F04 80940BD4 27A60068 */  addiu   $a2, $sp, 0x0068           ## $a2 = FFFFFFD8
/* 07F08 80940BD8 27A7005C */  addiu   $a3, $sp, 0x005C           ## $a3 = FFFFFFCC
/* 07F0C 80940BDC 000A5C00 */  sll     $t3, $t2, 16               
/* 07F10 80940BE0 000B6403 */  sra     $t4, $t3, 16               
/* 07F14 80940BE4 258D0008 */  addiu   $t5, $t4, 0x0008           ## $t5 = 00000008
/* 07F18 80940BE8 448D4000 */  mtc1    $t5, $f8                   ## $f8 = 0.00
/* 07F1C 80940BEC 00000000 */  nop
/* 07F20 80940BF0 468042A0 */  cvt.s.w $f10, $f8                  
/* 07F24 80940BF4 E7AA0010 */  swc1    $f10, 0x0010($sp)          
/* 07F28 80940BF8 862E001C */  lh      $t6, 0x001C($s1)           ## 0000001C
/* 07F2C 80940BFC AFAF0018 */  sw      $t7, 0x0018($sp)           
/* 07F30 80940C00 0C24E334 */  jal     func_80938CD0              
/* 07F34 80940C04 AFAE0014 */  sw      $t6, 0x0014($sp)           
/* 07F38 80940C08 26100001 */  addiu   $s0, $s0, 0x0001           ## $s0 = 00000001
/* 07F3C 80940C0C 00108400 */  sll     $s0, $s0, 16               
/* 07F40 80940C10 00108403 */  sra     $s0, $s0, 16               
/* 07F44 80940C14 5A00FFCB */  blezl   $s0, .L80940B44            
/* 07F48 80940C18 8FA20054 */  lw      $v0, 0x0054($sp)           
/* 07F4C 80940C1C 3C01428C */  lui     $at, 0x428C                ## $at = 428C0000
.L80940C20:
/* 07F50 80940C20 4481A000 */  mtc1    $at, $f20                  ## $f20 = 70.00
/* 07F54 80940C24 3C013F00 */  lui     $at, 0x3F00                ## $at = 3F000000
/* 07F58 80940C28 4481B000 */  mtc1    $at, $f22                  ## $f22 = 0.50
/* 07F5C 80940C2C 3C018095 */  lui     $at, %hi(D_8094B01C)       ## $at = 80950000
/* 07F60 80940C30 26220444 */  addiu   $v0, $s1, 0x0444           ## $v0 = 00000444
/* 07F64 80940C34 C438B01C */  lwc1    $f24, %lo(D_8094B01C)($at) 
/* 07F68 80940C38 27B20074 */  addiu   $s2, $sp, 0x0074           ## $s2 = FFFFFFE4
/* 07F6C 80940C3C AFA20054 */  sw      $v0, 0x0054($sp)           
/* 07F70 80940C40 00008025 */  or      $s0, $zero, $zero          ## $s0 = 00000000
/* 07F74 80940C44 8FA20054 */  lw      $v0, 0x0054($sp)           
.L80940C48:
/* 07F78 80940C48 4600A306 */  mov.s   $f12, $f20                 
/* 07F7C 80940C4C 8C590000 */  lw      $t9, 0x0000($v0)           ## 00000444
/* 07F80 80940C50 AE590000 */  sw      $t9, 0x0000($s2)           ## FFFFFFE4
/* 07F84 80940C54 8C580004 */  lw      $t8, 0x0004($v0)           ## 00000448
/* 07F88 80940C58 AE580004 */  sw      $t8, 0x0004($s2)           ## FFFFFFE8
/* 07F8C 80940C5C 8C590008 */  lw      $t9, 0x0008($v0)           ## 0000044C
/* 07F90 80940C60 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07F94 80940C64 AE590008 */  sw      $t9, 0x0008($s2)           ## FFFFFFEC
/* 07F98 80940C68 C7B00074 */  lwc1    $f16, 0x0074($sp)          
/* 07F9C 80940C6C 4600A306 */  mov.s   $f12, $f20                 
/* 07FA0 80940C70 46008480 */  add.s   $f18, $f16, $f0            
/* 07FA4 80940C74 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07FA8 80940C78 E7B20074 */  swc1    $f18, 0x0074($sp)          
/* 07FAC 80940C7C C7A40078 */  lwc1    $f4, 0x0078($sp)           
/* 07FB0 80940C80 4600A306 */  mov.s   $f12, $f20                 
/* 07FB4 80940C84 46002180 */  add.s   $f6, $f4, $f0              
/* 07FB8 80940C88 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07FBC 80940C8C E7A60078 */  swc1    $f6, 0x0078($sp)           
/* 07FC0 80940C90 C7A8007C */  lwc1    $f8, 0x007C($sp)           
/* 07FC4 80940C94 E7B80060 */  swc1    $f24, 0x0060($sp)          
/* 07FC8 80940C98 4600B306 */  mov.s   $f12, $f22                 
/* 07FCC 80940C9C 46004280 */  add.s   $f10, $f8, $f0             
/* 07FD0 80940CA0 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07FD4 80940CA4 E7AA007C */  swc1    $f10, 0x007C($sp)          
/* 07FD8 80940CA8 E7A0005C */  swc1    $f0, 0x005C($sp)           
/* 07FDC 80940CAC 0C00CFC8 */  jal     Math_Rand_CenteredFloat
              
/* 07FE0 80940CB0 4600B306 */  mov.s   $f12, $f22                 
/* 07FE4 80940CB4 3C014000 */  lui     $at, 0x4000                ## $at = 40000000
/* 07FE8 80940CB8 44816000 */  mtc1    $at, $f12                  ## $f12 = 2.00
/* 07FEC 80940CBC 0C00CFBE */  jal     Math_Rand_ZeroFloat
              
/* 07FF0 80940CC0 E7A00064 */  swc1    $f0, 0x0064($sp)           
/* 07FF4 80940CC4 4600040D */  trunc.w.s $f16, $f0                  
/* 07FF8 80940CC8 240E0025 */  addiu   $t6, $zero, 0x0025         ## $t6 = 00000025
/* 07FFC 80940CCC 02602025 */  or      $a0, $s3, $zero            ## $a0 = 00000000
/* 08000 80940CD0 02402825 */  or      $a1, $s2, $zero            ## $a1 = FFFFFFE4
/* 08004 80940CD4 44098000 */  mfc1    $t1, $f16                  
/* 08008 80940CD8 27A60068 */  addiu   $a2, $sp, 0x0068           ## $a2 = FFFFFFD8
/* 0800C 80940CDC 27A7005C */  addiu   $a3, $sp, 0x005C           ## $a3 = FFFFFFCC
/* 08010 80940CE0 00095400 */  sll     $t2, $t1, 16               
/* 08014 80940CE4 000A5C03 */  sra     $t3, $t2, 16               
/* 08018 80940CE8 256C0008 */  addiu   $t4, $t3, 0x0008           ## $t4 = 00000008
/* 0801C 80940CEC 448C9000 */  mtc1    $t4, $f18                  ## $f18 = 0.00
/* 08020 80940CF0 00000000 */  nop
/* 08024 80940CF4 46809120 */  cvt.s.w $f4, $f18                  
/* 08028 80940CF8 E7A40010 */  swc1    $f4, 0x0010($sp)           
/* 0802C 80940CFC 862D001C */  lh      $t5, 0x001C($s1)           ## 0000001C
/* 08030 80940D00 AFAE0018 */  sw      $t6, 0x0018($sp)           
/* 08034 80940D04 0C24E334 */  jal     func_80938CD0              
/* 08038 80940D08 AFAD0014 */  sw      $t5, 0x0014($sp)           
/* 0803C 80940D0C 26100001 */  addiu   $s0, $s0, 0x0001           ## $s0 = 00000001
/* 08040 80940D10 00108400 */  sll     $s0, $s0, 16               
/* 08044 80940D14 00108403 */  sra     $s0, $s0, 16               
/* 08048 80940D18 5A00FFCB */  blezl   $s0, .L80940C48            
/* 0804C 80940D1C 8FA20054 */  lw      $v0, 0x0054($sp)           
.L80940D20:
/* 08050 80940D20 8FBF004C */  lw      $ra, 0x004C($sp)           
.L80940D24:
/* 08054 80940D24 D7B40020 */  ldc1    $f20, 0x0020($sp)          
/* 08058 80940D28 D7B60028 */  ldc1    $f22, 0x0028($sp)          
/* 0805C 80940D2C D7B80030 */  ldc1    $f24, 0x0030($sp)          
/* 08060 80940D30 8FB0003C */  lw      $s0, 0x003C($sp)           
/* 08064 80940D34 8FB10040 */  lw      $s1, 0x0040($sp)           
/* 08068 80940D38 8FB20044 */  lw      $s2, 0x0044($sp)           
/* 0806C 80940D3C 8FB30048 */  lw      $s3, 0x0048($sp)           
/* 08070 80940D40 03E00008 */  jr      $ra                        
/* 08074 80940D44 27BD0090 */  addiu   $sp, $sp, 0x0090           ## $sp = 00000000
