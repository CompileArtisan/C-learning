#include<stdio.h>
int main(){
    int x[5] = {1,2,3,4,5};
    printf("%d\n", x[0]); // O(1)
    printf("%d\n", x[1]); // O(1)

    // Overall Time complexity = O(1) + O(1) = O(2) = O(1)
    return 0;
}