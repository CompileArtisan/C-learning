/* To print a pattern like:
0 
1 2 
3 4 5 
6 7 8 9
using plain for-loops
*/

#include<stdio.h>
int main(){
    int k=0;
    for(int i=1 ; i<=4 ; i++){
        for(int j=1 ; j<=i ; j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}