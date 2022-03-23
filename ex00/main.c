#include <stdio.h>

char	*ft_strcpy(char *dest,char *src);

int main()
{
	char string1[] = "Hola idiota";
	char string2[6] = "Adios";
	char *punt;

	printf("La cadena string1 es: %s y la cadena string2 es %s", string1, string2);
	printf("\n");
	punt = ft_strcpy(string2, string1);
	printf("La cadena string2 es: %s ", string2);
}
