//we shall make a countdown to 1, but shall stop it when n==4 using the break; statement
#include<stdio.h>
int main(){
    int n,x=1;
    printf("Enter n: ");
    scanf("%d",&n);
    while(n>=1){
        printf("%d\n",n);
        if(n==4){
            break;
        }
        n--;
    }
    return 0;
}