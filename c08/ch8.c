#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a,b,c,d,somme,moyenne;
	printf("entrez a \n");
	scanf("%f",&a);
	printf("entrez b \n");
	scanf("%f",&b);
	printf("entrez c\n");
	scanf("%f",&c);
	printf("entrez d\n");
	scanf("%f",&d);

	somme=a+b+c+d;
	moyenne=somme/4;
	printf("la somme est: %.2f\n ",somme);
	printf("la moyenne est: %.3f",moyenne);

	return 0;
}

