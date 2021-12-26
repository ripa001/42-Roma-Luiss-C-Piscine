#include <stdio.h>
char	*ft_strcapitalize(char *str);

int main()
{
	// char s1[]  = "PROPVvdsvS=Piu-prova";
	char s2[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s \n",s2);
	// printf("%s - %s \n", s1, ft_strcapitalize(s1));
	printf("%s\n", ft_strcapitalize(s2));
	return (0);
}
