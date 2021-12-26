#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 1;
    while (i < nb)
    {
        if((nb / i == 0) && (nb % i != 0))
            return (0);
        if((nb / i == i) && (nb % i == 0))
            return (i);
        i++;
    }
    return(0);
}


int main()
{
    printf("COglione1 \n");

	printf("%d \n", ft_sqrt(0));
    printf("COglione2 \n");

}
