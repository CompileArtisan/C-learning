//to copy the contents of one file and then paste it into another file
#include<stdio.h>
int main(){
    FILE*fp1=fopen("file1.txt","r");
    FILE*fp2=fopen("file2.txt","w+");
    char ch;
    while((ch=fgetc(fp1))!=EOF){
        fprintf(fp2,"%c",ch);
    }
    return 0;
}