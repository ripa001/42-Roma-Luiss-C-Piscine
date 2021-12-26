/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:00:49 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/12 23:29:06 by ccantale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *src, unsigned int n)
{
	int				continua;
	char			*dest;
	unsigned int	counter;

	dest = (char *)malloc(n * sizeof(char) + 1);
	counter = 0;
	continua = 0;
	while (counter < n)
	{
		if (*(src + counter) != '\0' && continua == 0)
		{
			*(dest + counter) = *(src + counter);
		}
		else
		{
			continua = 1;
			*(dest + counter) = '\0';
		}
		counter = counter + 1;
	}
	*(dest + counter) = '\0';
	return (dest);
}

int	ft_isnum(char c)
{
	if ((c < '0') || (c > '9'))
		return (0);
	return (1);
}

int	ft_isalpha(char c)
{
	if (((c < 'A') && (c > 'Z')) || ((c < 'a') && (c > 'z')))
		return (0);
	return (1);
}

int	ft_isspace(char c)
{
	if ((c == ' ') || ((c < 14) && (c > 8)))
		return (1);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1++ == 0)
			return (0);
		s2++;
	}
	return (*s1 - *s2);
}
