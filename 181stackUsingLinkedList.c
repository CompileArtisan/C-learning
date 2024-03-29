#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
    int value;
    struct NODE* next;        
} node_t;

node_t *start=NULL, *tail, *new;

node_t* createNewNode(int data){
    node_t*newNode=(node_t*)malloc(sizeof(node_t));
    newNode->value=data;
    newNode->next=NULL;
    return newNode;
}


void push(int data){
    if(start=NULL){
        start=createNewNode(data);
        tail=start;
    }
    else{
        new=createNewNode(data);
        tail->next=new;
        tail=new;
    }
}

int pop(){
    for(node_t*temp=start; (temp->next)!=NULL ; temp=temp->next);
    
}

void printStack(){
    for (node_t*temp=start; temp!=NULL ; temp=temp->next)
        printf("____\n%d\n", temp->value);
}

int main(){
    int choice, value;
    do
    {
        printf("Enter\n\t1: push\n\t2: pop\n\t3: exit\n\n");
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