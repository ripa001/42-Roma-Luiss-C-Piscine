/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 19:05:59 by dripanuc          #+#    #+#             */
/*   Updated: 2021/11/27 19:17:00 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row(int x, char first, char c, char last)
{
	int	i;

	ft_putchar(first);
	i = 1;
	while (i < x - 1)
	{
		ft_putchar(c);
		i++;
	}
	if (x != 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		i = 0;
		while (i < y)
		{
			if (i == 0)
			{
				print_row(x, 'A', 'B', 'C');
			}
			else if (i == y - 1)
			{
				print_row(x, 'A', 'B', 'C');
			}
			else
			{
				print_row(x, 'B', ' ', 'B');
			}
			i++;
		}
	}
}
