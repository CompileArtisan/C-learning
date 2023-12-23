//to create a struct "employee"
#include<stdio.h>

struct employee{
    int code;
    float salary;
    char name[100];
};
//semi colon is very important


int main(){
    struct employee x = {101,120000,"Praanesh Balakrishnan Nair"};
    printf("%s",x.name);
    return 0;
}