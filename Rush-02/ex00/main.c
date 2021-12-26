/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:00:32 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/12 22:47:05 by ccantale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "ft_num_str.h"

struct s_num_str	*ft_strs_to_tab(char *av, int nl)
{
	t_num_str			*num_str;
	int					i;
	int					c;
	int					j;

	num_str = (t_num_str *)malloc(sizeof(t_num_str) * nl + 1);
	if (num_str == 0)
		return (0);
	j = 0;
	c = 0;
	i = 0;
	while (av[i] != 0)
	{
		j = 0;
		while (av[i + j] != '\n' && av[i + j] != 0)
			j++;
		if (row_is_valid(&av[i], j) == 0)
			return (0);
		ft_split_row(&av[i], j, num_str, c);
		num_str[c].size = nl;
		c++;
		i += j + 1;
	}
	return (num_str);
}

int	get_buffer(int fd, int *nl)
{
	char	buff[2];
	int		sz;
	int		num;
	int		i;

	sz = 2;
	num = 0;
	while (sz == 2)
	{
		sz = read(fd, buff, 2);
		if (sz == -1)
		{
			write(1, "Error dict\n", 11);
			return (0);
		}
		num += sz;
		i = 0;
		while (buff[i])
		{
			if (buff[i] == '\n')
				*nl = *nl +1;
			i++;
		}
	}
	return (num);
}

char	*get_dict(int argc, int num, char *argv[])
{
	int		fd;
	int		sz;
	char	*file;

	if (argc == 2)
		fd = open("numbers.dict", O_RDONLY);
	else
		fd = open(argv[1], O_RDONLY);
	file = (char *)malloc(sizeof(char) * num + 1);
	if (!(file))
	{
		write(1, "Error dict\n", 11);
		return (0);
	}
	sz = read(fd, file, num);
	if (sz == -1)
	{
		write(1, "Error dict\n", 11);
		return (0);
	}
	close(sz);
	return (file);
}

int	core(int nl, char *initial_stringus, char *file)
{
	struct s_num_str	*num_str;

	num_str = ft_strs_to_tab(file, nl);
	if (num_str == 0)
	{
		write(1, "Error dict\n", 11);
		return (0);
	}
	if (ft_cunnistringus(initial_stringus, num_str, nl) == 0)
		return (0);
	initial_stringus = check_initial(initial_stringus);
	if (!(ft_strcmp(initial_stringus, "0")))
		check_in_struct(nl, num_str, initial_stringus, 1);
	initial_stringus = divide_et_impera(initial_stringus);
	print_num(initial_stringus, num_str);
	return (1);
}

int	main(int argc, char *argv[])
{
	int					fd;
	int					nl;
	int					num;
	char				*initial_stringus;
	char				*file;

	initial_stringus = check_arg(argc, &fd, argv);
	if (!(fd))
		return (0);
	nl = 0;
	num = get_buffer(fd, &nl);
	close(fd);
	file = get_dict(argc, num, argv);
	if (!(file))
		return (0);
	core(nl, initial_stringus, file);
}
