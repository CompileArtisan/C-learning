// a complete demonstration of all types of format specifiers

#include<stdio.h>
int main(){

    printf("Enter something and click enter to start: ");
    // making a random string input without storing it anywhere
    scanf("%*s");



    // making a nicely aligned table using modified format specifiers
    printf("Name        Rollno.   Present\n");
    char x[100]="Praanesh";
    char y[100]="naresh";
    int X=132;
    int Y=2;
    printf("%-12s%-10d%d\n",x,X,2);
    printf("%-12s%-10d%d\n",y,Y,2);



    //checking out the %.mf operator 
    printf("%.2f",1234.466);


    
    //making a new line for better readability
    printf("\n"); 


    //checking out the %Nd operator
    printf("%2d",153);

        char y[100]={};
    scanf("%[A-Za-z0-9 ]",&y);
    //accepts capital letters (A-Z), small letters (a-z) and numbers (0-9)
    printf("%s",y);

printf("\n");


    scanf("%[^.]",&y);
    //accepts input until a full stop is entered
    printf("%s",y);

    
    
printf("\n");



    scanf("%[^\"stop\"]",&y);
    //accepts input until the word "stop" is entered
    printf("%s",y);



    return 0;
}