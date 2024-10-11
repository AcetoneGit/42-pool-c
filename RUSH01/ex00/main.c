/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:42:20 by shannouf          #+#    #+#             */
/*   Updated: 2024/09/22 20:36:03 by mbenhabi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void	ft_free(int **tab, int n);
void	ft_print_tab(int **tab, int n);
void	ft_create_tab(int **tab, int n);
int		ft_is_inrow(int **tab, int row, int nb, int n);
int		ft_is_incol(int **tab, int col, int nb, int n);
int		ft_is_a_digit(char c, int n);
int		ft_check_w(char c);
int		ft_is_visible_col(int **tab, int *nbs, int col, int n);
int		ft_is_visible_lcol(int **tab, int *nbs, int col, int n);
int		ft_is_visible_row(int **tab, int *nbs, int row, int n);
int		ft_is_visible_lrow(int **tab, int *nbs, int row, int n);

int	ft_get_nbs(char *str, int *nbs, int n)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (str[++i] != '\0')
	{
		if (ft_is_a_digit(str[i], n))
		{
			if (ft_is_a_digit(str[i - 1], n) || ft_is_a_digit(str[i + 1], n))
				return (0);
			nbs[j] = str[i] - '0';
			j++;
		}
		else if (str[i] == ' ')
		{
			if (ft_check_w(str[i - 1] || ft_check_w(str[i + 1])))
				return (0);
		}
		else
			return (0);
	}
	if (j != (n * 4))
		return (0);
	return (1);
}

int	ft_is_visible(int **tab, int *nbs, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (!ft_is_visible_col(tab, nbs, i, n))
			return (0);
		if (!ft_is_visible_lcol(tab, nbs, i, n))
			return (0);
		if (!ft_is_visible_row(tab, nbs, i, n))
			return (0);
		if (!ft_is_visible_lrow(tab, nbs, i, n))
			return (0);
		i++;
	}
	return (1);
}

int	ft_add_skyscr(int **tab, int *nbs, int i, int n)
{
	int	row;
	int	col;
	int	nb;

	nb = 1;
	if (i == (n * n))
	{
		if (ft_is_visible(tab, nbs, n))
			return (1);
		return (0);
	}
	row = i / n;
	col = i % n;
	while (nb <= n)
	{
		if (ft_is_incol(tab, col, nb, n) && ft_is_inrow(tab, row, nb, n))
		{
			tab[row][col] = nb;
			if (ft_add_skyscr(tab, nbs, i + 1, n))
				return (1);
			tab[row][col] = 0;
		}
		nb++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	**tab;
	int	*nbs;
	int	n;

	n = 4;
	if (argc != 2)
	{
		write(1, "Error: invalid numbers of arguments\n", 36);
		return (0);
	}
	nbs = (int *)malloc((n * n) * sizeof(int));
	if (!ft_get_nbs(argv[1], nbs, n))
	{
		write(1, "Error: string is not the valid\n", 31);
		return (0);
	}
	tab = (int **)malloc(n * sizeof(int *));
	ft_create_tab(tab, n);
	if (ft_add_skyscr(tab, nbs, 0, n))
		ft_print_tab(tab, n);
	else
		write(1, "Error\n", 6);
	ft_free(tab, n);
	free(nbs);
	return (0);
}
