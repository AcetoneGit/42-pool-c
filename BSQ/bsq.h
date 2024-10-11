/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 16:27:30 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 17:56:39 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	find_largest_square(char **grid, int rows, int cols);
void	find_max_square(int **dp, int rows, int cols, int *max_info);
void	free_dp(int **dp, int rows);
void	free_grid(char **grid, int rows);
void	get_2nd_line(int fd);
int		get_min_val(int **dp, int i, int j);
int		get_nb_columns(char *argv);
int		get_nb_lines(char *argv);
void	init_first_row_col(char **grid, int **dp, int i, int j);
int		**initialize_dp(int rows, int cols);
int		main(int argc, char **argv);
void	mark_square(char **grid, int max_row, int max_col, int size);
void	print_grid(char **grid, int rows, int cols);
char	**read_file(char *argv, int *rows, int *cols);
int		size_file(char *argv);
void	update_cell(char **grid, int **dp, int i, int j);
void	update_dp(char **grid, int rows, int cols, int **dp);

#endif