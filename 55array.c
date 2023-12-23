//to input values and store them in an array
#include<stdio.h>
int main(){
    int x[3];
    printf("Enter the 1st value: ");
    scanf("%d",&x[0]);
    printf("Enter the 2nd value: ");
    scanf("%d",&x[1]);
    printf("Enter the 3rd value: ");
    scanf("%d",&x[2]);
    printf("%d\n%d\n%d\n",x[0],x[1],x[2]);
    return 0;
}