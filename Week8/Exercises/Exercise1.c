#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	int mypid, myppid;
	printf("This is the main() program\n");
	printf("I would likde to know the PID and PPID's information\n");
	mypid = getpid();
	myppid = getppid();
	printf("The process ID is %d\n", mypid);
	printf("The parent process ID is %d\n", myppid);
	return 0;
}
