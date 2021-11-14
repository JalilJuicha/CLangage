#include <stdio.h>
#include <string.h>

int	main()
{
	char str[3],stt;
	

	printf("Entrer un nombre \n"); 
	scanf("%s",str);
	
	stt=str[0];
	str[0]=str[2];
	str[2]=stt;
	
	printf("l'ordre inverse du nombre : %s ",str);

	return 0;
}

