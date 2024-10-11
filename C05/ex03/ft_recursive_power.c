/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 21:44:52 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/20 23:36:08 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_recursive_power(int nb, int power)

{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
	{
		nb = nb * ft_recursive_power(nb, power - 1);
	}
	return (nb);
}
/*
int	main(void)
{
	printf("%i\n", ft_recursive_power(2, 6));
}*/
