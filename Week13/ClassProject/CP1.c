#include <stdio.h>

int main()
{
	char *name[] = {"Aigbogun Alamba Daudu", "Murtala Afeez Bendu", "Okorocha Calistus Ogbona", "Adewale Jimoh Akanbi", "Osazuwa Faith Etieye"};
	char *ministry[] = {"Internal Affairs", "Justice", "Defense", "Power & Steel", "Petroleum"};
	char *zone[] = {"South West", "North East", "South South", "South West", "South East"};
	
	int i;
	for(i=0; i<5;i++)
	{
		printf("%d %s\t%s\t%s\n", i+1, name[i], ministry[i], zone[i]);
	}
	return 0;
}
