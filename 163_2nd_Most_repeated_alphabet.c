#include<stdio.h>


int main(){
    char x[100];
    int count[26]={}; 
    printf("Enter a string: ");
    fgets(x,100,stdin);
    for(int i=0 ; x[i]!='\n' ; i++){
        if(x[i]>=97 && x[i]<=122){
            count[x[i]-97]++;
        }
        else if(x[i]>=65 && x[i]<=90){
            count[x[i]-65]++;
        }        
    }
    int greatest = 0;
    for(int k=1 ; k<=2 ; k++){
        for(int i=0 ; i<26 ; i++){
            if(count[greatest]<=count[i]){
                greatest=i;
            }
        }
        if(k==1){
            count[greatest]=0;
            greatest=0;            
        }
    }
    
    printf("The 2nd most repeated letter is \'%c\' and it was repeated %d times.",greatest+65,count[greatest]);
    
    return 0;
}