#include <unistd.h>
#include <stdio.h>

int main()
{

	char nom[20];
	char prenom[20];
	char age[20];
	char sexe[20];
	char tele[20];

	printf("Votre Nom\n");
	scanf("%s", nom);

	printf("Votre Prenom\n");
	scanf("%s", prenom);

	printf("Votre Age\n");
	scanf("%s", age);

	printf("Votre Sexe\n");
	scanf("%s", sexe);

	printf("Votre Tele\n");
	scanf("%s", tele);


	printf("Nom Complet : %s %s %s %s %s\n", nom, prenom, age, sexe, tele);

	return 0;
}

