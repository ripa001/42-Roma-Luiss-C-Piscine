/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:54:12 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/15 12:54:14 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;
	int	size;

	if (max < min)
		return (0);
	size = max - min;
	if (size < 0)
		size *= -1;
	dest = malloc(sizeof(int) * (size));
	if (!dest)
		return (-1);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		min++;
		i++;
	}
	*range = dest;
	return (i);
}
