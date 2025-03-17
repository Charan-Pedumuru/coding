#include <stdio.h>

enum Status { SUCCESS = 1, FAILURE = 0, PENDING = 2 };

int main() {
    enum Status result;
    result = SUCCESS;

    printf("Status: %d\n", result);
    return 0;
}
