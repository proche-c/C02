#include <stdio.h>

char *ft_strcapitalize(char *str);

int main()
{
	char string[] = "467Gnkjfe ???djioon#V236   j";
	char *str;

	str = &string[0];
	printf("The original string is %s.", str);
	printf("\n");
	str = ft_strcapitalize(str);
	printf("Now the string is %s.", str);
}
