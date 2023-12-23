//to test the order of arguments in which the printf function uses
#include<stdio.h>
int main(){
    int a=3;
    printf("%d %d %d",a,++a,a++);
    return 0;
}
//we expect the output to be 3 4 4