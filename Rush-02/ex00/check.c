/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:30:39 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/12 23:30:41 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "ft_num_str.h"

int	ft_cunnistringus(char *initial_stringus,
		struct s_num_str *ft_num_str, int len)
{
	int	index;

	index = 0;
	if (ft_strlen(initial_stringus) > ft_strlen(ft_num_str[len].num))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (initial_stringus[0] == '-')
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (initial_stringus[index] != '\0')
	{
		if (initial_stringus[index] < '0' || initial_stringus[index] > '9')
		{
			write(1, "Error\n", 6);
			return (0);
		}
		index++;
	}
	return (1);
}

char	*check_initial(char *initial_stringus)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (initial_stringus[i] == '0' && ft_strlen(initial_stringus) != 1)
		i++;
	return (ft_strncpy(&initial_stringus[i], ft_strlen(initial_stringus)));
}

int	row_is_valid2(char *av, int i, int j)
{
	if (!(ft_isnum(av[i])))
		return (0);
	while (av[i] != ':' && !(ft_isspace(av[i])))
	{
		if (ft_isnum(av[i]))
			i++;
		else if (av[j] == av[i])
			return (0);
		else
			return (0);
	}
	return (1);
}

int	row_is_valid(char *av, int j)
{
	int	i;

	i = 0;
	if (!(row_is_valid2(av, i, j)))
		return (0);
	while ((av[i] == ':') || (ft_isspace(av[i])))
	{
		if (av[j] == av[i])
			return (0);
		else
			i++;
	}
	while (av[j] != av[i])
	{
		if (ft_isalpha(av[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

char	*check_arg(int argc, int *fd, char *argv[])
{
	char	*initial_stringus;

	if ((argc != 2) && (argc != 3))
		return (0);
	else if (argc == 2)
	{
		*fd = open("numbers.dict", O_RDONLY);
		initial_stringus = ft_strncpy(argv[1], ft_strlen(argv[1]));
	}
	else
	{
		*fd = open(argv[1], O_RDONLY);
		initial_stringus = ft_strncpy(argv[2], ft_strlen(argv[2]));
	}
	if (*fd < 0)
		return (0);
	return (initial_stringus);
}
