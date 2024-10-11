/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:49:08 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/18 07:24:54 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= ' ' && str[i] <= '~')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_printable(""));
	return (0);
}*/
