#include <stdio.h>

int ft_str_is_uppercase(char *str);

int main()
{
	char string1[] = "ADCVFTHNJK";
	char string2[] = "";
	char *punt;
	int result;
	punt = &string1[0];
	result = ft_str_is_uppercase(punt);
	printf("The result of %s is %d.",punt, result);
	printf("\n");
	punt = &string2[0];
	result = ft_str_is_uppercase(punt);
	printf("The result of %s is %d.", punt, result);
}
