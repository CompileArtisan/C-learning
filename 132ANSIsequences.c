#include<stdio.h>
int main(){
    int a;
    printf("enter age");
    printf("\033[D"); // moves cursor one character left
    scanf("%d",&a);

    return 0;
}