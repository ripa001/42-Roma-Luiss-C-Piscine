/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divide_et_impera.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dripanuc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 21:02:47 by dripanuc          #+#    #+#             */
/*   Updated: 2021/12/12 21:02:50 by dripanuc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	alea_iacta_est(char *imperium, char *numerus, int index, int magnitudo)
{
	if (magnitudo < 3)
	{
		while (index < magnitudo)
		{	
			imperium[index] = '0';
			++index;
		}
		while (index != 3)
		{
			imperium[index] = numerus[index - magnitudo];
			++index;
		}
	}
	return (index);
}

void	fiat_pax(char *imperium, char *numerus, int index, int magnitudo)
{
	int	spatium;
	int	calculator;

	spatium = 0;
	if (magnitudo == 3)
		magnitudo = 0;
	while (index == 0 || numerus[index - magnitudo])
	{
		if (index > 0)
		{
			imperium[index + spatium] = ' ';
			++spatium;
		}
			calculator = 0;
		while (calculator < 3)
		{
			imperium[index + spatium] = numerus[index - magnitudo];
			++index;
			++calculator;
		}
	}
	imperium[index + spatium] = '\0';
}	

char	*divide_et_impera(char *numerus)
{
	char	*imperium;
	int		magnitudo;
	int		index;

	magnitudo = 0;
	while (numerus[magnitudo])
		++magnitudo;
	if (magnitudo % 3 == 0)
		imperium = (char *)malloc(sizeof(char)
				* magnitudo + (magnitudo / 3));
	else
		imperium = (char *)malloc(sizeof(char)
				* magnitudo + (magnitudo / 3) + (3 - (magnitudo % 3)) + 1);
	if (imperium == 0)
		return (0);
	magnitudo = 3 - (magnitudo % 3);
	index = 0;
	index = alea_iacta_est(imperium, numerus, index, magnitudo);
	fiat_pax(imperium, numerus, index, magnitudo);
	return (imperium);
}
