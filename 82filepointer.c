//fputc
#include<stdio.h>
int main(){
    FILE*x = fopen("Hey.txt","w");
    char P = 'i';
    fputc(P,x);
    return 0;
}



/*
#include<stdio.h>
int main(){
    FILE*x = fopen("Hey.txt","w");
    fputc('i',x);
    return 0;
}
*/