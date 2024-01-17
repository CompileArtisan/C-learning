#include<stdio.h>

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle screen;
    screen.length = 10;
    screen.breadth = 5;
    printf("Area of screen before alteration is %d\n", screen.length*screen.breadth);

    struct Rectangle *screenAddress = &screen;
    screenAddress->length = 20; // same as (*screenAddress).length = 20;
    screenAddress->breadth = 10; // same as (*screenAddress).breadth = 10;
    printf("Area of screen after alteration is %d\n", screenAddress->length*screenAddress->breadth);
    
    return 0;
}