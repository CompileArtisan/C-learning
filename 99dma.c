#include<stdio.h>
#include<stdlib.h>
int main(){
    int*ptr;
    ptr=(int*)malloc(sizeof(int));
    free(ptr);
    return 0;
}