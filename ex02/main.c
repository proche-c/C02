#include <stdio.h>

int ft_str_is_alpha(char *str);

int main()
{
	int result;
	char string1[] = "holaBuenosDias";
	char string2[] = "mkdcnj156h";
	char *punt;

	punt = &string1[0];
	result = ft_str_is_alpha(punt);
	printf("The result of %s is %d", string1, result);
	printf("\n");
	punt = &string2[0];
	result = ft_str_is_alpha(punt);
	printf("The result of %s is %d", string2, result);
}

