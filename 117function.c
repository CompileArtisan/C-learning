#include <stdio.h>

//function declaration
int add(int a, int b);

void main()
{
    int x= 7;
    int y= 9;
    int sum;
    sum= add(x,y); //function calling
    printf("Sum= %d", sum);
}


//function definition
int add(int a, int b)
{
    int addition= a+b;
    return addition;
}