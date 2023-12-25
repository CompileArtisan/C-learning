#include <stdio.h>

void plotGraph(int speed[]) {
    
    for (int i = 10; i > 0; i--) {
        printf(" | "); //printing y-axis
        for (int j = 0; j < 10; j++) {
            if (speed[j] >= i) {
                printf(" ::");
            } 
            else {
                printf("   ");
            }
        }
        printf("\n");
    }

    //printing x-axis
    printf(" |-"); 
    for (int i = 0; i < 10; ++i) {
        printf("---");
    }
    printf("\n");
}

int main() {
    int speed[] = {8, 5, 3, 4, 9, 6, 2, 2, 6, 8};

    plotGraph(speed);

    return 0;
}
