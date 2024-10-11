/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabassi <eabassi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 14:54:19 by eabassi           #+#    #+#             */
/*   Updated: 2024/09/15 22:18:31 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <unistd.h>

void	ft_putchar(char c);
int		rush(int x, int y);

int	check_args(int ac, char **av)

{
	int	i;
	int	j;

	if (ac == 3 || ac == 1)
	{
		i = 1;
		while (av[i] != NULL)
		{
			j = 0;
			while (av[i][j] != '\0')
			{
				if (av[i][j] > 47 && av[i][j] < 58)
					j++;
				else
				{
					write(1, "Not a positive number.", 23);
					return (84);
				}
			}
			i++;
		}
	}
	return (0);
}

int	ft_atoi(const char *str)

{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || (str[i] == '+'))
	{
		i++;
	}
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main(int ac, char **av)

{
	int	x;
	int	y;

	if (av[1] == NULL || av[2] == NULL)
	{
		x = 5;
		y = 3;
	}
	else
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[2]);
	}
	if (check_args(ac, av) == 84)
		return (84);
	if (ac == 3 || ac == 1)
	{
		if (rush(x, y) == 84)
			return (84);
	}
	else
		return (84);
	return (0);
}
