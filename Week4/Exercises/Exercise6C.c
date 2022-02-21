#include <stdio.h>
int main()
{
	int first_int, second_int;
	printf("Enter first integer: ");
	scanf("%d", &first_int);
	printf("Enter second integer: );
	scanf("%d", &second_int);
	
	printf("Output = %d\n", first_int^second_int);
	return 0;
}
