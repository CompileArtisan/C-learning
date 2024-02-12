#include<stdio.h>

// Transversal
void traversal(int a[50] , int numberOfElements){
    for(int i=0 ; i<numberOfElements ; i++) printf("%d ",a[i]);
}

// bubblesort
void bubblesort(int a[50], int n){
    for(int j=0 ; j<n-1 ; j++){
        for(int i=0 ; i<n-1-j ; i++)
            if(a[i]>=a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;    
            }        
    }
}

// Search
int search(int a[50] , int numberOfElements , int k){
    int i=0;
    for(; i<numberOfElements ; i++)
        if(a[i]==k) return i;    
    return -1; // if the element isn't even there in the array
}



// Inserting in Unsorted Array
void insertInUnsorted(int a[50] , int n , int value , int index){
    for(int i=n-1 ; i>=index ; i--)
        a[i+1] = a[i];
    a[index]=value;
}


// Inserting in Sorted Array
void insertInSorted(int a[50] , int n , int value){
    int i=n-1;
    for(; a[i]>value ; i--)
        a[i+1] = a[i];
    a[i+1]=value;
}

// Deleting
void delete(int a[50] , int n , int index){
    for(int i=index ; i<n-1 ; i++)
        a[i]=a[i+1];
}



// selectionsort





int main(){
    // int a[50]={1,2,3,4,5,393,8,9,10};
    // insertInUnsorted(a,10,11,8);
    // traversal(a,10);


    // int a[50]={10,20,30,40,50,60,70,80,90,100};
    // insertInSorted(a,10,35);
    // traversal(a,11);

    // int a[50]={1,2,3,4,5};
    // insertInUnsorted(a,10,55,3);
    // traversal(a,6);


    // int a[50]={1,2,3,4,5};
    // delete(a,5,3);
    // traversal(a,4);

    


    return 0;
}