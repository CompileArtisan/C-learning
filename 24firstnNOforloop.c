/* This was the program to print the first n natural numbers using while loop. 
//Now we shall do the same thing using for loop

#include<stdio.h>
int main(){
    int n,x=1;
    printf("To print the first 'n' natural numbers\nEnter n: ");
    scanf("%d",&n);
    while(x<=n){
        printf("%d\n",x);
        x++;
    }
    return 0;
}*/
#include<stdio.h>
int main(){
    int n;
    printf("To print the first 'n' natural numbers\nEnter n: ");
    scanf("%d",&n);
    for(int x=1; x<=n; x++){
        printf("%d\n",x);
    }
    return 0;
}