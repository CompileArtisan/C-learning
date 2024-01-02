#include<stdio.h>
#include<string.h>

struct rent{
    char name[20];
    int money;
}r[20];


int main(){
    for(int i=0 ; i<20 ; i++){
        strcpy(r[i].name,"rishab");
        r[i].money=i*100;   
    }
    for(int i=0 ; i<20 ; i++){
        printf("%s %d\n",r[i].name,r[i].money);
    }
    
    return 0;
}