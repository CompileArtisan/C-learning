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

void insertNode(int position, int data){
    node_t* newNode = createNewNode(data);
    if(position == 1){
        newNode->next = start;
        start->prev = newNode;
        start = newNode;
    }
    else{
        node_t* temp = start;
        for(int i=1; i<position-1; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        if(temp->next != NULL){
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }
}

void deleteNode(int position){
    if(position == 1){
        node_t* temp = start;
        start = start->next;
        if(start != NULL){
            start->prev = NULL;
        }
        free(temp);
    }
    else{
        node_t* temp = start;
        for(int i=1; i<position-1; i++){
            temp = temp->next;
        }
        node_t* deleteNode = temp->next;
        temp->next = deleteNode->next;
        if(deleteNode->next != NULL){
            deleteNode->next->prev = temp;
        }
        free(deleteNode);
    }
}

node_t* joinLinkedLists(node_t* list1, node_t* list2){
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;
    node_t* temp = list1;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = list2;
    list2->prev = temp;
    return list1;
}

int main(){
    int size, parameter;
    for(;;){
        printf("Enter 1 to create a new doubly linked list\n");
        printf("Enter 2 to traverse the doubly linked list\n");
        printf("Enter 3 to insert a node\n");
        printf("Enter 4 to delete a node\n");
        printf("Enter 5 to join two linked lists\n");
        printf("Enter 6 to exit\n");
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
        else if(parameter==3){
            int position, data;
            printf("Enter the position to insert the node: ");
            scanf("%d", &position);
            printf("Enter the value of the node: ");
            scanf("%d", &data);
            insertNode(position, data);
        }
        else if(parameter==4){
            int position;
            printf("Enter the position to delete the node: ");
            scanf("%d", &position);
            deleteNode(position);
        }
        else if(parameter==5){
            int size1, size2;
            printf("Enter the number of nodes for the first linked list: ");
            scanf("%d", &size1);
            printf("Enter the number of nodes for the second linked list: ");
            scanf("%d", &size2);
            printf("Creating first linked list:\n");
            node_t* list1 = createNewDoublyLinkedList(size1);
            printf("Creating second linked list:\n");
            node_t* list2 = createNewDoublyLinkedList(size2);
            printf("Joining two linked lists:\n");
            node_t* joinedList = joinLinkedLists(list1, list2);
            printf("Traversing joined linked list:\n");
            traversal(joinedList);
            printf("\n");
        }
        else if(parameter==6) break;
        else printf("Invalid input\n");
    }

    return 0;
}