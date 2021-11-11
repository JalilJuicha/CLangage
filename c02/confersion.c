#include <unistd.h>
#include <stdio.h>

int main()
{
	 float temp;

	 printf("Temperature en C : \n");
		
	 scanf("%f", &temp);
		
	 temp = (temp * 1.8) + 32;
	 printf("Temperature en F : %f\n", temp);
	 return 0;
}

