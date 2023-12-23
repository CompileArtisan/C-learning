//this is a program to check else if
#include<stdio.h>
int main(){
    int a;
    printf("Enter your number.");
    scanf("%d",&a);
    if(a==1){
        printf("Your number is 1");
    }
    else if(a==2){
        printf("Your number is 2");
    }
    else if(a==3){
        printf("Your number is 3");
    }
    else{
        printf("IDK what your number is");
    }
    return 0;
}