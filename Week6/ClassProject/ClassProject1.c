#include <stdio.h>

int main(){
	char food;
	int quan, total;
	printf("\t\tMenu\t\t\tPrice\n");
	printf("P = Poundo Yam/Edinkaiko Soup\t\t-N3,200\n");
	printf("F = Fried Rice & Chicken\t\t-N3,000\n");
	printf("A = Amala & Ewedu Soup\t\t-N2,500\n");
	printf("E = Eba & Egusi Soup\t\t-N2,000\n");
	printf("W = White Rice & Stew\t\t-N2,500\n");
	
	more:
		printf("Enter food initials from the menu: ");
		scanf("%c", &food);
		printf("\nEnter Quantity of food: ");
	scanf("%d", &quan);
	
	switch(food)
	{
		case 'P':
			total += 3200*quan;
			break;
		case 'p':
			total += 3200*quan;
			break;
		case 'F':
			total += 3000*quan;
			break;
		case 'f':
			total += 3000*quan;
			break;
		case 'A':
			total += 2500*quan;
			break;
		case 'a':
			total += 2500*quan;
			break;
		case 'E':
			total += 2000*quan;
			break;
		case 'e':
			total += 2000*quan;
			break;
		case 'W':
			total += 2500*quan;
			break;
		case 'w':
			total += 2500*quan;
			break;
		Default:
			printf("Invalid Input");
			break;
		}
	int a =1;
	do{
	char choice;
	printf("Do you want to take another order?(y/n)");
	scanf("%c", &choice);
	
	if ((choice == 'y')||(choice == 'Y'))
		goto more;
	else if ((choice == 'n')||(choice == 'N')){
		printf("Total charges: %d", total);
		a = -1;
		}
	else{
		a = 1;
		}
		}while(a>0);
}
