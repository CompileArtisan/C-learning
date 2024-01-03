#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

// Function to generate random stock prices and write to file
void generateData() {
    FILE *file = fopen("stock_data.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }

    srand(time(0));

    for (int i = 0; i < 10; ++i) {
        double price = (double)(rand() % 1000) / 10.0; // Generating random price (0 - 100)
        fprintf(file, "%.2f\n", price);
    }

    fclose(file);
}

int main() {
    while (1) {
        generateData();
        sleep(2.5); // Update the data every 2.5 seconds
    }

    return 0;
}
