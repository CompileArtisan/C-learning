#include<stdio.h>
struct student{
    int rollno;
    char name[20];
    float marks;
};
int main(){
    struct student s = {21,"Vignesh", 88};
    struct student*ptr = &s;
    printf("Rollno: %d\nName: %s\nMarks: %f",ptr->rollno,ptr->name,ptr->marks);
    return 0;
}