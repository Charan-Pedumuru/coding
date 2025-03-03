#include<pthread.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<stdio.h>

int g=0;

void *funthread(void *var)
{
    int myid=getpid();
    static int s=0;

    ++s;
    ++g;

    printf("Thread ID: %d, Static: %d, Global: %d\n", myid, ++s, ++g);
}

int main()
{
    pthread_t tid;

    for (int i=0;i<3;i++) {
	pthread_create(&tid, NULL, funthread, NULL);
    }
    pthread_exit(NULL);
    return 0;
}
