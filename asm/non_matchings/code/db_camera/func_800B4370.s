glabel func_800B4370
/* B2B510 800B4370 27BDFFB0 */  addiu $sp, $sp, -0x50
/* B2B514 800B4374 AFBF0024 */  sw    $ra, 0x24($sp)
/* B2B518 800B4378 AFB20020 */  sw    $s2, 0x20($sp)
/* B2B51C 800B437C AFB1001C */  sw    $s1, 0x1c($sp)
/* B2B520 800B4380 AFB00018 */  sw    $s0, 0x18($sp)
/* B2B524 800B4384 AFA50054 */  sw    $a1, 0x54($sp)
/* B2B528 800B4388 848E007C */  lh    $t6, 0x7c($a0)
/* B2B52C 800B438C 00059400 */  sll   $s2, $a1, 0x10
/* B2B530 800B4390 24010001 */  li    $at, 1
/* B2B534 800B4394 00129403 */  sra   $s2, $s2, 0x10
/* B2B538 800B4398 00808025 */  move  $s0, $a0
/* B2B53C 800B439C 11C10017 */  beq   $t6, $at, .L800B43FC
/* B2B540 800B43A0 00C03825 */   move  $a3, $a2
/* B2B544 800B43A4 8C8F0088 */  lw    $t7, 0x88($a0)
/* B2B548 800B43A8 0012C900 */  sll   $t9, $s2, 4
/* B2B54C 800B43AC 02198821 */  addu  $s1, $s0, $t9
/* B2B550 800B43B0 11E0000C */  beqz  $t7, .L800B43E4
/* B2B554 800B43B4 263108B0 */   addiu $s1, $s1, 0x8b0
/* B2B558 800B43B8 0012C100 */  sll   $t8, $s2, 4
/* B2B55C 800B43BC 00981021 */  addu  $v0, $a0, $t8
/* B2B560 800B43C0 26050004 */  addiu $a1, $s0, 4
/* B2B564 800B43C4 AFA50028 */  sw    $a1, 0x28($sp)
/* B2B568 800B43C8 244400A8 */  addiu $a0, $v0, 0xa8
/* B2B56C 800B43CC 0C02CFD5 */  jal   func_800B3F54
/* B2B570 800B43D0 AFA20030 */   sw    $v0, 0x30($sp)
/* B2B574 800B43D4 8FA20030 */  lw    $v0, 0x30($sp)
/* B2B578 800B43D8 8FA50028 */  lw    $a1, 0x28($sp)
/* B2B57C 800B43DC 10000022 */  b     .L800B4468
/* B2B580 800B43E0 245108B0 */   addiu $s1, $v0, 0x8b0
.L800B43E4:
/* B2B584 800B43E4 26050004 */  addiu $a1, $s0, 4
/* B2B588 800B43E8 AFA50028 */  sw    $a1, 0x28($sp)
/* B2B58C 800B43EC 0C02CFD5 */  jal   func_800B3F54
/* B2B590 800B43F0 26240008 */   addiu $a0, $s1, 8
/* B2B594 800B43F4 1000001C */  b     .L800B4468
/* B2B598 800B43F8 8FA50028 */   lw    $a1, 0x28($sp)
.L800B43FC:
/* B2B59C 800B43FC 8E080088 */  lw    $t0, 0x88($s0)
/* B2B5A0 800B4400 00125100 */  sll   $t2, $s2, 4
/* B2B5A4 800B4404 020A8821 */  addu  $s1, $s0, $t2
/* B2B5A8 800B4408 1100000B */  beqz  $t0, .L800B4438
/* B2B5AC 800B440C 24E40094 */   addiu $a0, $a3, 0x94
/* B2B5B0 800B4410 00124900 */  sll   $t1, $s2, 4
/* B2B5B4 800B4414 02091021 */  addu  $v0, $s0, $t1
/* B2B5B8 800B4418 244500A8 */  addiu $a1, $v0, 0xa8
/* B2B5BC 800B441C AFA20030 */  sw    $v0, 0x30($sp)
/* B2B5C0 800B4420 24E40094 */  addiu $a0, $a3, 0x94
/* B2B5C4 800B4424 0C02D013 */  jal   func_800B404C
/* B2B5C8 800B4428 27A60034 */   addiu $a2, $sp, 0x34
/* B2B5CC 800B442C 8FA20030 */  lw    $v0, 0x30($sp)
/* B2B5D0 800B4430 10000005 */  b     .L800B4448
/* B2B5D4 800B4434 245108B0 */   addiu $s1, $v0, 0x8b0
.L800B4438:
/* B2B5D8 800B4438 263108B0 */  addiu $s1, $s1, 0x8b0
/* B2B5DC 800B443C 26250008 */  addiu $a1, $s1, 8
/* B2B5E0 800B4440 0C02D013 */  jal   func_800B404C
/* B2B5E4 800B4444 27A60034 */   addiu $a2, $sp, 0x34
.L800B4448:
/* B2B5E8 800B4448 27AB0034 */  addiu $t3, $sp, 0x34
/* B2B5EC 800B444C 8D6D0000 */  lw    $t5, ($t3)
/* B2B5F0 800B4450 26050004 */  addiu $a1, $s0, 4
/* B2B5F4 800B4454 ACAD0000 */  sw    $t5, ($a1)
/* B2B5F8 800B4458 8D6C0004 */  lw    $t4, 4($t3)
/* B2B5FC 800B445C ACAC0004 */  sw    $t4, 4($a1)
/* B2B600 800B4460 8D6D0008 */  lw    $t5, 8($t3)
/* B2B604 800B4464 ACAD0008 */  sw    $t5, 8($a1)
.L800B4468:
/* B2B608 800B4468 87AF0046 */  lh    $t7, 0x46($sp)
/* B2B60C 800B446C 3C01437A */  li    $at, 0x437A0000 # 0.000000
/* B2B610 800B4470 44812000 */  mtc1  $at, $f4
/* B2B614 800B4474 240E2000 */  li    $t6, 8192
/* B2B618 800B4478 25F88001 */  addiu $t8, $t7, -0x7fff
/* B2B61C 800B447C A7AE0044 */  sh    $t6, 0x44($sp)
/* B2B620 800B4480 A7B80046 */  sh    $t8, 0x46($sp)
/* B2B624 800B4484 26040010 */  addiu $a0, $s0, 0x10
/* B2B628 800B4488 27A60040 */  addiu $a2, $sp, 0x40
/* B2B62C 800B448C 0C02CED4 */  jal   func_800B3B50
/* B2B630 800B4490 E7A40040 */   swc1  $f4, 0x40($sp)
/* B2B634 800B4494 82390001 */  lb    $t9, 1($s1)
/* B2B638 800B4498 3C013FB4 */  li    $at, 0x3FB40000 # 0.000000
/* B2B63C 800B449C 44815000 */  mtc1  $at, $f10
/* B2B640 800B44A0 A619004C */  sh    $t9, 0x4c($s0)
/* B2B644 800B44A4 8608004C */  lh    $t0, 0x4c($s0)
/* B2B648 800B44A8 02401025 */  move  $v0, $s2
/* B2B64C 800B44AC 44883000 */  mtc1  $t0, $f6
/* B2B650 800B44B0 00000000 */  nop   
/* B2B654 800B44B4 46803220 */  cvt.s.w $f8, $f6
/* B2B658 800B44B8 460A4402 */  mul.s $f16, $f8, $f10
/* B2B65C 800B44BC E6100050 */  swc1  $f16, 0x50($s0)
/* B2B660 800B44C0 C6320004 */  lwc1  $f18, 4($s1)
/* B2B664 800B44C4 E6120048 */  swc1  $f18, 0x48($s0)
/* B2B668 800B44C8 8FBF0024 */  lw    $ra, 0x24($sp)
/* B2B66C 800B44CC 8FB20020 */  lw    $s2, 0x20($sp)
/* B2B670 800B44D0 8FB1001C */  lw    $s1, 0x1c($sp)
/* B2B674 800B44D4 8FB00018 */  lw    $s0, 0x18($sp)
/* B2B678 800B44D8 03E00008 */  jr    $ra
/* B2B67C 800B44DC 27BD0050 */   addiu $sp, $sp, 0x50

