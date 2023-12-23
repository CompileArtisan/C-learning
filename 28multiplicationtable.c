//to print the multiplication table of a given number

//method 1
#include<stdio.h>
int main(){
    int a,x=1;
    printf("Enter the number: ");
    scanf("%d",&a);
    while(x<=10){
        printf("%d x %d = %d\n",a,x,a*x);
        x++;
    }   
    return 0;
} 

//method 2
/*#include<stdio.h>
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    for(int x=1; x<=10 ; x++){
        printf("%d x %d = %d\n",a,x,a*x);
    }
    return 0;
}*/