/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:04:00 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 20:06:40 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	size_file(char *argv)
{
	int		size;
	char	buffer;
	int		fd;

	size = 0;
	fd = open(argv, O_RDONLY);
	if (fd < 0)
	{
		exit(1);
	}
	while (read(fd, &buffer, 1) > 0)
	{
		size++;
	}
	close(fd);
	return (size);
}
