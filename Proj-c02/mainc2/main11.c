#include <stdio.h>
void ft_putstr_non_printable(char *str);

int main()
{
	char s1[]  = "PROPVvdsvS";
	char s2[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(s2);
	return (0);
}
