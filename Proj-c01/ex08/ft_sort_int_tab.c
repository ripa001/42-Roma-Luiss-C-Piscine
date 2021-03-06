/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 10:39:19 by dripanuc          #+#    #+#             */
/*   Updated: 2021/11/29 11:40:39 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{	
			if (*(tab + j) < *(tab + i))
			{
				k = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = k;
			}
			j++;
		}
		i++;
	}
}
