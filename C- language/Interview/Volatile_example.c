#include <stdio.h>
#include <signal.h>

volatile int flag = 0; // Can be modified by signal handler

void signal_handler(int signum) {
    flag = 1; // Set flag when signal is received
}

int main() {
    signal(SIGINT, signal_handler);

    printf("Press Ctrl+C to stop\n");
    while (!flag) { // Wait until flag is set
        // Doing work
    }

    printf("Signal received, exiting...\n");
    return 0;
}
