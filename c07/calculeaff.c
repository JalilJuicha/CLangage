#include <unistd.h>
#include <stdio.h>

int	main()

{
	int a;
	int b;	
	
	printf ("Saisir a : \n ");
	scanf ("%d", &a);

	printf("Saisir b : \n ");
	scanf ("%d", &b);
	
	printf("a+b = %d \n ", a+b);
	printf("a-b = %d \n ", a-b);
	printf("a*b = %d \n", a*b);
	printf("a/b = %d \n", a/b);
	printf("a%%b = %d \n", a%b);	
	return 0;


}

