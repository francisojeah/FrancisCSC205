#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>


void *threadfunction(void *argument)
{
	char *operation = (char*) argument;
	 printf("\nThread ID: %ld\t\t Operation: %s\n", pthread_self(), operation);
	 return NULL;
}
int main()
{	
	int op_number;
	printf("Enter the number of operations you want to check: ");
	scanf("%d", &op_number);
	
	char op[60] = " ";
	int a = 2, b = 0, c = op_number*(op_number+1);
	char operationArr[c+1][60];
	
	for (int i = 0; i<op_number; i++){
		printf("Enter the operation: ") ;
		scanf(" %[^\n]s", op);
	 	
		for (int j=0; j<a; j++){
			strcpy(operationArr[b], op);
			b+=1;
		}
		a += 2;
	}
	pthread_t thread;
	
	for (int y = 0; y<c; y++){
	 	pthread_create(&thread, NULL, threadfunction, (void*)operationArr[y]);
	 }
	 for (int y = 0; y<c; y++){
	 	pthread_join(thread, NULL);	
	}
	pthread_exit(NULL);
	 return 0;	
	 }
	 
	 
	
	 	
	 
