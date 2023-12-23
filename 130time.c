#include<stdio.h>
#include<time.h>
int main(){
    time_t x;
    x=time(NULL);
    printf("%ld\n",x); // time since epoch in seconds
    printf("%s",ctime(&x)); // time in human readable form (string)
    return 0;
}

// ctime(<address of time_t variable>) returns a string consisting of current date and time