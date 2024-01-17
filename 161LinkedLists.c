// making a linked list with a function to create new nodes and add them at the beginnings of the list

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;
}node_t;

void printLinkedList(node_t *head){
    node_t *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

node_t * CreateNewNode(int value){
    node_t * newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

int main(){
    node_t * new, * head;

    new = CreateNewNode(3);
    head = new;                    // now head = address of node with 3                   



    new = CreateNewNode(4);        // create a new node                          
    new->next = head;              // "next" of the new node now has the address of node with 3                               
    head = new;                    // and now head = address of node with 4                                     



    new = CreateNewNode(438);      // create a new node                                      
    new->next = head;              // "next" of the new node now has the address of node with 4                            
    head = new;                    // and now head = address of node with 438                            
    


    new = CreateNewNode(999);      // create a new node
    new->next = head;              // "next" of the new node now has the address of node with 438
    head = new;                    // and now head = address of node with 999 
                              



    printLinkedList(head);
}