#ifndef _LINUX_SUSFS_DEF_H
#define _LINUX_SUSFS_DEF_H

#include <linux/susfs.h>
#include <linux/workqueue.h>

bool susfs_is_current_proc_umounted(void);
void susfs_set_current_proc_umounted(void);
extern struct work_struct susfs_extra_works;

#endif /* _LINUX_SUSFS_DEF_H */
