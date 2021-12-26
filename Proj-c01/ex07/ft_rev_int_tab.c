/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 20:16:35 by dripanuc          #+#    #+#             */
/*   Updated: 2021/11/29 11:52:08 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	new_size;

	i = 0;
	new_size = size;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[new_size - 1];
		tab[new_size - 1] = temp;
		i++;
		new_size--;
	}
}
