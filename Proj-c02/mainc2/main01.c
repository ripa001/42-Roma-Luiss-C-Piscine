#include <string.h>
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main()
{
	char s1[50]  = "ciao";
	char s2[50] = "forte ciao";
	printf("%s - %s \n", s1, s2);
	ft_strncpy(s2, s1, 3);
	printf("%s - %s \n", s1, s2);
	char s3[]  = "ciao";
	char s4[] = "forte ciao";
	strncpy(s4, s3, 3);
	printf("%s - %s \n", s3, s4);	 
}
