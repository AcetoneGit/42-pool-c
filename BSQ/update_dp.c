/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_dp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:47:10 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 17:47:45 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	update_dp(char **grid, int rows, int cols, int **dp)
{
	int	i;
	int	j;

	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
		{
			if (i == 0 || j == 0)
			{
				init_first_row_col(grid, dp, i, j);
			}
			else
			{
				update_cell(grid, dp, i, j);
			}
			j++;
		}
		i++;
	}
}
