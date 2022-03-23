#include <stdio.h>

char *ft_strlowcase(char *str);

int main()
{
	char string[] = "ADC jk1c8[]~";
	char *punt;
	char *str;

	punt = &string[0];
	printf("The original string is %s.",punt); 
	printf("\n");
	str = ft_strlowcase(punt);
	printf("now the string is %s.", punt);
}
