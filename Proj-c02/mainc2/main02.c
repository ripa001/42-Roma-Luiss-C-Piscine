#include <stdio.h>
int ft_str_is_alpha(char *str);

int main()
{
	char s1[]  = "cia23423&o";
	char s2[] = "fortefciao";
	printf("%s - %s \n", s1, s2);
	printf("%s - %d \n", s1, ft_str_is_alpha(s1));
	printf("%s - %d \n", s2, ft_str_is_alpha(s2));
}
