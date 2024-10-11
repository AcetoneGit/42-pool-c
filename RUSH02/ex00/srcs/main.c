/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:44:17 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/29 22:07:19 by aghouaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

unsigned long long	ft_getdec(unsigned long long nb)
{
	if (nb >= 90)
		return (90);
	else if (nb >= 80)
		return (80);
	else if (nb >= 70)
		return (70);
	else if (nb >= 60)
		return (60);
	else if (nb >= 50)
		return (50);
	else if (nb >= 40)
		return (40);
	else if (nb >= 30)
		return (30);
	else if (nb >= 20)
		return (20);
	else if (nb <= 20)
		return (nb);
	else
		return (0);
}

unsigned long long int	ft_getmulti(unsigned long long int nb)
{
	if (nb >= 1000000000000000)
		return (1000000000000000);
	else if (nb >= 1000000000000)
		return (1000000000000);
	else if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (ft_getdec(nb));
}

void	ft_print(unsigned long long int n, t_list *tab, int *first)
{
	int						i;
	unsigned long long int	multi;

	i = 0;
	multi = ft_getmulti(n);
	if (multi >= 100)
		ft_print(n / multi, tab, first);
	if (*first == 0)
		write(1, " ", 1);
	*first = 0;
	while (tab[i].nb != multi)
		i++;
	ft_putstr(tab[i].value);
	if (multi != 0 && n % multi != 0)
		ft_print(n % multi, tab, first);
}

int	main(int argc, char **argv)
{
	t_list	*tab;
	int		*first;
	int		first_address;
	int		i_nb;

	i_nb = check_error(argc, argv);
	if (i_nb == -1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	first_address = 1;
	first = &first_address;
	tab = process("numbers.dict");
	ft_print(ft_str_to_ull(argv[i_nb]), tab, first);
	free(tab);
	return (0);
}
