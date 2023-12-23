
#include<stdio.h>
int main(){
    FILE*x;
    char y[100];
    printf("Enter your name: ");
    gets(y);
    x = fopen("UserName.txt","w");
    fprintf(x,"The user's name is %s",y);
    return 0;
}