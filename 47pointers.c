#include<stdio.h>
int main(){
    int x=9;
    int * y;
    int **z;
    y= &x;
    z=&y;
    printf("%u\n",y);
    printf("%u\n",z);
    return 0;
}