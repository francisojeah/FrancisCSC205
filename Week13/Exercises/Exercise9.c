#include <stdio.h>

int main()
{
	char *materials[ ] = {"iron", "copper", "gold", "silver", "brass"};
	
	printf("Please remember thers materials: \n");
	int i;
	for(i=0; i<5;i++)
	{
		printf("%s\n", materials[i]);
	}
	return 0;
}
