#include<stdlib.h>
#include<stdio.h>

int main(){
    char *str1 = "d123abc"; // now there's a 'd' before 123
    char *ptr;  
    long ret  = strtol(str1, &ptr, 10); // ptr stores the address of da
    printf("%ld", ret);
    return 0;
}
// output = 0