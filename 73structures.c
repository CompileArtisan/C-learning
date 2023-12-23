//to create a struct "student" and add values of student "s1"
#include<stdio.h>
struct students{
    int rollno;
    char name[100];
    float marks;
};

int main(){
    struct students s1 = {21, "Vignesh", 99};
    printf("%d, %s , %f", s1.rollno, s1.name, s1.marks);
    return 0;
}