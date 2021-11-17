#include <stdio.h>
int main(){
	int exp, age, salary = 0;
	printf("\t\tEnter Level of Experience\n");
	printf("Entry Level. Press 1\nIntermidiate level. Press 2\nMid Level. Press 3.\nSenior or Executive Level. Press 4\n");
	scanf("%d", &exp);
	
	printf("\nEnter Age:");
	scanf("%d", &age);
	
	if ((exp==3||exp==4)&&(age>=40)){
		salary = 560000;
	}
	else if ((exp==3||exp==4)&&(age>=30&&age<40)){
		salary = 480000;
	}
	else if ((exp==3||exp==4)&&(age<30)){
		salary = 300000;
	}
	else {
		salary = 100000;
	}
	
	printf("Salary: %d\n", salary);
	
	return 0;
}
