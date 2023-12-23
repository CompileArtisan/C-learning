//to make a program to swap the values of x and y.
#include<stdio.h>
void swap(int *a,int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x=3,y=4;
    printf("The value of x and y before swap is %d and %d respectively\n",x,y);
    swap(&x,&y);
    printf("The value of x and y after swap is %d and %d respectively\n",x,y);
    return 0;
}