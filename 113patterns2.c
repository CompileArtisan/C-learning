/* To print a pattern like:
0 
1 2 
3 4 5 
6 7 8 9
using 2-d arrays
*/

#include<stdio.h>
int main(){
    int x[4][4],k=0;
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<i+1 ; j++){
            x[i][j]=k;
            k++;
        }
    }
    for(int i=0 ; i<4 ; i++){
        for(int j=0 ; j<=i ; j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }

    return 0;
}