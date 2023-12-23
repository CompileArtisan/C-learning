#include<stdio.h>
int main(){
    int x=63;
    {
        int x = 5; //here, the scope of x is different
    }
    printf("%d\n",x);
    {
        x=4;
    }
    printf("%d\n",x);
    return 0;
}