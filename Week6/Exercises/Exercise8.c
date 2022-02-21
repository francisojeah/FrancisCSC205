#include<stdio.h>

int main()
{

	int num, choice; 
	double fnum;
	char ch;

	printf("Press \n 1 to enter character \n 2 to enter float \n 3 to enter Integer \n");

	scanf("%d", &choice);

	switch(choice){
	

	case 1:

		printf("\n Enter any character: ");

		scanf("%c",&ch); 
		printf("\n next four characters in multiple of 3 are: ");
		printf("\n Character: %c, Size: %lu bytes, ASCII value: %d", (ch+3), sizeof((ch+3)), (ch+3));
		printf("\n Character: %c, Size: %lu bytes, ASCII value: %d", (ch+6), sizeof((ch+6)), (ch+6));
		printf("\n Character: %c, Size: %lu bytes, ASCII value: %d", (ch+9), sizeof((ch+9)), (ch+9));
		printf("\n Character: %c, Size: %lu bytes, ASCII value: %d", (ch+12), sizeof((ch+12)), (ch+12));
		break;
		
		case 2:
			printf("\n Enter any float number: ");
			scanf("%lf", &fnum);
			printf("\n next four floats in multiple of 3 are: ");
			printf("\n FLoat: %lf, Size: %lu bytes", (fnum+3), sizeof((fnum+3)));
			printf("\n FLoat: %lf, Size: %lu bytes", (fnum+6), sizeof((fnum+6)));
			printf("\n FLoat: %lf, Size: %lu bytes", (fnum+9), sizeof((fnum+9)));
			printf("\n FLoat: %lf, Size: %lu bytes", (fnum+12), sizeof((fnum+12)));
			break;
			
		case 3:
			printf("\n Enter any integer number: ");
			scanf("%d", &num);
			printf("\n next four integers in multiple of 3 are: ");
			printf("\n integer: %d, Size: %lu bytes", (num+3), sizeof((num+3)));
			printf("\n integer: %d, Size: %lu bytes", (num+6), sizeof((num+6)));
			printf("\n integer: %d, Size: %lu bytes", (num+9), sizeof((num+9)));
			printf("\n integer: %d, Size: %lu bytes", (num+12), sizeof((num+12)));
			break;
		default:
			printf("Invalid choice");
			
	}
	return 0;
}
		
