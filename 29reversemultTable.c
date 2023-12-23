//to print the multiplication table of a number in reverse
#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(int x=10; x>=1 ; x--){
        printf("%d x %d = %d\n",x,a,a*x);
    }
    return 0;
}