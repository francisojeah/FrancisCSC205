#include <stdio.h>
#include <stdlib.h>

int main()
{
	//This pointer will hold the base address of the block created 
	int* ptr;
	int n, i;
	
	//Get the number of elements for the array
	
	printf("Enter number of elements: ");
	scanf("%d", &n);
	
	//Dynamically allocate memory using calloc()
	ptr = (int*)calloc(n, sizeof(int));
	
	// Check if the memory has been successfully allocated by calloc or not
	if (ptr == NULL){
		printf("Memort not allocated.\n");
		exit(0);
	}
	else {
		//Memory has been successfully allocated
		printf("Memory successfully allocated using calloc. \n");
		
		//Get the elements of the array
		for (i=0; i<n; ++i){
			ptr[i] = i+1;
		}
		//Print the elements of the array
		printf("The elements of the array are: \n");
		for (i=0; i<n; ++i){
			printf("%d, ", ptr[i]);
		}
		int n1;
		//Get the new size of the array
		printf("\n\nEnter the new size of the array: ");
		scanf("%d", &n1);
	
		//Dynamically re-allocate memory using realloc()
		ptr = realloc(ptr, n1 * sizeof(int));
		
		//Memory has been successfully allocated
		printf("Memory successfully allocated using realloc. \n");
		
		//Get the new elements of the array
		for (i=n; i<n1; ++i){
			ptr[i] = i+1;
		}
		//Print the elements of the array
		printf("The elements of the array are: \n");
		for (i=0; i<n1; ++i){
			printf("%d, ", ptr[i]);
		}
		free(ptr);
	}
	return 0;
}

