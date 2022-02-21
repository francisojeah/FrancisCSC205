#include <stdio.h>

int main(){
	int i=1;
	int num;
	
	printf("ENter a number: ");
	scanf("%d", &num);
	
	while(i<=num){
		printf("%d\t", i);
		++i;
	}
	printf("\n");
	
	return 0;
}
