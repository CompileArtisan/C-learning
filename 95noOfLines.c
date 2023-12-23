//this is a program to count the number of lines in a text file
#include<stdio.h>
int main(){
    FILE*fp=fopen("noOfLines.txt","r");
    int count = 1;
    char x;
    while((x=fgetc(fp))!=EOF){
        if(x=='\n'){
            count++;
        }
    }
    printf("The number of lines in the file is %d",count);
    return 0;
}