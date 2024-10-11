/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:39:57 by antoclem          #+#    #+#             */
/*   Updated: 2024/10/01 23:54:17 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size <= 0)
		return (len_src);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	ft_strlcpy(argv[1], argv[2], atoi(argv[3]));
	printf("%s\n%s\n", argv[1], argv[3]);
}*/
