/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:33:10 by dripanuc          #+#    #+#             */
/*   Updated: 2021/11/29 20:32:55 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			flag = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			flag = 1;
		else
			return (0);
		i++;
	}
	return (flag);
}
