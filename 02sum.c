#include <stdio.h>
int main(){
    int a=0,b=0;
    printf("I will add 2 numbers. \nEnter 2 numbers \n");
    scanf("%d%d",&a,&b);
    printf("The sum of the numbers is %d",a+b);
    return 0;
}

//this is the traditional method. But the above method works in the exact same way.
/*#include <stdio.h>
int main(){
    int a=0,b=0;
    printf("I will add 2 numbers. \nEnter 2 numbers \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The sum of the numbers is %d",a+b);
    return 0;
}*/