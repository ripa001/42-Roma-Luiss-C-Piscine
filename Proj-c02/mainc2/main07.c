#include <stdio.h>
char	*ft_strupcase(char *str);

int main()
{
	char s1[]  = "PROPVvdsvS";
	char s2[] = "fortefci-Al ";

	printf("%s - %s \n", s1, s2);
	printf("%s \n", ft_strupcase(s1));
	printf("%s \n", ft_strupcase(s2));
	return (0);
}
