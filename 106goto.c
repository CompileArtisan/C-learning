//positive, negative or zero, using goto
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n<0){
        goto negative;
    }
    else if(n>0){
        goto positive;
    }
    else{
        goto zero;
    }


    negative:
    printf("This number is negative.");
    goto end;

    positive:
    printf("This number is positive.");
    goto end;

    zero:
    printf("This number is zero.");

    end:
    return 0;
}