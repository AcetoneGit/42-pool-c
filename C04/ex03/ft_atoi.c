/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:59:47 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/18 12:38:20 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	n;
	int	neg;

	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	neg = 0;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			neg = 1 - neg;
	n = 0;
	while (*str >= '0' && *str <= '9')
		n = n * 10 + *str++ - '0';
	if (neg)
		n *= -1;
	return (n);
}
/*
int	main(void)
{
	char	*nb;

	nb = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(nb));
	return (0);
}*/
