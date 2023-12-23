//to print the address locations of an array
#include<stdio.h>
int main(){
    int x[] = {505,545,66,889,19};
    printf("%u\n%u\n%u\n%u\n%u\n",&x[0],&x[1],&x[2],&x[3],&x[4]);
    return 0;
}