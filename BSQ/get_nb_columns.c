/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nb_columns.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:00:48 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 13:35:04 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_nb_columns(char *argv)
{
	int		j;
	char	buffer;
	int		fd;

	j = 0;
	fd = open(argv, O_RDONLY);
	get_2nd_line(fd);
	while (read(fd, &buffer, 1) > 0)
	{
		if (buffer == '\n')
		{
			break ;
		}
		j++;
	}
	close(fd);
	return (j);
}
