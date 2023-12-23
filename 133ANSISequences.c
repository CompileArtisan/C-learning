#include <stdio.h>

int main() {
    // Clear screen
    printf("\033[2J");
    
    // Move cursor to row 10, column 20
    printf("\033[10;20H");
    
    // Print colored text (foreground and background)
    printf("\033[38;2;255;0;0m"); // Set text color to red
    printf("\033[48;2;0;255;0m"); // Set background color to green
    printf("Hello, colored text!");
    
    // Reset text attributes
    printf("\033[0m");

    return 0;
}
