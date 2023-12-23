#include<stdio.h>
int main(){
    int x=32;
    int*y=&x;
    printf("%u %d",y,x);
    return 0;
}