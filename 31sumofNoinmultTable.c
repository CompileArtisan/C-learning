//to find the sum of the numbers involved in the multiplication table of a number n

//method 1
/*#include<stdio.h>
int main(){
    int n=0,x=1,sum=0,product=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(x<=10){
        product=n*x;
        sum+=product;
        x++;        
    }
    printf("The sum of the numbers occuring in the multiplication table of %d is %d",n,sum);
    return 0;
}*/

//method 2
#include<stdio.h>
int main(){
    int n=0,x=1,sum=0,product=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("The sum of the numbers occuring in the multiplication table of %d is %d",n,n*55);
    return 0;
}

//the sum of the numbers occuring in the multiplication table of n is n x 55. 
/*eg: lets take the sum of 8 table.
the sum is
8 + 16 + 24 + ... +80 
= 8(1+2+3+...+10)
= 8(10)(11)/2          [the sum of n natural numbers is (n)(n+1)/2 ]*/