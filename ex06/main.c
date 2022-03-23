#include <stdio.h>

int ft_str_is_printable(char *str);

int main()
{
	char string1[] = "ADC jk1c8[]~";
	char string2[3];
	char *punt;
	int result;
	char c;
	
	c = 24;
	string2[0] = 15;
	string2[1] = 9;
	string2[2] = 'c';
	punt = &string1[0];
	result = ft_str_is_printable(punt);
	printf("The result of %s is %d.",punt, result);
	printf("\n");
	punt = &string2[0];
	result = ft_str_is_printable(punt);
	printf("The result of %s is %d.", punt, result);
}
