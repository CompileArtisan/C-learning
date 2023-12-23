//non-creative pattern
#include<stdio.h>
int main(){
    printf(" ");
    for(int i=1 ; i<=10 ; i++){
        printf("_");
    }
    printf("\n");
    char slash ='\\';
    for(int i=1 ; i<=3 ; i++){
        printf("|");
        for(int j=1 ; j<i ; j++){
            printf(" ");
        }
        printf("%c",slash);
        for(int k=1 ; k<=9-i ; k++){
            if(i==3){
                printf("_");
            }
            else{
                printf(" ");
            }            
        }
        printf("|");
        for(int e=1 ; e<i ; e++){
            if(i==3){
                printf("_");
            }
            else{
                printf(" ");
            } 
        }
        printf("%c",slash);
        printf("\n");
    }
    for(int i=1 ; i<=15 ; i++){
        if((i==1)||(i==5)||(i==11)||(i==15)){
            printf("|");
        }
        else if(i>11){
            printf(" ");
        }
        else{
            printf("_");
        }
    }
    printf("\n");
    for(int i=1 ; i<=3 ; i++){
        for(int j=1 ; j<=i ; j++){
            printf(" ");
        }
        printf("%c",slash);
        for(int j=3 ; j>i ; j--){
            printf(" ");
        }
        printf("|");
        for(int j=1 ; j<=5+i ; j++){
            if(i==3){
                printf("_");
            }
            else{
                printf(" ");
            }
        }
        printf("%c",slash);
        for(int j=3 ; j>i ; j--){
            printf(" ");
        }
        printf("|");
        printf("\n");
    }


    return 0;
}