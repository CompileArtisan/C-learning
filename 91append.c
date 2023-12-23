#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE*fp = fopen("reading.txt","a");
    char x[100];
    if(fp==NULL){
        printf("Error! The specified file does not exist.");
        exit(1); //included in stdlib.h
    }
    printf("Enter the data to be added to the file: ");
    gets(x);
    fprintf(fp,"%s",x);
    printf("The data is successfully appended!");
    fclose(fp);
    return 0;
}