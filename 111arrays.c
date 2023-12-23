#include<stdio.h>
int main(){
    int x[1][3];
    x[0][0]=45;
    x[0][1]=453;
    x[0][2]=55;
    for(int i=0 ; i<3 ; i++){
        printf("%d\n",x[0][i]);
    }
    return 0;
}