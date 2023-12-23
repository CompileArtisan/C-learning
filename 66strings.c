//demonstrate puts() function
#include<stdio.h>
int main(){
    char x[100];
    printf("Enter your full name: ");
    gets(x);
    puts(x);
    return 0;
}