#include <stdio.h>
#include <conio.h> // for getche


void printUI(char UIheadings[10][100],int totalOptions,int indentation) {
    int selectedOption = 0;    
    while (1) {
        // Clear screen and move cursor to top
        printf("\033[2J\033[1;1H");

        // Display the title (first element of the array)
        printf("%s\n",UIheadings[0]);

        // Display the menu (rest of the elements)
        for (int i = 0; i < totalOptions; i++) {
            for(int j = 0; j < indentation; j++) {
                printf(" ");
            }
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

    // Perform action based on the selected option (in a real scenario)
    printf("\nSelected Option: %d\n", selectedOption + 1);
}

int main() {
    char UIheadings[10][100] = {"Windows Boot Manager","Car","Bike","Cycle"};
    
    printUI(UIheadings,3,0);
    //size of total array by size of 1st row (i.e number of column elements)
    // this gives the number of rows in the array i.e total number of options
    return 0;
}
