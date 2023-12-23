//C Program to check whether the given number is even or odd
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a%2==0){
        printf("The number is divisible by 2 i.e. %d is even",a);
    }
    else{
        printf("The number is not divisible by 2 i.e. %d is odd",a);
    }
}