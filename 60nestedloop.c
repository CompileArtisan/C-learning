//to print 6 rows each of 5 stars
#include<stdio.h>
int main(){
    for(int j=1; j<=6 ; j++){
        for(int i=1; i<=5 ; i++){
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}