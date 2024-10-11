# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoclem <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 10:49:45 by antoclem          #+#    #+#              #
#    Updated: 2024/09/28 10:52:38 by antoclem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRCS = srcs/rush-02.c srcs/main.c srcs/utilities.c srcs/utilities_part_2.c

FLAGS = -Wall -Wextra -Werror
OBJS = $(SRCS:.c=.o)

RM = rm -f

all: ${NAME}

${NAME}:${OBJS}
	cc -o ${NAME} ${SRCS} -I./includes ${FLAGS}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean
