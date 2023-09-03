#include "osint_debug.h"

#include "macros.h"

//! Rare changes
// This may not necessarily have been changed, but in order to build after removing
// the thprof member of OSThread, this file had to be removed

// s32 __osThprofFlag = 0;
// void (*__osThprofFunc)(OSThread*) = NULL;

// u32 __osThprofLastTimer;
// u32 __osThprofCount;
// __OSThreadprofile_s thprof[THPROF_IDMAX] ALIGNED(0x10);
// u64 __osThprofHeap[THPROF_STACKSIZE] ALIGNED(0x10);
// void* __osThprofStack;

// void osThreadProfileCallback(OSThread* osthread) {
//     register u32 now_time = osGetCount();
//     __OSThreadprofile_s* thprof = osthread->thprof;

//     thprof->time += now_time - __osThprofLastTimer;
//     thprof->count++;
//     __osThprofCount++;
//     __osThprofLastTimer = now_time;
// }

//! End Rare changes
