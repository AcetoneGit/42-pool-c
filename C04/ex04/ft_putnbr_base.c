/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:10:37 by antoclem          #+#    #+#             */
/*   Updated: 2024/10/02 10:47:13 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_base(int nbr, int base_len, char *base)
{
	int	nb;

	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= base_len)
		print_base(nb / base_len, base_len, base);
	ft_putchar(base[nb % base_len]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;
	int	i;
	int	j;

	i = 0;
	base_len = ft_strlen(base);
	while (base[i] && base_len > 1)
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return ;
		i++;
	}
	print_base(nbr, base_len, base);
}
/*
int	main(void)
{
	ft_putnbr_base(10, "0123456789abcdef");
}*/
