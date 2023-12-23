//to find the sum of the digits of a number
#include<stdio.h>
int main()
{
    int n, sum=0, m;
    printf("enter a number: ");
    scanf("%d",&n);
    while (n>0)
    {
        m = n%10;
        sum = sum + m;
        n = n/10;
    }
    printf("the sum of the digits of the number:%d \n", sum);
    return 0;
}