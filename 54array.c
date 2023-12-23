//to print all elements of an array using a loop
#include<stdio.h>
int main(){
    int x[10],i=0;
    x[0]=34;
    x[1]=43;
    x[2]=86;
    x[3]=8;
    x[4]=87;
    x[5]=2;
    x[6]=24;
    x[7]=564;
    x[8]=55;
    x[9]=90;
    while(i<=9){
        printf("%d\n",x[i]);
        i++;
    }
    return 0;    
}