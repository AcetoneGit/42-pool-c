/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:02:44 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 13:35:36 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	print_grid(char **grid, int rows, int cols)
{
	int	i;

	i = 0;
	while (i < rows)
	{
		write(1, grid[i], cols);
		write(1, "\n", 1);
		i++;
	}
}
