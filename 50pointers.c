//to print a value 10 times the input value. We do this using a call by reference function
#include<stdio.h>
int INC(int* a){
    return 10*(*a);
}
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("10 times %d is %d",x,INC(&x));
    return 0;
}