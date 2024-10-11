/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 04:44:49 by antoclem          #+#    #+#             */
/*   Updated: 2024/10/04 05:50:14 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_put(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
		++i;
	return (s1[i] - s2[i]);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 0;
	while (++i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i +1] = temp;
			i = 0;
		}
	}
	i = 0;
	while (++i < argc)
		ft_put(argv[i]);
	return (0);
}
