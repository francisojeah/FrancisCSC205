#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	fork();
	fork();
	fork();
	printf("CSC 205: Operating System I\n");
	printf("\n");
	return 0;
}
