#include <stdio.h>
#include <stdlib.h>

int main()
{
	//float matrix1[3][2] = { {667, 422}, {233.5, 515}, {183.4, 335} };
	//float matrix2[3][2] = { {100, 151.6}, {245.5, 312}, {333, 578.8} };

	float*ptr, *ptr1;
	int n, n1, i, i1;
	
	printf("Enter number of elements in Matrix A:");
	scanf("%d", &n);
	printf("Entered number of elements: %d\n", n);

	ptr = (float*)malloc(n* sizeof(float));
	
	if (ptr == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else{ 
		printf("Memory successfully allocated using malloc. \n");
		

		for (i = 0; i<n; ++i){
			printf("Enter element %d:", i+1);
			scanf("%f", &ptr[i]);
		}
		
		}
		
	printf("Enter number of elements in Matrix B:");
	scanf("%d", &n1);
	printf("Entered number of elements: %d\n", n1);

	ptr1 = (float*)malloc(n1 * sizeof(float));
	
	if (ptr1 == NULL){
		printf("Memory not allocated.\n");
		exit(0);
	}
	else{ 
		printf("Memory successfully allocated using malloc. \n");
		

		for (i1 = 0; i1<n1; ++i1){
			printf("Enter element %d:", i1+1);
			scanf("%f", &ptr1[i1]);
		}
		
		}
	
		
		i = 0;
		while(i<n){
			printf("|%.1f\t%.1f|\n",ptr[i],ptr[i+1]);
			i +=2;
		}
		
		printf("\n\t+\n\n");
		i1 = 0;
		while(i1<n1){
			printf("|%.1f\t%.1f|\n",ptr1[i1],ptr1[i1+1]);
			i1 +=2;
		}
		printf("\n");
		i = 0;
		while(i<n){
			printf("|%.1f\t%.1f|\n",ptr[i]+ptr1[i],ptr[i+1]+ptr1[i+1]);
			i +=2;
		}
		printf("\n");
		free(ptr);
		free(ptr1);
	return 0;
}
	
