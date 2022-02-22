#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <string.h>
#include <unistd.h>

void VoterX() {
	char name[100], email[100], dment[100], stateo[100];
	char cr;
	int year;
	float cgpa;
	printf("What is your name? :");
	scanf("%c", name);
	printf("\nInput your email");
	scanf("%s", email);
	printf("\nWhat department are you in? :");
	scanf("%s", dment);
	printf("\nWhat is your state of origin? :");
	scanf("%s", stateo);
	printf("\nAre you a class rep(y/n): ");
	scanf("%c", &cr);
	printf("\nwhat level are you in?: ");
	scanf("%d", &year);
	printf("\nWhat is your cgpa?: ");
	scanf("%f", &cgpa);

	if((cr=='y') &&(year != 100)&&(cgpa>4.0 &&cgpa<5.0)) {
		printf("Name: %s",name);
		printf("Email: %s", email);
		printf("Department: %s", dment);
		printf("State Of Origin: %s", stateo);
		printf("You Can Vote");
	} else {
		printf("Sorry, you are not eligible to vote");
	}
}

void PubTAKS() {
	char name[100];
	int paper, incentive;
	printf("What is the name of paper?");
	scanf("%s", name);
	printf("Enter number of papers published by the facaulty");
	scanf("%d", &paper);

	if((paper>=3 && paper<=5)) {
		incentive = 500000;
	} else if((paper>5 && paper<10)){
		incentive = 800000;
	} else if((paper>=10)){
		incentive = 1000000;
	} else{
		incentive =100000;
	}
	printf("name: %s", name);
	printf("incentive: %d", incentive);
}

int main() {
	int choice;
	printf("Which program do you want to run. \nfor VoterX press 1\n for PubTAKS press 2\n");
	scanf("%d", &choice);

	switch(choice) {
		case 1:{
			pid_t pid;
			pid = fork();
			if(pid == 0) {
				VoterX();
			}
			break;
			}
		case 2:{
		pid_t pid;
			pid = fork();
			if(pid == 0) {
				PubTAKS();
			}
			break;
			}
		default:
			printf("invalid input");
	}

}
