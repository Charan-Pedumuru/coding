#include<stdio.h>
#include<pthread.h>

void *computation(void *add);

int main()
{
    long value = 100;
    pthread_t thread1;
    pthread_create(&thread1, NULL, computation, (void *) &value);
    pthread_join(thread1, NULL);
}

void *computation(void *add)
{
    long *value = (long *) add;
    printf("Hello from thread\n");
    printf("Value: %ld\n", *value);
    return NULL;
}