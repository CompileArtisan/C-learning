//to convert lower case to upper case and vice versa
//For ASCII values, refer https://www.ascii-code.com/ 
#include<stdio.h>
int main(){
    char x;
    printf("Enter the alphabet: ");
    scanf("%c",&x);
    if(x>=65 && x<=90){
        printf("%c",x+32);
    }
    else if(x>=97 && x<=122){
        printf("%c",x-32);
    }
    else{
        printf("You have not entered an alphabet.");
    }
    return 0;
}