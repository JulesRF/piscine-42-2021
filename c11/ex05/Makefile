# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/15 18:53:16 by jroux-fo          #+#    #+#              #
#    Updated: 2021/07/19 16:58:52 by jroux-fo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.c ft_atoi.c ft_error.c ft_moins.c ft_plus.c ft_putnbr.c ft_strcmp.c ft_division.c ft_modulo.c ft_mult.c ft_putchar.c ft_putstr.c ft_white.c

DEST	= ${SRCS:.c=.o}

HEAD	= ft.h

NAME	= do-op

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

.c.o:
	@${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

all: do-op

${NAME}: ${DEST}
	@${CC} ${CFLAGS} ${DEST} -o ${NAME}

clean:
	@rm -f ${DEST}

fclean: clean
	@rm -f ${NAME}

.PHONY: all clean fclean re
