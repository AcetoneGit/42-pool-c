/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:33:01 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/12 14:38:38 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

/*int	main(void)
{
	int	*a;

	*a = "bonjour";
	printf("%ld\n", ft_strlen(a));
	printf("%ld\n", strlen(a));
	return (0);
}*/
