#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>


/*struct Arguments{
	char *operations;
	int *myid;
	};

void *threadfunction(void *arg)
{
	
	 printf("Thread ID: %lu, \t Operation: %s", (int unsigned long)pthread_self(), ((struct Arguments*)arg)->operations);
	 pthread_exit(NULL);
	 return NULL;
}
*/
int main()
{
	//struct Arguments *pay = (struct Arguments *)malloc(sizeof(struct Arguments));
	
	
	
	int number;
	
	printf("Enter the number of operations you want to check: ");
	scanf("%d", &number);
	
	char op[20] = " ";
	
	int a = 2;
	int b = 0;
	int c = number*(number+1);
	char operationArr[c+1][20];
	
	for (int i = 0; i<number; i++){
		
		printf("Enter the operation: ") ;
		scanf(" %[^\n]s",op);
	
	 	
		for (int j=0; j<a; j++){
			strcpy(operationArr[b],op);
			b +=1;
		}
		a += 2;
		
	}
	
	for (int y = 0; y<c; y++){
		printf("%s", operationArr[y]);
		}
	
	/*pthread_t thread;
	
	
	
	 //for (int x = 0; x<c; x++){
	 	pay ->operations = op;
		pay->myid = (int*) thread;
	 	
	 	pthread_create(&thread, NULL, threadfunction, (void*)pay);
	 //}
	 //for (int x = 0; x<c; x++){
	 	pthread_join(thread, NULL);
	 	
	//}*/
	 	return 0;
	 	
	 }
	 
	 
	
	 	
	 
