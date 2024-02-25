// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

typedef struct NODE{
    int value;
    struct NODE * next;
} node_t;

node_t *new, *start, *tail;

void traversal(node_t *start){
    node_t *temp=start;
    while(temp!=NULL){
        printf("%d ",temp->value);
        temp=temp->next;
    }
}


node_t * CreateNewNode(int data){
    node_t * newNode = (node_t*)malloc(sizeof(node_t));
    newNode->value = data;
    newNode->next = NULL;
    return newNode;
}


node_t * createNewLinkedList(int count){
    for(int i=0 ; i<count ; i++){
        printf("Enter the value of node %d: ",i+1);
        int input;
        scanf("%d",&input);
        if (i == 0) {
            start = CreateNewNode(input);
            tail = start;
        } 
        else {
            new = CreateNewNode(input);
            tail->next = new;
            tail = new;
        }
    }
    return start;
}


int main() {
    int size,parameter;
    for(;;){
        printf("\n\nEnter\n1) Create Linked List\n2) Display Linked List\n3) exit\n\n");
    
        scanf("%d",&parameter);
        switch(parameter){
            case 1:
            printf("Enter the size of the linked list: ");
            scanf("%d", &size);
            node_t *start = createNewLinkedList(size);
            break;
            
            case 2:
            traversal(start);
            break;
            
            case 3:
            exit(1);
        }
    }
    
    
    
    
    
    

    return 0;
}