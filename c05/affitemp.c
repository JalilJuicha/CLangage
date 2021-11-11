#include <unistd.h>
#include <stdio.h>

int main()
{
	    
	 float temp4;

	 printf("Temperature en F : \n");
	 scanf("%f", &temp4);

	 temp4 = (temp4 - 32) * 5/9;
	 printf("Temperature en C : %f\n", temp4);
	 
	 if (temp4 < 0)
	 printf("Temperature très froid\n");
	
	 else if (temp4 < 20)
	 printf("Temperature froid\n");
				       
	 else if (temp4 < 30)
	 printf("Temperature chaud\n");

	 else printf("Temperature très chaud\n");

	 return 0;
}

