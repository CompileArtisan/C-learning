#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    printf("A is%sequal to 0",a? " not " : " "); // any non zero number is treated as true. 0 is false
    return 0;
}