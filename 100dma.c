//to input n integers and then print all of them, using the malloc function
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int*ptr = (int*)malloc(n*sizeof(int));
    printf("Enter the values: ");
    for(int i=0; i<n ; i++){
        scanf("%d",ptr+i); //no ampersand sign because the ptr itself stores address.
    }
    for(int i=0; i<n ; i++){
        printf("%d\n",*(ptr+i));
    }
    return 0;
}




/*

//to input n integers and then print all of them, without using the malloc function

#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int x[n];
    while(i<=n){
        printf("Enter value number %d: ",i);
        scanf("%d",&x[i]);
        i++;
    }
    i=1;
    while(i<=n){
        printf("%d\n",x[i]);
        i++;
    }
    return 0;
}
*/