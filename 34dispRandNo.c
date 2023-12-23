//to display 3 random numbers
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    printf("%d ",rand());
    printf("%d ",rand());
    printf("%d ",rand());
    return 0;
}