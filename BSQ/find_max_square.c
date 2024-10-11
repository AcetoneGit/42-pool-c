/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_square.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:46:35 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 17:50:55 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	find_max_square(int **dp, int rows, int cols, int *max_info)
{
	int	i;
	int	j;

	i = 0;
	max_info[0] = 0;
	max_info[1] = 0;
	max_info[2] = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (dp[i][j] > max_info[0])
			{
				max_info[0] = dp[i][j];
				max_info[1] = i;
				max_info[2] = j;
			}
			j++;
		}
		i++;
	}
}
