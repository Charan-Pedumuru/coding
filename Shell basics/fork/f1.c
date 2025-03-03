#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    fork();
    fork();
    fork();
    printf("hello\n");
    return 0;
}


// The total number of process creatde is equal to the value 2^n where n is the number of fork system calls.
