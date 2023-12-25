#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <time.h>
#include <conio.h>

#define NUM_COMPANIES 3 // Define the number of companies

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

char UIheadings[10][100] = {"Select Company to Analyze:\nW-up ; S-down\n","Company 1","Company 2","Company 3"};

int printUI(char UIheadings[10][100],int totalOptions) {
    int selectedOption = 0;    
    while (1) {
        // Clear screen and move cursor to top
        printf("\033[2J\033[1;1H");

        // Display the title (first element of the array)
        printf("%s\n",UIheadings[0]);

        // Display the menu (rest of the elements)
        for (int i = 0; i < totalOptions; i++) {
            if (i == selectedOption) {
                printf("-> %s (Selected)\n", UIheadings[i+1]);
            } else {
                printf("   %s\n", UIheadings[i+1]);
            }
        }
        // Get user input
        char key = getche(); // Using getche() for single key press
        
        // Process user input
        if (key == 'w' || key == 'W') {
            // Move selection up
            selectedOption = (selectedOption - 1 + totalOptions) % totalOptions;
        } 
        else if (key == 's' || key == 'S') {
            // Move selection down
            selectedOption = (selectedOption + 1) % totalOptions;
        } 
        else if (key == '\r') {
            // User pressed Enter - Perform action based on selected option
            // For this example, just break the loop
            break;
        }
    }

    return selectedOption;
}



// Function to generate random stock prices for multiple companies and write to file
void *simulator(void *arg) {
    double prices[NUM_COMPANIES][10];
    for (int i = 0; i < NUM_COMPANIES; i++) {
        for (int j = 0; j < 10; j++) {
            prices[i][j] = (double)(rand() % 1000) / 10.0;
        }
    }

    while (1) {
        FILE *file = fopen("stock_datav7.txt", "w");
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
        sleep(2); // Update the data every 2 seconds
    }

    return NULL;
}

int ui=1,comp=0;
// Function to read stock data from file and perform simple analysis for multiple companies
void *analyzer(void *arg) {
    while (1) {
        FILE *file = fopen("stock_datav7.txt", "r");
        if (file == NULL) {
            printf("Error opening file.\n");
            exit(1);
        }

        
        printf("\033[2J\033[1;1H");
        
        // Read the file line by line
        int shares[3][10];
        int company = 0;
        int stock = 0;
        char line[100];

        // Skip the first line
        fgets(line, sizeof(line), file);

        while (fgets(line, sizeof(line), file)) { //store the line in line variable
            // Try to convert the line to a number
            char *end;
            long x = strtol(line, &end, 10);

            // end = address of the first character after the number, line = address of the first character of the line
            // If end = line, the conversion failed (no number found)
            if (end != line) {
                shares[company][stock] = x;
                stock++;
                if (stock == 10) {
                    stock = 0;
                    company++;
                }
                if (company == 3) {
                    break;
                }
            }
        }


        fclose(file);

        if(ui==1){
            
            comp=printUI(UIheadings,3);
        }
        
        
        ui=0; // To prevent the UI from printing again and again
        printf("\033[2J\033[1;1H");
        int sum=0,min=1000,max=0,avg=0;

        printf("Analysis of %s\n\n",UIheadings[comp+1]);
        int graph[10];
        for(int i = 0; i < 10; i++){
            graph[i] = (int)((shares[comp][i] / 10)+0.5);
        }

        plotGraph(graph);
        printf("\n\n");
               
        
        for(int i=0 ; i<10 ; i++){
            sum+=shares[comp][i];
            if(shares[comp][i] < min){
                min = shares[comp][i];
            } 
            if(shares[comp][i] > max){
                max = shares[comp][i];
            }
        }
        avg = sum / 10;
        printf("Minimum Stock price: %d\n",min);
        printf("Maximum Stock price: %d\n",max);
        printf("Average Stock price: %d\n", avg);
        printf("Current Stock price: %d\n", shares[comp][9]);

        sleep(2); // Analyzing every 2 seconds
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
