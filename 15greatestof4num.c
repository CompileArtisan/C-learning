//to find the greatest of 4 numbers entered by the user
#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter the first  number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    printf("Enter the third number: ");
    scanf("%f",&c);
    printf("Enter the last number: ");
    scanf("%f",&d);
    if((a>=b)&&(a>=c)&&(a>=d)){
        printf("%f is the greatest of the numbers entered",a);
    }
    else if((b>=a)&&(b>=c)&&(b>=d)){
        printf("%f is the greatest of the numbers entered",b);
    }
    else if((c>=b)&&(c>=a)&&(c>=d)){
        printf("%f is the greatest of the numbers entered",c);
    }
    else if((d>=b)&&(d>=c)&&(d>=a)){
        printf("%f is the greatest of the numbers entered",d);
    }
    return 0;
}