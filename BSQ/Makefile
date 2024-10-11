# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: homokran <homokran@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/28 13:09:13 by homokran          #+#    #+#              #
#    Updated: 2024/10/02 17:53:58 by homokran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = find_largest_square.c free_dp.c get_2nd_line.c get_nb_columns.c init_first_row_col.c \
	main.c print_grid.c size_file.c update_dp.c find_max_square.c free_grid.c get_min_val.c \
	get_nb_lines.c initialize_dp.c mark_square.c read_file.c update_cell.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) bsq.h
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
