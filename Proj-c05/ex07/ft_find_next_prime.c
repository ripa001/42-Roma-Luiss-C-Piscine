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

int ft_find_next_prime(int nb)
{
    while(!ft_is_prime(nb))
        nb++;
    return(nb);
}

int main()
{
	printf("%d \n", ft_find_next_prime(90));
}
