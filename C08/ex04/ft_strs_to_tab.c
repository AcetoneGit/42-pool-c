/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 08:44:46 by antoclem          #+#    #+#             */
/*   Updated: 2024/10/03 20:50:02 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	t_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(t_stock_str) * (argc + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		tab[i].size = ft_strlen(argv[i]);
		tab[i].str = argv[i];
		tab[i].copy = ft_strdup(argv[i]);
		i += 1;
	}
	tab[i].str = 0;
	return (tab);
}
/*
int	main(void)
{
	char *strs[4];
	char *str1;
	char *str2;
	char *str3;
	char *str4;
	int size;

	str1 = "Hello";
	str2 = "how";
	str3 = "are";
	str4 = "you";
	size = 4;
	strs[0] = str1;
	strs[1] = str2;
	strs[2] = str3;
	strs[3] = str4;
}*/
