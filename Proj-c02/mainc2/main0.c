#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main()
{
	char s1[]  = "forte ciaone";
	char s2[] = "provaprova prova";
	printf("%s - %s \n", s1, s2);
	ft_strcpy(s2, s1);
	printf("%s - %s \n", s1, s2);
	char s3[]  = "forte ciaone";
	char s4[] = "provaprova prova";
	printf("%s - %s \n", s3, s4);
	strcpy(s4, s3);
	printf("%s - %s \n", s3, s4);

}
