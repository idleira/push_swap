# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 13:07:42 by ibeliaie          #+#    #+#              #
#    Updated: 2023/07/28 13:04:04 by ibeliaie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#colours
GREEN = \033[0;92;1m
YELLOW = \033[0;33;1m
PINK = \033[0;95;1m
BLUE = \033[0;94;1m
DEF_COLOR = \033[0;37m


NAME = push_swap

CC = @gcc
CFLAGS = -Wall -Wextra -Werror -I ./inc
RM = @rm -rf
#-fsanitize=address

SRC =	src/push.c src/swap.c src/rotate.c src/reverse_rotate.c		\
		src/sort.c src/sort_3.c src/cost.c src/move.c src/main.c	\
		src/position.c src/initialize.c src/stack_manipulations.c	\
		src/check_input.c src/check_input_util.c src/util.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "$(DEF_COLOR)   	 ( \   / ) \n \
  	$(DEF_COLOR) (˶ ˘ ᵕ ˘ )	💬 $(PINK)" push_swap compiled successfully ☆" \n \
	$(DEF_COLOR)	c( っ    っ\n $(DEF_COLOR)"

clean:
	$(RM) $(OBJ)
	@echo "$(YELLOW)			💬 " object files removed ☆"  $(DEF_COLOR)"

fclean: clean
	$(RM) -f $(NAME)
	@echo "$(GREEN)			💬 " everything cleaned ☆" $(DEF_COLOR)"
	
re: fclean all

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re