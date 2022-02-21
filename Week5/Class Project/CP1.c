#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

struct arguments{
	char* name;
	int matricNo;
};

void *threadfunction(void *data)
{
	 printf("\nThread ID: %ld\t ", pthread_self());
	 printf("Operation: %s\t ", ((struct arguments*)data)->name);
	 printf("Matric Number: %d", ((struct arguments*)data)->matricNo);
	 printf("\n");
	 return NULL;
}
int main()
{	
	struct arguments *person = (struct arguments *)malloc(sizeof(struct arguments));
	int stuNum;
	printf("Enter number of students: ");
	scanf("%d", &stuNum);
	
	char eman[60] = " ";
	int mat;
	int b = 0;
	char stuArr[stuNum][60];
	int matArr[stuNum];
	
	for (int i = 0; i<stuNum; i++){
		printf("Enter Name of student: ");
		scanf(" %[^\n]s", eman);
		strcpy(stuArr[i], eman);
		printf("Enter Matric Number: ");
		scanf("%d", &mat);
		matArr[i] = mat;
		printf("\n");
		}
	
 	
	pthread_t thread;
	
	for (int y = 0; y<stuNum; y++){
		person->name = stuArr[y];
 		person->matricNo = matArr[y];
	 	pthread_create(&thread, NULL, threadfunction, (void*)person);
	 }
	 for (int y = 0; y<stuNum; y++){
	 	pthread_join(thread, NULL);	
	}
	pthread_exit(NULL);
	 return 0;	
	 }
	 
	 
	
	 	
	 
