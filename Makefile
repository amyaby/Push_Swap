# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iabasala <iabasala@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 03:52:08 by iabasala          #+#    #+#              #
#    Updated: 2025/04/06 06:18:55 by iabasala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = dup_or_sorted.c edge_cases.c join_split_push.c utils1.c pars_push.c main_algo.c swapes.c sort_in_array.c pushes.c main.c rev_rotate.c lists_libft.c rotate.c sort_inf_six.c stack_op.c utils2.c
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