#include <unistd.h>
#include <stdio.h>

int main()
{
		    
	 float temp4;

	 printf("Temperature en F : \n");
	 scanf("%f", &temp4);

	 temp4 = (temp4 - 32) * 5/9;
	 printf("Temperature en C : %f\n", temp4);
						 	 
	 return 0;
}


