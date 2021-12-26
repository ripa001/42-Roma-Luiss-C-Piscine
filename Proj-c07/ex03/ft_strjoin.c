/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:00:00 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/15 12:00:32 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

void	assegn(int *i, int *c)
{
	*i = -1;
	*c = 0;
}

void	change_newstr(int size, char **strs, char *sep, char *newstr)
{
	int		i;
	int		c;
	int		j;

	assegn(&i, &c);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			newstr[c] = strs[i][j];
			c++;
			j++;
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				newstr[c] = sep[j];
				c++;
				j++;
			}
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*newstr;
	int		c;

	i = 0;
	c = 0;
	while (i < size)
	{
		c += ft_strlen(strs[i]);
		i++;
	}
	newstr = (char *)malloc(sizeof(char) * (c + (ft_strlen(sep) * size)));
	if (!newstr)
		return (0);
	change_newstr(size, strs, sep, newstr);
	return (newstr);
}
