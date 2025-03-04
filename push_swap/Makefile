# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 22:24:40 by moel-hai          #+#    #+#              #
#    Updated: 2025/03/04 00:34:23 by moel-hai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SOURCES	= tools.c tools_one.c operations_one.c operations_two.c \
		parsing.c push_swap.c large_numbers.c sorting.c ft_strlen.c \
		ft_atoi.c ft_isdigit.c ft_strdup.c ft_strjoin.c \
		ft_split.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c

OBJECTS = $(SOURCES:%.c=%.o)

INCLUDES = push_swap.h libft.h

FLAGS = -Werror -Wextra -Wall

all: $(NAME)

%.o	: %.c $(INCLUDES)
	cc $(FLAGS) -c $<

$(NAME) : $(OBJECTS) push_swap.h
	@cc -o $(NAME) ${OBJECTS}

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean

redo: re
	@make clean