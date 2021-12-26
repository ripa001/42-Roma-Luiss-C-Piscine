#include <stdio.h>
int ft_str_is_uppercase(char *str);

int main()
{
	char s1[]  = "PROPVA";
	char s2[] = "fortefcial ";

	printf("%s - %s \n", s1, s2);
	printf("%s - %d \n", s1, ft_str_is_uppercase(s1));
	printf("%s - %d \n", s2, ft_str_is_uppercase(s2));
	return (0);
}
