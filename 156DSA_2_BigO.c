#include<stdio.h>
int main(){
    int x[5] = {1,2,3,4,5};
    for(int i=0; i<5; i++){
        printf("%d\n", x[i]); // O(n)
    }
    for(int i=0; i<5; i++){
        printf("%d\n", x[i]); // O(n)
    }
    // Overall Time complexity = O(n) + O(n) = O(2n) = O(n)
    return 0;
}