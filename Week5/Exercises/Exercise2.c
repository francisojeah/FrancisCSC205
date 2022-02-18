#include <stdio.h>
#include <pthread.h>

//thread function definition
void *threadFunction(void* args)
{
	while(1)
	{
		printf("I am thread Function.\n");
	}
}
int main()
{
	//creating thread id
	pthread_t id;
	int ret;
	
	//creating thread
	ret = pthread_create(&id,NULL,&threadFunction,NULL);
	if (ret==0){
		printf("Thread created successfully.\n");
		pthread_create(&id,NULL,&threadFunction,NULL);
		}
	else{
		printf("Tread not created.\n");
		return 0;
	}
	
	return 0;
}
