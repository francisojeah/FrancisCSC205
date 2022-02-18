#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>


//create a global variable to change it in threads

//The function to be executed by all threads
void *myThreadAdd(void *vargp, void *grade, void *age)
{
	int *myid = (int *)vargp;
	static int age = 17;//Store the value arguement passed to this thread
	 //Create a static variable to observe its changes
	 //Change static and global variables
	printf("Thread ID: %d, Age: %d, Grade: %d\n", *myid, *ad, *gd);
}
int main()
{
	int i;
	pthread_t tid;
	int g; int a;
	//Let us create three threads
	for (i = 0; i<3; i++)
	printf("Enter grade:");
	scanf("%d", &g);
	printf("Enter age:");
	scanf("%d", &a);
		pthread_create(&tid, NULL, myThreadAdd(g, a, (void *)&tid), NULL);
		
		
		
	pthread_exit(NULL);
	return 0;
}
