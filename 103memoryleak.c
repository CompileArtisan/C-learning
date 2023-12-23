#include <stdio.h>
#include <stdlib.h>

void someFunction() {
    int* ptr = (int*)malloc(sizeof(int)); // Allocating memory
    // Some code...
    return; 
    // Forgot to deallocate memory. Here, we should add free(ptr);
}

int main() {
    someFunction();
    // Some other code...
    return 0;
}