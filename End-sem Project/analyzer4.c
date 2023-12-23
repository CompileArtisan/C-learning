#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>

#define NUM_COMPANIES 3 // Define the number of companies

// Function to generate random stock prices for multiple companies and write to file
void *simulator(void *arg) {
    double prices[NUM_COMPANIES][10];
    for (int i = 0; i < NUM_COMPANIES; i++) {
        for (int j = 0; j < 10; j++) {
            prices[i][j] = (double)(rand() % 1000) / 10.0;
        }
    }

    while (1) {
        FILE *file = fopen("stock_datav4.txt", "w");
        time_t t = time(NULL);
        fprintf(file, "Stock data as of %s\n", ctime(&t));
        if (file == NULL) {
            printf("File doesn't exist yet. It has been created.\nPlease run the program again\n\n");
            exit(1);
        }

        srand(time(0));

        for (int i = 0; i < NUM_COMPANIES; i++) {
            fprintf(file, "Company %d:\n", i + 1);

            // Shift existing prices down the array
            for (int j = 1 ; j<10 ; j++) {
                prices[i][j-1] = prices[i][j];
            }

            // Print the shifted prices from the array
            for (int j = 0; j < 10; ++j) {
                fprintf(file, "%.2f\n", prices[i][j]);
            }

            // Generate a new price (less than 100) for the most recent slot
            prices[i][9] = (double)(rand() % 10000) / 100.0;

            fprintf(file, "\n");
        }


        fclose(file);
        sleep(2.5); // Update the data every 2.5 seconds
    }

    return NULL;
}

// Function to read stock data from file and perform simple analysis for multiple companies
void *analyzer(void *arg) {
    while (1) {
        FILE *file = fopen("stock_datav4.txt", "r");
        if (file == NULL) {
            printf("Error opening file.\n");
            exit(1);
        }

        char line[100]; // Buffer for reading lines from file
        printf("\033[2J\033[1;1H");
        while (fgets(line, sizeof(line), file) != NULL) {
            printf("%s", line); // Print each line (company data)
        }

        fclose(file);

        sleep(2.5); // Analyzing every 2.5 seconds
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
