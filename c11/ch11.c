#include<stdio.h>

int     main()

{
	int longeur; 
	int largeur;
	printf("SVP entrer la longeur :\n");
	scanf("%d" , &longeur); //address-of operator
	printf("SVP entrer la largeur :\n");
	scanf("%d" , &largeur); //address-of operator


	int  area = 2 * (longeur * largeur);
	printf("la circonférence est: %d \n ", area);

	return 0;

}
