/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: homokran <homokran@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:48:47 by homokran          #+#    #+#             */
/*   Updated: 2024/10/02 17:49:10 by homokran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_min_val(int **dp, int i, int j)
{
	int	min_val;

	min_val = dp[i - 1][j];
	if (dp[i][j - 1] < min_val)
	{
		min_val = dp[i][j - 1];
	}
	if (dp[i - 1][j - 1] < min_val)
	{
		min_val = dp[i - 1][j - 1];
	}
	return (min_val);
}
