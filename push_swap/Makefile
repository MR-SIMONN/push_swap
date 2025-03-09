# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/14 22:24:40 by moel-hai          #+#    #+#              #
#    Updated: 2025/03/09 11:39:42 by moel-hai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= tools.c tools_one.c moves_one.c moves_two.c parsing.c push_swap.c large_numbers.c sorting.c ft_strlen.c ft_atoi.c \
		ft_isdigit.c ft_strdup.c ft_strjoin.c ft_split.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c

BSRCS	= bonus/checker.c bonus/ft_atoi_bonus.c bonus/ft_lstadd_back_bonus.c bonus/ft_lstlast_bonus.c bonus/ft_lstnew_bonus.c bonus/ft_isdigit_bonus.c \
		bonus/ft_lstsize_bonus.c bonus/ft_split_bonus.c bonus/ft_strcmp_bonus.c bonus/ft_strjoin_bonus.c bonus/moves_one_bonus.c bonus/moves_two_bonus.c \
		bonus/parsing_bonus.c bonus/tools_bonus.c bonus/get_next_line/get_next_line.c bonus/get_next_line/get_next_line_utils.c \
		bonus/moves_list_stuff_bonus.c bonus/ft_lstadd_front_bonus.c bonus/ft_strdup_bonus.c bonus/moves_three_bonus.c bonus/moves_management_bonus.c


NAME = push_swap

BONUS_NAME = checker

OBJS = $(SRCS:%.c=%.o)

BOBJS = $(BSRCS:%.c=%.o)

FLAGS = -Wall -Wextra -Werror

DEPS = push_swap.h
BONUS_DEPS = bonus/checker.h bonus/get_next_line/get_next_line.h

all: $(NAME)

bonus/%.o: bonus/%.c $(BONUS_DEPS)
	cc ${FLAGS} -c $< -o $@

%.o: %.c ${DEPS}
	cc ${FLAGS} -c $< -o $@

$(NAME) : $(OBJS)
	cc $^ ${FLAGS} -o $@

bonus: $(BONUS_NAME)

${BONUS_NAME} : $(BOBJS)
	cc $^ ${FLAGS} -o $@

clean:
	rm -f $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME) $(BONUS_NAME)

re: fclean all

.PHONY: clean

redo: bonus
	@make clean