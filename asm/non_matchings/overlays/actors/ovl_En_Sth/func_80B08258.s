.rdata
glabel D_80B0B570
    .asciz "../z_en_sth.c"
    .balign 4

glabel D_80B0B580
    .asciz "../z_en_sth.c"
    .balign 4

.text
glabel func_80B08258
/* 00D18 80B08258 27BDFF98 */  addiu   $sp, $sp, 0xFF98           ## $sp = FFFFFF98
/* 00D1C 80B0825C AFB1002C */  sw      $s1, 0x002C($sp)
/* 00D20 80B08260 00A08825 */  or      $s1, $a1, $zero            ## $s1 = 00000000
/* 00D24 80B08264 AFBF0034 */  sw      $ra, 0x0034($sp)
/* 00D28 80B08268 AFB20030 */  sw      $s2, 0x0030($sp)
/* 00D2C 80B0826C AFB00028 */  sw      $s0, 0x0028($sp)
/* 00D30 80B08270 8CA50000 */  lw      $a1, 0x0000($a1)           ## 00000000
/* 00D34 80B08274 00809025 */  or      $s2, $a0, $zero            ## $s2 = 00000000
/* 00D38 80B08278 3C0680B1 */  lui     $a2, %hi(D_80B0B570)       ## $a2 = 80B10000
/* 00D3C 80B0827C 24C6B570 */  addiu   $a2, $a2, %lo(D_80B0B570)  ## $a2 = 80B0B570
/* 00D40 80B08280 27A4004C */  addiu   $a0, $sp, 0x004C           ## $a0 = FFFFFFE4
/* 00D44 80B08284 24070855 */  addiu   $a3, $zero, 0x0855         ## $a3 = 00000855
/* 00D48 80B08288 0C031AB1 */  jal     Graph_OpenDisps
/* 00D4C 80B0828C 00A08025 */  or      $s0, $a1, $zero            ## $s0 = 00000000
/* 00D50 80B08290 924E02A4 */  lbu     $t6, 0x02A4($s2)           ## 000002A4
/* 00D54 80B08294 3C190001 */  lui     $t9, 0x0001                ## $t9 = 00010000
/* 00D58 80B08298 3C018000 */  lui     $at, 0x8000                ## $at = 80000000
/* 00D5C 80B0829C 000E7900 */  sll     $t7, $t6,  4
/* 00D60 80B082A0 01EE7821 */  addu    $t7, $t7, $t6
/* 00D64 80B082A4 000F7880 */  sll     $t7, $t7,  2
/* 00D68 80B082A8 022FC021 */  addu    $t8, $s1, $t7
/* 00D6C 80B082AC 0338C821 */  addu    $t9, $t9, $t8
/* 00D70 80B082B0 8F3917B4 */  lw      $t9, 0x17B4($t9)           ## 000117B4
/* 00D74 80B082B4 03214821 */  addu    $t1, $t9, $at
/* 00D78 80B082B8 3C018016 */  lui     $at, %hi(gSegments+0x18)
/* 00D7C 80B082BC AC296FC0 */  sw      $t1, %lo(gSegments+0x18)($at)
/* 00D80 80B082C0 0C0250F2 */  jal     func_800943C8
/* 00D84 80B082C4 8E240000 */  lw      $a0, 0x0000($s1)           ## 00000000
/* 00D88 80B082C8 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 00D8C 80B082CC 3C0BDB06 */  lui     $t3, 0xDB06                ## $t3 = DB060000
/* 00D90 80B082D0 356B0020 */  ori     $t3, $t3, 0x0020           ## $t3 = DB060020
/* 00D94 80B082D4 244A0008 */  addiu   $t2, $v0, 0x0008           ## $t2 = 00000008
/* 00D98 80B082D8 AE0A02C0 */  sw      $t2, 0x02C0($s0)           ## 000002C0
/* 00D9C 80B082DC AC4B0000 */  sw      $t3, 0x0000($v0)           ## 00000000
/* 00DA0 80B082E0 864C001C */  lh      $t4, 0x001C($s2)           ## 0000001C
/* 00DA4 80B082E4 3C0E80B1 */  lui     $t6, %hi(D_80B0B4A8)       ## $t6 = 80B10000
/* 00DA8 80B082E8 25CEB4A8 */  addiu   $t6, $t6, %lo(D_80B0B4A8)  ## $t6 = 80B0B4A8
/* 00DAC 80B082EC 000C6880 */  sll     $t5, $t4,  2
/* 00DB0 80B082F0 01AC6823 */  subu    $t5, $t5, $t4
/* 00DB4 80B082F4 01AE1821 */  addu    $v1, $t5, $t6
/* 00DB8 80B082F8 8E240000 */  lw      $a0, 0x0000($s1)           ## 00000000
/* 00DBC 80B082FC 240F00FF */  addiu   $t7, $zero, 0x00FF         ## $t7 = 000000FF
/* 00DC0 80B08300 AFAF0010 */  sw      $t7, 0x0010($sp)
/* 00DC4 80B08304 90650000 */  lbu     $a1, 0x0000($v1)           ## 00000000
/* 00DC8 80B08308 90660001 */  lbu     $a2, 0x0001($v1)           ## 00000001
/* 00DCC 80B0830C 90670002 */  lbu     $a3, 0x0002($v1)           ## 00000002
/* 00DD0 80B08310 0C2C207B */  jal     func_80B081EC
/* 00DD4 80B08314 AFA20048 */  sw      $v0, 0x0048($sp)
/* 00DD8 80B08318 8FA80048 */  lw      $t0, 0x0048($sp)
/* 00DDC 80B0831C 3C0CDB06 */  lui     $t4, 0xDB06                ## $t4 = DB060000
/* 00DE0 80B08320 3C09DB06 */  lui     $t1, 0xDB06                ## $t1 = DB060000
/* 00DE4 80B08324 AD020004 */  sw      $v0, 0x0004($t0)           ## 00000004
/* 00DE8 80B08328 8658001C */  lh      $t8, 0x001C($s2)           ## 0000001C
/* 00DEC 80B0832C 358C0024 */  ori     $t4, $t4, 0x0024           ## $t4 = DB060024
/* 00DF0 80B08330 2405005A */  addiu   $a1, $zero, 0x005A         ## $a1 = 0000005A
/* 00DF4 80B08334 17000011 */  bne     $t8, $zero, .L80B0837C
/* 00DF8 80B08338 2406006E */  addiu   $a2, $zero, 0x006E         ## $a2 = 0000006E
/* 00DFC 80B0833C 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 00E00 80B08340 35290024 */  ori     $t1, $t1, 0x0024           ## $t1 = DB060024
/* 00E04 80B08344 240A00FF */  addiu   $t2, $zero, 0x00FF         ## $t2 = 000000FF
/* 00E08 80B08348 24590008 */  addiu   $t9, $v0, 0x0008           ## $t9 = 00000008
/* 00E0C 80B0834C AE1902C0 */  sw      $t9, 0x02C0($s0)           ## 000002C0
/* 00E10 80B08350 AC490000 */  sw      $t1, 0x0000($v0)           ## 00000000
/* 00E14 80B08354 8E240000 */  lw      $a0, 0x0000($s1)           ## 00000000
/* 00E18 80B08358 AFAA0010 */  sw      $t2, 0x0010($sp)
/* 00E1C 80B0835C 240500BE */  addiu   $a1, $zero, 0x00BE         ## $a1 = 000000BE
/* 00E20 80B08360 2406006E */  addiu   $a2, $zero, 0x006E         ## $a2 = 0000006E
/* 00E24 80B08364 00003825 */  or      $a3, $zero, $zero          ## $a3 = 00000000
/* 00E28 80B08368 0C2C207B */  jal     func_80B081EC
/* 00E2C 80B0836C AFA20044 */  sw      $v0, 0x0044($sp)
/* 00E30 80B08370 8FA30044 */  lw      $v1, 0x0044($sp)
/* 00E34 80B08374 1000000D */  beq     $zero, $zero, .L80B083AC
/* 00E38 80B08378 AC620004 */  sw      $v0, 0x0004($v1)           ## 00000004
.L80B0837C:
/* 00E3C 80B0837C 8E0202C0 */  lw      $v0, 0x02C0($s0)           ## 000002C0
/* 00E40 80B08380 240D00FF */  addiu   $t5, $zero, 0x00FF         ## $t5 = 000000FF
/* 00E44 80B08384 24070082 */  addiu   $a3, $zero, 0x0082         ## $a3 = 00000082
/* 00E48 80B08388 244B0008 */  addiu   $t3, $v0, 0x0008           ## $t3 = 00000008
/* 00E4C 80B0838C AE0B02C0 */  sw      $t3, 0x02C0($s0)           ## 000002C0
/* 00E50 80B08390 AC4C0000 */  sw      $t4, 0x0000($v0)           ## 00000000
/* 00E54 80B08394 8E240000 */  lw      $a0, 0x0000($s1)           ## 00000000
/* 00E58 80B08398 AFAD0010 */  sw      $t5, 0x0010($sp)
/* 00E5C 80B0839C 0C2C207B */  jal     func_80B081EC
/* 00E60 80B083A0 AFA20040 */  sw      $v0, 0x0040($sp)
/* 00E64 80B083A4 8FA30040 */  lw      $v1, 0x0040($sp)
/* 00E68 80B083A8 AC620004 */  sw      $v0, 0x0004($v1)           ## 00000004
.L80B083AC:
/* 00E6C 80B083AC 8E45019C */  lw      $a1, 0x019C($s2)           ## 0000019C
/* 00E70 80B083B0 8E4601B8 */  lw      $a2, 0x01B8($s2)           ## 000001B8
/* 00E74 80B083B4 9247019A */  lbu     $a3, 0x019A($s2)           ## 0000019A
/* 00E78 80B083B8 3C0E80B0 */  lui     $t6, %hi(func_80B07FE0)    ## $t6 = 80B00000
/* 00E7C 80B083BC 3C0F80B1 */  lui     $t7, %hi(func_80B0813C)    ## $t7 = 80B10000
/* 00E80 80B083C0 25EF813C */  addiu   $t7, $t7, %lo(func_80B0813C) ## $t7 = 80B0813C
/* 00E84 80B083C4 25CE7FE0 */  addiu   $t6, $t6, %lo(func_80B07FE0) ## $t6 = 80B07FE0
/* 00E88 80B083C8 AFAE0010 */  sw      $t6, 0x0010($sp)
/* 00E8C 80B083CC AFAF0014 */  sw      $t7, 0x0014($sp)
/* 00E90 80B083D0 AFB20018 */  sw      $s2, 0x0018($sp)
/* 00E94 80B083D4 0C0286B2 */  jal     SkelAnime_DrawSV
/* 00E98 80B083D8 02202025 */  or      $a0, $s1, $zero            ## $a0 = 00000000
/* 00E9C 80B083DC 3C0680B1 */  lui     $a2, %hi(D_80B0B580)       ## $a2 = 80B10000
/* 00EA0 80B083E0 24C6B580 */  addiu   $a2, $a2, %lo(D_80B0B580)  ## $a2 = 80B0B580
/* 00EA4 80B083E4 27A4004C */  addiu   $a0, $sp, 0x004C           ## $a0 = FFFFFFE4
/* 00EA8 80B083E8 8E250000 */  lw      $a1, 0x0000($s1)           ## 00000000
/* 00EAC 80B083EC 0C031AD5 */  jal     Graph_CloseDisps
/* 00EB0 80B083F0 24070880 */  addiu   $a3, $zero, 0x0880         ## $a3 = 00000880
/* 00EB4 80B083F4 8FBF0034 */  lw      $ra, 0x0034($sp)
/* 00EB8 80B083F8 8FB00028 */  lw      $s0, 0x0028($sp)
/* 00EBC 80B083FC 8FB1002C */  lw      $s1, 0x002C($sp)
/* 00EC0 80B08400 8FB20030 */  lw      $s2, 0x0030($sp)
/* 00EC4 80B08404 03E00008 */  jr      $ra
/* 00EC8 80B08408 27BD0068 */  addiu   $sp, $sp, 0x0068           ## $sp = 00000000
/* 00ECC 80B0840C 00000000 */  nop
