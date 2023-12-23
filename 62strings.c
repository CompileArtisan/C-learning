//to look into the behaviour of strings
#include<stdio.h>
int main(){
    char x[] = "abc\0defghi";
    printf("%s",x);
    return 0;
}