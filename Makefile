# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akazuki <akazuki@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 16:44:17 by akazuki           #+#    #+#              #
#    Updated: 2023/05/01 15:56:21 by akazuki          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_errorcheck.c		\
			ft_lstnew.c			\
			ft_split.c			\
			operation_p.c		\
			option.c			\
			sixsort.c			\
			utils.c				\
			ft_isdigit.c		\
			ft_press.c			\
			ft_strlcpy.c		\
			operation_r.c		\
			sixsort1.c			\
			ft_atoi.c			\
			ft_lstadd_back.c	\
			ft_push_swap.c		\
			ft_strlen.c			\
			operation_rr.c		\
			sort.c				\
			ft_contentin.c		\
			ft_lstlast.c		\
			ft_sortcheck.c		\
			ft_strncmp.c		\
			operation_s.c		\
			qsort.c				\
			sort1.c				\
			free.c				\
			ft_errorcheck1.c
OBJS	=	$(SRCS:.c=.o)

CC	=	cc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	push_swap

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean:	
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME) 

bonus:	$(NAME)

re:		fclean all

.PHONY:	all clean fclean re