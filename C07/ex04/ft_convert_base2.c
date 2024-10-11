/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:44:25 by antoclem          #+#    #+#             */
/*   Updated: 2024/10/02 18:37:58 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(char c);

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_length_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	ft_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base_comp(char *str, char *base)
{
	long int	length_base;
	long int	nb;
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	nb = 0;
	length_base = ft_length_base(base);
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_in_base(str[i], base) != -1)
	{
		nb = nb * length_base + ft_in_base(str[i], base);
		i++;
	}
	return (nb * sign);
}

int	ft_atoi_base(char *str, char *base)
{
	unsigned int	nb;

	if (ft_check_base(base) == 0)
	{
		nb = ft_atoi_base_comp(str, base);
		return (nb);
	}
	else
		return (0);
}
