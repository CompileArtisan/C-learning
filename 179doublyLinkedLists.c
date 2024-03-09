#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int value;
    struct node * next;
    struct node * prev;
} node_t;

node_t *start, *tail, *new;

void traversal(node_t*start){
    for(node_t*temp=start;temp!=NULL;temp=temp->next) printf("%d ",temp->value);
}

node_t*createNewNode(int data){
    node_t*newNode=(node_t*)malloc(sizeof(node_t));
    newNode->value=data;
    newNode->next=NULL;
    newNode->prev=NULL;
    return newNode;
}

node_t*createNewDoublyLinkedList(int count){
    for(int i=0;i<count;i++){
        printf("Enter the value of node %d: ",i+1);
        int input;
        scanf("%d",&input);
        if(i==0){
            start=createNewNode(input);
            tail=start;
        }
        else{
            new=createNewNode(input);
            tail->next=new;
            new->prev=tail;
            tail=new;
        }
    }
    return start;
}

int main(){
    int size,parameter;
    for(;;){
        printf("Enter 1 to create a new doubly linked list\n");
        printf("Enter 2 to traverse the doubly linked list\n");
        printf("Enter 3 to exit\n");
        scanf("%d",&parameter);
        if(parameter==1){
            printf("Enter the number of nodes you want to create: ");
            scanf("%d",&size);
            start=createNewDoublyLinkedList(size);
        }
        else if(parameter==2){
            traversal(start);
            printf("\n");
        }
        else if(parameter==3) break;
        else printf("Invalid input\n");
    }

    return 0;
}