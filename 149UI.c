#include <stdio.h>
#include <conio.h> // for getche


void printUI(char UIheadings[10][100], int totalOptions) {
    int selectedOption = 0;
    while (1) {
        // Clear screen and move cursor to top
        printf("\033[2J\033[1;1H");

        // Display the title (first element of the array)
        printf("%s\n", UIheadings[0]);


        for (int i = 0; i < totalOptions; i++) {
            if (i == selectedOption) {
                printf("_________ ", UIheadings[i + 1]);
            } else {
                printf("          ", UIheadings[i + 1]);
            }
        }
        printf("\n   "); 
        for(int i=0 ; i<totalOptions ; i++){
            printf("%-10s",UIheadings[i+1]);
        }
        printf("\n");
        for (int i = 0; i < totalOptions; i++) {
            if (i == selectedOption) {
                printf("_________ ", UIheadings[i + 1]);
            } else {
                printf("          ", UIheadings[i + 1]);
            }
        }
        printf("\n"); // Move to the next line after printing all options horizontally

        // Get user input
        char key = getche(); // Using getche() for single key press

        // Process user input
        if (key == 'a' || key == 'A') {
            // Move selection left
            selectedOption = (selectedOption - 1 + totalOptions) % totalOptions;
        } else if (key == 'd' || key == 'D') {
            // Move selection right
            selectedOption = (selectedOption + 1) % totalOptions;
        } else if (key == '\r') {
            // User pressed Enter - Perform action based on selected option
            // For this example, just break the loop
            break;
        }
    }

    // Perform action based on the selected option (in a real scenario)
    printf("\nSelected Option: %d\n", selectedOption + 1);
}


int main() {
    char UIheadings[10][100] = {"Windows Boot Manager","Car","Bike","Cycle","scooter","rishab"};
    printUI(UIheadings,5);
    return 0;
}