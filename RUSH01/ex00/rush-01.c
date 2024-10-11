/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:26:50 by shannouf          #+#    #+#             */
/*   Updated: 2024/09/22 18:49:22 by shannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_a_digit(char c, int n)
{
	char	nb;

	nb = n + '0';
	if (!(c >= '1' && c <= nb))
		return (0);
	return (1);
}

int	ft_is_inrow(int **tab, int row, int nb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (tab[row][i] == nb)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_incol(int **tab, int col, int nb, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (tab[i][col] == nb)
			return (0);
		i++;
	}
	return (1);
}
