/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 07:47:31 by aperrone          #+#    #+#             */
/*   Updated: 2021/12/16 12:33:21 by aperrone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	get_nb(char c, char *base);
int	get_number_length(int number, char *base);
int	display(int nb, char *str, char *result, int index);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		number;
	int		last_index;
	int		gnl;

	if (!nbr || !base_from || !base_to)
		return (0);
	number = ft_atoi_base(nbr, base_from);
	gnl = get_number_length(number, base_to);
	result = malloc(sizeof(char) * gnl);
	last_index = display(number, base_to, result, (gnl - 1));
	result[last_index + 1] = '\0';
	return (result);
}

int	ft_atoi_base(char *str, char *base)
{
	int	s;
	int	i;
	int	res;
	int	negative;
	int	base_length;

	base_length = 0;
	while (base[base_length])
		++base_length;
	s = 0;
	while (str[s] != '\0' && (str[s] == ' ' || (str[s] >= 9 && str[s] <= 13)))
		s++;
	i = s - 1;
	res = 0;
	negative = 1;
	while (str[++i] && (((str[i] == '-' || str[i] == '+') && i == s)
			|| (str[i] != '-' && str[i] != '+')))
	{
		if (str[i] == '-')
			negative = -1;
		else if (str[i] != '+')
			res = (res * base_length) + (get_nb(str[i], base));
	}
	return (res * negative);
}

int	get_nb(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	get_number_length(int number, char *base)
{
	int	length;
	int	base_length;

	base_length = 0;
	while (base[base_length])
		base_length++;
	length = 0;
	while (number >= base_length)
	{
		++length;
		number /= base_length;
	}
	return (++length);
}

int	display(int nb, char *str, char *result, int index)
{
	unsigned int	nbr;
	unsigned int	str_length;

	str_length = 0;
	while (str[str_length])
		str_length++;
	if (nb < 0)
	{
		result[index++] = '-';
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= str_length)
		display((int)(nbr / str_length), str, result, index - 1);
	result[index] = str[nbr % str_length];
	return (index);
}
