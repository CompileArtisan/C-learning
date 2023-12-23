//using the word "monkey" instead of "int" using the typedef keyword
#include<stdio.h>

int main(){
    typedef int monkey;
    monkey x = 8;
    printf("x is %d",x);
    return 0;
}