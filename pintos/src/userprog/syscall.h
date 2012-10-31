#ifndef USERPROG_SYSCALL_H
#define USERPROG_SYSCALL_H

void syscall_init (void);

/*我的修改*/
int sys_exit (int status);
/*==我的修改*/
#endif /* userprog/syscall.h */
