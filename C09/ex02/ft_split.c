/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 18:07:06 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/30 18:14:04 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/
/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_find(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdupup(char *src, int n)
{
	int		i;
	char	*dest;

	dest = malloc(n + 1);
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**buff;
	int		start;
	int		end;
	int		length;
	int		i;

	length = ft_strlen(str);
	buff = malloc(sizeof(char *) * (length + 1));
	start = 0;
	end = 0;
	i = 0;
	while (end <= length)
	{
		if (str[end] == 0 || ft_find(charset, str[end]))
		{
			if (end > start)
				buff[i++] = ft_strdupup(str + start, end - start);
			start = end + 1;
		}
		end += 1;
	}
	buff[i] = NULL;
	return (buff);
}
/*
   int     main(int argc, char **argv)
   {
   int     i;
   char    **split;

   if (argc != 3)
   return (0);
   split = ft_split(argv[1], argv[2]);
   while (split[i])
   {
   printf("%s\n", split[i]);
   i++;
   }
   return (0);
   }
   */
