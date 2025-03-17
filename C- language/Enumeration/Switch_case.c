#include <stdio.h>

enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal = GREEN;

    switch (signal) {
        case RED:
            printf("Stop!\n");
            break;
        case YELLOW:
            printf("Get Ready!\n");
            break;
        case GREEN:
            printf("Go!\n");
            break;
        default:
            printf("Invalid signal\n");
    }

    return 0;
}
