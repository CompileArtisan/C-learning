//to make an array of structures, of the details of 3 students
#include<stdio.h>
struct students{
    int rollno;
    char name[50];
    float marks;
};
int main(){
    struct students s[3];
    return 0;
}