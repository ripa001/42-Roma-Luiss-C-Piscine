#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int num;

    i = 0;
    num = 1;
    if (nb == 0 && power == nb)
        return (0);
    else if ((power == 0) || (( nb < 0) && (power == 0)))
        return (1);
    while(i < power)
    {
        num *= nb;
        i++;
    }
    return (num);

}

int main()
{
	printf("%d \n", ft_iterative_power(-3,3));
}
