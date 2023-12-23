//C Program to check switch case (without break)
#include<stdio.h>
int main(){
    int a;
    printf("Enter your number\n");
    scanf("%d",&a);
    switch(a){
        case 1 :
        printf("Your number is 1\n");
        break;
        case 2 :
        printf("Your number is 2\n");
        break;
        case 3 :
        printf("Your number is 3\n");
        break;
        default : 
        printf("IDK what your number is\n");
        break;
    }

    return 0;
}