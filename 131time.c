// timer in C

#include<stdio.h>
#include<unistd.h> // unix standard

int main(){
    int n;
    printf("Enter number of seconds to count: ");
    scanf("%d",&n);

    printf("\033[2J\033[1;1H"); // clears console screen

    for(int i=n ; n>=1 ; n--){
        printf("%d ",n);
        sleep(1);
        printf("\033[2J\033[1;1H"); // clears console screen
    }
    printf("\nTimer done");

    return 0;
}