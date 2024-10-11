/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antoclem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 05:52:50 by antoclem          #+#    #+#             */
/*   Updated: 2024/09/29 22:41:40 by aghouaib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H

# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_list
{
	unsigned long long int		nb;
	char						*value;
}		t_list;

int							is_dict(char *str);
int							check_str(char *str);
int							check_error(int argc, char **argv);
char						*ft_getnb(int a);
char						*ft_getvalue(int a, char *c);
unsigned long long int		ft_getdec(unsigned long long nb);
unsigned long long int		ft_getmulti(unsigned long long nb);
char						*ft_strdup(char *src);
char						*ft_strcpy(char *dest, char *src);
int							ft_atoi(char *str);
int							ft_strlen(char *str);
int							ft_checkget(char *str);
int							ft_checkprocess(t_list *lst, int f);
void						ft_putstr(char *str);
unsigned long long int		ft_str_to_ull(const char *str);

t_list						*process(char *file);

#endif
