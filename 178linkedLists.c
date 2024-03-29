#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int value;
    struct Node * next;
} node_t;

node_t *start, *tail, *new;

void traversal(node_t * start){
    for(node_t*temp=start; temp!=NULL; temp=temp->next) printf("%d ",temp->value);
}

node_t* CreateNewNode(int data) {
    node_t* newNode = (node_t*)malloc(sizeof(node_t));
    newNode->value = data;
    newNode->next = NULL;
    return newNode;
}

node_t* createNewLinkedList(int count) {
    for (int i = 0; i < count; i++) {
        printf("Enter the value of node %d: ", i + 1);
        int input;
        scanf("%d", &input);
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

void insertNode(int data, int position) {
    new = CreateNewNode(data);
    if (position == 1) {
        new->next = start;
        start = new;
    }
    else {
        node_t* temp = start;
        for (int i = 1; i < position - 1; i++) {
            if (temp->next == NULL) {
                printf("Invalid position\n");
                return;
            }
            temp = temp->next;
        }
        new->next = temp->next;
        temp->next = new;
    }
}

void deleteNode(int position) {
    if (position == 1) start=start->next;    
    else {
        node_t* temp = start;
        for (int i = 1; i < position - 1; i++) {
            if (temp->next == NULL) {
                printf("Invalid position\n");
                return;
            }
            temp = temp->next;
        }
        temp->next = (temp->next)->next;
        
    }
}

node_t* mergeLinkedLists(node_t* list1, node_t* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;

    node_t* mergedList;
    if (list1->value < list2->value) {
        mergedList = list1;
        mergedList->next = mergeLinkedLists(list1->next, list2);
    }
    else {
        mergedList = list2;
        mergedList->next = mergeLinkedLists(list1, list2->next);
    }
    return mergedList;
}

int main() {
    int size, parameter;
    node_t* list1 = NULL;
    node_t* list2 = NULL;
    node_t* mergedList = NULL;

    for (;;) {
        printf("\n\nEnter\n1) Create Linked List\n2) Display Linked List\n3) Insert Node\n4) Delete Node\n5) Merge Linked Lists\n6) Exit\n\n");

        scanf("%d", &parameter);
        switch (parameter) {
        case 1:
            printf("Enter the size of the linked list: ");
            scanf("%d", &size);
            start = createNewLinkedList(size);
            break;

        case 2:
            traversal(start);
            break;

        case 3:
            printf("Enter the value to insert: ");
            int data, position;
            scanf("%d", &data);
            printf("Enter the position to insert: ");
            scanf("%d", &position);
            insertNode(data, position);
            break;

        case 4:
            printf("Enter the position to delete: ");
            scanf("%d", &position);
            deleteNode(position);
            break;

        case 5:
            printf("Creating first linked list:\n");
            printf("Enter the size of the linked list: ");
            scanf("%d", &size);
            list1 = createNewLinkedList(size);

            printf("Creating second linked list:\n");
            printf("Enter the size of the linked list: ");
            scanf("%d", &size);
            list2 = createNewLinkedList(size);

            mergedList = mergeLinkedLists(list1, list2);
            printf("Merged Linked List: ");
            traversal(mergedList);
            break;

        case 6:
            exit(1);
        }
    }

    return 0;
}