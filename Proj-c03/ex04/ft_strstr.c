/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 20:43:08 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/05 20:44:00 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	flag = 0;
	j = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i] != 0)
	{
		if (str[i] == to_find[j])
			j++;
		else if (to_find[j] == 0)
			return (&str[i - ft_strlen(to_find)]);
		else
			j = 0;
		i++;
	}
	if (j == ft_strlen(to_find))
		return (&str[i - ft_strlen(to_find)]);
	return (0);
}
