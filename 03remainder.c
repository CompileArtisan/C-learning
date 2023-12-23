#include <stdio.h>
int a,b; //we can declare variables outside the main() function too. 
int main(){
    printf("Enter 2 numbers ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("When %d is divided by %d, the reminder is %d",a,b,a%b);
    return 0;
}

//variables declared outside functions are called global variables. 
//variables declared inside functions are called local variables.