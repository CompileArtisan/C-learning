//in java, && has another feature, where it doesn't execute the second statement if the first statement is not true.
//let us check whether that feature exists in c

#include<stdio.h>
int main(){
        int x;
        printf("Enter the number 5 or 0: ");
        scanf("%d",&x);
        if((x!=0)&&(10/x)==2){
            printf("You have entered the number 5. Good job.");
        }
        else if(x==0){
            printf("You have entered 0");
        }
        else{
            printf("Neither 0 nor 5 has been entered.");
        }
    return 0;
}
//yes it does exist