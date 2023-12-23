#include<stdio.h>

int main(){
    
    char y[100]={};
    scanf("%[A-Za-z0-9 ]",&y);
    //accepts capital letters (A-Z), small letters (a-z) and numbers (0-9)
    printf("%s",y);

printf("\n");


    scanf("%[^.]",&y);
    //accepts input until a full stop is entered
    printf("%s",y);

    
    
printf("\n");



    scanf("%[^\"stop\"]",&y);
    //accepts input until the word "stop" is entered
    printf("%s",y);

    return 0;
}
