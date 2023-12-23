#include<stdio.h>
int main(){
    int x=23;
    {
        x=4;
    }
    printf("%d",x);
}