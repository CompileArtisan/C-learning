//to make a guessing game. Let n be the number of attempts
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int guess,random,n=1;
    srand(time(NULL));
    random = rand()%100;    
    do{
        printf("Guess a number from the first 100 natural numbers: ");
        scanf("%d",&guess);
        if(guess>random){
            printf("You've guessed too high. Try again.\n");
        }
        else if(guess<random){
            printf("You've guessed too low. Try again.\n");
        }
        else{
            printf("You have guessed the number correctly in %d attempts.",n);
        }
        n++;
    }while(guess!=random);
    return 0;
}