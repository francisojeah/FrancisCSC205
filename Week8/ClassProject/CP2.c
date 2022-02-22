#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <pthread.h>

void *childThread(void* args)
{	
	char (*arg) =  args;
	printf("%s", arg);
	
	return NULL;

}
int main()
{
	char* ent;
	int gen;
	char *ree;
	printf("Enter name of artist: ");
	scanf("%s", ent);
	printf("For Pop press 1\nFor Rthythm & Blues press 2\nFor folk press 3\n For Classic press 4\n");
	printf("Enter music genre: ");
	scanf("%d", &gen);
	switch (gen){
		case 1:
			ree = "Pop is a genre of popular music that originated in its modern form during the mid-1950s in the United States and the United Kingdom. The terms popular music and pop music are often used interchangeably, although the former describes all music that is popular and includes many disparate styles.";
			break;
		case 2:
			ree = "Rhythm and blues, ofthen abbreviated as R&B or RnB, is a genre of popular music that originated from African-American communities in the 1940s";
			break;
		case 3:
			ree  = "Folf music is a music genre that includes traditional folk music and the contemporary genre that evolved from the former during the 20th century folk revival. SOme types of folk music may be called world music.";
			break;
		case 4:
			ree = "Classical music generally refers to the formal musical tradition of the Western world, considered to be distinct from Western folk music or popular music traditions.";
			break;
			}
	
	
	if (fork()==0){
		pthread_t thread;
		pthread_create(&thread, NULL, &childThread, ree);
		pthread_join(thread, NULL);
	}
	return 0;
}
