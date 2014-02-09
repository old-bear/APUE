// Author: jrjbear@gmail.com
// Date: Sun Feb  9 12:26:40 2014
//
// File: primitive_types.cpp
// Description: Print size of primitive system data types

#include <sys/types.h>
#include <sys/acct.h>           // comp_t
#include <stddef.h>             // ptrdiff_t
#include <sys/resource.h>       // rlim_t
#include <signal.h>             // sig_atomic_t
#include <stdio.h>

#define PRINT_TYPE_SIZE(_type_)               \
    printf("sizeof(%s) is %d bytes\n", #_type_, sizeof(_type_));          

int main(int argc, char* argv[])
{
    PRINT_TYPE_SIZE(clock_t);
    PRINT_TYPE_SIZE(comp_t);
    PRINT_TYPE_SIZE(dev_t);
    PRINT_TYPE_SIZE(fd_set);
    PRINT_TYPE_SIZE(fpos_t);
    PRINT_TYPE_SIZE(gid_t);
    PRINT_TYPE_SIZE(ino_t);
    PRINT_TYPE_SIZE(mode_t);
    PRINT_TYPE_SIZE(nlink_t);
    PRINT_TYPE_SIZE(off_t);
    PRINT_TYPE_SIZE(pid_t);
    PRINT_TYPE_SIZE(pthread_t);
    PRINT_TYPE_SIZE(ptrdiff_t);
    PRINT_TYPE_SIZE(rlim_t);
    PRINT_TYPE_SIZE(sig_atomic_t);
    PRINT_TYPE_SIZE(sigset_t);
    PRINT_TYPE_SIZE(size_t);
    PRINT_TYPE_SIZE(ssize_t);
    PRINT_TYPE_SIZE(time_t);
    PRINT_TYPE_SIZE(uid_t);
    PRINT_TYPE_SIZE(wchar_t);
    return 0;
}
