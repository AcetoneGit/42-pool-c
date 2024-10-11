/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bis.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:20:09 by shannouf          #+#    #+#             */
/*   Updated: 2024/09/22 18:54:10 by shannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_visible_lcol(int **tab, int *nbs, int col, int n)
{
	int	i;
	int	j;
	int	max_visible;
	int	visible;

	i = n - 1;
	j = 0;
	visible = 0;
	max_visible = 0;
	while (i >= 0)
	{
		if (tab[i][col] > max_visible)
		{
			max_visible = tab[i][col];
			visible++;
		}
		i--;
	}
	if (visible != nbs[n + col])
		return (0);
	return (1);
}

int	ft_is_visible_lrow(int **tab, int *nbs, int row, int n)
{
	int	i;
	int	j;
	int	max_visible;
	int	visible;

	i = n - 1;
	j = 0;
	visible = 0;
	max_visible = 0;
	while (i >= 0)
	{
		if (tab[row][i] > max_visible)
		{
			max_visible = tab[row][i];
			visible++;
		}
		i--;
	}
	if (visible != nbs[(n * 3) + row])
		return (0);
	return (1);
}

int	ft_is_visible_row(int **tab, int *nbs, int row, int n)
{
	int	i;
	int	j;
	int	max_visible;
	int	visible;

	i = 0;
	j = 0;
	visible = 0;
	max_visible = 0;
	while (i < n)
	{
		if (tab[row][i] > max_visible)
		{
			max_visible = tab[row][i];
			visible++;
		}
		i++;
	}
	if (visible != nbs[row + (n * 2)])
		return (0);
	return (1);
}

int	ft_is_visible_col(int **tab, int *nbs, int col, int n)
{
	int	i;
	int	j;
	int	max_visible;
	int	visible;

	i = 0;
	j = 0;
	visible = 0;
	max_visible = 0;
	while (i < n)
	{
		if (tab[i][col] > max_visible)
		{
			max_visible = tab[i][col];
			visible++;
		}
		i++;
	}
	if (visible != nbs[col])
		return (0);
	return (1);
}
