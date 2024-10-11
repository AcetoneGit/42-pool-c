/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 04:03:34 by antoclem          #+#    #+#             */
/*   Updated: 2024/10/04 04:15:32 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;
	unsigned int	res_2;

	i = ft_strlen(dest);
	j = 0;
	res = ft_strlen(dest);
	res_2 = ft_strlen(src);
	if (size < 1)
		return (res_2 + size);
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (size < res)
		return (res_2 + size);
	else
		return (res + res_2);
}
/*
int	main(void)

{
	char	dest[50] = "000000000000000000000000";
	char	src[50] = "abcdefgh";
	unsigned int	size;

	printf("%u\n", ft_strlcat(dest, src, size));
	return (0);
}*/
