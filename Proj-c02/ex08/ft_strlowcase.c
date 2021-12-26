/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:50:27 by dripanuc          #+#    #+#             */
/*   Updated: 2021/11/30 11:09:49 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (is_uppercase(str[i]) == 1)
		{
			str[i] = str[i] - ('A' - 'a');
		}
		i++;
	}
	return (str);
}
