#include<stdio.h>
int main(){
    int x[5] = {1,2,3,4,5};
    char y[6] = {'a','b','c','d','e','f'};
    int n=5,m=6;
    for(int i=0; i<n; i++){
        printf("%d\n", x[i]); // O(p)
    }
    for(int i=0; i<m; i++){
        printf("%c\n", y[i]); // O(q)
    }
    // Overall Time complexity = O(p) + O(q) = O(p+q) = O(n)
    return 0;
}