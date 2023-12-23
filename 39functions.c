//to examine the behaviour of functions
#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    printf("the sum is %d",sum(x,y));
    return 0;
}