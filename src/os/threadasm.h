#ifndef _THREADASM_H_
#define _THREADASM_H_

// Offsets of members in the OSThread struct
#define THREAD_NEXT      0
#define THREAD_PRI       4
#define THREAD_QUEUE     8
#define THREAD_TLNEXT    12
#define THREAD_STATE     16
#define THREAD_FLAGS     18
#define THREAD_ID        20
#define THREAD_FP        24
#define THREAD_GP1       32
#define THREAD_GP2       40
#define THREAD_GP3       48
#define THREAD_GP4       56
#define THREAD_GP5       64
#define THREAD_GP6       72
#define THREAD_GP7       80
#define THREAD_GP8       88
#define THREAD_GP9       96
#define THREAD_GP10      104
#define THREAD_GP11      112
#define THREAD_GP12      120
#define THREAD_GP13      128
#define THREAD_GP14      136
#define THREAD_GP15      144
#define THREAD_GP16      152
#define THREAD_GP17      160
#define THREAD_GP18      168
#define THREAD_GP19      176
#define THREAD_GP20      184
#define THREAD_GP21      192
#define THREAD_GP22      200
#define THREAD_GP23      208
#define THREAD_GP24      216
#define THREAD_GP25      224
// k0 and k1 are reserved for the kernel
#define THREAD_GP28      232
#define THREAD_GP29      240
#define THREAD_GP30      248
#define THREAD_GP31      256
#define THREAD_LO        264
#define THREAD_HI        272
#define THREAD_SR        280
#define THREAD_PC        284
#define THREAD_CAUSE     288
#define THREAD_BADVADDR  292
#define THREAD_RCP       296
#define THREAD_FPCSR     300
#define THREAD_FP0       304
#define THREAD_FP2       312
#define THREAD_FP4       320
#define THREAD_FP6       328
#define THREAD_FP8       336
#define THREAD_FP10      344
#define THREAD_FP12      352
#define THREAD_FP14      360
#define THREAD_FP16      368
#define THREAD_FP18      376
#define THREAD_FP20      384
#define THREAD_FP22      392
#define THREAD_FP24      400
#define THREAD_FP26      408
#define THREAD_FP28      416
#define THREAD_FP30      424
#if (_MIPS_SIM == _MIPS_SIM_ABI64) || (_MIPS_SIM == _MIPS_SIM_NABI32)
#define THREAD_FP1       432
#define THREAD_FP3       440
#define THREAD_FP5       448
#define THREAD_FP7       456
#define THREAD_FP9       464
#define THREAD_FP11      472
#define THREAD_FP13      480
#define THREAD_FP15      488
#define THREAD_FP17      496
#define THREAD_FP19      504
#define THREAD_FP21      512
#define THREAD_FP23      520
#define THREAD_FP25      528
#define THREAD_FP27      536
#define THREAD_FP29      544
#define THREAD_FP31      552
#endif

#endif