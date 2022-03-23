#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char origen[] = "Hola que tal";
	char destino[] = "iBuenos dias compis";
	char *dest;
	char *src;
	char *punt;

	dest = &destino[0];
	src = &origen[0];
	printf("la cadena origen es %s y la cadena destino es %s.", src, dest);
	printf("\n");
	punt = ft_strncpy(dest,src, 20);
	printf("La cadena de origen es %s y la de destino %s.", src, dest);
}	
