# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjusdado <mjusdado@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/07 13:26:05 by mjusdado          #+#    #+#              #
#    Updated: 2026/10/28 16:02:28 by mjusdado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIBFT 		= ./libft/libft.a
LIBFTPRINTF	= ./Library/printf.h

CC			= cc
CFLAGS		= -Wall -Wextra -Werror
INCLUDE     = -I./Library -I./libft

SRCS = ft_print_hexupper.c \
ft_print_nbr.c \
ft_print_pchar.c \
ft_print_pstr.c \
ft_print_ptr.c \
ft_print_wsnbr.c \
ft_printf.c

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): ${LIBFT} $(OBJS)
	cp $(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(LIBFT):
	make -C libft

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	make clean -C libft
	rm -f $(OBJS)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re