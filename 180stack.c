#include <stdio.h>
#define MAX 10
int stack[MAX], top = -1;

void push(int value){
    if (top == MAX - 1)
    {
        printf("Stack Overflow");
        return;
    }
    stack[++top] = value;
}

int pop(){
    if (top < 0)
    {
        printf("Stack Underflow");
        return __INT_MAX__;
    }
    return stack[top--];
}

void printStack(){
    for (int i = 0; i < top; i++)
        printf("____\n%d\n", stack[i]);
}

int main(){
    int choice, value;
    do
    {
        printf("Enter\n\t1: Push\n\t2: Pop\n\t3: View Stack\n\t0: Exit\n\n\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            printf("%d", pop());
            break;
        case 3:
            printStack();
            break;
        case 0:
            break;
        default:
            printf("Invalid choice");
        }
    } while (choice != 0);
}