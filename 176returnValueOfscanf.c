#include<stdio.h>
int main(){
    int a,b;
    printf("%d",scanf("%d    %d",&a,&b));
    // the output is always 2. scanf returns the number of format specifiers used.

    printf("\n\n");
    char x[10];
    printf("%d",scanf("%s",x));
    // here, the output is 1.
    return 0;
}