/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:20:35 by antoclem          #+#    #+#             */
/*   Updated: 2024/10/02 18:44:10 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_atoi_base(char *str, char *base);
int	ft_check_base(char *base);
int	ft_length_base(char *base);

int	ft_is_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

void	ft_base(long int nbr, char *base, char *str, int *i)
{
	long int	length_base;

	length_base = ft_length_base(base);
	if (nbr < 0)
	{
		str[(*i)++] = '-';
		nbr *= -1;
	}
	if (nbr / length_base > 0)
	{
		ft_base(nbr / length_base, base, str, i);
	}
	str[(*i)++] = base[nbr % length_base];
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long int	length_base;
	long int	nb;
	long int	length;
	int			i;
	char		*s;

	i = 0;
	nb = nbr;
	if (nbr < 0)
		length = 2;
	else
		length = 1;
	length_base = ft_length_base(base);
	while (nb != 0)
	{
		nb /= length_base;
		length++;
	}
	s = (char *)malloc((length + 1) * sizeof(char));
	if (!s)
		return (0);
	nb = nbr;
	ft_base(nb, base, s, &i);
	s[i] = '\0';
	return (s);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nb;
	char		*str;

	if ((ft_check_base(base_from) == 0) && (ft_check_base(base_to) == 0))
	{
		nb = ft_atoi_base(nbr, base_from);
		str = ft_putnbr_base(nb, base_to);
		return (str);
	}
	else
		return (0);
}
/*
int	main(int argc, char **argv)
{
	char	*nbr;
	char	*base_from;
	char	*base_to;
	char	*final_nb;

	(void) argc;
	nbr = argv[1];
	base_from = argv[2];
	base_to = argv[3];
	final_nb = ft_convert_base(nbr, base_from, base_to);
	printf("%s\n", final_nb);
	return (0);
}*/
