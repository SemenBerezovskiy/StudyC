#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
 
int somework(void* Num)
{
	printf("Starting...\nLocale...\n");
	sleep(5);
	printf("Engine...%d\n\n", Num);
	sleep(4);
	printf(".");
	sleep(1);
	printf("..");
	sleep(1);
	printf("...");
	sleep(1);
	printf("Sucess!");
}
int main(void) 
{
	pthread_t th1, th2;
	pthread_create(&th1, NULL, somework, 4);
    	pthread_create(&th2, NULL, somework, 2);
	printf("Двигатели работают\n");
    	return 0;
}
