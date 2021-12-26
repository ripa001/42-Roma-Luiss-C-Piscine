#include <stdio.h>
int ft_str_is_numeric(char *str);

int main()
{
	char s1[]  = "12343242566437";
	char s2[] = "fortefc2iao";
	printf("%s - %s \n", s1, s2);
	printf("%s - %d \n", s1, ft_str_is_numeric(s1));
	printf("%s - %d \n", s2, ft_str_is_numeric(s2));
}
