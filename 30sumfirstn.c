//to find the sum of the first n natural numbers

//method 1
/*#include<stdio.h>
int main(){
    int x=1,sum=0,n;
    printf("To find the sum of the first n natural numbers\n\nEnter the value of n: ");
    scanf("%d",&n);
    while(x<=n){
        sum += x;
        x++;
    }
    printf("The sum of the first %d natural numbers is %d ",n,sum);
    return 0;
}*/

//method 2
#include<stdio.h>
int main(){
    int sum=0,n;
    printf("To find the sum of the first n natural numbers\n\nEnter the value of n: ");
    scanf("%d",&n);
    for(int x=1; x<=n ; x++){
        sum+=x;
    }
    printf("The sum of the first %d natural numbers is %d ",n,sum);
    return 0;
}