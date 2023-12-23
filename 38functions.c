//to examine the behaviour of functions
#include<stdio.h>
int x(int a, int b, int c){
    return a+b+c;
}
int main(){
    printf("The sum is %d",x(1,2,3));
    return 0;
    
}
//here, a, b and c are called parameters while 1,2 and 3 are called arguments

//int x(int a, int b, int c) means x is a function that uses inputs int a, int b and int c,
// and will return integer value