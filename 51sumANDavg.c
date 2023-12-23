//to find the sum and average of two numbers using one single function
#include<stdio.h>
void sumANDavg(float a, float b, float*sum, float*avg){
    *sum=a+b;
    *avg=(*sum)/2;
}
int main(){
    float x,y,sum,avg;
    printf("Enter two numbers: ");
    scanf("%f",&x);
    scanf("%f",&y);
    sumANDavg(x,y,&sum,&avg);
    printf("The sum of the 2 numbers is %f and their average is %f",sum,avg);
    return 0;
}
