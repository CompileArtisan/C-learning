//to print all the elements of an array (values are inputted) using a loop
#include<stdio.h>
int main(){
    int x[5],i=0;
    while(i<5){
        printf("Enter value: ");
        scanf("%d",&x[i]);
        i++;
    }
    i=0;
    while(i<5){
        printf("%d\n",x[i]);
        i++;
    }
    return 0;
}