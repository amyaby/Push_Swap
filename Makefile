# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iabasala <iabasala@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 03:52:08 by iabasala          #+#    #+#              #
#    Updated: 2025/03/21 14:33:59 by iabasala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = dup_or_sorted.c edge_cases.c join_split_push.c utils.c pars_push.c main_algo.c swapes.c sort_in_array.c pushes.c main.c rev_rotate.c lists_libft.c rotate.c sort_inf_six.c stack_op.c check_algo.c
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror -g
NAME = push_swap
all: ${NAME}

${NAME}: ${OBJS}
	cc $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all