#include <stdio.h>

int main() {
    // Move the cursor to line 9, column 48
    printf("\033[9;48H");

    // Print the legend
    printf("\033[10;48H Legend:");
    printf("\033[11;48H X-Coordinate 1 unit = 2.5 seconds");
    printf("\033[13;48H Y-Coordinate 1 unit = $10"); 

    // box around the legend
    printf("\033[9;47H ___________________________________");
    printf("\033[10;47H|");             printf("\033[10;82H|");
    printf("\033[11;47H|");             printf("\033[11;82H|");   
    printf("\033[12;47H|");             printf("\033[12;82H|");  
    printf("\033[13;47H|");             printf("\033[13;82H|");      
    printf("\033[14;47H|__________________________________|");


    return 0;
}