//to display n numbers in reverse. Basically, a countdown from n to 1, but we use for loop
#include<stdio.h>
int main(){
    int n;
    printf("To give countdown from n\nEnter the value of n: ");
    scanf("%d",&n);
    for(int x=n; x>=1; x--){
        printf("%d\n",x);
    }
    return 0;
}