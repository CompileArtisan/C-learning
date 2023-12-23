//C program to tell if you can drive or not
#include<stdio.h>
int main(){
    int a;
    printf("Enter your age: ");
    scanf("%d",&a);
    if(a>=18){
        printf("You can drive since you are %d years old",a);
    }
    else{
        printf("You can't drive since you are %d years old",a);
    }
    return 0;
}