#include <string.h>
#include <stdio.h>
unsigned	int	*ft_strlcpy(char *dest, char *src, unsigned int n);

int main()
{
	char s1[]  = "ciao";
	char s2[] = "forte ciao";
	printf("%s - %s \n", s1, s2);
	
	printf("%d \n", strlcpy(s2, s1, 6));
	char s3[]  = "ciao";
	char s4[] = "forte ciao";
	printf("%d \n", ft_strlcpy(s4, s3, 6));
	printf("%s - %s \n", s1, s2);
	printf("%s - %s \n", s3, s4);	 
}
