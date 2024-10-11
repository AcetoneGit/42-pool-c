/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_cell.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:48:07 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 17:48:24 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	update_cell(char **grid, int **dp, int i, int j)
{
	int	min_val;

	if (grid[i][j] == '.')
	{
		min_val = get_min_val(dp, i, j);
		dp[i][j] = 1 + min_val;
	}
	else
	{
		dp[i][j] = 0;
	}
}
