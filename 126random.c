#include<stdio.h>
int main(){
    int n=0, cost=0;
    while(n!=3){
        printf("\n\nEnter:\n\t1: Enter new entry\n\t2: View cost as of now\n\t3: Quit\n\n");
        scanf("%d",&n);
        if(n==1){
            int x=0,no=0;
            printf("\tEnter:\n\t\t1: Pizza\n\t\t2: Burger\n\t\t");
            scanf("%d",&x);

            printf("Enter the number of %s: ",(x==1)? "Pizzas" : "Burgers");
            scanf("%d",&no);

            // let \
            pizza= 50Rs\
            Burger = 40Rs

            cost+= (x==1)? 50*no : 40*no ;
        }
        else if(n==2){
            printf("%d/-",cost);
        }
    }
    if(n==3){
        printf("You have lost %dRs from your pocket :) ",cost);
    }

    return 0;
}