//exploring string functions
#include<stdio.h>
#include<string.h>
int main(){
    char x[100] = "Hey";
    char y[100] = "kids";
    strcat(x,y);
    puts(x);
    puts(y);
    return 0;
}