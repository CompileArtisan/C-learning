/* Declare an array of size n take the user input for array elements print the sum and the largest element in the array

*/
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements you need: ");
    scanf("%d",&n);

    int x[n];

    //taking user input for all elements of the array
    for(int i=0 ; i<n ; i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&x[i]);
    }

    //for finding the sum of the numbers
    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum+=x[i]; 
    }
    printf("The sum of all the numbers is %d\n",sum);


    //to find the largest number among the numbers given in the array
    int largest = x[0];
    for(int i=0 ; i<n-1 ; i++){
        if(largest<=x[i+1]){
            largest=x[i+1];
        }
    }
    printf("The largest element in this array is %d",largest);

    return 0;
}