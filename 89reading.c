//reading a string from a file, character by character.

#include<stdio.h>
int main(){
    FILE*fp;
    fp = fopen("reading.txt","r");
    while(feof(fp)==0){
        printf("%c",fgetc(fp));
    }
    return 0;
}



/*
#include<stdio.h>
int main(){
    FILE*fp;
    fp = fopen("reading.txt","r");
    while(!feof(fp)){
        printf("%c",fgetc(fp));
    }
    return 0;
}
*/