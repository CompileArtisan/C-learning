//to print numbers from n to 10, using goto;
#include<stdio.h>
int main(){

    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    if(n==1){
        goto label_1;
    }
    if(n==2){
        goto label_2;
    }
    if(n==3){
        goto label_3;
    }
    if(n==4){
        goto label_4;
    }
    if(n==5){
        goto label_5;
    }
    if(n==6){
        goto label_6;
    }
    if(n==7){
        goto label_7;
    }
    if(n==8){
        goto label_8;
    }
    if(n==9){
        goto label_9;
    }
    if(n==10){
        goto label_10;
    }


    label_1:
    printf("1");
    label_2:
    printf("2");
    label_3:
    printf("3");
    label_4:
    printf("4");
    label_5:
    printf("5");
    label_6:
    printf("6");
    label_7:
    printf("7");
    label_8:
    printf("8");
    label_9:
    printf("9");
    label_10:
    printf("10");

    return 0;
}