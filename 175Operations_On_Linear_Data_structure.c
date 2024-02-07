#include<stdio.h>

// Transversal
void transverse(int a[50] , int numberOfElements){
    for(int i=0 ; i<numberOfElements ; i++) printf("%d ",a[i]);
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
    for(int i=n ; i>index ; i--)
        a[i] = a[i-1];
    a[index]=value;
}


// Inserting in Sorted Array
void insertInSorted(int a[50] , int n , int value){
    int i=n-1;
    for(; value<a[i] ; i--)
        a[i] = a[i-1];
    a[i+1]=value;
}

// Deleting
void delete(int a[50] , int n , int index){
    for(int i=index ; i<n-1 ; i++)
        a[i]=a[i+1];
}






int main(){
    int a[50]={43,353,200,48};
    transverse(a,4);
    printf("\n\n%d\n\n",search(a,4,48));
    insertInUnsorted(a,4,2,2);
    transverse(a,5);

    printf("\n\n");
    int b[50]={10,20,30,40,50,60};
    insertInSorted(b,6,46);
    transverse(b,7);

    printf("\n\n");
    delete(a,5,3);
    transverse(a,4);


    return 0;
}