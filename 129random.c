//Write a C program to print 3 numbers on a line, starting with 1 and printing n lines.
//Accept the number of lines (n, integer) from the user
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of lines you'd like to print: ");
    scanf("%d",&n);
    int x=1;
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=3 ; j++){
            printf("%-3d ",x);
            x++;
        }
        printf("\n");
    }
    return 0;
}