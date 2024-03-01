# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibeliaie <ibeliaie@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 13:07:42 by ibeliaie          #+#    #+#              #
#    Updated: 2024/03/01 16:00:53 by ibeliaie         ###   ########.fr        #
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

LIBFT_DIR =	./libft
LIBFT =	$(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -sC ./libft
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LIBFT)
	@echo "$(DEF_COLOR)   	 ( \   / ) \n \
  	$(DEF_COLOR) (˶ ˘ ᵕ ˘ )	💬 $(PINK)" push_swap compiled successfully ☆" \n \
	$(DEF_COLOR)	c( っ    っ\n $(DEF_COLOR)"

clean:
	$(RM) $(OBJ) $(LIBFT_DIR)/*.o
	@echo "$(YELLOW)			💬 " object files removed ☆"  $(DEF_COLOR)"

fclean: clean
	$(RM) -f $(NAME) $(LIBFT_DIR)/*.o libft/libft.a
	@echo "$(GREEN)			💬 " everything cleaned ☆" $(DEF_COLOR)"
	
re: fclean all

$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: all clean fclean re