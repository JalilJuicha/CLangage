#include <stdio.h>
#include <math.h>

int     main()
{
	float x1,x2,y1,y2;
	float MN;

	printf("Saisir x1 : \n");
	scanf("%f", &x1);

	printf("Saisir x2 : \n");
	scanf("%f", &x2);
	
	printf("Saisir y1 : \n");
	scanf("%f", &y1);

	printf("Saisir y2 : \n");
	scanf("%f", &y2);

	MN = sqrt(pow((x2-x1),2)+ pow((y2 -y1),2));
	printf("la distance entre les deux points est : %f \n", MN );
	return 0;
}

