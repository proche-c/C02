#include <stdio.h>

int ft_str_is_numeric(char *str);

int main()
{
	char string1[] = "125678943";
	char string2[] = "nkalcns1234";
	char *punt;
	int result;
	punt = &string1[0];
	result = ft_str_is_numeric(punt);
	printf("The result of %s is %d.",punt, result);
	printf("\n");
	punt = &string2[0];
	result = ft_str_is_numeric(punt);
	printf("The result of %s is %d.", punt, result);
}
