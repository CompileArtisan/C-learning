//to explain the difference between while and do while
// do while wil execute the code just like while loops, if the condition is true
//but,if the condition is false, while won't execute at all, but do while loop would execute once

#include<stdio.h>
int main(){
    int a=20;
    do{
        printf("The value of a is %d",a);
    }while(a==10);
    return 0;
}