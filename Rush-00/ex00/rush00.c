/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 09:37:28 by dripanuc          #+#    #+#             */
/*   Updated: 2021/11/28 21:33:49 by dripanuc         ###   ########.fr       */
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

void	rc_rush(int x, int y, char step)
{	
	int	i;

	if (step == 'f')
	{
		print_row(x, 'o', '-', 'o');
		if (y != 1)
			rc_rush(x, y, 'm');
	}
	else if (step == 'm')
	{
		i = 0;
		while (i < y - 2)
		{
			print_row(x, '|', ' ', '|');
			i++;
		}
		rc_rush(x, y, 'e');
	}
	else
		print_row(x, 'o', '-', 'o');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		rc_rush(x, y, 'f');
	}
}
