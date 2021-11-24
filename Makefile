# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 14:18:22 by jwilliam          #+#    #+#              #
#    Updated: 2021/10/21 15:13:04 by jwilliam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

RM = rm -f

FILES = srcs/ft_printf.c \
			srcs/ft_printf_char.c \
			srcs/ft_printf_hex.c \
			srcs/ft_printf_int.c \
			srcs/ft_printf_uint.c \
			srcs/ft_printf_ptr.c \
			srcs/ft_printf_str.c \

OBJS = $(FILES:.c=.o)

.c.o:
	$(CC) -c $(FLAGS) -I includes $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(MAKE) bonus -C ./libft
		cp libft/libft.a $(NAME)
		ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS) $(BONUS_OBJS)

fclean:	clean
		$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re