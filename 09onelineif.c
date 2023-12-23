//using conditional operators, we shall write the whole if syntax in one line
#include<stdio.h>
int main(){
    int a;
    printf("Enter your number\n");
    scanf("%d",&a);
    (a>5)? printf("The number is greater than 5"):printf("The number is not greater than 5");
    return 0;
}