//fgetc
#include<stdio.h>
int main(){
    FILE*x;
    int y,z;
    x= fopen("GET.txt","r");
    fscanf(x,"%d",&y);
    fscanf(x,"%d",&z);
    printf("The 2 numbers in the file are %d and %d",y,z);
    fclose(x);
    return 0;
}