#include <stdio.h>
#include <string.h>

int main(){
	char name[20];
	char *ptr;
	
	ptr=name;
	
	printf("Printing the array elements using pointer\n");
	printf("Enter your name: ");
	scanf("%s", name);
	
	for(int i=0; i<strlen(name); i++)
	{
		printf("\n%c ",*ptr);
		ptr++;
	}
	return 0;
}
