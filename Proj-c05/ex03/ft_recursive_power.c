#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    int i;
    int num;

    i = 0;
    num = 1;
    if (nb == 0 && power == nb)
        return (0);
    else if ((power == 0) || (( nb < 0) && (power == 0)))
        return (1);
    else if(power <= 1)
        return nb;
    return (nb * ft_recursive_power(nb, power - 1));

}

int main()
{
	printf("%d \n", ft_recursive_power(-3,5));
}
