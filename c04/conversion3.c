#include <unistd.h>
#include <stdio.h>

int main()

{
	 float temp3;
	
	 printf("La Distance en Mile : \n");
	 scanf("%f", &temp3);

	 temp3 *= 1609.334;

	 printf("La Distance en Metre : %f \n", temp3);

	 return 0;
}

