//declaring string as pointers vs declaring string normally.
#include<stdio.h>
#include<string.h>
int main(){
    char x[100]="Praanesh";
    char y[50]="Naresh";
    strcpy(x, y);
    puts(x);
    return 0;
}
