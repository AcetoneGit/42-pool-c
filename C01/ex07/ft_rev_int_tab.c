/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:11:15 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/25 12:58:22 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <unistd.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	count;	

	count = 0;
	while (count < size / 2)
	{
		temp = tab[count];
		tab[count] = tab[size - (count + 1)];
		tab[size - (count + 1)] = temp;
		count++;
	}
}
/*
int	main(void)
{
	int	tab[] = {'1','2', '3', '4','5'};
	ft_rev_int_tab(tab, 5);
	write(1, tab, 20);
}*/
