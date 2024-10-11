/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_dp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:50:17 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 20:06:49 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	**initialize_dp(int rows, int cols)
{
	int	**dp;
	int	i;

	dp = malloc(rows * sizeof(int *));
	if (!dp)
	{
		exit(1);
	}
	i = 0;
	while (i < rows)
	{
		dp[i] = malloc(cols * sizeof(int));
		if (!dp[i])
		{
			exit(1);
		}
		i++;
	}
	return (dp);
}
