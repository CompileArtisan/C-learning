#include<stdio.h>
int main(){
    int num,reversed=0;
    for(scanf("%d",&num);num>0;num/=10) reversed=reversed*10+num%10;
    printf("%d",reversed);
    
    return 0;
}