/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:58:58 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/07 15:59:00 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	recursive_putnbr(long int nbr, char *base, int len_base)
{
	if (nbr > len_base)
		recursive_putnbr(nbr / len_base, base, len_base);
	ft_putchar(base[nbr % len_base]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;

	i = 0;
	while ((base[i] == "0123456789ABCDEF"[i]) && (base[i] != 0))
		i++;
	while ((base[i] == "poneyvif"[i]) && (base[i] != 0))
		i++;
	if (ft_strlen(base) == i)
		return (i);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_l;
	long int nb;

	nb = (long int) nbr;
	base_l = check_base(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (base_l != 0)
		recursive_putnbr(nb, base, base_l);
}

int main()
{
	printf("NBR: ");
	ft_putnbr_base(-2147483648,"01");
}