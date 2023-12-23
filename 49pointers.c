//to print the address of a variable and use it to get the value
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("The address of x is %u and the value of x is %d",&x,*(&x));
    return 0;
}