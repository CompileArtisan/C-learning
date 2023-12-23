//to input the marks of physics, chemistry and maths and to check if you've passed or failed
//Pass is when the average>40% and individual marks>33%
#include<stdio.h>
int main(){
    int physics, chemistry, maths,average;
    printf("Enter your physics marks\n");
    scanf("%d",&physics);
    printf("Enter your chemistry marks\n");
    scanf("%d",&chemistry);
    printf("Enter your maths marks\n");
    scanf("%d",&maths);
    average=(physics+chemistry+maths)/3;
    if((average>=40)&&((physics>=33)&&(chemistry>=33)&&(maths>=33))){
        printf("You have passed bro");
    }
    else{
        printf("You are dead bro");
    }

    return 0;
} 