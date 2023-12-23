//to explain the size of an int value 
#include<stdio.h>
int main(){
    int x=34;
    int*y=&x;
    printf("%u\n",y);
    y=y+1;
    printf("%u\n",y);
}