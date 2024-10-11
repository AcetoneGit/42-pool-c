/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 02:14:18 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/22 16:07:58 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

void	solution(char *tab, int x, int *max)
{
	int	i;
	int	j;

	if (x == 10)
	{
		x = 0;
		while (x < 10)
			ft_putchar(tab[x++] + '0');
		write(1, "\n", 1);
		(*max)++;
		return ;
	}
	i = -1;
	while (++i < 10)
	{
		j = 0;
		while (j < x && i != tab[j] && check(tab[j] - i) != x - j)
			j++;
		if (j >= x)
		{
			tab[x] = i;
			solution(tab, x + 1, max);
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	tab[10];
	int		max;

	max = 0;
	solution(tab, 0, &max);
	return (max);
}
/*
int	main(void)
{
	ft_ten_queens_puzzle();
}*/
