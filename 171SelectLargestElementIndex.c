#include<stdio.h>
#include<string.h>

int LargestIndex(int*x){    
    int large=0;
    for(int i=0; i<100; i++){
        if(x[i]>=x[large]){
            large=i;
        }
    }
    return large;
}

int main(){
    int a[100]={69,9,121,17};
    printf("%d",LargestIndex(a));
    
    return 0;
}