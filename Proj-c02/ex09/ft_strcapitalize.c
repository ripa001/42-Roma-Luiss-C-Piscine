/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:54:54 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/04 13:57:19 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_num(char c)
{
	if ((c < '0') || (c > '9'))
		return (0);
	else
		return (1);
}

int	is_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	if_is_lower(char c)
{
	if (is_upper(c) != 1)
		c = c + ('A' - 'a');
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != 0)
	{
		if (flag != 0 && is_alpha(str[i]) == 1)
		{
			str[i] = if_is_lower(str[i]);
			flag = 0;
		}
		else if (is_alpha(str[i]) != 0)
		{
			if (is_upper(str[i]) == 1)
				str[i] = str[i] - ('A' - 'a');
			flag = 0;
		}
		else if (is_num(str[i]) == 1)
			flag = 0;
		else
			flag = 1;
		i++;
	}
	return (str);
}
