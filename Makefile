# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdelfa-m <cdelfa-m@student.42Bareclon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/14 19:11:01 by cdelfa-m          #+#    #+#              #
#    Updated: 2024/09/14 19:13:47 by cdelfa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_tolower.c ft_bzero.c ft_memchr.c ft_putnbr_fd.c ft_strlen.c ft_toupper.c ft_isalnum.c ft_memcmp.c ft_putstr_fd.c	ft_strmapi.c ft_isalpha.c ft_memcpy.c ft_split.c ft_strnstr.c ft_isascii.c ft_memmove.c ft_strchr.c ft_strrchr.c ft_isdigit.c ft_memset.c ft_strdup.c ft_strtrim.c ft_isprint.c ft_putchar_fd.c ft_striter.c ft_substr.c
HEADER = libft.h
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS) $(HEADER)
	@ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER) Makefile
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY all clean fclean re
