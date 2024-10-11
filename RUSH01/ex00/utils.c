/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannouf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 09:27:05 by shannouf          #+#    #+#             */
/*   Updated: 2024/09/22 14:32:34 by shannouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_create_tab(int **tab, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		tab[i] = (int *)malloc(n * sizeof(int));
		i++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	ft_free(int **tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	ft_print_tab(int **tab, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar((tab[i][j] + '0'));
			if (j < (n - 1))
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_check_w(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}
