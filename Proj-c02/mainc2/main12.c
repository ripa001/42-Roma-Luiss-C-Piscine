#include <stdio.h>
void *ft_print_memory(void *addr, unsigned int size);
int main()
{
	char s1[]  = "PROPVvdsvS";
	char s2[] = "Coucou\ntu vas bien ?";
	

	ft_print_memory((void*)s1, 11);
	return (0);
}
