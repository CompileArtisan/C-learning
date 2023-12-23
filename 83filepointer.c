//fputs
/*#include<stdio.h>
int main(){
    FILE*x;
    x = fopen("MEN.txt","w");
    fputs("Praanesh Balakrishnan Nair",x);
    return 0;
}*/
#include<stdio.h>
int main(){
    FILE*x;
    char y[] = "Praanesh Balakrishnan Nair";
    x = fopen("MEN.txt","w");
    fputs(y,x);
    return 0;
}