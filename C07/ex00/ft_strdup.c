/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:35:04 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/26 14:22:21 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*#include <stdio.h>*/

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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc((ft_strlen(src) + 1));
	if (!dest)
		return (NULL);
	ft_strcpy(dest, src);
	return (dest);
}
/*
int	main(void)
{
	printf("%s\n", ft_strdup("ahlala"));
}*/
