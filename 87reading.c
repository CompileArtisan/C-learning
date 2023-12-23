//reading a character from a file
#include<stdio.h>
int main(){
    FILE*x;
    char y;
    x = fopen("reading.txt","r");
    y = fgetc(x);
    printf("%c",y);
    fclose(x);
    return 0;
}