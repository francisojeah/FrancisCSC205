#include <stdio.h>

int main(){
	double NumValue=10.2;
	char TextValue[10] = "abc";
	
	printf("THe address of variable NumValue: %p\n", &NumValue);
	printf("TextValue variable address is: %p\n", &TextValue);
	return 0;
}
