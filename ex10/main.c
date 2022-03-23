#include <stdio.h>

int ft_strlcpy(char *dest, char *src, unsigned int size);

int main()
{
	unsigned int size;
	unsigned int size_original;
	char string1[] = "Buenas tardes";
	char string2[] = "hola buenas tardes";
	char *punt1;
	char *punt2;

	punt1 = &string1[0];
	punt2 = &string2[0];
	printf("The string1 is: %s", punt1);
	printf("\n");
	size = 7;
	size_original = ft_strlcpy(punt2, punt1, size);
	printf("The string2 is %s", punt2);
	printf("\n");
	printf("And the size of the original string is: %d.",size_original);
}

