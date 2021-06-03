#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nombreDeVies = 5; // Au déparrt, le joueur a 5 vies

	printf("Vous avez %d vies \n",nombreDeVies);
	printf("**** BAM ****\n");
	nombreDeVies = 4; //Il vient de perdre une vie !
	printf("Ah désolé, il ne reste plus que %d vies maintenant ! \n\n", nombreDeVies);

	return 0;
}
