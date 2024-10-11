# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoclem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/25 21:54:27 by antoclem          #+#    #+#              #
#    Updated: 2024/09/26 20:44:07 by antoclem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a

SRCDIR = srcs
INCDIR = includes
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

RM = rm -f

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} $< -o $@ -I ${INCDIR}

${NAME}: ${OBJS}
	ar -rc $@ ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all re fclean clean
