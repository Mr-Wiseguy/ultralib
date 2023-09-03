#include "PR/os_internal.h"
#include "PR/ultraerror.h"
#include "osint.h"
#include "../io/viint.h"

//! Rare changes
int osStopTimer(OSTimer* t) {
    register u32 savedMask;
    OSTimer* timep;
    int ret = -1;

#ifdef _DEBUG
    if (!__osViDevMgr.active) {
        __osError(ERR_OSSTOPTIMER, 0);
        return 0;
    }
#endif

    savedMask = __osDisableInt();
    if (t->next != NULL) {
        timep = t->next;
    
        if (timep != __osTimerList) {
            timep->value += t->value;
        }
    
        t->prev->next = t->next;
        t->next->prev = t->prev;
        t->next = NULL;
        t->prev = NULL;
    
        if (__osTimerList->next == __osTimerList) {
            __osSetCompare(0);
        }
        ret = 0;
    }

    __osRestoreInt(savedMask);
    return ret;
}
//! End Rare changes
