//to print the first n natural numbers
#include<stdio.h>
int main(){
    int n,x=1;
    printf("To print the first 'n' natural numbers\nEnter n: ");
    scanf("%d",&n);
    while(x<=n){
        printf("%d\n",x);
        x++;
    }
    return 0;
}
//basically, we input n, (now x is less than n) and keep increasing x until x = n.