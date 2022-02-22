#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <pthread.h>
#include <string.h>
#include <unistd.h>

struct arguments {
char* name;
char* email;
char *department;
char* state;
char* message;
};

void *childthread(void *args) {
	 printf("Name: %s", ((struct arguments*)args)->name);
	 printf("email: %s\n", ((struct arguments*)args)->email);
	 printf("department: %s\n", ((struct arguments*)args)->department);
	 printf("state: %s\n", ((struct arguments*)args)->state);
	 printf("message: %s\n", ((struct arguments*)args)->message);
	 return NULL; 
	}
void *childthread2(void *arg) {
	int incentive = (int*) arg;
	 printf("Incentive: %d", incentive);
	 return NULL;
	 }

int main(){
	struct arguments *candidate = (struct arguments *)malloc(5*sizeof(struct arguments));
	char name[50];
	char *email;
	char *department; 
	char *state;
	char *message; 
	
	int option,level;
	char rep;
	float cgpa;
	printf("What program do you want to run\n");
	printf("For VoterX press 1\nFor PubTAKS press 2\n");
	scanf("%d", &option);
	
	if (option == 1){
			printf("\nWhat level are you in e.g(100, 200,...): Level ");
			scanf("%d", &level);
			printf("\nAre you a class rep(y/n): ");
			scanf("%c", &rep);
			printf("\nWhat is your CGPA: ");
			scanf("%f", &cgpa);
			
			if ((level !=100)&&(rep == 'y')&&(cgpa>4.0 && cgpa<5.0)){
				pid_t pid;
				pid = fork();
				printf("Enter Name of candidate: ");
				fgets(name, 50, stdin);
				printf("Enter email address: ");
				scanf("%s", &email);
				printf("enter department: ");
				scanf("%s", &department);
				printf("ENter state: ");
				scanf("%s", &state);
				message = "You can vote";
				 candidate->name = name;
 				candidate->email = email;
 				candidate->department = department;
 				candidate->state = state;
 				candidate->message= message;
				
				if(pid<0){
					printf("fork() failure\n");
					return 1;
				}
				
				if (pid == 0){
				pthread_t pthread;
					pthread_create(&pthread, NULL, &childthread, (void*)candidate);
					 pthread_join(pthread, NULL);
				}
				else{
					printf("parent process exist");
					}
			}
			else{
				printf("You cannot vote");
				}
				}
				
		else if(option==2){
			int pnum, incen;
			printf("How many papers has the faculty published:");
			scanf("%d", &pnum);
			pid_t pid;
			pid = fork();
			if ((pnum>=3) && (pnum<=5))
				incen = 500000;
			else if ((pnum>5) && (pnum<10))
				incen = 800000;
			else if (pnum>=10)
				incen = 1000000;
			else{
				incen = 100000;
				}
				
				if(pid<0){
					printf("fork() failure\n");
					return 1;
				}
				
				if (pid == 0){
					pthread_t pthread;
					pthread_create(&pthread, NULL, childthread, (void*)incen);
					 pthread_join(pthread, NULL);
				}
				else{
					printf("parent process exist");
					}
				}
			}
			
