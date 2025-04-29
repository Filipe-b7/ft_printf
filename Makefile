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

LIBFT_DIR = ./libft
LIBFT_A = $(LIBFT_DIR)/libft.a

INCS = .
SRCS = ft_printf.c
OBJS = $(SRCS:.c = .o);

CC = cc 
CFLAGS = -Wall -Werror -Wextra -I$(INCS)

AR = ar -rcs

all : $(NAME)

$(NAME) : $(OBJS)
	@make -C $(LIBFT_DIR)
	$(AR) $(NAME) $(OBJS) $(LIBFT_A)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

		