#include <stdio.h>
int main(){
	int num1, num2, choice;
	
	printf("Enter two numbers\n");
	scanf("%d%d", &num1, &num2);
	
	printf("Press \n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division\n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			printf("Addition = %d\n", num1 + num2);
			break;
		case 2:
			printf("Subtraction = %d\n", num1 - num2);
			break;
		case 3:
			printf("Multiplication = %d\n", num1 * num2);
			break;
		case 4:
			printf("Division = %d\n", num1 / num2);
			break;
		default:
			printf("ENter valid choice\n");
	}
	return 0;
}
			
