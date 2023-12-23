//fprintf
#include<stdio.h>
int main(){
    FILE*x;
    char y[]="Hey sup";
    x = fopen("bravo.txt","w");
    fprintf(x,y);
    return 0;
}

/*
#include<stdio.h>
int main(){
    FILE*x;
    x = fopen("bravo.txt","w");
    fprintf(x,"Hey sup");
    return 0;
}
*/