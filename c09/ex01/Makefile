#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jroux-fo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 10:29:51 by jroux-fo          #+#    #+#              #
#    Updated: 2021/07/15 17:51:53 by jroux-fo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c

DEST	= ${SRCS:.c=.o}

HEAD	= includes

LIB		= libft.a

.c.o:
	gcc -Wall -Wextra -Werror -c -I ${HEAD} $< -o ${<:.c=.o}

${LIB}: ${DEST}
		ar rc ${LIB} ${DEST}

all:	${LIB}
		
clean:		
		rm -f ${DEST}

fclean: 
		rm -f ${DEST} ${LIB}

re:		fclean all
