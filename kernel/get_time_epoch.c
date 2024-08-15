#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <linux/time.h>

SYSCALL_DEFINE0(get_time_since_epoch) {
    struct timespec64 ts;
    ktime_get_real_ts64(&ts);
    return ts.tv_sec;  // Devolver solo los segundos desde epoch
}
