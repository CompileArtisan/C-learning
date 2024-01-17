#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node_t;

void printLinkedList(node_t* head){
    node_t* temp = head;
    while(temp!=NULL){
        printf("%-6d",temp->data);
        temp = temp->next;
    }
}

node_t * CreateNewNode(int value){
    node_t * new = (node_t*)malloc(sizeof(node_t));
    new->data = value;
    new->next = NULL;
}

int main(){
    node_t *head, *new;
    for(int i=1 ; i<=10 ; i++){
        new = CreateNewNode(i);
        new->next = head;
        head = new;
    }
    printLinkedList(head);
    
    return 0;
}