#include <stdio.h>

int main()
{
	int num, product;
	printf("Enter the value of n: ");
	scanf("%d", &num);
	
	for (int i = 1; i<=num; ++i)
	{
		for (int j=1; j<=num; ++j)
		{
			product = j*i;
			printf("%d\t", product);
		}
		printf("\n");
	}
return 0;
} 
