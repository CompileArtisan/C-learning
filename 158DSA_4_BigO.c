#include<stdio.h>
int main(){
    int x[5] = {1,2,3,4,5};
    printf("%d\n", x[0]); // O(1)
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("%d\n", x[i]); // O(n^2)
        }
    }
	for(int i=0; i<5; i++){
		printf("%d\n", x[i]); // O(n)
	}
	// Overall Time complexity = O(1) + O(n^2) + O(n) = O(1+n^2+n) = O(n^2)
    return 0;
}