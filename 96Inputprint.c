//to input text from the user and then print it into a file
#include<stdio.h>
int main(){
    FILE*fp=fopen("FILEcontainingINPUT.txt","w+");
    char str[100];
    printf("Enter data you'd like to save in a file: ");
    gets(str);
    fputs(str,fp);
    return 0;
}