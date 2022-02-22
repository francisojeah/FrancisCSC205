#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *childThread(void* args)
{	int mypid, myppid;
	mypid = getpid();
	myppid = getppid();
	printf("The process ID is %d\n", mypid);
	printf("The parent process ID is %d\n", myppid);
	return NULL;
}
int main()
{
	int ent;
	printf("Enter number of process: ");
	scanf("%d", &ent);
	for (int i=0; i<ent; i++){
	
	if (fork()==0){
		pthread_t thread;
		pthread_create(&thread, NULL, &childThread, NULL);
		pthread_join(thread, NULL);
	}
	}
	return 0;
}
