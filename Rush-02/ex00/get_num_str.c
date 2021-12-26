/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_num_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:02:29 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/12 21:02:31 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdio.h>
#include "ft_num_str.h"

void	print_digits(char *s1, struct s_num_str *my_struct, int last)
{
	int		i;
	char	*temp;

	i = 0;
	while (i < 3)
	{
		if (s1[i] == '0')
		{
			i++;
			continue ;
		}
		else if (i == 0)
			case1(s1, my_struct, last);
		else if (i == 1)
		{
			if (!(case2(&s1[i], my_struct, last)))
				break ;
		}
		else
		{
			temp = ft_strncpy(&s1[i], 1);
			check_in_struct(my_struct[0].size, my_struct, temp, last);
		}
		i++;
	}
}

int	print_each_three(int c_spaces, struct s_num_str *my_struct,
			int first_s, char *s1)
{
	int	flag;

	if (c_spaces == 0)
	{
		print3(my_struct, &s1[first_s], 1);
		return (0);
	}
	flag = print3(my_struct, &s1[first_s], 0);
	if (!(flag) && first_s != 0)
	{
		first_s += 4;
		c_spaces--;
	}
	return (0);
}

void	if_function(struct s_num_str *my_struct, int i, char *s1, int first_s)
{
	if ((my_struct[i].spaces == 1) && (!(ft_strcmp("000",
					ft_strncpy(&s1[first_s + 4], 3)))))
	{
		write(1, my_struct[i].string,
			ft_strlen(my_struct[i].string));
	}
	else if (!(ft_strcmp("000",
				ft_strncpy(&s1[first_s + 4], 3))) && (my_struct[i].spaces == 0))
	{
		write(1, my_struct[i].string,
			ft_strlen(my_struct[i].string));
	}
	else
	{
		write(1, my_struct[i].string,
			ft_strlen(my_struct[i].string));
		write(1, " ", 1);
	}
}

void	quantum(int c_spaces, int first_s, char *s1,
			struct s_num_str *my_struct)
{
	int	i;

	i = 0;
	while (i <= my_struct[0].size)
	{
		if (my_struct[i].spaces == c_spaces && c_spaces != 0)
		{
			if_function(my_struct, i, s1, first_s);
			break ;
		}
		i++;
	}
}

void	print_num(char *s1, struct s_num_str *my_struct)
{
	int	i;
	int	c_spaces;
	int	first_s;

	c_spaces = 0;
	count_spaces(&c_spaces, s1);
	first_s = 0;
	i = 0;
	while (c_spaces != -1)
	{
		if (print_each_three(c_spaces, my_struct, first_s, s1))
		{
			first_s += 4;
			c_spaces--;
			continue ;
		}
		if(ft_strcmp(ft_strncpy(&s1[first_s], 3), "000") != 0)
			quantum(c_spaces, first_s, s1, my_struct);
		first_s += 4;
		c_spaces--;
	}
}
