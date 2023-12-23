#include<stdio.h>
int main(){
    short a;
    long b;
    long long c;
    long double d;  
    printf("Size of a = %d bytes (short) \n",sizeof(a));
    printf("Size of b = %d bytes (long) \n",sizeof(b));
    printf("Size of c = %d bytes (long long) \n",sizeof(c));
    printf("Size of d = %d bytes (long double) \n",sizeof(d));
    
    int populationOfIndia =  1,428,627,663;
    printf("%d",populationOfIndia);
    return 0;
}