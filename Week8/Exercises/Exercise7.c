#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *childThread(void* args)
{	
	printf("The child process created this thread\n");
	return NULL;
}
int main()
{
	int gap;
	
	printf("Before Process Created\n");
	gap=fork();
	printf("After Process Created\n");
	
	if (gap==0){
		pthread_t pid;
		printf("Child process before thread creation\n");
		//pthread_create(&pid, NULL, &childThread, NULL);
		//pthread_join(pid, NULL);
		printf("Child Process after thread creation\n");
	}
	else{
		printf("Parent process exist\n");
	}
	return 0;
}
