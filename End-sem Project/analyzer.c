#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

// Function to generate random stock prices and write to file
void *simulator(void *arg) {
    while (1) {
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
        sleep(2.5); // Update the data every 2.5 seconds
    }

    return NULL;
}

// Function to read stock data from file and perform analysis
void *analyzer(void *arg) {
    while (1) {
        FILE *file = fopen("stock_data.txt", "r");
        if (file == NULL) {
            printf("Error opening file.\n");
            exit(1);
        }

        double sum = 0, price;
        int count = 0;

        while (fscanf(file, "%lf", &price) != EOF) {
            sum += price;
            count++;
        }

        fclose(file);

        if (count > 0) {
            double average = sum / count;
            printf("Average stock price: %.2f\n", average);
            // Add more analysis as needed
        } 
        else {
            printf("No data found.\n");
        }

        sleep(5); // Analyzing every 5 seconds
    }

    return NULL;
}

int main() {
    pthread_t sim_thread, ana_thread;

    // Create threads for simulator and analyzer
    pthread_create(&sim_thread, NULL, simulator, NULL);
    pthread_create(&ana_thread, NULL, analyzer, NULL);

    // Wait for both threads to finish (which won't happen in this infinite loop)
    pthread_join(sim_thread, NULL);
    pthread_join(ana_thread, NULL);

    return 0;
}
