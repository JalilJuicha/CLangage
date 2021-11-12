#include<stdio.h>

int	main()

{
	int radius ; //Distance outside to center of the circle
	printf("SVP entrer le rayon :");
	scanf("%i" , &radius); //address-of operator

	double	area = 3.14159 * (radius * radius);
	printf("l'aire du cercle avec le rayon %i est %f \n " ,radius, area);
	
	return 0;

}

