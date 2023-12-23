//to make a copy of s1 from the previous program
#include<stdio.h>
struct students{
    int rollno;
    char name[100];
    float marks;
};

int main(){
    struct students s1 = {21, "Vignesh", 99};
    struct students s2,s3;
    s2=s1;
    s3=s1;
    printf("%d, %s , %f\n", s1.rollno, s1.name, s1.marks);
    printf("%d, %s , %f\n", s2.rollno, s2.name, s2.marks);
    printf("%d, %s , %f\n", s3.rollno, s3.name, s3.marks);
    return 0;
}