/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:21:48 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/26 20:45:24 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] && s1[a] == s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ab";
	s2 = "ac";
	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}
