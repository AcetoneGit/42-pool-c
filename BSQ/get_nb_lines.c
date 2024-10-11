/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nb_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:00:58 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 13:35:09 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_nb_lines(char *argv)
{
	int		i;
	int		nb;
	char	*buffer;
	int		fd;

	i = 0;
	nb = 0;
	fd = open(argv, O_RDONLY);
	buffer = malloc(100 * sizeof(char));
	if (!buffer)
	{
		return (0);
	}
	while (read(fd, &buffer[i], 1) > 0)
	{
		if (buffer[i] > '9' || buffer[i] < '0')
		{
			break ;
		}
		nb = nb * 10 + (buffer[i] - '0');
		i++;
	}
	free(buffer);
	close(fd);
	return (nb);
}
