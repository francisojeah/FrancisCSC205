#include <stdio.h>

int main(){
	int opt;
	char a; 
	float b;
	int c;
	
	printf("For character press 1\nFor float press 2\nFor integer press 3\n");
	scanf("%d", &opt);
	
	switch(opt)
	{
	
		case 1:
			printf("Enter a character: ");
			scanf("%c", &a);
			printf("Next four Characters in multiple of 3: ");
			for (int i = 1; i<5; i++)
				printf("%c, ", a+(i*3));
			printf("\nASCII code: %d", a);
			printf("\nSize of operator: %ld", sizeof(a));
			
			break;
		case 2:
			printf("Enter a float: ");
			scanf("%f", &b);
			printf("Next four floats in multiple of 3: ");
			for (int i = 1; i<5; i++)
				printf("%f, ", b+(i*3));
			printf("\nASCII code: %f", b);
			printf("\nSize of operator: %ld", sizeof(b));
			
			break;
		case 3:
			printf("Enter a integer: ");
			scanf("%d", &c);
			printf("Next four integers in multiple of 3: ");
			for (int i = 1; i<5; i++)
				printf("%d, ", c+(i*3));
			printf("\nASCII code: %d", c);
			printf("\nSize of operator: %ld", sizeof(c));
			
			break;
		default:
			printf("Invalid");
			} 
}
