#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* thread1(void* arg){
    printf("thread1\n");
    sleep(5);
}

void thread2(){
    printf("thread2\n");
    sleep(1);
}

int main(){
    for(;;){
        pthread_t t1;
        pthread_create(&t1,NULL,thread1,NULL);
        thread2();
        pthread_join(t1,NULL);
    }
    return 0;
}