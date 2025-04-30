# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frocha-b <frocha-b@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/29 13:29:57 by frocha-b          #+#    #+#              #
#    Updated: 2025/04/29 13:29:57 by frocha-b         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCS = ft_printf.h
CC = cc 
SRCS = ft_printf.c \
		parsing.c \
		utils.c \
		utils_hex.c

OBJS = $(SRCS:.c = .o);
CFLAGS = -Wall -Werror -Wextra -I$(INCS)
AR = ar -rcs

all : $(NAME)

$(NAME) : $(OBJS) $(INCS)
	$(AR) $(NAME) $(OBJS) $(INCS)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

		