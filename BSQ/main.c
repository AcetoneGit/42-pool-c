/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:01:18 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 13:35:13 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	char	**grid;
	int		rows;
	int		cols;

	if (argc < 2)
	{
		write(2, "./bsq <file>\n", 20);
		exit(1);
	}
	grid = read_file(argv[1], &rows, &cols);
	find_largest_square(grid, rows, cols);
	print_grid(grid, rows, cols);
	free_grid(grid, rows);
	return (0);
}
