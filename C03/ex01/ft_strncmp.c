/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 15:28:40 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/19 15:31:01 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && (i < n - 1) && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int     main(void)
{
        char    *s1;
        char    *s2;
        unsigned int o;

        s1 = "aaddefghij";
        s2 = "aacefghijk";
        o = 3;
        printf("%d\n", ft_strncmp(s1, s2, o));
        return (0);
}*/
