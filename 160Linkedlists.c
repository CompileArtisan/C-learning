// making a fixed linked list with predefined nodes

#include<stdio.h>

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

int main(){
    node_t n1,n2,n3,n0; //n0 is the node that I added to the beginning of the linked list, later on.
    node_t *head=&n0;

    n0.data=9999;
    n0.next=&n1;

    n1.data=45;
    n1.next=&n2;

    n2.data=98;
    n2.next=&n3;

    n3.data=3;
    n3.next=NULL;

    printLinkedList(head);
}