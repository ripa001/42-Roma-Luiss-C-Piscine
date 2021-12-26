#include <stdio.h>

int ft_is_prime(int nb)
{
    int i;

    i = 1;
    if((nb == 0)  && (nb == 1))
            return (0);
    while (i < nb)
    {
        if((nb % i == 0)  && (i != 1))
            return (0);
        i++;
    }
    return(1);
}

int main()
{
	printf("%d \n", ft_is_prime(31));
}
