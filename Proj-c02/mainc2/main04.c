#include <stdio.h>
int ft_str_is_lowercase(char *str);

int main()
{
	char s1[]  = "PROPVA";
	char s2[] = "fortefcia";

	printf("%s - %s \n", s1, s2);
	printf("%s - %d \n", s1, ft_str_is_lowercase(s1));
	printf("%s - %d \n", s2, ft_str_is_lowercase(s2));
	return (0);
}
