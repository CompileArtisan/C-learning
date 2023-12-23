#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr,*ptr1;
    ptr = (int*)malloc(sizeof(int));
    ptr1 = (int*)realloc(ptr,2*sizeof(int));
    printf("Address of ptr = %u\nAddress of ptr1 = %u",&ptr,&ptr1);
    return 0;
}