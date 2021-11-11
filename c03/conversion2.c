#include <unistd.h>
#include <stdio.h>

int main()

{	    
	 float temp2;
	 printf("La Distance en Metre : \n");
	 scanf("%f", &temp2);

	 temp2 /= 1609.334;

	 printf("La Distance en Mile : %f \n", temp2);

	 return 0;
}

