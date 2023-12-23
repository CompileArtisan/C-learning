//to input values from the user to fill in a 2d array of 2 row and 3 columns
#include<stdio.h>
int main(){
    int x[2][3];
    for(int j=0; j<2 ; j++){
        for(int i=0; i<3 ; i++){
            printf("Enter the value: ");
            scanf("%d",&x[i][j]);
        }
    }
    for(int j=0; j<2 ; j++){
        for(int i=0; i<3 ; i++){
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}