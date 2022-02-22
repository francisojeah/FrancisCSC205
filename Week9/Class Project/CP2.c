#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int n, i;
	
	printf("Enter number of Candidates:");
	scanf("%d", &n);
	printf("Entered number of Candidates: %d\n", n);

	ptr = (int*)malloc(n* sizeof(int));
	
	if (ptr == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else{ 
		printf("Memory successfully allocated using malloc. \n");
		

		for (i = 0; i<n; ++i){
			
			printf("Enter Years of experience for candidate %d:", i+1);
			scanf("%d", &ptr[i]);
		}
		
		int a = 0, b;
		for (i=0; i<n; i++){
			if(ptr[i]>a){
				a = ptr[i];
				b = i+1;
			}
		}
		printf("Canditdate %d is the most Experienced with %d years of experience",b,a);
		printf("\n");
		free(ptr);
		
		}
	
	return 0;
}
	
