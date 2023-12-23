#include<stdio.h>
int main(){
    int x=99;
    float y = 1.9;
    char z = 't';
    void*ptr;
    ptr=&x;
    printf("%d\n",*(int*)ptr);
    ptr=&y;
    printf("%f\n",*(float*)ptr);
    ptr=&z;
    printf("%c\n",*(char*)ptr);
    return 0;
}