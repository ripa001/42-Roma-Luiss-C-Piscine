#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb > 0 && nb < 16)
	{
		while(nb != 1)
		{
			num = num * nb;
			nb--;
		}
		return (num);
	}
	return(0);
}
int main()
{
	printf("%d \n",ft_iterative_factorial(1));
}
