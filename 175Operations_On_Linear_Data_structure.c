#include<stdio.h>
#include<stdlib.h>

// read an array
void rdar(int a[20], int n){
    for(int i=0 ; i<n ; i++) scanf("%d",&a[i]);
}

// print an array
void pntar(int a[20] , int n){
    for(int i=0 ; i<n ; i++) printf("%d ",a[i]);
}

// reverse an array
void rvar(int a[20], int n){
    for(int i=0 ; i<n/2 ; i++){
        int temp = a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}

// merge two arrays
int * mrgar(int a[20],int b[20], int m, int n){
    int*merged=(int*)malloc(sizeof(int)*(m+n));
    for(int i=0; i<m ; i++) *(merged+i)=a[i];
    for(int i=0; i<n ; i++) *(merged+m+i)=b[i];
    return merged;
}

// bubblesort
void bblsrt(int a[20], int n){
    for(int j=0 ; j<n-1 ; j++){
        for(int i=0 ; i<n-1-j ; i++)
            if(a[i]>=a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;    
            }        
    }
}

// selection sort
void slnsrt(int a[20], int n){
    for(int i=0 ; i<n-1 ; i++){
        int smallest=i;
        for(int j=i+1 ; j<n ; j++) if(a[smallest]>a[j]) smallest=j;
        int temp=a[smallest];
        a[smallest]=a[i];
        a[i]=temp;
    }
}

// Linear search 
int linsrch(int a[20] , int numberOfElements , int k){
    int i=0;
    for(; i<numberOfElements ; i++)
        if(a[i]==k) return i;    
    return -1; // if the element isn't even there in the array
}

// binary search
int binsrch(int a[20], int n, int key){
    int beginning=0, end=n-1, mid, location;
    while(beginning<=end){
        mid=(beginning+end)/2;
        if(a[mid]<key) beginning=++mid;
        else if(key<a[mid]) end=--mid;
        else{
            location=mid;
            break;
        }
    }
    return location;
}

// Deleting
void dlar(int a[20] , int n , int index){
    for(int i=index ; i<n-1 ; i++)
        a[i]=a[i+1];
}

// Inserting in Unsorted Array
void insertInUnsorted(int a[50] , int n , int value , int index){
    for(int i=n-1 ; i>=index ; i--)
        a[i+1] = a[i];
    a[index]=value;
}

// Inserting in Sorted Array
void insertInSorted(int a[20] , int n , int value){
    int i=n-1;
    for(; a[i]>value ; i--)
        a[i+1] = a[i];
    a[i+1]=value;
}

int main(){
    int a[20], b[20], n, m, x, key, index;
    
    while(1){
        printf("\nEnter:\n1) read\n2) print\n3) reverse\n4) merge\n5) bubblesort\n6) selectionsort\n7) linear search\n8) binary search\n9) deleting element\n10) inserting in unsorted\n11) inserting in sorted\n0) exit\n");
        scanf("%d", &x);
        
        switch (x){
            case 1:
                printf("Enter the number of elements: ");
                scanf("%d", &n);
                printf("Enter the elements: ");
                rdar(a, n);
                break;
                
            case 2:
                printf("The array is: ");
                pntar(a, n);
                break;
                
            case 3:
                rvar(a, n);
                printf("The reversed array is: ");
                pntar(a, n);
                break;
                
            case 4:
                printf("Enter the number of elements in array 1: ");
                scanf("%d", &m);
                printf("Enter the elements of array 1: ");
                rdar(a, m);
                printf("Enter the number of elements in array 2: ");
                scanf("%d", &n);
                printf("Enter the elements of array 2: ");
                rdar(b, n);
                int *merged = mrgar(a, b, m, n);
                printf("The merged array is: ");
                pntar(merged, m+n);
                free(merged);
                break;
                
            case 5:
                bblsrt(a, n);
                printf("The sorted array using bubble sort is: ");
                pntar(a, n);
                break;
                
            case 6:
                slnsrt(a, n);
                printf("The sorted array using selection sort is: ");
                pntar(a, n);
                break;
                
            case 7:
                printf("Enter the element to search: ");
                scanf("%d", &key);
                index = linsrch(a, n, key);
                if(index != -1)
                    printf("Element found at index %d\n", index);
                else
                    printf("Element not found\n");
                break;
                
            case 8:
                printf("Enter the element to search: ");
                scanf("%d", &key);
                index = binsrch(a, n, key);
                if(index != -1)
                    printf("Element found at index %d\n", index);
                else
                    printf("Element not found\n");
                break;
                
            case 9:
                printf("Enter the index of the element to delete: ");
                scanf("%d", &index);
                dlar(a, n, index);
                n--;
                printf("Element deleted successfully\n");
                break;
                
            case 10:
                printf("Enter the value to insert: ");
                scanf("%d", &key);
                printf("Enter the index to insert: ");
                scanf("%d", &index);
                insertInUnsorted(a, n, key, index);
                n++;
                printf("Element inserted successfully\n");
                break;
                
            case 11:
                printf("Enter the value to insert: ");
                scanf("%d", &key);
                insertInSorted(a, n, key);
                n++;
                printf("Element inserted successfully\n");
                break;
                
            case 0:
                printf("Exiting the program\n");
                exit(0);
                
            default:
                printf("Invalid choice\n");
                break;
        }
    }

    return 0;
}