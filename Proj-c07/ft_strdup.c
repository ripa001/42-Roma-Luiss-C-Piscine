#include <string.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    char *dest;
	
	dest = ((char* )malloc(strlen(src) + 1));
    if (dest == 0)
		return 0;
	strcpy(dest, src);
	return dest;
}
int main()
{
	char *new_str;
	char str[] = "strcpy";

	printf("%s || %p \n", str, new_str);
	new_str = ft_strdup(str);
	printf("%s || %s", str, new_str);
}
