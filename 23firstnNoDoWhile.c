//to print the first n natural numbers using do while
#include<stdio.h>
int main(){
    int n,x=1;
    printf("To print the first 'n' natural numbers\nEnter n: ");
    scanf("%d",&n);
    do{
        printf("%d\n",x);
        x++;
    }while(x<=n);
    return 0;
}