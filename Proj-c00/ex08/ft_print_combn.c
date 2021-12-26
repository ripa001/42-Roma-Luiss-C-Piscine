/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 19:59:09 by dripanuc          #+#    #+#             */
/*   Updated: 2021/11/27 13:44:00 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	put_str(char *s, int n)
{
	int	ind;

	ind = 0;
	while (ind < n)
	{
		put_char(s[ind]);
		ind++;
	}
}

void	check_str(char *s, int n)
{
	int	i;

	i = 1;
	s[n - i]++;
	while (i < n)
	{
		if (s[i] > '9' || s[i] <= s[i - 1])
		{
			if (s[i] > '9')
			{
				s[i] = '0';
				s[i - 1]++;
			}
			else
				s[i] = s[i - 1] + 1;
			i = 1;
			continue ;
		}
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[10];
	int		i;

	i = 0;
	comb[0] = '0';
	comb[n] = '\0';
	while (++i < n)
		comb[i] = comb[i - 1] + 1;
	while (comb[0] + n - 1 < '9')
	{
		put_str(comb, n);
		check_str(comb, n);
		put_char(',');
		put_char(' ');
	}
	put_str(comb, n);
}
