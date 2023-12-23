//to create a struct "student" and add values of student "s1" using typedef
#include<stdio.h>

typedef struct student{
    int rollno;
    char name[100];
    float marks;
}stu;

int main(){
    stu s = {21,"Vignesh",94};
    printf("R.no: %d\nName: %s\nMarks: %f", s.rollno , s.name , s.marks);
    return 0;
}


/* The same program without typedef

#include<stdio.h>

struct student{
    int rollno;
    char name[100];
    float marks;
};

int main(){
    struct student s = {21,"Vignesh",94};
    printf("R.no: %d\nName: %s\nMarks: %f", s.rollno , s.name , s.marks);
    return 0;
}*/