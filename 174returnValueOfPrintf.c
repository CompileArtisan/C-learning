#include<stdio.h>
int main(){
    if(printf("abc")){
        printf("true");
    }
    printf("%d",printf("%d%d",10,207));
    int x=fprintf(stdout,"dfjdf");
    printf("\n\n\n%d",x);
    return 0;
}