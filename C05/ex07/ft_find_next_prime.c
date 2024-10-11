/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 04:18:24 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/22 11:38:46 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 3)
		return (2);
	if (!(nb % 2))
		nb++;
	i = 3;
	while (i * i <= nb)
	{
		if (!(nb % i))
		{
			nb += 2;
			i = 1;
		}
		i += 2;
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%i\n", ft_find_next_prime(422));
}*/
