/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_largest_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:59:22 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 17:50:45 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	find_largest_square(char **grid, int rows, int cols)
{
	int	**dp;
	int	max_info[3];

	dp = initialize_dp(rows, cols);
	update_dp(grid, rows, cols, dp);
	find_max_square(dp, rows, cols, max_info);
	mark_square(grid, max_info[1], max_info[2], max_info[0]);
	free_dp(dp, rows);
}
