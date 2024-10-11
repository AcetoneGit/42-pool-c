/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:04:48 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 13:35:30 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	mark_square(char **grid, int max_row, int max_col, int size)
{
	int	j;
	int	i;

	i = max_row;
	while (i > max_row - size)
	{
		j = max_col;
		while (j > max_col - size)
		{
			grid[i][j] = 'x';
			j--;
		}
		i--;
	}
}
