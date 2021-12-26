/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:38:24 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/04 14:02:10 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int				continua;
	unsigned int	counter;

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
	return (dest);
}
