/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 08:15:32 by antoclem          #+#    #+#             */
/*   Updated: 2024/10/02 08:26:02 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	error_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (base[i] == base[j] && i != j)
				return (0);
			j++;
		}
		if (base[i] == ' ' || (base[i] >= 9 && base[i] <= 13)
			|| base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

int	mini_atoi(char str, char *base)
{
	int	rt;
	int	i;

	rt = 0;
	i = 0;
	while (base[i])
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	temp;
	int	length;

	nb = 0;
	i = 0;
	length = error_base(base);
	if (length >= 2)
	{
		temp = mini_atoi(str[i], base);
		while (temp != -1)
		{
			nb = (nb * length) + temp;
			i++;
			temp = mini_atoi(str[i], base);
		}
		return (nb);
	}
	return (0);
}
/*
int     main(void)
{
        char    *string;
        char    *base;

        string = "100";
        base = "0123456789ABCDEF";
        printf("%d\n", ft_atoi_base(string, base));
}*/
