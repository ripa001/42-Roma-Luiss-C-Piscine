#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);

int str_l(char *str)
{
	 int i;

	 i = 0;
	 while (str[i] != 0)
		i++;
	 return (i);
}

void	put_char(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		put_char('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		put_char(nb + '0');
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while(par[i].str != 0)
	{
		write(1, par[i].str, str_l(par[i].str));
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		write(1, par[i].copy, str_l(par[i].str));
		write(1, "\n", 1);
		i++;
	}
	
}

int main()
{
	char *arr[20] = {"prova1","prova2","prova3","prova4","prova5","prova6"};
	struct s_stock_str *my_struct;

	my_struct = ft_strs_to_tab(6, arr);
	ft_show_tab(my_struct);
}