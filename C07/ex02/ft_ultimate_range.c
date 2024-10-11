/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 20:14:55 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/26 15:54:07 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/
#include <stdlib.h>

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

int	ft_ultimate_range(int **range, int min, int max)
{
	*range = ft_range(min, max);
	if (min >= max)
	{
		return (0);
	}
	if (!*range)
	{
		return (-1);
	}
	return (max - min);
}
/*
int     main(void)
{
        int	*tab;
	int	i;
	int	j;
	tab = ft_range(10, 20);
        i = 0;
	j = ft_ultimate_range(&tab, 10, 20);
        while (i < j)
        {
                printf("%d\n", tab[i]);
                i++;    
        }
}
*/
