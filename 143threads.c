#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* thread1(void* arg){
    for(int i=0;i<5;i++){
        printf("thread1\n");
        sleep(5);
    }
}


int main(){
    for(;;){
        pthread_t t1;
        pthread_create(&t1,NULL,thread1,NULL);
        for(int i=0;i<5;i++){
            printf("thread2\n");
            sleep(1);
        }
        
        pthread_join(t1,NULL);
    }
    return 0;
}