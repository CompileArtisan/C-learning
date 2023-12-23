//fprintf
#include<stdio.h>
int main(){
    FILE*x;
    int a=10;
    char b[] = "Praanesh";
    x = fopen("pro.txt","w");
    fclose(x);
    fprintf(x,"The value of a is %d and the value of b is %s",a,b);   
    return 0;
}