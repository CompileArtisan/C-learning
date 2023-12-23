//to convert celsius to farenheit using functions
#include<stdio.h>
float f(float c){
    return 9*c/5+32;
}
int main(){
    float c;
    printf("Enter the value of c: ");
    scanf("%f",&c);
    printf("%f celsius = %f farenheit",c,f(c));
}