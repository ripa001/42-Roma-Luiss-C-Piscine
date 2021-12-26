#include <stdio.h>
char	*ft_strlowcase(char *str);

int main()
{
	char s1[]  = "PROPVvdsvS";
	char s2[] = "fortefci-Al ";

	printf("%s - %s \n", s1, s2);
	printf("%s \n", ft_strlowcase(s1));
	printf("%s \n", ft_strlowcase(s2));
	return (0);
}
