/* write a program to record the placement percentage for the last 7 years and print the year with the least placement record

*/
#include<stdio.h>
int main(){
    float x[7];

    //enter the placement for every year
    for(int i=0 ; i<7 ; i++){
        printf("Enter the placement percentage for year %d: ",i+1);
        scanf("%f",&x[i]);
    }

    //comparing values
    float least=x[0];
    int year=1;
    for(int i=0 ; i<6 ; i++){
        if(least>=x[i+1]){
            least=x[i+1];
        }
        year++;
    }
    printf("The year with the least placement record is %d",year);
    return 0;
}