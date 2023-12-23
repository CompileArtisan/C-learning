//to explain the size of an char value 
#include<stdio.h>
int main(){
    char x = 'R';
    char*y = &x;
    printf("%d\n",y);
    y++;
    printf("%d\n",y);
    return 0;
}