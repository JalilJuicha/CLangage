#include <stdio.h>
#include <unistd.h>
#include <math.h>

int	main()
{
	int a;

	printf("Entrer un nombre entier \n: ");
	scanf("%d",&a);
	printf("le nombre en octale : %o\n ",a);
	printf("le nombre en hexadécimale : %x ",a);

	return 0;

}

