
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if(nb > 0 && nb < 13)
    {
        if(nb == 1)
        {
            return(nb);
        }
        return(nb * ft_recursive_factorial(nb - 1));
    }
    return (0);
}

int main()
{
	printf("%d \n",ft_recursive_factorial(13));
}