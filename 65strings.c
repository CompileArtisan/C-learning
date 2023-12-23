//to input multiple words as input using gets() function
#include<stdio.h>
int main(){
    char x[50];
    printf("Enter your full name: ");
    gets(x);
    printf("Your full name is %s",x);
    return 0;
}