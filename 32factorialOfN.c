//to find the factorial of a number n

//method 1
/*#include<stdio.h>
int main(){
    int n,x=0,product=1;
    printf("To find the factorial of a number.\nEnter the value of n: ");
    scanf("%d",&n);
    while(x<n){
        product*= (n-x);
        x++;
    }
    printf("%d! is %d",n,product);
    return 0;
}*/

//method 2
#include <stdio.h>
int main(){
    int n,product=1,x=1;
    printf("To find the factorial of a number.\nEnter the value of n: ");
    scanf("%d",&n);
    while(x<=n){
        product*=x;
        x++;
    }
    printf("%d! is %d",n,product);
    return 0;
}