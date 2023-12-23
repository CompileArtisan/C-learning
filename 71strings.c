//exploring string functions 
#include<stdio.h>
#include<string.h>
int main(){
    char x[]="hey i said \"sup\" ";
    char y[]="uuuu";
    printf("%d\n",strcmp(x,y));
    puts(x);
    puts(y);
    return 0;
}