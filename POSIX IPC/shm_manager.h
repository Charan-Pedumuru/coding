#ifndef SHM_MANAGER_H
#define SHM_MANAGER_H

#include <pthread.h>
#include <stdint.h>

// Define POSIX shared memory name and System V shared memory key
#define SHM_NAME "/shm_example"

// Enum for requester ID
typedef enum {
    mchp = 0x01,
    rtlabs = 0x02,
    mchp_saf = 0x03,
} requester_id_t;

// Structure to store token details
typedef struct {
    uint32_t num_tokens;
    uint32_t available_tokens;
    requester_id_t req_id;
} token_t;

// Shared memory structure with mutex
typedef struct {
    pthread_mutex_t lock;
    token_t token_data;
} shared_memory_t;

// Function declarations
shared_memory_t* allocate_shared_memory();
void detach_shared_memory(shared_memory_t *shm);
void destroy_shared_memory();
void initialize_mutex(shared_memory_t *shm);
void destroy_mutex(shared_memory_t *shm);

#endif // SHM_MANAGER_H
