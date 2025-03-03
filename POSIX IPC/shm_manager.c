#include "shm_manager.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <unistd.h>
#include <errno.h>

// Allocate shared memory using mmap()
shared_memory_t* allocate_shared_memory() {
    int fd;

    // Create or open POSIX shared memory
    fd = shm_open(SHM_NAME, O_CREAT | O_RDWR, 0666);
    if (fd == -1) {
        perror("shm_open failed");
        exit(EXIT_FAILURE);
    }

    // Set the size of shared memory
    if (ftruncate(fd, sizeof(shared_memory_t)) == -1) {
        perror("ftruncate failed");
        close(fd);
        exit(EXIT_FAILURE);
    }

    // Map shared memory into the process address space
    shared_memory_t *shm = (shared_memory_t *)mmap(NULL, sizeof(shared_memory_t),
                                                   PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    if (shm == MAP_FAILED) {
        perror("mmap failed");
        close(fd);
        exit(EXIT_FAILURE);
    }

    return shm;
}

// Detach shared memory
void detach_shared_memory(shared_memory_t *shm) {
    if (munmap(shm, sizeof(shared_memory_t)) == -1) {
        perror("munmap failed");
        exit(EXIT_FAILURE);
    }
}

// Destroy shared memory
void destroy_shared_memory() {
    if (shm_unlink(SHM_NAME) == -1) {
        perror("shm_unlink failed");
    }
}

// Initialize the mutex
void initialize_mutex(shared_memory_t *shm) {
    pthread_mutexattr_t attr;
    pthread_mutexattr_init(&attr);
    pthread_mutexattr_setpshared(&attr, PTHREAD_PROCESS_SHARED);  // Enable process-sharing mutex

    if (pthread_mutex_init(&shm->lock, &attr) != 0) {
        perror("pthread_mutex_init failed");
        exit(EXIT_FAILURE);
    }

    pthread_mutexattr_destroy(&attr);
}

// Destroy the mutex
void destroy_mutex(shared_memory_t *shm) {
    if (pthread_mutex_destroy(&shm->lock) != 0) {
        perror("pthread_mutex_destroy failed");
    }
}
