#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    x<0? printf("%d",-x) : printf("%d",x);

    return 0;
}