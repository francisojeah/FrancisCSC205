#include <stdio.h>
#include <stdlib.h>

int main(){
	char *OA[6]={"intern","administrator", "senior administrator", "office manager", "director", "ceo"};
	char *A[6]={"-", "research assistance", "phd candidate", "post-doc researcher", "senior lecturer", "dean"};
	char *L[6]={"paralegal", "junior associate", "associate", "senior associate1-2", "senior associatttte 3-4", "partner"};
	char *T[6]={"placement", "classroom teacher", "snr teacher", "leading teacher", "deputy principal", "principal"};
	
	char* job;
	int year;
	printf("Enter job role: ");
	scanf("%s", job);
	
	//printf("Enter years of experience: ");
	//scanf("%d", &year);
	for(int i=0; i<6; i++){
		switch(i){
			case 0:{
				if((job == OA[0])||(job == A[i])||(job==L[i])||(job==T[i])){
					printf("\nAPS 1-2\n");
				}
				break;
				}
			case 1:
				if((job == OA[i])||(job == A[i])||(job==L[i])||(job==T[i])){
					printf("\nAPS 3-5\n");
				}
				break;
			case 2:
				if((job == OA[i])||(job == A[i])||(job==L[i])||(job==T[i])){
					printf("\nAPS 5-8\n");
				}
				break;
			case 3:
				if((job == OA[i])||(job == A[i])||(job==L[i])||(job==T[i])){
					printf("\nEL1 8-10\n");
				}
				break;
			case 4:
				if((job == OA[i])||(job == A[i])||(job==L[i])||(job==T[i])){
					printf("\nEL2 10-13\n");
				}
				break;
			case 5:
				if((job == OA[i])||(job == A[i])||(job==L[i])||(job==T[i])){
					printf("\nSES\n");
				}
				break;
			}
		}
	}
		
	
