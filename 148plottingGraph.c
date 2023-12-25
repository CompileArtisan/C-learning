#include <stdio.h>

void plotGraph(int time[], int speed[]) {
    
    for (int i = 10; i > 0; i--) {
        printf(" | ");
        for (int j = 0; j < 10; j++) {
            if (speed[j] >= i) {
                printf(" ::");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf(" |-");
    for (int i = 0; i < 10; ++i) {
        printf("---");
    }
    printf("\n");
}

int main() {
    int time[] = {25, 50, 75, 100, 125, 150, 175, 200, 225, 250};
    int speed[] = {8, 5, 3, 4, 9, 6, 2, 2, 6, 8};

    plotGraph(time, speed);

    return 0;
}
