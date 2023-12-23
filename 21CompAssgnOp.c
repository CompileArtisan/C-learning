//This is to check the functionality of compound assignment operators.
#include<stdio.h>
int main(){
    int a=1, b=9, c=29;
    a+=10;
    printf("%d\n",a);
    b*=3;
    printf("%d\n",b);
    c%=3;
    printf("%d\n",c);
    return 0;
}