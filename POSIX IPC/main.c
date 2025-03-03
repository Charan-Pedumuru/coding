#include "shm_manager.h"
#include <stdio.h>
#include <unistd.h>

int main() {
    int shmid;
    
    // Allocate shared memory
    shared_memory_t *shm = allocate_shared_memory(&shmid);

    // Initialize mutex (first-time only)
    initialize_mutex(shm);

    // Lock mutex before updating shared memory
    pthread_mutex_lock(&shm->lock);

    // Initialize shared memory data
    shm->token_data.num_tokens = 10;
    shm->token_data.available_tokens = 5;
    shm->token_data.req_id = mchp;

    printf("Shared Memory Initialized: num_tokens=%d, available_tokens=%d, req_id=%d\n",
           shm->token_data.num_tokens, shm->token_data.available_tokens, shm->token_data.req_id);

    pthread_mutex_unlock(&shm->lock);

    // Keep running for a while
    sleep(10);

    // Cleanup
    destroy_mutex(shm);
    detach_shared_memory(shm);
    destroy_shared_memory();

    return 0;
}
