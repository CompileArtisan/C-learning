#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>

struct mom{int age; char name[50]; int phone_no; };
struct mom getmom(int mom1.age,char mom1.name[50],int mom1.phone_no)
{
    struct mom mom1;
    return mom1;
}

int main(){
    struct mom mom1;
    mom1=getmom(19,"lucy",1234567890);

    return 0;
}