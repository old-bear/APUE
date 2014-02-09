// Author: jrjbear@gmail.com
// Date: Sun Feb  9 12:51:31 2014
//
// File: open_max.cpp
// Description: 

#include <unistd.h>
#include <limits.h>
#include <sys/resource.h>
#include <stdio.h>

int open_max()
{
    const int OPEN_MAX_GUESS = 1024;
    
    int openmax = 0;
    struct rlimit res;
    if ((openmax = sysconf(_SC_OPEN_MAX)) < 0
        || openmax == INT_MAX) {
        if (getrlimit(RLIMIT_NOFILE, &res) == 0) {
            openmax = (res.rlim_cur == RLIM_INFINITY?
                       OPEN_MAX_GUESS: res.rlim_cur);
        } else {
            fprintf(stderr, "Can't get limit for NOFILE, %m");
            openmax = OPEN_MAX_GUESS;
        }
    }
    return openmax;
}

int main(int argc, char* argv[])
{
    printf("Maximum number of open files for this "
           "process is: %d\n", open_max());
    return 0;
}
