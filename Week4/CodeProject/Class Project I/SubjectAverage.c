#include <stdio.h>
int main()
{
	int lim;
	printf("Enter Score Limit: ");
	scanf("%d", &lim);
	
	int a=lim+1, b = lim+1, c = lim+1, d;
	while (a>lim||b>lim||c>lim){
		printf("Enter score for CSC 201: ");
		scanf("%d", &a);
		printf("Enter score for CSC 205: ");
		scanf("%d", &b);
		printf("Enter score for STA 205: ");
		scanf("%d", &c);
		if (a>lim||b>lim||c>lim){
			printf("\n Score is above score limit\nPlease try again\n");
		}
	}
	
	d = a+b+c;
	printf("\nTotal: %d \n", d);
	
	float e = d/3.0;
	printf("Average: %.4f \n", e);
	
	float f = (d/(lim*3.0))*100;
	printf("Percentage: %.2f%%\n", f);
	
	return 0;
}
	
	
