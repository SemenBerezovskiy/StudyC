#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
 

int value = 0;  // общий ресурс
 
 
void* do_work(void* thread_id)
{
    value = 1;
    int id = *(int*)thread_id;     // получаем id потока
    for (int n = 0; n < 5; n++) 
    {
        printf("Thread %d: %d\n", id, value );
        value += 1;
        sleep(1);
    }
    return NULL;
}
int main(void) 
{
    pthread_t t1, t2;       // два потока для демонстрации
    int t1_id = 1, t2_id = 2;  // идентификаторы потоков
    pthread_create(&t1, NULL, do_work, &t1_id);
    pthread_create(&t2, NULL, do_work, &t2_id);
 
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
     
    return 0;
}
