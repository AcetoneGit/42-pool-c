/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities_part_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 07:04:44 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/29 22:53:13 by aghouaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_checkget(char *str)
{
	if (!(str))
		return (1);
	return (0);
}

int	ft_checkprocess(t_list *lst, int f)
{
	if (f == -1 || !(lst))
		return (1);
	return (0);
}

unsigned long long int	ft_str_to_ull(const char *str)
{
	unsigned long long int	result;
	int						digit;
	const char				*ptr;

	ptr = str;
	result = 0;
	while (*ptr && (*ptr >= '0' && *ptr <= '9'))
	{
		digit = *ptr - '0';
		result = result * 10 + digit;
		ptr++;
	}
	return (result);
}

int	check_error(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1 || argc > 3)
		return (-1);
	else if ((is_dict(argv[i]) == -1) && argc == 3)
		return (-1);
	while (i < argc)
	{
		if (ft_atoi(argv[i]) == -1 || ft_atoi(argv[i]) < 0 \
				|| is_dict(argv[i]) == 0)
		{
			i++;
		}
		else
		{
			return (i);
		}
	}
	return (-1);
}

int	is_dict(char *str)
{
	int		i;
	int		length;
	char	*dict;

	dict = ".dict";
	length = ft_strlen(str);
	i = 4;
	while (i != -1)
	{
		if (str[length - 1] != dict[i])
			return (-1);
		i--;
		length--;
	}
	return (0);
}
