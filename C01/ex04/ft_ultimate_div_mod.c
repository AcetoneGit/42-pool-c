/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:24:11 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/12 14:19:38 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int	main(void)
{
	int	*a;
	int	*b;

	*a = 42;
	*b = 24;
	ft_ultimate_div_mod(*a, *b);
	printf("*a, *b");
	return (0);
}*/
