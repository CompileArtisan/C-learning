//to find the nth element of the fibonacci sequence using a recursive function 
#include<stdio.h>
int fib(int x){
    if(x<=1){
        return 1;
    }
    else{
        return fib(x-1) + fib(x-2);
    }
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d",fib(n));
    return 0;
}


