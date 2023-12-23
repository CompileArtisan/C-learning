#include<stdio.h> 
int main(){
    FILE*fp=fopen("sampleFOR94.txt","a");
    fputs("The quick brown fox jumps over the lazy dog.",fp);
    printf("%d",ftell(fp));
    return 0;
}