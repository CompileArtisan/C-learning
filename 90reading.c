//reading a string literal from a file, using the fgets() function
#include<stdio.h>
#include<stdlib.h> //exit() is included in this header file.
int main(){
    FILE*fp;
    fp = fopen("reading.txt","r");
    char y[100];
    if(fp==NULL){
        printf("ERROR! The file doesn't exist");
        fclose(fp);
        exit(1);
    }
    fgets(y,27,fp);
    printf("%s",y);
    return 0;
}