//to print the sum of n natural numbers using a recursive function 
#include<stdio.h>
int f(int x){
    if(x==1){
        return 1;
    }
    else{
        return x+f(x-1);
    }
}
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("%d",f(n));
}