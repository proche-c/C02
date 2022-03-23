#include <stdio.h>

int ft_str_is_lowercase(char *str);

int main()
{
	char string1[] = "abgfdcj";
	char string2[] = "12GGYTocmdpo";
	char *punt;
	int result;
	punt = &string1[0];
	result = ft_str_is_lowercase(punt);
	printf("The result of %s is %d.",punt, result);
	printf("\n");
	punt = &string2[0];
	result = ft_str_is_lowercase(punt);
	printf("The result of %s is %d.", punt, result);
}
