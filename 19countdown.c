//to display n numbers in reverse. Basically, a countdown from n to 1.
#include<stdio.h>
int main(){
    int n;
    printf("To give countdown from n\nEnter the value of n: ");
    scanf("%d",&n);
    while(n>=1){
        printf("%d\n",n);
        n--;
    }
    return 0;
}