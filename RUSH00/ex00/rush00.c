/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabassi <eabassi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:04:09 by eabassi           #+#    #+#             */
/*   Updated: 2024/09/14 20:04:26 by eabassi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);

void	print_firstline(int x)

{
	ft_putchar('o');
	while (x - 2 > 0)
	{
		ft_putchar('-');
		x--;
	}
	if (x > 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	print_lastline(int x, int y)

{
	if (y > 1)
	{
		ft_putchar('o');
		while (x - 2 > 0)
		{
			ft_putchar('-');
			x--;
		}
		if (x > 1)
			ft_putchar('o');
		ft_putchar('\n');
	}
}

int	check_values(int width, int height)

{
	if (width <= 0 || height <= 0)
	{
		return (84);
	}
	return (0);
}

int	rush(int width, int height)

{
	int	x;
	int	y;

	if (check_values(width, height) == 84)
		return (84);
	x = width;
	y = height;
	print_firstline(x);
	while (y - 2 > 0)
	{
		x = width;
		if (x > 1)
			ft_putchar('|');
		while (x - 2 > 0)
		{
			ft_putchar(' ');
			x--;
		}
		ft_putchar('|');
		ft_putchar('\n');
		y--;
	}
	x = width;
	print_lastline(x, y);
	return (0);
}
