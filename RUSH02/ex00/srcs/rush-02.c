/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 00:52:21 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/29 19:31:35 by antoclem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*ft_getnb(int f)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 512);
	ft_checkget(str);
	i = 0;
	read(f, c, 1);
	while (c[0] == '\n')
		read(f, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read (f, c, 1);
		i++;
	}
	return (str);
}

char	*ft_getval(int f, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 512);
	ft_checkget(str);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(f, c, 1);
		i++;
	}
	return (str);
}

void	preprocess(t_list *lst, int f)
{
	char	c[1];
	char	*temp;
	int		i;

	i = 0;
	while (i < 32)
	{
		lst[i].nb = ft_atoi(ft_getnb(f));
		read (f, c, 1);
		while (c[0] == ' ')
			read (f, c, 1);
		if (c[0] == ':')
			read (f, c, 1);
		temp = ft_getval(f, c);
		lst[i].value = ft_strdup(temp);
		free (temp);
		i++;
	}
}

t_list	*process(char *file)
{
	t_list	*lst;
	int		f;

	lst = malloc(sizeof(t_list) * 512);
	f = open(file, O_RDONLY);
	ft_checkprocess(lst, f);
	preprocess(lst, f);
	close (f);
	return (lst);
}
