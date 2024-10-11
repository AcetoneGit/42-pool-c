/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:07:56 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/26 15:53:51 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*#include <stdio.h>*/

int	*ft_range(int min, int max)
{
	int	*range;
	int	*buff;

	if (min >= max)
	{
		return (0);
	}
	range = malloc(sizeof(min) * (max - min));
	buff = range;
	while (min < max)
	{
		*buff++ = min++;
	}
	return (range);
}
/*
int	main(void)
{
	int *tab;
	int i;
	i = 0;
	tab = ft_range(1, 10);
	while (i < 9)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/
