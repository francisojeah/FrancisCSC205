//Program to calculate the sum of numbers(10 numbers max)
//If the user enters a negative number, it is not added to the results

#include <stdio.h>
int main(){
	int i;
	double number, sum = 0.0;
	
	for(i=1; i<=10; ++i){
		printf("Enter n%d: ", i);
		scanf("%lf", &number);
		
		if (number< 0.0){
			continue;
		}
		
		sum += number; //sum = sum + number;
	}
	printf("sum = %.2lf", sum);
	
	return 0;
	}
