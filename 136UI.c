#include <stdio.h>
#include <conio.h> // for getche

int main() {
    int selectedOption = 0;
    int totalOptions = 3; // Modify this value based on the number of options
    
    while (1) {
        // Clear screen and move cursor to top
        printf("\033[2J\033[1;1H");
        
        
        // Display the menu
        printf("Windows Boot Manager\n");
        for (int i = 0; i < totalOptions; i++) {
            if (i == selectedOption) {
                printf("-> Option %d (Selected)\n", i + 1);
            } else {
                printf("   Option %d\n", i + 1);
            }
        }

        // Get user input
        char key = getche(); // Using getche() for single key press (Windows-specific)
        
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

    return 0;
}
