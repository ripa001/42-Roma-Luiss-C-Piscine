/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verynewfile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:28:06 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/12 23:30:07 by ccantale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	print3(struct s_num_str *my_struct, char *s1, int last)
{	
	int		i;

	i = 0;
	while (s1[i] == '0')
		i++;
	if (i == 3)
		return (0);
	print_digits(s1, my_struct, last);
	return (1);
}

void	count_spaces(int *c_spaces, char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != 0)
	{
		if (s1[i] == ' ')
			*c_spaces += 1;
		i++;
	}
}
