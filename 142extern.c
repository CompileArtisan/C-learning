#include<stdio.h>
int x = 10;
void Printf(int x){
    printf("inside function %d\n", x);
}
int main(){
    extern int x;
    printf("inside main %d\n", x);
    Printf(x);
    return 0;
}
