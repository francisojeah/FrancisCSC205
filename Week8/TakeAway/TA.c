#include <stdio.h>
#include <pthread.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>

struct arguments {
char* gender;
int age;
char *region;
char VB;
};

void *election(void *data) {
printf("\nthread ID: %lu\n",pthread_self());
 printf("Gender: %s\n", ((struct arguments*)data)->gender);
 printf("Age: %d\n", ((struct arguments*)data)->age);
 printf("Region: %s\n", ((struct arguments*)data)->region);
 printf("Voting Booth: %c\n", ((struct arguments*)data)->VB);
return NULL; 
}

int main() {
	struct arguments *person = (struct arguments *)malloc(sizeof(struct arguments));

	char region[10], gender[10];
	int age;
	char VB= ' ';
	 printf("Enter Gender ");
	 scanf("%s", gender);
	 printf("Enter age: ");
	 scanf("%d",&age);
	 printf("Enter region: ");
	 scanf("%s", region);
	 
	 if (fork()==0){
	 
	 if (gender=="male"){
	 	if (17<age<46){
	 		if(region == "north"){
	 			VB = 'A';
	 		}
	 		else if(region == "south"){
	 			VB = 'B';
	 		}
	 		else if(region == "east"){
	 			VB = 'C';
	 		}
	 		else if(region == "west"){
	 			VB = 'D';
	 		}
	 	}
	 	else if (45<age<76){
	 		if(region == "north"){
	 			VB = 'E';
	 		}
	 		else if(region == "south"){
	 			VB = 'F';
	 		}
	 		else if(region == "east"){
	 			VB = 'G';
	 		}
	 		else if(region == "west"){
	 			VB = 'H';
	 		}
	 	}
	 }
	 else if (gender=="female"){
	 	if (age >17 && age<46){
	 		if(region == "north"){
	 			VB = 'E';
	 		}
	 		else if(region == "south"){
	 			VB = 'F';
	 		}
	 		else if(region == "east"){
	 			VB = 'G';
	 		}
	 		else if(region == "west"){
	 			VB = 'H';
	 		}
	 	}
	 	else if (age >45 && age<76){
	 		if(region == "north"){
	 			VB = 'A';
	 		}
	 		else if(region == "south"){
	 			VB = 'B';
	 		}
	 		else if(region == "east"){
	 			VB = 'C';
	 		}
	 		else if(region == "west"){
	 			VB = 'D';
	 		}
	 	}
	 }
	 
	 person->gender = gender;
	 person->age = age;
	 person->region = region;
	 person->VB = VB;
	 
	 pthread_t thread;
	 pthread_create(&thread, NULL, election, (void *)person);
	 pthread_join(thread, NULL);
	 
	 }
	 
	return 0; 
	}
