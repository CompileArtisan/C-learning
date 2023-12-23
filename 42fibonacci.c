//to print the fibonacci sequence till n characters.
#include<stdio.h>
int main(){
    int i=0,x=0,y=1,z=0,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("0 1 ");
    while(i<=n){
        z=x+y;
        printf("%d ",z);
        x=y;
        y=z;
        i++;
    }

    return 0;
}