#include <stdio.h>
//Write a C program that accepts a character between A to J and prints the next 6 characters.

int main(){
	char c = 0;
	
	int isTrue = 0;
	
	while (isTrue == 0){
		printf("Enter a character between A-J: ");
		scanf("%c", &c);
		
		if (c>64&&c<75){
			isTrue = 1;
			}
		else if (c>96&&c<107){
			isTrue = 1;
			}
		else{
			isTrue = 0;
		}
	
	}
	
	if (c>64&&c<75){
		for (int i=c+1; i<c+6; i++){
			printf("\t%c", i);
		}
		printf("\n");
		}
	else {
		for (int i=c+1; i<c+6; i++){
			printf("\t%c", i);
		}
		printf("\n");
		}
	
	return 0;
}
