#include<stdlib.h>
#include<stdio.h>

int main(){
    char *str1 = "123abc"; 
    char *ptr;  
    long ret  = strtol(str1, &ptr, 10); // ptr stores the address of a
    printf("%ld", ret);
    return 0;
}
// output = 123