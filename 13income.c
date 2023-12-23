//to calculate the income tax. 
//when income <= 2.5lakhs, tax = 0%
//when 2.5 lakhs< income <= 5.0 lakhs, tax = 5%
//when 5.0 lakhs< income <= 10.0lakhs, tax = 20%
//when 10.0lakhs< income, tax = 30%

#include<stdio.h>
int main(){
    float tax;
    float income;
    printf("Enter your income\n");
    scanf("%f",&income);
    if((income>250000)&&(income<=500000)){
        tax=0.05*income;
        printf("Your tax is %f",tax);    
    }
    else if((income>500000)&&(income<=1000000)){
        tax=0.2*income;
        printf("Your tax is %f",tax);
    }
    else if(income>1000000){
        tax=0.3*income;
        printf("Your tax is %f",tax);
    }
    else{
        printf("You don't have to pay any tax");
    }
    return 0;
}