#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    printf("%d",(rand())%100);
    return 0;
}