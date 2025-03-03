#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

void *threadfun(void *var)
{
    sleep(1);
    printf("Printing linux from thread\n");
    return NULL;
}

int main()
{
    pthread_t thread_id;
    printf("Before Thread\n");
    pthread_create(&thread_id, NULL, threadfun, NULL);
    pthread_join(thread_id,NULL);
    printf("After Thread\n");
    exit(0);
}
