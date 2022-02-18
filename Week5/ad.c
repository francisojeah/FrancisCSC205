#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

void* operaPro(void* op){
char *var = (char*) op;
printf("\n\tThread ID: %ld\t Operation Problem: %s\n", pthread_self(), var);
}
int main()
{
int num;
int d;
int t;
int c;
int nrows;
int ncolumns;

char **op_array;
op_array = malloc(nrows * sizeof(char *));
if(op_array == NULL)
{
fprintf(stderr, "out of Space\n");
//exit or return
}
for(int j=0; j<nrows; j++)
{
op_array[j] = malloc(ncolumns * sizeof(char));
if(op_array[j] == NULL){
fprintf(stderr, "out of Space\n");
//exit or return
}
}

printf("Enter the number of Operation Problem: ");
	scanf("%d", &num);
	
d = num*(num+1);
pthread_t thid[d+1];

for(int i=0; i<num; i++){
	printf("\nEnter Operation Problem: ");
	scanf(" %99[^\n]s", op_array[i]);
}
printf("            ");
int z = 0;
for(int t=1; t<=num; t++){
	for(int c=1; c<=(2*t); c++){
		int mt;
		mt = pthread_create(&thid[z], NULL, &operaPro, (void*)op_array[t-1]);
		z += 1;
	}
}
z = 0;
for(int t=1; t<=num; t++){
	for(int c=1; c<=(2*t); c++){
	pthread_join(thid[z], NULL);
}	
}

pthread_exit(NULL);
return 0;

}


