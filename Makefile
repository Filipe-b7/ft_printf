# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/29 13:29:57 by frocha-b          #+#    #+#              #
#    Updated: 2025/05/05 16:49:08 by frocha-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h
CC = gcc
SRCS = ft_printf.c \
		parsing.c \
		utils.c \
		utils_hex.c

OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Werror -Wextra -I.
AR = ar -rcs

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)	
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

		