#include<stdio.h>

void swap(int x[100],int i,int j){
    int temp = x[i];
    x[i]=x[j];
    x[j]=temp;
}

int main(){
    int a[100]={69,9,121,17};
    swap(a,2,0);
    for(int i=0 ; i<4 ; i++){
        printf("%d ",a[i]);
    }

    return 0;
}