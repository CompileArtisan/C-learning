#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*fp = fopen("reading.txt","r+");
    if(fp==NULL){
        printf("Error! The specified file does not exist.");
        exit(1);
    }
    fseek(fp,17,SEEK_SET);
    fputs("Kangaroo",fp);
    rewind(fp);
    return 0;
}