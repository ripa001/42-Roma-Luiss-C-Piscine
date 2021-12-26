/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newfilec.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:27:54 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/12 23:33:48 by sopopa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "ft_num_str.h"

char	*add0(char *s1)
{
	char	*news;
	int		i;

	i = 0;
	news = (char *)malloc(sizeof(char) * ft_strlen(s1) + 2);
	while (s1[i])
	{
		news[i] = s1[i];
		i++;
	}
	news[i] = '0';
	news[i + 1] = 0;
	return (news);
}

void	check_in_struct(int limit,
			struct s_num_str *my_struct, char *s1, int last)
{
	int	i;

	i = 0;
	while (i < limit)
	{
		if (ft_strcmp(my_struct[i].num, s1) == 0)
		{
			write(1, my_struct[i].string, ft_strlen(my_struct[i].string));
			if (!(last))
			{
				write(1, " ", 1);
			}
			break ;
		}
		i++;
	}
}

void	case1(char *s1, struct s_num_str *my_struct, int last)
{
	char	*temp;

	temp = ft_strncpy(s1, 1);
	check_in_struct(my_struct[0].size, my_struct, temp, 0);
	temp = "100";
	if (!(ft_strcmp("00", ft_strncpy(&s1[1], 2))))
		check_in_struct(my_struct[0].size, my_struct, temp, last);
	else
		check_in_struct(my_struct[0].size, my_struct, temp, 0);
}

int	case2(char *s1, struct s_num_str *my_struct, int last)
{
	char	*temp;
	int		i;

	i = 0;
	if (s1[i] == '1')
	{
		temp = ft_strncpy(&s1[i], 2);
		check_in_struct(my_struct[0].size, my_struct, temp, last);
		return (0);
	}
	temp = ft_strncpy(&s1[i], 1);
	temp = add0(temp);
	if (!(ft_strcmp("0", ft_strncpy(&s1[2], 1))))
		check_in_struct(my_struct[0].size, my_struct, temp, last);
	else
		check_in_struct(my_struct[0].size, my_struct, temp, 0);
	return (1);
}

void	ft_split_row(char *av, int j, struct s_num_str *par, int c)
{
	int	i;

	i = 0;
	while (ft_isnum(av[i]))
		i++;
	par[c].num = ft_strncpy(av, i);
	while (ft_isspace(av[i]) || av[i] == ':')
		i++;
	par[c].string = ft_strncpy(&av[i], j - i);
	if (ft_strcmp(par[c].num, "100") != 0)
		par[c].spaces = ft_strlen(par[c].num) / 3;
	else
		par[c].spaces = 0;
}
