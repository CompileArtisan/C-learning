//end of file
#include<stdio.h>
int endOFfile(FILE*u){
    return feof(u);
}

int main(){
    FILE*x;
    x = fopen("reading.txt","r");
    char y = fgetc(x);
    printf("%d",endOFfile(x));
    return 0;
}

//when reading.txt has no character in it, then a non zero number (true) is printed. 
//when reading .txt has one or more characters in it, then zero (false) is printed.